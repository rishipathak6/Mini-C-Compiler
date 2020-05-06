%{    
# include "miniC.tab.h"
%}
%option noyywrap
%%
"int"                           { return INT; }
"float"                         { return FLOAT; }
"void"                          { return VOID; }
"if"                            { return IF; }
"else"                          { return ELSE; }
"case"                          { return CASE; }
"break"                         { return BREAK; }
"default"                       { return DEFAULT; }
"continue"                      { return CONTINUE; }
"while"                         { return WHILE; }
"for"                           { return FOR; }
"return"                        { return RETURN; }
"switch"                        { return SWITCH; }
"main"                          { return MAIN; }
"read"                          { return READ; }
"print"                         { return PRINT; }

"{"                             { return LCURLYB; }
"}"                             { return RCURLYB; }
";"                             { return SEMI; }
"<="                            { return LESSEQUAL; }
">="                            { return GREATEQUAL; }
"=="                            { return EQUAL; }
"!="                            { return NOTEQUAL; }
"<<"                            { return LSHIFT; }
">>"                            { return RSHIFT; }
"&&"                            { return AND; }
"||"                            { return OR; }
"+="                            { return PLUSASSIGNMENT; }
"-="                            { return MINASSIGNMENT; }
"*="                            { return MULASSIGNMENT; }
"%="                            { return MODASSIGNMENT; }
"/="                            { return DIVASSIGNMENT; }
"++"                            { return INCREMENT; }
"--"                            { return DECREMENT; }
":"                             { return COLON; }
"["                             { return LSQUAREB; }
"]"                             { return RSQUAREB; }
"("                             { return LPARE; }
")"                             { return RPARE; }
","                             { return COMMA; }
"="                             { return ASSIGN; }
"<"                             { return LESSTHAN; }
">"                             { return GREATTHAN; }
"!"                             { return NOT; }
"^"                             { return XOR; }
"&"                             { return BITAND; }
"|"                             { return BITOR; }
"+"                             { return PLUS; }
"-"                             { return MINUS; }
"/"                             { return DIV; }
"*"                             { return MUL; }
"%"                             { return MOD; }

[0-9]+\.[0-9]+                  { yylval.idName = (char *)malloc(100); memset(yylval.idName, 0, 100); memcpy(yylval.idName, yytext, yyleng); return DATAFLOAT; }
[0-9]+                          { yylval.idName = (char *)malloc(100); memset(yylval.idName, 0, 100); memcpy(yylval.idName, yytext, yyleng); return DATAINT; }
[a-zA-Z_][a-zA-Z_0-9]*          { yylval.idName = (char *)malloc(100); memset(yylval.idName, 0, 100); memcpy(yylval.idName, yytext, yyleng); return ID; }

\n                              { yylineno++;}
[ \t]                           {/* ignore whitespace */ }
%%