/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "miniC.y" /* yacc.c:339  */

#pragma GCC diagnostic ignored "-Wwrite-strings"
#include <iostream>
#include <vector>
#include <stack>
#include <stdio.h>
#include <algorithm>
#include <utility>
#include <fstream>
#include "funcTab.h"
#include "codegenHelpers.h"
using namespace std;
#define YYERROR_VERBOSE 1

extern int yylex();
extern int yyparse();
extern int yylineno;
extern char* yytext;
extern int yyleng;
void yyerror(const char* s);

int offsetValue;
string text;
eletype resultType;
vector<typeRecord*> typeRecordList;
stack<vector<typeRecord*> > parameterListStack;
typeRecord* variableRecord;
vector<int> decDimensionList;
vector<typeRecord*> globalVariables;

int nextNum;
vector<string> functionInstruction;
registerSet temporarySet;

vector<functionEntry*> functionEntryRecord;
functionEntry* activeFunctionPointer;
functionEntry* callFunctionPointer;
int scope;
int found;
bool errorFound;
int numberOfParameters;
string conditionVariable;
vector<string> switchVariable;
vector<functionEntry*> callFunctionPointerList;
vector<string> dimensionList;

vector<pair<string,int>> stringVariable;

#line 115 "miniC.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "miniC.tab.h".  */
#ifndef YY_YY_MINIC_TAB_H_INCLUDED
# define YY_YY_MINIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 50 "miniC.y" /* yacc.c:355  */

    #include "funcTab.h"
    #include "codegenHelpers.h"

#line 150 "miniC.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    VOID = 260,
    DATAFLOAT = 261,
    DATAINT = 262,
    ID = 263,
    NEWLINE = 264,
    READ = 265,
    PRINT = 266,
    COLON = 267,
    QUESTION = 268,
    DOT = 269,
    LCURLYB = 270,
    RCURLYB = 271,
    LSQUAREB = 272,
    RSQUAREB = 273,
    LPARE = 274,
    RPARE = 275,
    SEMI = 276,
    COMMA = 277,
    ASSIGN = 278,
    IF = 279,
    ELSE = 280,
    CASE = 281,
    BREAK = 282,
    DEFAULT = 283,
    CONTINUE = 284,
    WHILE = 285,
    FOR = 286,
    RETURN = 287,
    SWITCH = 288,
    MAIN = 289,
    LSHIFT = 290,
    RSHIFT = 291,
    PLUSASSIGNMENT = 292,
    MINASSIGNMENT = 293,
    MULASSIGNMENT = 294,
    MODASSIGNMENT = 295,
    DIVASSIGNMENT = 296,
    INCREMENT = 297,
    DECREMENT = 298,
    XOR = 299,
    BITAND = 300,
    BITOR = 301,
    PLUS = 302,
    MINUS = 303,
    DIV = 304,
    MUL = 305,
    MOD = 306,
    NOT = 307,
    AND = 308,
    OR = 309,
    LESSTHAN = 310,
    GREATTHAN = 311,
    LESSEQUAL = 312,
    GREATEQUAL = 313,
    EQUAL = 314,
    NOTEQUAL = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 55 "miniC.y" /* yacc.c:355  */

    int intValue;
    float floatValue;
    char *idName;
    int quad;

    struct expression expressionValue;
    struct statement statementValue;
    struct whileExpression whileExpressionValue;
    struct shortCircuit shortCircuitValue;
    struct switchCaser switchCaseValue;
    struct switchTemp switchTempValue;
    struct condition2temp conditionTemp;

#line 238 "miniC.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINIC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 255 "miniC.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   298

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    90,    93,    94,    95,    96,    99,   109,
     135,   145,   168,   175,   187,   188,   191,   203,   217,   228,
     237,   245,   257,   268,   274,   282,   288,   297,   303,   309,
     309,   319,   327,   335,   388,   413,   437,   445,   455,   458,
     471,   472,   475,   476,   479,   559,   662,   772,   776,   782,
     836,   837,   840,   855,   855,   872,   890,   928,   980,  1032,
    1084,  1136,  1190,  1200,  1227,  1237,  1245,  1245,  1265,  1265,
    1284,  1291,  1291,  1307,  1314,  1323,  1333,  1341,  1347,  1359,
    1359,  1384,  1393,  1400,  1405,  1412,  1420,  1433,  1433,  1451,
    1465,  1474,  1490,  1505,  1513,  1520,  1519,  1563,  1585,  1584,
    1618,  1629,  1638,  1647,  1665,  1683,  1701,  1719,  1738,  1756,
    1771,  1815,  1859,  1874,  1917,  1960,  1981,  1996,  2010,  2042,
    2050,  2057,  2064,  2071,  2084,  2091,  2115,  2139,  2163,  2189,
    2232,  2297,  2307
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "VOID", "DATAFLOAT",
  "DATAINT", "ID", "NEWLINE", "READ", "PRINT", "COLON", "QUESTION", "DOT",
  "LCURLYB", "RCURLYB", "LSQUAREB", "RSQUAREB", "LPARE", "RPARE", "SEMI",
  "COMMA", "ASSIGN", "IF", "ELSE", "CASE", "BREAK", "DEFAULT", "CONTINUE",
  "WHILE", "FOR", "RETURN", "SWITCH", "MAIN", "LSHIFT", "RSHIFT",
  "PLUSASSIGNMENT", "MINASSIGNMENT", "MULASSIGNMENT", "MODASSIGNMENT",
  "DIVASSIGNMENT", "INCREMENT", "DECREMENT", "XOR", "BITAND", "BITOR",
  "PLUS", "MINUS", "DIV", "MUL", "MOD", "NOT", "AND", "OR", "LESSTHAN",
  "GREATTHAN", "LESSEQUAL", "GREATEQUAL", "EQUAL", "NOTEQUAL", "$accept",
  "MAIN_PROG", "PROG", "MAINFUNCTION", "MAIN_HEAD", "FUNCTION_DEFINATION",
  "FUNC_HEAD", "RES_ID", "DECL_PLIST", "DECL_PL", "DECL_PARAM", "BODY",
  "STATEMENT_LIST", "STATEMENT", "$@1", "VARIABLE_DECLARATION", "D", "T",
  "L", "DEC_ID_ARR", "DEC_BR_DIMLIST", "FUNC_CALL", "PARAMLIST", "PLIST",
  "$@2", "ASSIGNMENT", "LHS", "SWITCHCASE", "TEMP1", "TEMP2", "CASELIST",
  "$@3", "$@4", "$@5", "M3", "N3", "P3", "Q3", "Q4", "FORLOOP", "FOREXP",
  "$@6", "ASSIGNMENT1", "M1", "M2", "IFSTMT", "$@7", "IFEXP", "WHILESTMT",
  "WHILEEXP", "TP1", "CONDITION1", "$@8", "CONDITION2", "$@9", "EXPR1",
  "EXPR21", "EXPR2", "TERM", "FACTOR", "ID_ARR", "BR_DIMLIST", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -229

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-229)))

#define YYTABLE_NINF -95

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,   -32,  -229,    43,     5,    83,  -229,    44,  -229,    48,
      92,  -229,   124,   148,   139,  -229,  -229,  -229,  -229,  -229,
     246,   246,   116,  -229,    21,   137,  -229,   140,   147,  -229,
    -229,  -229,    20,   153,   153,  -229,    12,    13,   150,   151,
      14,    15,    12,   154,   153,   153,    85,   109,   158,    42,
    -229,  -229,   161,  -229,   157,   -11,  -229,  -229,  -229,  -229,
     160,  -229,   164,   126,   128,  -229,  -229,   107,    46,  -229,
      95,   166,   163,   162,  -229,   177,   179,    12,   170,   161,
    -229,  -229,    12,   168,   172,   173,   171,   175,   246,   174,
     178,    12,  -229,  -229,   180,   182,   183,    12,  -229,   176,
      12,  -229,  -229,  -229,  -229,  -229,  -229,   101,  -229,  -229,
      66,  -229,    12,    12,    12,    12,    12,    12,   184,   246,
     246,  -229,  -229,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,  -229,  -229,  -229,  -229,   116,  -229,
     187,  -229,   186,  -229,   198,   197,   169,    12,    12,  -229,
    -229,   204,  -229,  -229,   205,  -229,    12,  -229,   181,  -229,
     206,  -229,  -229,  -229,  -229,  -229,  -229,   246,   207,   208,
     185,   188,    46,    46,   100,   100,   100,   100,   100,   100,
    -229,  -229,  -229,  -229,  -229,   210,  -229,  -229,    12,  -229,
     219,  -229,  -229,   218,  -229,  -229,   224,   217,  -229,    12,
      12,  -229,  -229,  -229,  -229,    12,   228,  -229,  -229,   128,
    -229,  -229,   114,   223,  -229,    28,   232,   242,  -229,  -229,
    -229,   252,  -229,  -229,   245,   243,  -229,  -229,  -229,   246,
      12,   251,  -229,   246,   250,  -229,   203,   255,  -229,  -229,
     248,   114,   203,  -229,  -229,   114,  -229
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    40,    41,     0,     0,     0,     3,     0,     6,     0,
       0,     7,     0,     0,     0,    13,     1,     2,     4,     5,
       0,     0,    15,    38,    44,    39,    42,     0,    37,    40,
     122,   120,   129,     0,     0,    29,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      22,    23,     0,   123,     0,     0,    28,    25,    77,    26,
       0,    27,     0,    55,    97,   100,   102,   109,   112,   116,
     117,     0,     0,    14,    17,     0,     0,     0,    46,     0,
       9,    36,     0,    53,   130,   129,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    83,    82,     0,
       0,   127,   128,   121,   119,   118,   101,   117,     8,    21,
      44,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   126,    10,    11,     0,    18,
       0,    45,     0,    43,     0,     0,    50,     0,     0,    34,
      35,     0,   124,    90,     0,    93,     0,    81,     0,    33,
       0,    56,    57,    58,    59,    61,    60,     0,     0,     0,
       0,     0,   110,   111,   105,   106,   107,   108,   103,   104,
     114,   113,   115,    16,    47,     0,   131,    49,     0,    54,
       0,    30,    89,     0,    73,    64,     0,    86,    91,     0,
       0,    48,    52,   132,    92,    83,     0,    78,    85,    96,
      99,    76,    70,     0,    79,     0,     0,     0,    84,    75,
      65,     0,    65,    63,     0,     0,    68,    65,    71,     0,
      83,     0,    66,     0,     0,    74,     0,     0,    72,    88,
       0,    70,     0,    80,    69,    70,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,  -229,  -229,   264,  -229,   266,  -229,  -229,  -229,  -229,
     134,   -21,  -229,   225,  -229,     4,  -229,     3,  -229,   201,
    -229,  -229,  -229,  -229,  -229,   -35,  -229,  -229,  -229,  -186,
    -228,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,   -91,    63,  -229,  -229,  -229,  -229,  -229,  -229,
     220,  -229,  -229,    86,  -229,    82,   237,    -3,    26,    -2,
     -23,  -229
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    10,    72,    73,
      74,    48,    49,    50,    88,    51,    12,    52,    25,    26,
      78,    53,   145,   146,   147,    54,    55,    56,   206,   226,
     217,   237,   231,   233,   205,   240,   225,   214,   118,    57,
      58,   219,    99,    95,   213,    59,   208,    60,    61,    62,
     122,    63,   170,    64,   171,    65,    66,    67,    68,    69,
      70,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    89,    14,    13,    11,    16,   158,    98,    13,    19,
      86,    87,   112,   244,    90,    94,    96,   246,    30,    31,
      32,   101,   102,   105,   107,    75,   113,   114,   115,   116,
     117,    36,    91,   -84,    97,   220,   228,    82,    76,    83,
     -12,   232,   141,    28,    77,    29,     2,   144,    30,    31,
      32,    15,    33,    34,    44,    45,   154,    35,   -19,    20,
      46,    36,    98,    21,    47,   160,    37,   151,   -19,    38,
     -19,    39,    40,    41,    42,    43,   221,   161,   162,   163,
     164,   165,   166,    76,    44,    45,     1,     2,     3,    77,
      46,   103,   104,    85,    47,   131,   132,   133,   168,   169,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,    22,   189,   190,   211,    30,    31,    32,   -62,    29,
       2,   193,   174,   175,   176,   177,   178,   179,    36,   180,
     181,   182,   -62,   -62,   -62,   -62,   -62,   134,   135,   235,
     215,    75,   216,   134,   135,    23,   196,   123,   124,   172,
     173,    44,    45,   202,   123,   124,    24,    46,    27,    79,
      80,    85,   125,   126,   127,   128,   129,   130,    81,   110,
      98,    92,    93,   100,   108,   119,   107,   107,   111,   120,
     -94,   -94,   136,   137,   138,   139,   140,   142,   -51,   148,
      82,   188,   149,   185,   152,    98,   150,   159,   153,   167,
     155,   156,   194,   157,    28,   184,    29,     2,   234,    30,
      31,    32,   238,    33,    34,   241,   186,   187,    35,   -20,
     191,   245,    36,   197,   198,   192,   195,    37,   201,   -20,
      38,   -20,    39,    40,    41,    42,    43,   203,   204,   199,
     207,   200,   -87,   212,   222,    44,    45,    28,   218,    29,
       2,    46,    30,    31,    32,    47,    33,    34,   223,   227,
     229,    35,   -20,   236,   230,    36,   239,   242,   243,    17,
      37,    18,   183,    38,   109,    39,    40,    41,    42,    43,
     143,   224,   210,   121,   106,   209,     0,     0,    44,    45,
       0,     0,     0,     0,    46,     0,     0,     0,    47
};

static const yytype_int16 yycheck[] =
{
      21,    36,    34,     0,     0,     0,    97,    42,     5,     5,
      33,    34,    23,   241,     1,     1,     1,   245,     6,     7,
       8,    44,    45,    46,    47,    22,    37,    38,    39,    40,
      41,    19,    19,    19,    19,     7,   222,    17,    17,    19,
      19,   227,    77,     1,    23,     3,     4,    82,     6,     7,
       8,     8,    10,    11,    42,    43,    91,    15,    16,    15,
      48,    19,    97,    15,    52,   100,    24,    88,    26,    27,
      28,    29,    30,    31,    32,    33,    48,   112,   113,   114,
     115,   116,   117,    17,    42,    43,     3,     4,     5,    23,
      48,     6,     7,     8,    52,    49,    50,    51,   119,   120,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    19,   147,   148,   205,     6,     7,     8,    23,     3,
       4,   156,   125,   126,   127,   128,   129,   130,    19,   131,
     132,   133,    37,    38,    39,    40,    41,    42,    43,   230,
      26,   138,    28,    42,    43,    21,   167,    47,    48,   123,
     124,    42,    43,   188,    47,    48,     8,    48,    19,    22,
      20,     8,    55,    56,    57,    58,    59,    60,    21,     8,
     205,    21,    21,    19,    16,    15,   199,   200,    21,    15,
      54,    53,    16,    20,    22,     8,     7,    17,    20,    17,
      17,    22,    21,     7,    20,   230,    21,    21,    20,    15,
      20,    19,    21,    20,     1,    18,     3,     4,   229,     6,
       7,     8,   233,    10,    11,   236,    18,    20,    15,    16,
      16,   242,    19,    16,    16,    20,    20,    24,    18,    26,
      27,    28,    29,    30,    31,    32,    33,    18,    20,    54,
      16,    53,    25,    15,    12,    42,    43,     1,    25,     3,
       4,    48,     6,     7,     8,    52,    10,    11,    16,     7,
      15,    15,    16,    12,    21,    19,    16,    12,    20,     5,
      24,     5,   138,    27,    49,    29,    30,    31,    32,    33,
      79,   218,   200,    63,    47,   199,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    62,    63,    64,    65,    66,    67,
      68,    76,    77,    78,    34,     8,     0,    64,    66,    76,
      15,    15,    19,    21,     8,    79,    80,    19,     1,     3,
       6,     7,     8,    10,    11,    15,    19,    24,    27,    29,
      30,    31,    32,    33,    42,    43,    48,    52,    72,    73,
      74,    76,    78,    82,    86,    87,    88,   100,   101,   106,
     108,   109,   110,   112,   114,   116,   117,   118,   119,   120,
     121,    72,    69,    70,    71,    78,    17,    23,    81,    22,
      20,    21,    17,    19,   122,     8,   121,   121,    75,    86,
       1,    19,    21,    21,     1,   104,     1,    19,    86,   103,
      19,   121,   121,     6,     7,   121,   117,   121,    16,    74,
       8,    21,    23,    37,    38,    39,    40,    41,    99,    15,
      15,   111,   111,    47,    48,    55,    56,    57,    58,    59,
      60,    49,    50,    51,    42,    43,    16,    20,    22,     8,
       7,    86,    17,    80,    86,    83,    84,    85,    17,    21,
      21,    72,    20,    20,    86,    20,    19,    20,   103,    21,
      86,    86,    86,    86,    86,    86,    86,    15,    72,    72,
     113,   115,   119,   119,   118,   118,   118,   118,   118,   118,
     120,   120,   120,    71,    18,     7,    18,    20,    22,    86,
      86,    16,    20,    86,    21,    20,    72,    16,    16,    54,
      53,    18,    86,    18,    20,    95,    89,    16,   107,   114,
     116,   103,    15,   105,    98,    26,    28,    91,    25,   102,
       7,    48,    12,    16,   104,    97,    90,     7,    90,    15,
      21,    93,    90,    94,    72,   103,    12,    92,    72,    16,
      96,    72,    12,    20,    91,    72,    91
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    63,    64,    65,
      66,    67,    68,    68,    69,    69,    70,    70,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    75,
      74,    74,    74,    74,    74,    74,    74,    74,    76,    77,
      78,    78,    79,    79,    80,    80,    80,    81,    81,    82,
      83,    83,    84,    85,    84,    86,    86,    86,    86,    86,
      86,    86,    87,    88,    89,    90,    92,    91,    93,    91,
      91,    94,    91,    95,    96,    97,    98,    99,   100,   102,
     101,   101,   103,   103,   104,   105,   106,   107,   106,   108,
     108,   109,   110,   110,   111,   113,   112,   112,   115,   114,
     114,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   118,   119,   119,   119,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   122,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     1,     1,     4,     4,
       4,     4,     2,     2,     1,     0,     3,     1,     2,     1,
       0,     2,     1,     1,     2,     1,     1,     1,     1,     0,
       4,     2,     2,     3,     3,     3,     2,     1,     2,     2,
       1,     1,     1,     3,     1,     3,     2,     3,     4,     4,
       1,     0,     3,     0,     2,     1,     3,     3,     3,     3,
       3,     3,     1,     8,     0,     0,     0,     8,     0,     7,
       0,     0,     5,     0,     0,     0,     0,     0,     5,     0,
      13,     3,     1,     0,     0,     0,     4,     0,    11,     4,
       3,     4,     5,     3,     0,     0,     5,     1,     0,     5,
       1,     2,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     1,     2,     2,
       1,     2,     1,     1,     3,     2,     2,     2,     2,     1,
       2,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 100 "miniC.y" /* yacc.c:1646  */
    {
        deleteVariableList(activeFunctionPointer, scope);
        activeFunctionPointer=NULL;
        scope=0;
        string s = "function end";
        gen(functionInstruction, s, nextNum);
    }
#line 1535 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 110 "miniC.y" /* yacc.c:1646  */
    {   
        scope=1;
        activeFunctionPointer = new functionEntry;
        activeFunctionPointer->name = string("main");
        activeFunctionPointer->returnType = INTEGER;
        activeFunctionPointer->numOfParam = 0;
        activeFunctionPointer->parameterList.clear();
        activeFunctionPointer->variableList.clear();
        activeFunctionPointer->functionOffset = 0;      ;
        typeRecordList.clear();
        searchFunc(activeFunctionPointer, functionEntryRecord, found);
        if (found) {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Function " << activeFunctionPointer->name <<  " already declared." << endl;
            delete activeFunctionPointer;
            activeFunctionPointer = NULL;
        }
        else {
            addFunction(activeFunctionPointer, functionEntryRecord);
            scope = 2; 
            string s = "function begin main";
            gen(functionInstruction, s, nextNum);
        }
    }
#line 1563 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 136 "miniC.y" /* yacc.c:1646  */
    {
        deleteVariableList(activeFunctionPointer, scope);
        activeFunctionPointer = NULL;
        scope = 0;
        string s = "function end";
        gen(functionInstruction, s, nextNum);
    }
#line 1575 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 146 "miniC.y" /* yacc.c:1646  */
    {
        int found = 0;
        searchFunc(activeFunctionPointer, functionEntryRecord, found);
        if(found){
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Function " << activeFunctionPointer->name <<  " already declared." << endl;
            errorFound = true;
            delete activeFunctionPointer;
            // cout<<"Function head me activeFunctionPointer deleted"<<endl;
        }   
        else{
            activeFunctionPointer->numOfParam = typeRecordList.size();
            activeFunctionPointer->parameterList = typeRecordList;
            activeFunctionPointer->functionOffset = 0;
            typeRecordList.clear();
            addFunction(activeFunctionPointer, functionEntryRecord);
            scope = 2;
            string s = "function begin _" + activeFunctionPointer->name;
            gen(functionInstruction, s, nextNum);
        }
    }
#line 1600 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 169 "miniC.y" /* yacc.c:1646  */
    {
        scope=1;
        activeFunctionPointer = new functionEntry;
        activeFunctionPointer->name = string((yyvsp[0].idName));
        activeFunctionPointer->returnType = resultType;
    }
#line 1611 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 176 "miniC.y" /* yacc.c:1646  */
    {
        scope=1;
        activeFunctionPointer = new functionEntry;
        activeFunctionPointer->name = string((yyvsp[0].idName));
        activeFunctionPointer->returnType = NULLVOID;
    }
#line 1622 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 192 "miniC.y" /* yacc.c:1646  */
    {
        int found = 0;
        typeRecord* pn = NULL;
        searchParameter(variableRecord->name, typeRecordList, found, pn);
        if(found){
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Redeclaration of parameter " << variableRecord->name <<endl;
        } else {
            // cout << "Variable: "<< variableRecord->name << " declared." << endl;
            typeRecordList.push_back(variableRecord);
        }
    }
#line 1638 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 204 "miniC.y" /* yacc.c:1646  */
    {
        int found = 0;
        typeRecord* pn = NULL;
        searchParameter(variableRecord->name, typeRecordList, found , pn );
        if (found){
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Redeclaration of parameter " << variableRecord->name <<endl;
        } else {
            // cout << "Variable: "<< variableRecord->name << " declared." << endl;
            typeRecordList.push_back(variableRecord);
        }
    }
#line 1654 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 218 "miniC.y" /* yacc.c:1646  */
    {
        variableRecord = new typeRecord;
        variableRecord->name = string((yyvsp[0].idName));
        variableRecord->type = SIMPLE;
        variableRecord->tag = VARIABLE;
        variableRecord->scope = scope;
        variableRecord->elementType = resultType;
    }
#line 1667 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 229 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        merge((yyval.statementValue).nextList, (yyvsp[0].statementValue).nextList);
        (yyval.statementValue).breakList = new vector<int>;
        merge((yyval.statementValue).breakList, (yyvsp[0].statementValue).breakList);
        (yyval.statementValue).continueList = new vector<int>;
        merge((yyval.statementValue).continueList, (yyvsp[0].statementValue).continueList);
    }
#line 1680 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 238 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector<int>;
    }
#line 1690 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 246 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        merge((yyval.statementValue).nextList, (yyvsp[-1].statementValue).nextList);
        merge((yyval.statementValue).nextList, (yyvsp[0].statementValue).nextList);
        (yyval.statementValue).breakList = new vector<int>;
        merge((yyval.statementValue).breakList, (yyvsp[-1].statementValue).breakList);
        merge((yyval.statementValue).breakList, (yyvsp[0].statementValue).breakList);
        (yyval.statementValue).continueList = new vector<int>;
        merge((yyval.statementValue).continueList, (yyvsp[-1].statementValue).continueList);
        merge((yyval.statementValue).continueList, (yyvsp[0].statementValue).continueList);
    }
#line 1706 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 258 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        merge((yyval.statementValue).nextList, (yyvsp[0].statementValue).nextList);
        (yyval.statementValue).breakList = new vector<int>;
        merge((yyval.statementValue).breakList, (yyvsp[0].statementValue).breakList);
        (yyval.statementValue).continueList = new vector<int>;
        merge((yyval.statementValue).continueList, (yyvsp[0].statementValue).continueList);
    }
#line 1719 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 269 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
    }
#line 1729 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 275 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        if ((yyvsp[-1].expressionValue).type != NULLVOID && (yyvsp[-1].expressionValue).type != ERRORTYPE)
            temporarySet.freeRegister(*((yyvsp[-1].expressionValue).registerName));
    }
#line 1741 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 283 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
    }
#line 1751 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 289 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        merge((yyval.statementValue).continueList, (yyvsp[0].statementValue).continueList);
        merge((yyval.statementValue).breakList, (yyvsp[0].statementValue).breakList);

    }
#line 1764 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 298 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
    }
#line 1774 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 304 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
    }
#line 1784 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 309 "miniC.y" /* yacc.c:1646  */
    {scope++;}
#line 1790 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 310 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        deleteVariableList(activeFunctionPointer, scope);
        scope--;
        merge((yyval.statementValue).continueList, (yyvsp[-1].statementValue).continueList);
        merge((yyval.statementValue).breakList, (yyvsp[-1].statementValue).breakList);
    }
#line 1804 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 320 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        (yyval.statementValue).breakList->push_back(nextNum);
        gen(functionInstruction, "goto L", nextNum);
    }
#line 1816 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 328 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        (yyval.statementValue).continueList->push_back(nextNum);
        gen(functionInstruction, "goto L", nextNum);
    }
#line 1828 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 336 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        if ((yyvsp[-1].expressionValue).type != ERRORTYPE && activeFunctionPointer != NULL) {
            if (activeFunctionPointer->returnType == NULLVOID && (yyvsp[-1].expressionValue).type != NULLVOID) {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": function " << activeFunctionPointer->name << " has void return type not " << (yyvsp[-1].expressionValue).type << endl;
            }
            else if (activeFunctionPointer->returnType != NULLVOID && (yyvsp[-1].expressionValue).type == NULLVOID) {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": function " << activeFunctionPointer->name << " has non-void return type" << endl;
            }
            else {
                string s;
                if (activeFunctionPointer->returnType != NULLVOID && (yyvsp[-1].expressionValue).type != NULLVOID) {
                    if ((yyvsp[-1].expressionValue).type == INTEGER && activeFunctionPointer->returnType == FLOATING)  {
                        string floatReg = temporarySet.getFloatRegister();
                        s = floatReg + " = " + "convertToFloat(" + *((yyvsp[-1].expressionValue).registerName) + ")";
                        cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                        gen(functionInstruction, s, nextNum);
                        s = "return " + floatReg;
                        gen(functionInstruction, s, nextNum);
                        temporarySet.freeRegister(*((yyvsp[-1].expressionValue).registerName));
                        temporarySet.freeRegister(floatReg);
                    }
                    else if ((yyvsp[-1].expressionValue).type == FLOATING && activeFunctionPointer->returnType == INTEGER) {
                        string intRegister = temporarySet.getRegister();
                        s = intRegister + " = " + "convertToInt(" + *((yyvsp[-1].expressionValue).registerName) + ")";
                        cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                        gen(functionInstruction, s, nextNum);
                        s = "return " + intRegister;
                        gen(functionInstruction, s, nextNum);
                        temporarySet.freeRegister(*((yyvsp[-1].expressionValue).registerName));
                        temporarySet.freeRegister(intRegister);
                    }
                    else {
                        s = "return " + *((yyvsp[-1].expressionValue).registerName);
                        gen(functionInstruction, s, nextNum);
                        temporarySet.freeRegister(*((yyvsp[-1].expressionValue).registerName));
                    }
                }
                else if (activeFunctionPointer->returnType == NULLVOID && (yyvsp[-1].expressionValue).type == NULLVOID) {
                    s = "return";
                    gen(functionInstruction, s, nextNum);
                }
                else {
                    errorFound = 1;
                    cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Exactly one of function " << activeFunctionPointer->name << "and this return statement has void return type" << endl;
                    if ((yyvsp[-1].expressionValue).type != NULLVOID) temporarySet.freeRegister(*((yyvsp[-1].expressionValue).registerName));
                }
            }
        }
    }
#line 1885 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 389 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        if((yyvsp[-1].expressionValue).type == ERRORTYPE){
            errorFound = true;
        }
        else{
            string registerName;
            if ((yyvsp[-1].expressionValue).type == INTEGER){
                registerName = temporarySet.getRegister();
            }
            else {
                registerName = temporarySet.getFloatRegister();
            }
            string s;
            s = "read " + registerName;
            gen(functionInstruction, s, nextNum);
            s = (*((yyvsp[-1].expressionValue).registerName)) + " = " +  registerName;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(registerName);
            if ((yyvsp[-1].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-1].expressionValue).offsetRegName));
        }
    }
#line 1914 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 414 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        if((yyvsp[-1].expressionValue).type == ERRORTYPE){
            errorFound = true;
        }
        else{
            string registerName;
            if ((yyvsp[-1].expressionValue).type == INTEGER){
                registerName = temporarySet.getRegister();
            }
            else {
                registerName = temporarySet.getFloatRegister();
            }
            string s = registerName + " = " + (*((yyvsp[-1].expressionValue).registerName)) ;
            gen(functionInstruction, s, nextNum);
            s = "print " + registerName;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(registerName);
            if ((yyvsp[-1].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-1].expressionValue).offsetRegName));
        }
    }
#line 1942 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 438 "miniC.y" /* yacc.c:1646  */
    {
        errorFound = 1;
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        cout << BOLD(FRED("ERROR : ")) << FYEL("Line no. " + to_string(yylineno) + ": Syntax error") << endl;
    }
#line 1954 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 446 "miniC.y" /* yacc.c:1646  */
    {
        errorFound = 1;
        (yyval.statementValue).nextList = new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList = new vector <int>;
        cout << BOLD(FRED("ERROR : ")) << FYEL("Line no. " + to_string(yylineno) + ": Syntax error") << endl;
    }
#line 1966 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 459 "miniC.y" /* yacc.c:1646  */
    {
        patchDataType(resultType, typeRecordList, scope);
        if(scope > 1){
            insertSymTab(typeRecordList, activeFunctionPointer);
        }
        else if(scope == 0){
            insertGlobalVariables(typeRecordList, globalVariables);
        }
        typeRecordList.clear();
    }
#line 1981 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 471 "miniC.y" /* yacc.c:1646  */
    { resultType = INTEGER; }
#line 1987 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 472 "miniC.y" /* yacc.c:1646  */
    { resultType = FLOATING; }
#line 1993 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 480 "miniC.y" /* yacc.c:1646  */
    {
        int found = 0;
        typeRecord* vn = NULL;
        // cout << "Scope : "<<scope<<endl;
        if(activeFunctionPointer!=NULL && scope > 0){
            searchVariable(string((yyvsp[0].idName)), activeFunctionPointer, found, vn, scope);
            if (found) {
                if(vn->isValid==true){
                    cout << BOLD(FRED("ERROR : ")) << "Line no. :" << yylineno << " Variable " << string((yyvsp[0].idName)) << " already declared at same level " << scope << endl ;
                }
                else{
                    if(vn->elementType == resultType){
                        vn->isValid=true;
                        vn->maxDimlistOffset = max(vn->maxDimlistOffset,1);
                        vn->type=SIMPLE;
                    }
                    else {
                        variableRecord = new typeRecord;
                        variableRecord->name = string((yyvsp[0].idName));
                        variableRecord->type = SIMPLE;
                        variableRecord->tag = VARIABLE;
                        variableRecord->scope = scope;
                        variableRecord->isValid=true;
                        variableRecord->maxDimlistOffset=1;
                        typeRecordList.push_back(variableRecord);
                    }
                }
            }
            else if (scope == 2) {
                typeRecord* pn = NULL;
                searchParameter(string((yyvsp[0].idName)), activeFunctionPointer->parameterList, found , pn);
                if (found) {
                    // printf("Line no. %d: Vaiable %s is already declared as a parameter with scope %d\n", yylineno, $1, scope);
                    cout << BOLD(FRED("ERROR : ")) << "Line no. :" << yylineno << " Variable " << string((yyvsp[0].idName)) << " already declared in parameters " << endl ;
                }
                else {
                    variableRecord = new typeRecord;
                    variableRecord->name = string((yyvsp[0].idName));
                    variableRecord->type = SIMPLE;
                    variableRecord->tag = VARIABLE;
                    variableRecord->scope = scope;
                    variableRecord->isValid=true;
                    variableRecord->maxDimlistOffset=1;
                    typeRecordList.push_back(variableRecord);
                }
            }
            else {
                variableRecord = new typeRecord;
                variableRecord->name = string((yyvsp[0].idName));
                variableRecord->type = SIMPLE;
                variableRecord->tag = VARIABLE;
                variableRecord->scope = scope;
                variableRecord->isValid=true;
                variableRecord->maxDimlistOffset=1;
                typeRecordList.push_back(variableRecord);
            }
        }
        else if(scope == 0){
            searchGlobalVariable(string((yyvsp[0].idName)), globalVariables, found, vn, scope);
            if (found) {
                // printf("Variable %s already declared at global level \n", $1);
                cout << BOLD(FRED("ERROR : ")) << "Line no. :" << yylineno << " Variable " << string((yyvsp[0].idName)) << " already declared at global level " << endl ;
            }
            else{
                variableRecord = new typeRecord;
                variableRecord->name = string((yyvsp[0].idName));
                variableRecord->type = SIMPLE;
                variableRecord->tag = VARIABLE;
                variableRecord->scope = scope;
                variableRecord->isValid=true;
                variableRecord->maxDimlistOffset=1;
                // cout<<"variable name: "<<variableRecord->name<<endl;
                typeRecordList.push_back(variableRecord);
            }
        }
        else {
            errorFound = true;
        }
    }
#line 2077 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 560 "miniC.y" /* yacc.c:1646  */
    {
        int found = 0;
        typeRecord* vn = NULL;
        if(activeFunctionPointer!=NULL){
            searchVariable(string((yyvsp[-2].idName)), activeFunctionPointer, found, vn, scope);
            bool varCreated = false;;
            if (found) {
                if(vn->isValid==true){
                    cout << BOLD(FRED("ERROR : ")) << "Line no. :" << yylineno << " Variable " << string((yyvsp[-2].idName)) << " already declared at same level " << scope << endl ;
                }
                else{
                    if(vn->elementType == resultType){
                        vn->isValid=true;
                        vn->maxDimlistOffset = max(vn->maxDimlistOffset,1);
                        vn->type=SIMPLE;
                        varCreated = true;
                    }
                    else {
                        variableRecord = new typeRecord;
                        variableRecord->name = string((yyvsp[-2].idName));
                        variableRecord->type = SIMPLE;
                        variableRecord->tag = VARIABLE;
                        variableRecord->scope = scope;
                        variableRecord->isValid=true;
                        variableRecord->maxDimlistOffset=1;
                        typeRecordList.push_back(variableRecord);
                        varCreated = true;
                    }
                }
            }
            else if (scope == 2) {
                typeRecord* pn = NULL;
                searchParameter(string((yyvsp[-2].idName)), activeFunctionPointer->parameterList, found , pn);
                if (found) {
                    cout << BOLD(FRED("ERROR : ")) << "Line no. :" << yylineno << " Variable " << string((yyvsp[-2].idName)) << " already declared at parameter level " << endl ;
                } 
                else {
                    variableRecord = new typeRecord;
                    variableRecord->name = string((yyvsp[-2].idName));
                    variableRecord->type = SIMPLE;
                    variableRecord->tag = VARIABLE;
                    variableRecord->scope = scope;
                    variableRecord->maxDimlistOffset=1;
                    variableRecord->isValid=true;
                    typeRecordList.push_back(variableRecord);
                    varCreated = true;
                }
            }
            else {
                variableRecord = new typeRecord;
                variableRecord->name = string((yyvsp[-2].idName));
                variableRecord->type = SIMPLE;
                variableRecord->tag = VARIABLE;
                variableRecord->scope = scope;
                variableRecord->maxDimlistOffset=1;
                variableRecord->isValid=true;
                typeRecordList.push_back(variableRecord);
                varCreated = true;
            }
            if(varCreated){
                if ((yyvsp[0].expressionValue).type == ERRORTYPE) {
                    errorFound = true;
                }
                else if ((yyvsp[0].expressionValue).type == NULLVOID) {
                    cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Cannot assign void to non-void type " << string((yyvsp[-2].idName)) << endl;
                    errorFound = true;
                }
                else {
                    string registerName;
                    if (resultType == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                        registerName = temporarySet.getRegister();
                        string s = registerName + " = convertToInt(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                        cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                        gen(functionInstruction, s, nextNum);
                        temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
                    }
                    else if(resultType == FLOATING && ((yyvsp[0].expressionValue).type == INTEGER || (yyvsp[0].expressionValue).type == BOOLEAN)) {
                        registerName = temporarySet.getFloatRegister();
                        string s = registerName + " = convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";
                        cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                        gen(functionInstruction, s, nextNum);
                        temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
                    }
                    else {
                        registerName = *((yyvsp[0].expressionValue).registerName);
                    }
                    string dataType = elementTypeMapper(resultType);
                    dataType += "_" + to_string(scope);
                    string s =  "_" + string((yyvsp[-2].idName)) + "_" + dataType + " = " + registerName ;
                    gen(functionInstruction, s, nextNum);
                    temporarySet.freeRegister(registerName);
                }   
            }
        }
        else if(scope == 0){
            cout << BOLD(FRED("ERROR : ")) << "Line No " << yylineno << ": ID assignments not allowed in global level : Variable " << string((yyvsp[-2].idName)) << endl;
            errorFound = true;
        }
        else {
            errorFound = true;
        }
    }
#line 2184 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 663 "miniC.y" /* yacc.c:1646  */
    {  
        if (activeFunctionPointer != NULL) {
            int found = 0;
            typeRecord* vn = NULL;
            searchVariable(string((yyvsp[-1].idName)), activeFunctionPointer, found, vn,scope); 
            if (found) {
                if(vn->isValid==true){
                    cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Variable " << string((yyvsp[-1].idName)) << " already declared at same level " << scope << endl;
                }
                else{
                    if(vn->elementType == resultType){
                        vn->isValid=true;
                        int a=1;
                        for(auto it : decDimensionList){
                            a*=(it);
                        }
                        vn->maxDimlistOffset = max(vn->maxDimlistOffset,a);
                        if(vn->type==ARRAY){
                            vn->dimensionList.clear();
                        }
                        vn->type=ARRAY;
                        vn->dimensionList = decDimensionList;
                    }
                    else {
                        variableRecord = new typeRecord;
                        variableRecord->name = string((yyvsp[-1].idName));
                        variableRecord->type = ARRAY;
                        variableRecord->tag = VARIABLE;
                        variableRecord->scope = scope;
                        variableRecord->dimensionList = decDimensionList;
                        variableRecord->isValid=true;
                        int a=1;
                        for(auto it : decDimensionList){
                            a*=(it);
                        }
                        variableRecord->maxDimlistOffset = a;
                        typeRecordList.push_back(variableRecord);
                    }
                }
            }
            else if (scope == 2) {
                typeRecord* pn = NULL;
                searchParameter(string((yyvsp[-1].idName)), activeFunctionPointer->parameterList, found, pn);
                if (found) {
                    cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Variable " << string((yyvsp[-1].idName)) << " already declared at parameter level " << endl;
                } 
                else {
                    variableRecord = new typeRecord;
                    variableRecord->name = string((yyvsp[-1].idName));
                    variableRecord->type = ARRAY;
                    variableRecord->tag = VARIABLE;
                    variableRecord->scope = scope;
                    variableRecord->dimensionList = decDimensionList;
                    variableRecord->isValid=true;
                    int a=1;
                    for(auto it : decDimensionList){
                        a*=(it);
                    }
                    variableRecord->maxDimlistOffset = a;
                    typeRecordList.push_back(variableRecord);
                }
            }
            else{
                variableRecord = new typeRecord;
                variableRecord->name = string((yyvsp[-1].idName));
                variableRecord->type = ARRAY;
                variableRecord->tag = VARIABLE;
                variableRecord->scope = scope;
                variableRecord->dimensionList = decDimensionList;
                variableRecord->isValid=true;
                int a=1;
                for(auto it : decDimensionList){
                    a*=(it);
                }
                variableRecord->maxDimlistOffset = a;
                typeRecordList.push_back(variableRecord);
            }
            // decDimensionList.clear();
        }
        else if(scope == 0){
            typeRecord* vn = NULL;
            searchGlobalVariable(string((yyvsp[-1].idName)), globalVariables, found, vn, scope);
            if (found) {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Variable " << string((yyvsp[-1].idName)) << " already declared at global level " << endl;
            }
            else{
                variableRecord = new typeRecord;
                variableRecord->name = string((yyvsp[-1].idName));
                variableRecord->type = ARRAY;
                variableRecord->tag = VARIABLE;
                variableRecord->scope = scope;
                variableRecord->dimensionList = decDimensionList;
                variableRecord->isValid=true;
                int a=1;
                for(auto it : decDimensionList){
                    a*=(it);
                }
                variableRecord->maxDimlistOffset = a;
                // cout<<"variable name: "<<variableRecord->name<<endl;
                typeRecordList.push_back(variableRecord);   
            }
        }   
        else{
            errorFound = 1;
        }
        decDimensionList.clear();
    }
#line 2296 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 773 "miniC.y" /* yacc.c:1646  */
    {
        decDimensionList.push_back(atoi((yyvsp[-1].idName)));
    }
#line 2304 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 777 "miniC.y" /* yacc.c:1646  */
    {
        decDimensionList.push_back(atoi((yyvsp[-1].idName)));
    }
#line 2312 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 783 "miniC.y" /* yacc.c:1646  */
    {
        callFunctionPointer = new functionEntry;
        callFunctionPointer->name = string((yyvsp[-3].idName));
        callFunctionPointer->parameterList = typeRecordList;
        callFunctionPointer->numOfParam = typeRecordList.size();
        int found = 0;
        // printFunction(activeFunctionPointer);
        // printFunction(callFunctionPointer);
        int vfound=0;
        typeRecord* vn;
        searchVariable(callFunctionPointer->name,activeFunctionPointer,vfound,vn,scope);
        if (vfound) {
            (yyval.expressionValue).type = ERRORTYPE;
            cout<< BOLD(FRED("ERROR : ")) << "Line no." << yylineno << ": called object "<< callFunctionPointer->name << " is not a function or function pointer"<< endl;
        }
        else {
            compareFunc(callFunctionPointer,functionEntryRecord,found);
            (yyval.expressionValue).type = ERRORTYPE;
            if (found == 0) {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
                cout << "No function with name " << string((yyvsp[-3].idName)) << " exists" << endl;
            }
            else if (found == -1) {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
                cout << "call parameter list does not match with defined paramters of function " << string((yyvsp[-3].idName)) << endl;
            }
            else {
                (yyval.expressionValue).type = callFunctionPointer->returnType;
                if(callFunctionPointer->returnType == INTEGER){
                    (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
                    gen(functionInstruction, "refparam " + (*((yyval.expressionValue).registerName)), nextNum);
                    gen(functionInstruction, "call _" + callFunctionPointer->name + ", " + to_string(typeRecordList.size() + 1 ), nextNum);
                }
                else if(callFunctionPointer->returnType == FLOATING){
                    (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
                    gen(functionInstruction, "refparam " + (*((yyval.expressionValue).registerName)), nextNum);
                    gen(functionInstruction, "call _" + callFunctionPointer->name + ", " + to_string(typeRecordList.size() + 1 ), nextNum);
                }
                else if (callFunctionPointer->returnType == NULLVOID) {
                    (yyval.expressionValue).registerName = NULL;
                    gen(functionInstruction, "call _" + callFunctionPointer->name + ", " + to_string(typeRecordList.size()), nextNum);
                }
                else {
                    cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": Illegal return type of function " << callFunctionPointer->name << endl;
                }
            }
        }
        typeRecordList.clear();
        typeRecordList.swap(parameterListStack.top());
        parameterListStack.pop();
    }
#line 2368 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 837 "miniC.y" /* yacc.c:1646  */
    {parameterListStack.push(typeRecordList); typeRecordList.clear();}
#line 2374 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 841 "miniC.y" /* yacc.c:1646  */
    {
        variableRecord = new typeRecord;
        variableRecord->elementType = (yyvsp[0].expressionValue).type;
        if ((yyvsp[0].expressionValue).type == ERRORTYPE) {
            errorFound = true;
        }
        else {
            variableRecord->name = *((yyvsp[0].expressionValue).registerName);
            variableRecord->type = SIMPLE;
            gen(functionInstruction, "param " +  *((yyvsp[0].expressionValue).registerName), nextNum);
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
        }
        typeRecordList.push_back(variableRecord);
    }
#line 2393 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 855 "miniC.y" /* yacc.c:1646  */
    {parameterListStack.push(typeRecordList); typeRecordList.clear();}
#line 2399 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 856 "miniC.y" /* yacc.c:1646  */
    {
        variableRecord = new typeRecord;
        variableRecord->elementType = (yyvsp[0].expressionValue).type;
        if ((yyvsp[0].expressionValue).type == ERRORTYPE) {
            errorFound = true;
        }
        else {
            variableRecord->name = *((yyvsp[0].expressionValue).registerName);
            variableRecord->type = SIMPLE; 
            gen(functionInstruction, "param " +  *((yyvsp[0].expressionValue).registerName), nextNum);   
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
        }
        typeRecordList.push_back(variableRecord);
    }
#line 2418 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 873 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = (yyvsp[0].shortCircuitValue).type;
        if((yyval.expressionValue).type != ERRORTYPE && (yyval.expressionValue).type != NULLVOID) {
            (yyval.expressionValue).registerName = (yyvsp[0].shortCircuitValue).registerName;
            if((yyvsp[0].shortCircuitValue).jumpList!=NULL){
                vector<int>* queryList = new vector<int>;
                queryList->push_back(nextNum);
                gen(functionInstruction,"goto L",nextNum);
                backPatch((yyvsp[0].shortCircuitValue).jumpList, nextNum, functionInstruction);
                gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
                gen(functionInstruction,(*((yyval.expressionValue).registerName)) + " = 1",nextNum) ;
                backPatch(queryList,nextNum,functionInstruction);
                queryList->clear();
                gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
            }
        }
    }
#line 2440 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 891 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else if ((yyvsp[0].expressionValue).type == NULLVOID) {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
            cout << "Cannot assign void to non-void type " << *((yyvsp[-2].expressionValue).registerName) << endl;
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else {
            (yyval.expressionValue).type = (yyvsp[-2].expressionValue).type;
            string registerName;
            if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                registerName = temporarySet.getRegister();
                string s = registerName + " = convertToInt(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else if((yyvsp[-2].expressionValue).type == FLOATING && ((yyvsp[0].expressionValue).type == INTEGER || (yyvsp[0].expressionValue).type == BOOLEAN)) {
                registerName = temporarySet.getFloatRegister();
                string s = registerName + " = convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum); 
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else {
                registerName = *((yyvsp[0].expressionValue).registerName);
            }
            string s = (*((yyvsp[-2].expressionValue).registerName)) + " = " + registerName ;
            gen(functionInstruction, s, nextNum);
            (yyval.expressionValue).registerName = new string(registerName);
            if ((yyvsp[-2].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-2].expressionValue).offsetRegName));
        }
    }
#line 2482 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 929 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else if ((yyvsp[0].expressionValue).type == NULLVOID) {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
            cout << "Cannot assign void to non-void type " << *((yyvsp[-2].expressionValue).registerName) << endl;
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else {
            (yyval.expressionValue).type = (yyvsp[-2].expressionValue).type;
            string registerName;
            if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                registerName = temporarySet.getRegister();
                string s = registerName + " = convertToInt(" + (*((yyvsp[0].expressionValue).registerName)) + ")";  
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else if((yyvsp[-2].expressionValue).type == FLOATING && ((yyvsp[0].expressionValue).type == INTEGER || (yyvsp[0].expressionValue).type == BOOLEAN)) {
                registerName = temporarySet.getFloatRegister();
                string s = registerName + " = convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum); 
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else {
                registerName = *((yyvsp[0].expressionValue).registerName);
            }
            string s, temporaryRegister;
            if((yyvsp[-2].expressionValue).type == INTEGER){
                temporaryRegister = temporarySet.getRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));
                gen(functionInstruction, s, nextNum);
            }
            else{
                temporaryRegister = temporarySet.getFloatRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));   
                gen(functionInstruction, s, nextNum);
            }
            s = registerName + " = " + registerName + " + " + temporaryRegister;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(temporaryRegister);
            s = (*((yyvsp[-2].expressionValue).registerName)) + " = " + registerName ;
            gen(functionInstruction, s, nextNum);
            (yyval.expressionValue).registerName = new string(registerName);
            if ((yyvsp[-2].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-2].expressionValue).offsetRegName));
        }
    }
#line 2538 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 981 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else if ((yyvsp[0].expressionValue).type == NULLVOID) {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
            cout << "Cannot assign void to non-void type " << *((yyvsp[-2].expressionValue).registerName) << endl;
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else {
            (yyval.expressionValue).type = (yyvsp[-2].expressionValue).type;
            string registerName;
            if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                registerName = temporarySet.getRegister();
                string s = registerName + " = convertToInt(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else if((yyvsp[-2].expressionValue).type == FLOATING && ((yyvsp[0].expressionValue).type == INTEGER || (yyvsp[0].expressionValue).type == BOOLEAN)) {
                registerName = temporarySet.getFloatRegister();
                string s = registerName + " = convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")"; 
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum); 
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else {
                registerName = *((yyvsp[0].expressionValue).registerName);
            }
            string s, temporaryRegister;
            if((yyvsp[-2].expressionValue).type == INTEGER){
                temporaryRegister = temporarySet.getRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));
                gen(functionInstruction, s, nextNum);
            }
            else{
                temporaryRegister = temporarySet.getFloatRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));   
                gen(functionInstruction, s, nextNum);
            }
            s = registerName + " = " + registerName + " - " + temporaryRegister;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(temporaryRegister);
            s = (*((yyvsp[-2].expressionValue).registerName)) + " = " + registerName ;
            gen(functionInstruction, s, nextNum);
            (yyval.expressionValue).registerName = new string(registerName);
            if ((yyvsp[-2].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-2].expressionValue).offsetRegName));
        }
    }
#line 2594 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1033 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else if ((yyvsp[0].expressionValue).type == NULLVOID) {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
            cout << "Cannot assign void to non-void type " << *((yyvsp[-2].expressionValue).registerName) << endl;
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else {
            (yyval.expressionValue).type = (yyvsp[-2].expressionValue).type;
            string registerName;
            if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                registerName = temporarySet.getRegister();
                string s = registerName + " = convertToInt(" + (*((yyvsp[0].expressionValue).registerName)) + ")"; 
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else if((yyvsp[-2].expressionValue).type == FLOATING && ((yyvsp[0].expressionValue).type == INTEGER || (yyvsp[0].expressionValue).type == BOOLEAN)) {
                registerName = temporarySet.getFloatRegister();
                string s = registerName + " = convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";  
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum); 
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else {
                registerName = *((yyvsp[0].expressionValue).registerName);
            }
            string s, temporaryRegister;
            if((yyvsp[-2].expressionValue).type == INTEGER){
                temporaryRegister = temporarySet.getRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));
                gen(functionInstruction, s, nextNum);
            }
            else{
                temporaryRegister = temporarySet.getFloatRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));   
                gen(functionInstruction, s, nextNum);
            }
            s = registerName + " = " + registerName + " * " + temporaryRegister;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(temporaryRegister);
            s = (*((yyvsp[-2].expressionValue).registerName)) + " = " + registerName ;
            gen(functionInstruction, s, nextNum);
            (yyval.expressionValue).registerName = new string(registerName);
            if ((yyvsp[-2].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-2].expressionValue).offsetRegName));
        }
    }
#line 2650 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1085 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else if ((yyvsp[0].expressionValue).type == NULLVOID) {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
            cout << "Cannot assign void to non-void type " << *((yyvsp[-2].expressionValue).registerName) << endl;
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else {
            (yyval.expressionValue).type = (yyvsp[-2].expressionValue).type;
            string registerName;
            if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                registerName = temporarySet.getRegister();
                string s = registerName + " = convertToInt(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else if((yyvsp[-2].expressionValue).type == FLOATING && ((yyvsp[0].expressionValue).type == INTEGER || (yyvsp[0].expressionValue).type == BOOLEAN)) {
                registerName = temporarySet.getFloatRegister();
                string s = registerName + " = convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum); 
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else {
                registerName = *((yyvsp[0].expressionValue).registerName);
            }
            string s, temporaryRegister;
            if((yyvsp[-2].expressionValue).type == INTEGER){
                temporaryRegister = temporarySet.getRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));
                gen(functionInstruction, s, nextNum);
            }
            else{
                temporaryRegister = temporarySet.getFloatRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));   
                gen(functionInstruction, s, nextNum);
            }
            s = registerName + " = " + registerName + " / " + temporaryRegister;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(temporaryRegister);
            s = (*((yyvsp[-2].expressionValue).registerName)) + " = " + registerName ;
            gen(functionInstruction, s, nextNum);
            (yyval.expressionValue).registerName = new string(registerName);
            if ((yyvsp[-2].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-2].expressionValue).offsetRegName));
        }
    }
#line 2706 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1137 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else if ((yyvsp[0].expressionValue).type == NULLVOID) {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
            cout << "Cannot assign void to non-void type " << *((yyvsp[-2].expressionValue).registerName) << endl;
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else {
            (yyval.expressionValue).type = (yyvsp[-2].expressionValue).type;
            string registerName;
            if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                registerName = temporarySet.getRegister();
                string s = registerName + " = convertToInt(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else if((yyvsp[-2].expressionValue).type == FLOATING && ((yyvsp[0].expressionValue).type == INTEGER || (yyvsp[0].expressionValue).type == BOOLEAN)) {
                registerName = temporarySet.getFloatRegister();
                string s = registerName + " = convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";   
                cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                gen(functionInstruction, s, nextNum); 
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
            }
            else {
                registerName = *((yyvsp[0].expressionValue).registerName);
            }
            string s, temporaryRegister;
            if((yyvsp[-2].expressionValue).type == INTEGER){
                temporaryRegister = temporarySet.getRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));
                gen(functionInstruction, s, nextNum);
            }
            else{
                temporaryRegister = temporarySet.getFloatRegister();
                s = temporaryRegister + " = " + (*((yyvsp[-2].expressionValue).registerName));   
                gen(functionInstruction, s, nextNum);
            }
            s = registerName + " = " + registerName + " % " + temporaryRegister;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(temporaryRegister);
            s = (*((yyvsp[-2].expressionValue).registerName)) + " = " + registerName ;
            gen(functionInstruction, s, nextNum);
            (yyval.expressionValue).registerName = new string(registerName);
            if ((yyvsp[-2].expressionValue).offsetRegName != NULL) temporarySet.freeRegister(*((yyvsp[-2].expressionValue).offsetRegName));
        }
    }
#line 2762 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1191 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type;
        if ((yyval.expressionValue).type != ERRORTYPE) {
            (yyval.expressionValue).registerName = (yyvsp[0].expressionValue).registerName;
            (yyval.expressionValue).offsetRegName = (yyvsp[0].expressionValue).offsetRegName;
        } 
    }
#line 2774 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1201 "miniC.y" /* yacc.c:1646  */
    {
        deleteVariableList(activeFunctionPointer,scope);
        scope--;

        int q=nextNum;
        vector<int>* queryList = new vector<int>;
        queryList->push_back(q);
        gen(functionInstruction, "goto L", nextNum);
        backPatch((yyvsp[-3].whileExpressionValue).falseList, nextNum, functionInstruction);
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
        reverse((yyvsp[-1].switchCaseValue).casePair->begin(), (yyvsp[-1].switchCaseValue).casePair->end());
        for(auto it : *((yyvsp[-1].switchCaseValue).casePair)){
            if(it.first == "default"){
                gen(functionInstruction, "goto L"+to_string(it.second), nextNum);
            }
            else{
                gen(functionInstruction, "if "+ (*((yyvsp[-5].expressionValue).registerName)) +" == "+ it.first + " goto L" + to_string(it.second), nextNum);
            }
        }
        (yyvsp[-1].switchCaseValue).casePair->clear();
        backPatch(queryList, nextNum, functionInstruction);
        backPatch((yyvsp[-1].switchCaseValue).breakList, nextNum, functionInstruction);
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
    }
#line 2803 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1228 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.whileExpressionValue).begin=nextNum;
        (yyval.whileExpressionValue).falseList = new vector<int>;
        (yyval.whileExpressionValue).falseList->push_back(nextNum);
        gen(functionInstruction, "goto L", nextNum);
        scope++;
    }
#line 2815 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1238 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.switchTempValue).casePair = new vector<pair<string,int>>;

    }
#line 2824 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1245 "miniC.y" /* yacc.c:1646  */
    {
        (yyvsp[0].switchTempValue).casePair->push_back(make_pair("-"+string((yyvsp[-1].idName)), nextNum));
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
        }
#line 2833 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1250 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.switchCaseValue).nextList = new vector<int>;
        (yyval.switchCaseValue).breakList = new vector<int>;
        (yyval.switchCaseValue).continueList = new vector <int>;
        (yyval.switchCaseValue).casePair = new vector<pair<string,int>>;
        merge((yyval.switchCaseValue).continueList,(yyvsp[0].switchCaseValue).continueList);
        merge((yyval.switchCaseValue).breakList, (yyvsp[0].switchCaseValue).breakList);
        merge((yyval.switchCaseValue).nextList, (yyvsp[0].switchCaseValue).nextList);
        merge((yyval.switchCaseValue).continueList,(yyvsp[-1].statementValue).continueList);
        merge((yyval.switchCaseValue).breakList, (yyvsp[-1].statementValue).breakList);
        merge((yyval.switchCaseValue).nextList, (yyvsp[-1].statementValue).nextList);
        mergeSwitch((yyval.switchCaseValue).casePair, (yyvsp[0].switchCaseValue).casePair);
        mergeSwitch((yyval.switchCaseValue).casePair, (yyvsp[-4].switchTempValue).casePair);
    }
#line 2852 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1265 "miniC.y" /* yacc.c:1646  */
    {
        (yyvsp[0].switchTempValue).casePair->push_back(make_pair(string((yyvsp[-1].idName)), nextNum));
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
        }
#line 2861 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1270 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.switchCaseValue).nextList = new vector<int>;
        (yyval.switchCaseValue).breakList = new vector<int>;
        (yyval.switchCaseValue).continueList = new vector <int>;
        (yyval.switchCaseValue).casePair = new vector<pair<string,int>>;
        merge((yyval.switchCaseValue).continueList,(yyvsp[-1].statementValue).continueList);
        merge((yyval.switchCaseValue).breakList, (yyvsp[-1].statementValue).breakList);
        merge((yyval.switchCaseValue).nextList, (yyvsp[-1].statementValue).nextList);
        merge((yyval.switchCaseValue).continueList,(yyvsp[0].switchCaseValue).continueList);
        merge((yyval.switchCaseValue).breakList, (yyvsp[0].switchCaseValue).breakList);
        merge((yyval.switchCaseValue).nextList, (yyvsp[0].switchCaseValue).nextList);
        mergeSwitch((yyval.switchCaseValue).casePair, (yyvsp[0].switchCaseValue).casePair);
        mergeSwitch((yyval.switchCaseValue).casePair, (yyvsp[-4].switchTempValue).casePair);
    }
#line 2880 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1285 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.switchCaseValue).nextList = new vector<int>;
        (yyval.switchCaseValue).breakList = new vector<int>;
        (yyval.switchCaseValue).continueList = new vector <int>;
        (yyval.switchCaseValue).casePair = new vector<pair<string,int>>;
    }
#line 2891 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1291 "miniC.y" /* yacc.c:1646  */
    {
        (yyvsp[0].switchTempValue).casePair->push_back(make_pair("default", nextNum));
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
    }
#line 2900 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1295 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.switchCaseValue).nextList = new vector<int>;
        (yyval.switchCaseValue).breakList = new vector<int>;
        (yyval.switchCaseValue).casePair = new vector<pair<string,int>>;
        (yyval.switchCaseValue).continueList = new vector <int>;
        merge((yyval.switchCaseValue).continueList,(yyvsp[0].statementValue).continueList);
        merge((yyval.switchCaseValue).breakList, (yyvsp[0].statementValue).breakList);
        merge((yyval.switchCaseValue).nextList, (yyvsp[0].statementValue).nextList);
        mergeSwitch((yyval.switchCaseValue).casePair, (yyvsp[-2].switchTempValue).casePair);
    }
#line 2915 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1308 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.quad) = nextNum;
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum); 
    }
#line 2924 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1315 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.whileExpressionValue).begin = nextNum; 
        (yyval.whileExpressionValue).falseList = new vector<int>;
        (yyval.whileExpressionValue).falseList->push_back(nextNum);
        gen(functionInstruction, "goto L", nextNum);
    }
#line 2935 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1324 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.whileExpressionValue).falseList = new vector<int>;
        (yyval.whileExpressionValue).falseList->push_back(nextNum);
        gen(functionInstruction, "goto L", nextNum);
        (yyval.whileExpressionValue).begin = nextNum; 
        gen(functionInstruction, "L"+to_string(nextNum)+":", nextNum);
    }
#line 2947 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1334 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.whileExpressionValue).begin = nextNum;
        (yyval.whileExpressionValue).falseList = new vector<int>;
        (yyval.whileExpressionValue).falseList->push_back(nextNum);
    }
#line 2957 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1342 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.quad) = nextNum;
    }
#line 2965 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1348 "miniC.y" /* yacc.c:1646  */
    {
        deleteVariableList(activeFunctionPointer, scope);
        scope--;
        gen(functionInstruction, "goto L" + to_string((yyvsp[-4].whileExpressionValue).begin), nextNum); 
        merge((yyvsp[-4].whileExpressionValue).falseList,(yyvsp[-1].statementValue).breakList);
        backPatch((yyvsp[-1].statementValue).continueList,(yyvsp[-4].whileExpressionValue).begin, functionInstruction);
        backPatch((yyvsp[-4].whileExpressionValue).falseList, nextNum, functionInstruction);
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum); 
    }
#line 2979 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1359 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].expressionValue).type!=NULLVOID){
            gen(functionInstruction, "if "+ (*((yyvsp[-1].expressionValue).registerName)) + " == 0 goto L", nextNum);
        }
    }
#line 2989 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1364 "miniC.y" /* yacc.c:1646  */
    {
        backPatch((yyvsp[-1].whileExpressionValue).falseList,(yyvsp[-8].quad),functionInstruction);
        backPatch((yyvsp[-4].whileExpressionValue).falseList,nextNum,functionInstruction);
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum); 
        (yyval.whileExpressionValue).falseList = new vector<int>;
        if((yyvsp[-7].expressionValue).type!=NULLVOID){
            (yyval.whileExpressionValue).falseList->push_back((yyvsp[-6].whileExpressionValue).begin);
        }
        (yyval.whileExpressionValue).begin = (yyvsp[-4].whileExpressionValue).begin;
        scope++;
        if((yyvsp[-10].expressionValue).type!=NULLVOID){
            temporarySet.freeRegister(*((yyvsp[-10].expressionValue).registerName));
        }
        if((yyvsp[-7].expressionValue).type!=NULLVOID){
            temporarySet.freeRegister(*((yyvsp[-7].expressionValue).registerName));
        }
        if((yyvsp[-2].expressionValue).type!=NULLVOID){
            temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
        }
    }
#line 3014 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1385 "miniC.y" /* yacc.c:1646  */
    {
        errorFound = 1;
        (yyval.whileExpressionValue).falseList = new vector<int>;
        cout << BOLD(FRED("ERROR : ")) << FYEL("Line no. " + to_string(yylineno) + ": Syntax error in for loop, discarded token till RPARE") << endl;
        scope++;
    }
#line 3025 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1394 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type= (yyvsp[0].expressionValue).type;
        if ((yyvsp[0].expressionValue).type != ERRORTYPE && (yyvsp[0].expressionValue).type != NULLVOID) {
            (yyval.expressionValue).registerName = (yyvsp[0].expressionValue).registerName;
        }
    }
#line 3036 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1400 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = NULLVOID;
    }
#line 3044 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1406 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.quad)=nextNum;
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
    }
#line 3053 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1413 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.statementValue).nextList = new vector<int>;
        ((yyval.statementValue).nextList)->push_back(nextNum);
        gen(functionInstruction, "goto L", nextNum);
    }
#line 3063 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1421 "miniC.y" /* yacc.c:1646  */
    {
        deleteVariableList(activeFunctionPointer,scope);
        scope--;
        (yyval.statementValue).nextList= new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList= new vector<int>;
        merge((yyval.statementValue).nextList, (yyvsp[-3].whileExpressionValue).falseList);
        merge((yyval.statementValue).breakList, (yyvsp[-1].statementValue).breakList);
        merge((yyval.statementValue).continueList, (yyvsp[-1].statementValue).continueList);
        backPatch((yyval.statementValue).nextList,nextNum,functionInstruction);
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
    }
#line 3080 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1433 "miniC.y" /* yacc.c:1646  */
    {deleteVariableList(activeFunctionPointer,scope);}
#line 3086 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1434 "miniC.y" /* yacc.c:1646  */
    {
        deleteVariableList(activeFunctionPointer,scope);
        scope--;
        (yyval.statementValue).nextList= new vector<int>;
        (yyval.statementValue).breakList = new vector<int>;
        (yyval.statementValue).continueList= new vector<int>;
        backPatch((yyvsp[-10].whileExpressionValue).falseList,(yyvsp[-3].quad),functionInstruction);
        merge((yyval.statementValue).nextList,(yyvsp[-5].statementValue).nextList );
        backPatch((yyval.statementValue).nextList,nextNum,functionInstruction);
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
        merge((yyval.statementValue).breakList, (yyvsp[-8].statementValue).breakList);
        merge((yyval.statementValue).continueList, (yyvsp[-8].statementValue).continueList);
        merge((yyval.statementValue).breakList, (yyvsp[-1].statementValue).breakList);
        merge((yyval.statementValue).continueList, (yyvsp[-1].statementValue).continueList);
    }
#line 3106 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1452 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].expressionValue).type != ERRORTYPE && (yyvsp[-1].expressionValue).type!=NULLVOID){
            (yyval.whileExpressionValue).falseList = new vector <int>;
            (yyval.whileExpressionValue).falseList->push_back(nextNum);
            if((yyvsp[-1].expressionValue).type == NULLVOID){
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << "condition in if statement can't be empty" << endl;
                errorFound=true;
            }
            gen(functionInstruction, "if "+ (*((yyvsp[-1].expressionValue).registerName)) + " == 0 goto L", nextNum);
            scope++;
            temporarySet.freeRegister(*((yyvsp[-1].expressionValue).registerName));
        } 
    }
#line 3124 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1466 "miniC.y" /* yacc.c:1646  */
    {
        errorFound = 1;
        (yyval.whileExpressionValue).falseList = new vector <int>;
        cout << BOLD(FRED("ERROR : ")) << FYEL("Line no. " + to_string(yylineno) + ": Syntax error in if, discarding tokens till RPARE") << endl;
        scope++;
    }
#line 3135 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1475 "miniC.y" /* yacc.c:1646  */
    {
        deleteVariableList(activeFunctionPointer,scope);
        scope--;

        gen(functionInstruction, "goto L" + to_string((yyvsp[-3].whileExpressionValue).begin), nextNum);
        backPatch((yyvsp[-1].statementValue).nextList, (yyvsp[-3].whileExpressionValue).begin, functionInstruction);
        backPatch((yyvsp[-1].statementValue).continueList, (yyvsp[-3].whileExpressionValue).begin, functionInstruction);
        (yyval.statementValue).nextList = new vector<int>;
        merge((yyval.statementValue).nextList, (yyvsp[-3].whileExpressionValue).falseList);
        merge((yyval.statementValue).nextList, (yyvsp[-1].statementValue).breakList);
        backPatch((yyval.statementValue).nextList,nextNum,functionInstruction);
        gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
    }
#line 3153 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1491 "miniC.y" /* yacc.c:1646  */
    {
        scope++;
        if((yyvsp[-1].expressionValue).type == NULLVOID || (yyvsp[-1].expressionValue).type == ERRORTYPE){
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
            cout<<"Expression in if statement can't be empty"<<endl;
            errorFound = true;
        }
        else{
            (yyval.whileExpressionValue).falseList = new vector<int>;
            ((yyval.whileExpressionValue).falseList)->push_back(nextNum);
            gen(functionInstruction, "if " + *((yyvsp[-1].expressionValue).registerName) + "== 0 goto L", nextNum);
            (yyval.whileExpressionValue).begin = (yyvsp[-3].quad); 
        }
    }
#line 3172 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1506 "miniC.y" /* yacc.c:1646  */
    {   
        (yyval.whileExpressionValue).falseList = new vector<int>;
        cout << BOLD(FRED("ERROR : ")) << FYEL("Line no. " + to_string(yylineno) + ": Syntax error in while loop, discarding tokens till RPARE") << endl;
        scope++;
    }
#line 3182 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1514 "miniC.y" /* yacc.c:1646  */
    {
    (yyval.conditionTemp).temp = new vector<int>;
}
#line 3190 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1520 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].shortCircuitValue).type!=ERRORTYPE){
            (yyvsp[0].conditionTemp).temp->push_back(nextNum);
            gen(functionInstruction, "if " + *((yyvsp[-1].shortCircuitValue).registerName) + "!= 0 goto L", nextNum);

        }
    }
#line 3202 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1528 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-4].shortCircuitValue).type==ERRORTYPE || (yyvsp[0].shortCircuitValue).type==ERRORTYPE){
            (yyval.shortCircuitValue).type = ERRORTYPE;
        }
        else if((yyvsp[-4].shortCircuitValue).type == NULLVOID || (yyvsp[0].shortCircuitValue).type == NULLVOID){
            (yyval.shortCircuitValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ": Both the expessions should not be NULL" << endl;
        }
        else{
            (yyval.shortCircuitValue).type = BOOLEAN;
            (yyval.shortCircuitValue).registerName = new string(temporarySet.getRegister());
            vector<int>* queryList = new vector<int>;
            if((yyvsp[0].shortCircuitValue).jumpList!=NULL){
                queryList->push_back(nextNum);
                gen(functionInstruction,"goto L",nextNum);
                backPatch((yyvsp[0].shortCircuitValue).jumpList, nextNum, functionInstruction);
                gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
                gen(functionInstruction,(*((yyvsp[0].shortCircuitValue).registerName)) + " = 0",nextNum) ;
                backPatch(queryList,nextNum,functionInstruction);
                gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
                queryList->clear();
            }
            
            (yyval.shortCircuitValue).jumpList = new vector<int>;
            merge((yyval.shortCircuitValue).jumpList,(yyvsp[-4].shortCircuitValue).jumpList);
            
            merge((yyval.shortCircuitValue).jumpList, (yyvsp[-3].conditionTemp).temp);
            ((yyval.shortCircuitValue).jumpList)->push_back(nextNum);
            gen(functionInstruction, "if " + *((yyvsp[0].shortCircuitValue).registerName) + "!= 0 goto L", nextNum);
            string s = (*((yyval.shortCircuitValue).registerName)) + " = 0";   
            gen(functionInstruction,s,nextNum);
            temporarySet.freeRegister(*((yyvsp[-4].shortCircuitValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].shortCircuitValue).registerName)); 
        }
    }
#line 3242 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1564 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.shortCircuitValue).type = (yyvsp[0].shortCircuitValue).type;
        if ((yyval.shortCircuitValue).type != ERRORTYPE && (yyval.shortCircuitValue).type != NULLVOID) {
            (yyval.shortCircuitValue).registerName = (yyvsp[0].shortCircuitValue).registerName; 
            if((yyvsp[0].shortCircuitValue).jumpList!=NULL){
                vector<int>* queryList = new vector<int>;
                queryList->push_back(nextNum);
                gen(functionInstruction,"goto L",nextNum);
                backPatch((yyvsp[0].shortCircuitValue).jumpList, nextNum, functionInstruction);
                gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
                gen(functionInstruction,(*((yyval.shortCircuitValue).registerName)) + " = 0",nextNum) ;
                backPatch(queryList,nextNum,functionInstruction);
                gen(functionInstruction, "L" + to_string(nextNum) + ":", nextNum);
                queryList->clear();   
            }
        }
    }
#line 3264 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1585 "miniC.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].shortCircuitValue).type!=ERRORTYPE ){

          ((yyvsp[0].conditionTemp).temp)->push_back(nextNum);
         gen(functionInstruction, "if " + *((yyvsp[-1].shortCircuitValue).registerName) + " == 0 " +" goto L", nextNum);
      } 
    }
#line 3276 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1593 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-4].shortCircuitValue).type==ERRORTYPE || (yyvsp[0].expressionValue).type==ERRORTYPE) {
            (yyval.shortCircuitValue).type = ERRORTYPE;
        }
        else if((yyvsp[-4].shortCircuitValue).type == NULLVOID || (yyvsp[0].expressionValue).type == NULLVOID){
            (yyval.shortCircuitValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ": Both the expessions should not be NULL" << endl;
        }
        else{
            (yyval.shortCircuitValue).type = BOOLEAN;
            (yyval.shortCircuitValue).registerName = new string(temporarySet.getRegister());
            (yyval.shortCircuitValue).jumpList = new vector<int>;
            merge((yyval.shortCircuitValue).jumpList,(yyvsp[-4].shortCircuitValue).jumpList);
            vector<int>* queryList = new vector<int>;

            merge((yyval.shortCircuitValue).jumpList, (yyvsp[-3].conditionTemp).temp);
            ((yyval.shortCircuitValue).jumpList)->push_back(nextNum);
            gen(functionInstruction, "if " + *((yyvsp[0].expressionValue).registerName) + " == 0 "+" goto L", nextNum);

            string s = (*((yyval.shortCircuitValue).registerName)) + " = 1";   
            gen(functionInstruction,s,nextNum);
            temporarySet.freeRegister(*((yyvsp[-4].shortCircuitValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));   
        }
    }
#line 3306 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1619 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.shortCircuitValue).type = (yyvsp[0].expressionValue).type;
        if ((yyvsp[0].expressionValue).type != ERRORTYPE && (yyvsp[0].expressionValue).type != NULLVOID) {
            (yyval.shortCircuitValue).registerName = (yyvsp[0].expressionValue).registerName; 
            (yyval.shortCircuitValue).jumpList = new vector<int>;
            (yyval.shortCircuitValue).jumpList=NULL;   
        }
    }
#line 3319 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1630 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type;
        if ((yyvsp[0].expressionValue).type != ERRORTYPE && (yyvsp[0].expressionValue).type != NULLVOID) {
            (yyval.expressionValue).registerName = (yyvsp[0].expressionValue).registerName;
            string s = (*((yyval.expressionValue).registerName)) + " = ~" + (*((yyvsp[0].expressionValue).registerName));   
            gen(functionInstruction, s, nextNum);
        }
    }
#line 3332 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1639 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type;
        if ((yyvsp[0].expressionValue).type != ERRORTYPE && (yyvsp[0].expressionValue).type != NULLVOID) {
            (yyval.expressionValue).registerName = (yyvsp[0].expressionValue).registerName;    
        }
    }
#line 3343 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1648 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
        }
        else if((yyvsp[-2].expressionValue).type == NULLVOID || (yyvsp[0].expressionValue).type == NULLVOID){
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ":Both the expessions should not be  NULL" << endl;
        }
        else {
            (yyval.expressionValue).type = BOOLEAN;
            (yyval.expressionValue).registerName = new string(temporarySet.getRegister());     
            string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " == " + (*((yyvsp[0].expressionValue).registerName))   ;
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));  
        }   
    }
#line 3365 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1666 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE){
            (yyval.expressionValue).type = ERRORTYPE;
        }
        else if((yyvsp[-2].expressionValue).type == NULLVOID || (yyvsp[0].expressionValue).type == NULLVOID){
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ":Both the expessions should not be  NULL" << endl;
        }
        else{
            (yyval.expressionValue).type = BOOLEAN;
            (yyval.expressionValue).registerName = new string(temporarySet.getRegister());     
            string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " != " + (*((yyvsp[0].expressionValue).registerName));   
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));  
        }   
    }
#line 3387 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1684 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE){
            (yyval.expressionValue).type = ERRORTYPE;
        }
        else if((yyvsp[-2].expressionValue).type == NULLVOID || (yyvsp[0].expressionValue).type == NULLVOID){
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ":Both the expessions should not be  NULL" << endl;
        }
        else{
            (yyval.expressionValue).type = BOOLEAN;
            (yyval.expressionValue).registerName = new string(temporarySet.getRegister());     
            string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " < " + (*((yyvsp[0].expressionValue).registerName));   
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));  
        }   
    }
#line 3409 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1702 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE){
            (yyval.expressionValue).type = ERRORTYPE;
        }
        else if((yyvsp[-2].expressionValue).type == NULLVOID || (yyvsp[0].expressionValue).type == NULLVOID){
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ":Both the expessions should not be  NULL" << endl;
        }
        else{
            (yyval.expressionValue).type = BOOLEAN;
            (yyval.expressionValue).registerName = new string(temporarySet.getRegister());     
            string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " > " + (*((yyvsp[0].expressionValue).registerName));   
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));  
        }   
    }
#line 3431 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1720 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE){
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;
        }
        else if((yyvsp[-2].expressionValue).type == NULLVOID || (yyvsp[0].expressionValue).type == NULLVOID){
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ":Both the expessions should not be  NULL" << endl;
        }
        else{
            (yyval.expressionValue).type = BOOLEAN;
            (yyval.expressionValue).registerName = new string(temporarySet.getRegister());     
            string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " <= " + (*((yyvsp[0].expressionValue).registerName));   
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));  
        }   
    }
#line 3454 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1739 "miniC.y" /* yacc.c:1646  */
    {
        if((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE){
            (yyval.expressionValue).type = ERRORTYPE;
        }
        else if((yyvsp[-2].expressionValue).type == NULLVOID || (yyvsp[0].expressionValue).type == NULLVOID){
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. "<< yylineno << ":Both the expessions should not be  NULL" << endl;
        }
        else{
            (yyval.expressionValue).type = BOOLEAN;
            (yyval.expressionValue).registerName = new string(temporarySet.getRegister());     
            string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " >= " + (*((yyvsp[0].expressionValue).registerName));  
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
            temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));  
        }   
    }
#line 3476 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1757 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type; 
        if((yyval.expressionValue).type == ERRORTYPE){
            errorFound = true;
        }
        else{
            if((yyvsp[0].expressionValue).type != NULLVOID){
                (yyval.expressionValue).registerName = new string(*((yyvsp[0].expressionValue).registerName)); 
                delete (yyvsp[0].expressionValue).registerName; 
            }
        }    
    }
#line 3493 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1772 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE; 
            errorFound = true; 
        }
        else {
            if (arithmeticCompatible((yyvsp[-2].expressionValue).type, (yyvsp[0].expressionValue).type)) {
                (yyval.expressionValue).type = compareTypes((yyvsp[-2].expressionValue).type,(yyvsp[0].expressionValue).type);

                if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[-2].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                    (yyvsp[-2].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }
                else if ((yyvsp[-2].expressionValue).type == FLOATING && (yyvsp[0].expressionValue).type == INTEGER) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
                    (yyvsp[0].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }

                if ((yyval.expressionValue).type == INTEGER) 
                    (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
                else
                    (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
                    
                string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " + " + (*((yyvsp[0].expressionValue).registerName));;   
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));   
            }
            else {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
                cout << "Type mismatch in expression" << endl;
                (yyval.expressionValue).type = ERRORTYPE;
            }
        }
    }
#line 3541 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1816 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;
            errorFound = true;  
        }
        else {
            if (arithmeticCompatible((yyvsp[-2].expressionValue).type, (yyvsp[0].expressionValue).type)) {
                (yyval.expressionValue).type = compareTypes((yyvsp[-2].expressionValue).type,(yyvsp[0].expressionValue).type);

                if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[-2].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                    (yyvsp[-2].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }
                else if ((yyvsp[-2].expressionValue).type == FLOATING && (yyvsp[0].expressionValue).type == INTEGER) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
                    (yyvsp[0].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }

                if ((yyval.expressionValue).type == INTEGER) 
                    (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
                else
                    (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
                    
                string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " - " + (*((yyvsp[0].expressionValue).registerName));;   
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));   
            }
            else {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
                cout << "Type mismatch in expression" << endl;
                (yyval.expressionValue).type = ERRORTYPE;
            }
        }
    }
#line 3589 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1860 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type; 
        if ((yyvsp[0].expressionValue).type == ERRORTYPE) {
            errorFound = true;
        }
        else {
            if((yyvsp[0].expressionValue).type!= NULLVOID){
                (yyval.expressionValue).registerName = new string(*((yyvsp[0].expressionValue).registerName)); 
                delete (yyvsp[0].expressionValue).registerName;
            }         
        } 
    }
#line 3606 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1875 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;  
        }
        else {
            if (arithmeticCompatible((yyvsp[-2].expressionValue).type, (yyvsp[0].expressionValue).type)) {
                (yyval.expressionValue).type = compareTypes((yyvsp[-2].expressionValue).type,(yyvsp[0].expressionValue).type);

                if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[-2].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                    (yyvsp[-2].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }
                else if ((yyvsp[-2].expressionValue).type == FLOATING && (yyvsp[0].expressionValue).type == INTEGER) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
                    (yyvsp[0].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }

                if ((yyval.expressionValue).type == INTEGER) 
                    (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
                else
                    (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
                    
                string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " * " + (*((yyvsp[0].expressionValue).registerName));;   
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));   
            }
            else {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
                cout << "Type mismatch in expression" << endl;
                (yyval.expressionValue).type = ERRORTYPE;
            }
        }
    }
#line 3653 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1918 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
        (yyval.expressionValue).type = ERRORTYPE;  
        }
        else {
            if (arithmeticCompatible((yyvsp[-2].expressionValue).type, (yyvsp[0].expressionValue).type)) {
                (yyval.expressionValue).type = compareTypes((yyvsp[-2].expressionValue).type,(yyvsp[0].expressionValue).type);

                if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == FLOATING) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[-2].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                    (yyvsp[-2].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }
                else if ((yyvsp[-2].expressionValue).type == FLOATING && (yyvsp[0].expressionValue).type == INTEGER) {
                    string newReg = temporarySet.getFloatRegister();
                    string s = newReg + " = " + "convertToFloat(" + (*((yyvsp[0].expressionValue).registerName)) + ")";
                    cout << BOLD(FBLU("Warning : ")) << FCYN("Line No. "+to_string(yylineno)+":Implicit Type Conversion") << endl;
                    temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));
                    (yyvsp[0].expressionValue).registerName = &newReg;
                    gen(functionInstruction, s, nextNum);
                }

                if ((yyval.expressionValue).type == INTEGER) 
                    (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
                else
                    (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
                    
                string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " / " + (*((yyvsp[0].expressionValue).registerName));   
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));   
            }
            else {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
                cout << "Type mismatch in expression" << endl;
                (yyval.expressionValue).type = ERRORTYPE;
            }
        }   
    }
#line 3700 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1961 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].expressionValue).type == ERRORTYPE || (yyvsp[0].expressionValue).type == ERRORTYPE) {
            (yyval.expressionValue).type = ERRORTYPE;  
        }
        else {
            if ((yyvsp[-2].expressionValue).type == INTEGER && (yyvsp[0].expressionValue).type == INTEGER) {
                (yyval.expressionValue).type = INTEGER;
                (yyval.expressionValue).registerName = new string(temporarySet.getRegister());  
                string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[-2].expressionValue).registerName)) + " % " + (*((yyvsp[0].expressionValue).registerName));;   
                gen(functionInstruction, s, nextNum);
                temporarySet.freeRegister(*((yyvsp[-2].expressionValue).registerName));
                temporarySet.freeRegister(*((yyvsp[0].expressionValue).registerName));   
            }
            else {
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
                cout << "Type mismatch in expression" << endl;
                (yyval.expressionValue).type = ERRORTYPE;
            }
        }   
    }
#line 3725 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1982 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type; 
        if ((yyvsp[0].expressionValue).type == ERRORTYPE) {
            errorFound = true;
        }
        else {
            if((yyvsp[0].expressionValue).type != NULLVOID){
                (yyval.expressionValue).registerName = new string(*((yyvsp[0].expressionValue).registerName)); 
                delete (yyvsp[0].expressionValue).registerName;
            }  
        } 
    }
#line 3742 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1997 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type;
        if ((yyval.expressionValue).type != ERRORTYPE) {
            if ((yyval.expressionValue).type == INTEGER)
                (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
            else (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
            string s = (*((yyval.expressionValue).registerName)) + " = " + (*((yyvsp[0].expressionValue).registerName)) ;
            gen(functionInstruction, s, nextNum);
            if((yyvsp[0].expressionValue).offsetRegName != NULL){
                temporarySet.freeRegister((*((yyvsp[0].expressionValue).offsetRegName)));
            }
        }
    }
#line 3760 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2011 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type;
        if((yyvsp[0].expressionValue).type != ERRORTYPE){
            string s="";
            if ((yyval.expressionValue).type == INTEGER){
                (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
                string temp=temporarySet.getRegister();
                string temp1=temporarySet.getRegister();
                gen(functionInstruction, temp + " = 0", nextNum);
                gen(functionInstruction, temp1 + " = " +  (*((yyvsp[0].expressionValue).registerName)), nextNum);
                s = (*((yyval.expressionValue).registerName)) + " = " + temp + " -" + temp1 ;
                temporarySet.freeRegister(temp);
                temporarySet.freeRegister(temp1);
            }
            else{ 
                (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
                string temp=temporarySet.getFloatRegister();
                string temp1=temporarySet.getRegister();
                gen(functionInstruction, temp + " = 0", nextNum);
                gen(functionInstruction, temp1 + " = " +  (*((yyvsp[0].expressionValue).registerName)), nextNum);
                s = (*((yyval.expressionValue).registerName)) + " = 0 -" + temp1 ;
                temporarySet.freeRegister(temp);
                temporarySet.freeRegister(temp1);
            }
            // string s = (*($$.registerName)) + " = 0 -" + (*($2.registerName)) ;
            gen(functionInstruction, s, nextNum);
            if((yyvsp[0].expressionValue).offsetRegName != NULL){
                temporarySet.freeRegister((*((yyvsp[0].expressionValue).offsetRegName)));
            }
        }       
    }
#line 3796 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2043 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = INTEGER; 
        (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
        string s = (*((yyval.expressionValue).registerName)) + " = -" + string((yyvsp[0].idName)) ;
        gen(functionInstruction, s, nextNum);  
        
    }
#line 3808 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2051 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.expressionValue).type = INTEGER; 
        (yyval.expressionValue).registerName = new string(temporarySet.getRegister());
        string s = (*((yyval.expressionValue).registerName)) + " = " + string((yyvsp[0].idName)) ;
        gen(functionInstruction, s, nextNum);  
    }
#line 3819 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2058 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.expressionValue).type = FLOATING;
        (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
        string s = (*((yyval.expressionValue).registerName)) + " = " + string((yyvsp[0].idName)) ;
        gen(functionInstruction, s, nextNum);  
    }
#line 3830 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2065 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.expressionValue).type = FLOATING;
        (yyval.expressionValue).registerName = new string(temporarySet.getFloatRegister());
        string s = (*((yyval.expressionValue).registerName)) + " = " + string((yyvsp[0].idName)) ;
        gen(functionInstruction, s, nextNum);  
    }
#line 3841 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2072 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.expressionValue).type = (yyvsp[0].expressionValue).type; 
        if ((yyvsp[0].expressionValue).type == ERRORTYPE) {
            if ((yyvsp[0].expressionValue).type == NULLVOID){
                delete callFunctionPointer;
            }
            else {
                (yyval.expressionValue).registerName = (yyvsp[0].expressionValue).registerName;
                delete callFunctionPointer;
            }
        }; 
    }
#line 3858 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2085 "miniC.y" /* yacc.c:1646  */
    { 
        (yyval.expressionValue).type = (yyvsp[-1].expressionValue).type; 
        if ((yyvsp[-1].expressionValue).type != ERRORTYPE) {
            (yyval.expressionValue).registerName = (yyvsp[-1].expressionValue).registerName;
        }
    }
#line 3869 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2092 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].expressionValue).type == INTEGER) {
            (yyval.expressionValue).type = INTEGER;   
            string newReg = temporarySet.getRegister();
            (yyval.expressionValue).registerName = new string(newReg); 
            string s = newReg + " = " + (*((yyvsp[-1].expressionValue).registerName)) ;
            gen(functionInstruction, s, nextNum); // T2 = i
            string newReg2 = temporarySet.getRegister();
            s = newReg2 + " = " + newReg + " + 1"; // T3 = T2+1
            gen(functionInstruction, s, nextNum);
            s = (*((yyvsp[-1].expressionValue).registerName)) + " = " + newReg2; // i = T3
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(newReg2);
            if((yyvsp[-1].expressionValue).offsetRegName != NULL){
                temporarySet.freeRegister((*((yyvsp[-1].expressionValue).offsetRegName)));
            }
        }
        else {
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
            cout << "Cannot increment non-integer type variable "<< *((yyvsp[-1].expressionValue).registerName) << endl; 
        }
    }
#line 3897 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2116 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].expressionValue).type == INTEGER) {
            (yyval.expressionValue).type = INTEGER;   
            string newReg = temporarySet.getRegister();
            (yyval.expressionValue).registerName = new string(newReg);
            string s = newReg + " = " + (*((yyvsp[-1].expressionValue).registerName)); // T0 = i
            gen(functionInstruction, s, nextNum);
            string newReg2 = temporarySet.getRegister();
            s = newReg2 + " = " + newReg + " - 1"; // T3 = T2+1
            gen(functionInstruction, s, nextNum);
            s = (*((yyvsp[-1].expressionValue).registerName)) + " = " + newReg2; // i = T3
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(newReg2); 
            if((yyvsp[-1].expressionValue).offsetRegName != NULL){
                temporarySet.freeRegister((*((yyvsp[-1].expressionValue).offsetRegName)));
            }    
        }
        else {
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
            cout << "Cannot increment non-integer type variable " << *((yyvsp[-1].expressionValue).registerName) << endl; 
        }
    }
#line 3925 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2140 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].expressionValue).type == INTEGER) {
            (yyval.expressionValue).type = INTEGER;
            string newReg = temporarySet.getRegister();
            string s = newReg + " = " + (*((yyvsp[0].expressionValue).registerName)); // T2 = i
            gen(functionInstruction, s, nextNum);
            string newReg2 = temporarySet.getRegister();
            (yyval.expressionValue).registerName = new string(newReg2);
            s = newReg2 + " = " + newReg + " + 1"; // T3 = T2+1
            gen(functionInstruction, s, nextNum);
            s = (*((yyvsp[0].expressionValue).registerName)) + " = " + newReg2; // i = T3
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(newReg); 
            if((yyvsp[0].expressionValue).offsetRegName != NULL){
                temporarySet.freeRegister((*((yyvsp[0].expressionValue).offsetRegName)));
            }     
        }
        else {
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
            cout << "Cannot increment non-integer type variable "<<*((yyvsp[0].expressionValue).registerName) << endl; 
        }
    }
#line 3953 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2164 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].expressionValue).type == INTEGER) {
            (yyval.expressionValue).type = INTEGER;   
            string newReg = temporarySet.getRegister();
            string s = newReg + " = " + (*((yyvsp[0].expressionValue).registerName)); // T2 = i
            gen(functionInstruction, s, nextNum);
            string newReg2 = temporarySet.getRegister();
            (yyval.expressionValue).registerName = new string(newReg2);
            s = newReg2 + " = " + newReg + " - 1"; // T3 = T2+1
            gen(functionInstruction, s, nextNum);
            s = (*((yyvsp[0].expressionValue).registerName)) + " = " + newReg2; // i = T3
            gen(functionInstruction, s, nextNum);
            temporarySet.freeRegister(newReg);
            if((yyvsp[0].expressionValue).offsetRegName != NULL){
                temporarySet.freeRegister((*((yyvsp[0].expressionValue).offsetRegName)));
            }         
        }
        else {
            (yyval.expressionValue).type = ERRORTYPE;
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
            cout << "Cannot increment non-integer type variable " << *((yyvsp[0].expressionValue).registerName) << endl; 
        }
    }
#line 3981 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2190 "miniC.y" /* yacc.c:1646  */
    {   
        // retrieve the highest level id with same name in param list or var list or global list
        int found = 0;
        typeRecord* vn = NULL;
        searchCallVariable(string((yyvsp[0].idName)), activeFunctionPointer, found, vn, globalVariables); 
        (yyval.expressionValue).offsetRegName = NULL;
        if(found){
            if (vn->type == SIMPLE) {
                (yyval.expressionValue).type = vn->elementType;
                string dataType = elementTypeMapper((yyval.expressionValue).type);
                dataType += "_" + to_string(vn->scope);
                (yyval.expressionValue).registerName = new string("_" + string((yyvsp[0].idName)) + "_" + dataType);
            }
            else {
                (yyval.expressionValue).type = ERRORTYPE;
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ":  ";
                cout << (yyvsp[0].idName) << " is declared as an array but is being used as a singleton" << endl; 
            }
        }
        else {
            if (activeFunctionPointer != NULL)
                searchParameter(string ((yyvsp[0].idName)), activeFunctionPointer->parameterList, found, vn);
            if (found) {
                if (vn->type == SIMPLE) {
                    (yyval.expressionValue).type = vn->elementType;
                    string dataType = elementTypeMapper((yyval.expressionValue).type);
                    dataType += "_" + to_string(vn->scope);
                    (yyval.expressionValue).registerName = new string("_" + string((yyvsp[0].idName)) + "_" + dataType);
                }
                else {
                    (yyval.expressionValue).type = ERRORTYPE;
                    cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
                    cout << (yyvsp[0].idName) << " is declared as an array but is being used as a singleton" << endl;
                }
            }
            else {
                (yyval.expressionValue).type = ERRORTYPE;
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
                cout << "Undeclared identifier " << (yyvsp[0].idName) << endl;
            }
        }
    }
#line 4028 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2233 "miniC.y" /* yacc.c:1646  */
    {
        // retrieve the highest level id with same name in param list or var list
        int found = 0;
        typeRecord* vn = NULL;
        (yyval.expressionValue).offsetRegName = NULL; 
        if((yyvsp[0].expressionValue).type == ERRORTYPE){
            errorFound = true;
            (yyval.expressionValue).type = ERRORTYPE;
        }
        else{
            searchCallVariable(string((yyvsp[-1].idName)), activeFunctionPointer, found, vn, globalVariables); 
            if(found){
                if (vn->type == ARRAY) {
                    if (dimensionList.size() == vn->dimensionList.size()) {
                        (yyval.expressionValue).type = vn->elementType;
                        // calculate linear address using dimensions then pass to FACTOR
                        string offsetRegister = temporarySet.getRegister();
                        string dimlistRegister = temporarySet.getRegister();
                        string s = offsetRegister + " = 0";
                        gen(functionInstruction, s, nextNum);
                        for (int i = 0; i < vn->dimensionList.size(); i++) {
                            s = offsetRegister + " = " + offsetRegister + " + " + dimensionList[i];
                            gen(functionInstruction, s, nextNum);
                            // offset += dimensionList[i];
                            if (i != vn->dimensionList.size()-1) {
                                // offset *= vn->dimensionList[i+1];
                                s = dimlistRegister + " = " + to_string(vn->dimensionList[i+1]);
                                gen(functionInstruction, s, nextNum);                                
                                s = offsetRegister + " = " + offsetRegister + " * " + dimlistRegister;
                                gen(functionInstruction, s, nextNum);
                            }
                            temporarySet.freeRegister(dimensionList[i]);
                        }
                        string dataType = elementTypeMapper((yyval.expressionValue).type);
                        dataType += "_" + to_string(vn->scope); 
                        s = "_" + string((yyvsp[-1].idName)) + "_" + dataType ;
                        s += "[" + offsetRegister + "]";
                        (yyval.expressionValue).registerName = new string(s);
                        temporarySet.freeRegister(dimlistRegister);
                        (yyval.expressionValue).offsetRegName = new string(offsetRegister);
                        
                    }
                    else {
                        (yyval.expressionValue).type = ERRORTYPE;
                        cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
                        cout << "Dimension mismatch: " << (yyvsp[-1].idName) << " should have " << dimensionList.size() <<" dimensions" << endl;
                    }
                }
                else {
                    (yyval.expressionValue).type = ERRORTYPE;
                    cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
                    cout << string((yyvsp[-1].idName)) << " is declared as a singleton but is being used as an array" << endl; 
                }
            }
            else {
                (yyval.expressionValue).type = ERRORTYPE;
                cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
                cout << "Undeclared identifier " << (yyvsp[-1].idName) << endl;
            }
            dimensionList.clear();
        }
    }
#line 4095 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2298 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].expressionValue).type == INTEGER) {
            dimensionList.push_back(*((yyvsp[-1].expressionValue).registerName));
        }
        else {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
            cout << "One of the dimension of an array cannot be evaluated to integer" << endl;
        }
    }
#line 4109 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2308 "miniC.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].expressionValue).type == INTEGER) {
            dimensionList.push_back(*((yyvsp[-1].expressionValue).registerName));
        }
        else {
            cout << BOLD(FRED("ERROR : ")) << "Line no. " << yylineno << ": ";
            cout << "One of the dimension of an array cannot be evaluated to integer" << endl;
        }  
    }
#line 4123 "miniC.tab.c" /* yacc.c:1646  */
    break;


#line 4127 "miniC.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2319 "miniC.y" /* yacc.c:1906  */


void yyerror(const char *s)
{      
    errorFound=1;
    fprintf (stderr, "%s\n", s);
    // cout << "Line no. " << yylineno << ": Syntax error" << endl;
    // fflush(stdout);
}

int main(int argc, char **argv)
{
    nextNum = 0;
    scope = 0;
    found = 0;
    offsetValue = 0;
    errorFound=false;
    switchVariable.clear();
    dimensionList.clear();
    
    yyparse();
    populateOffsets(functionEntryRecord, globalVariables);
    ofstream outinter;
    outinter.open("./output/intermediate.txt");
    if(!errorFound){
        for(auto it:functionInstruction){
            outinter<<it<<endl;
        }
        cout << BOLD(FGRN("Intermediate Code Generated")) << endl;
    } else {
        cout << BOLD(FRED("Exited without intermediate code generation")) << endl;
    }
    outinter.close();
}
