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
#line 10 "src/parser/ffscript.ypp" /* yacc.c:339  */

#include <stdlib.h>
#include <stdio.h>
#include <cassert>
#include "AST.h"
#include "UtilVisitors.h"
#include "../zsyssimple.h"
#define YYINCLUDED_STDLIB_H
extern int yydebug;
extern int yylineno;
extern char* yytext;
extern int yylex(void);
extern FILE *yyin;
extern AST *resAST;
extern void resetLexer();
void yyerror(const char* s);
string curfilename;
extern YYLTYPE noloc;

#define SHORTCUT(x,d1,d3,dd,l1,l2) ASTExpr *lval = (ASTExpr *)d1; \
					Clone c; \
					lval->execute(c,NULL); \
					x *rhs = new x(l2); \
					rhs->setFirstOperand((ASTExpr *)c.getResult()); \
					rhs->setSecondOperand((ASTExpr *)d3); \
					dd = new ASTStmtAssign(lval, rhs, l1);

#line 94 "src/parser/y.tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.hpp".  */
#ifndef YY_YY_SRC_PARSER_Y_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SCRIPT = 258,
    FLOAT = 259,
    FOR = 260,
    BOOL = 261,
    VOID = 262,
    IF = 263,
    ELSE = 264,
    RETURN = 265,
    IMPORT = 266,
    TRUE = 267,
    FALSE = 268,
    WHILE = 269,
    FFC = 270,
    ITEM = 271,
    ITEMCLASS = 272,
    GLOBAL = 273,
    BREAK = 274,
    CONTINUE = 275,
    CONST = 276,
    DO = 277,
    NPC = 278,
    LWEAPON = 279,
    EWEAPON = 280,
    ASSIGN = 281,
    SEMICOLON = 282,
    COMMA = 283,
    LBRACKET = 284,
    RBRACKET = 285,
    LPAREN = 286,
    RPAREN = 287,
    DOT = 288,
    LBRACE = 289,
    RBRACE = 290,
    ARROW = 291,
    NUMBER = 292,
    PLUSASSIGN = 293,
    MINUSASSIGN = 294,
    TIMESASSIGN = 295,
    DIVIDEASSIGN = 296,
    ANDASSIGN = 297,
    ORASSIGN = 298,
    BITANDASSIGN = 299,
    BITORASSIGN = 300,
    BITXORASSIGN = 301,
    MODULOASSIGN = 302,
    LSHIFTASSIGN = 303,
    RSHIFTASSIGN = 304,
    IDENTIFIER = 305,
    QUOTEDSTRING = 306,
    SINGLECHAR = 307,
    ATSIGN = 308,
    LSHIFT = 309,
    RSHIFT = 310,
    BITAND = 311,
    BITOR = 312,
    BITXOR = 313,
    AND = 314,
    OR = 315,
    NOT = 316,
    BITNOT = 317,
    INCREMENT = 318,
    DECREMENT = 319,
    LE = 320,
    LT = 321,
    GE = 322,
    GT = 323,
    EQ = 324,
    NE = 325,
    PLUS = 326,
    MINUS = 327,
    TIMES = 328,
    DIVIDE = 329,
    MODULO = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "src/parser/y.tab.cpp" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   111,   114,   117,   118,   119,   120,   121,
     124,   128,   134,   150,   151,   154,   159,   160,   163,   166,
     171,   172,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   186,   187,   190,   194,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   244,   246,   250,   256,   264,   267,   271,
     279,   285,   291,   294,   300,   303,   309,   312,   318,   321,
     327,   330,   336,   339,   345,   348,   349,   352,   353,   354,
     355,   356,   357,   360,   366,   369,   370,   373,   379,   382,
     383,   384,   387,   391,   395,   399,   402,   403,   404,   408,
     412,   416,   420,   422,   426,   427,   428,   431,   432,   435,
     439,   445,   449,   455,   459,   463,   471,   475,   481,   488,
     492,   496,   499,   505,   506,   513,   531,   532,   534,   539,
     546,   557,   566,   570,   578,   583,   589,   595,   601,   608,
     616,   627,   632
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SCRIPT", "FLOAT", "FOR", "BOOL", "VOID",
  "IF", "ELSE", "RETURN", "IMPORT", "TRUE", "FALSE", "WHILE", "FFC",
  "ITEM", "ITEMCLASS", "GLOBAL", "BREAK", "CONTINUE", "CONST", "DO", "NPC",
  "LWEAPON", "EWEAPON", "ASSIGN", "SEMICOLON", "COMMA", "LBRACKET",
  "RBRACKET", "LPAREN", "RPAREN", "DOT", "LBRACE", "RBRACE", "ARROW",
  "NUMBER", "PLUSASSIGN", "MINUSASSIGN", "TIMESASSIGN", "DIVIDEASSIGN",
  "ANDASSIGN", "ORASSIGN", "BITANDASSIGN", "BITORASSIGN", "BITXORASSIGN",
  "MODULOASSIGN", "LSHIFTASSIGN", "RSHIFTASSIGN", "IDENTIFIER",
  "QUOTEDSTRING", "SINGLECHAR", "ATSIGN", "LSHIFT", "RSHIFT", "BITAND",
  "BITOR", "BITXOR", "AND", "OR", "NOT", "BITNOT", "INCREMENT",
  "DECREMENT", "LE", "LT", "GE", "GT", "EQ", "NE", "PLUS", "MINUS",
  "TIMES", "DIVIDE", "MODULO", "$accept", "Init", "Prog", "GlobalStmt",
  "ConstDecl", "Script", "ScriptType", "Import", "ScriptBlock",
  "ScriptStmtList", "ScriptStmt", "Type", "Block", "StmtList", "Stmt",
  "StmtNoSemi", "ShortcutAssignStmt", "AssignStmt", "DotExpr", "ConstExpr",
  "Expr", "Expr15", "Expr16", "Expr17", "Expr18", "Expr2", "Expr25",
  "ShiftOp", "RelOp", "Expr3", "AddOp", "Expr4", "MultOp", "Expr5",
  "Factor", "BoolConstant", "FuncCall", "ExprList", "FuncId", "TypeList",
  "ForStmt", "WhileStmt", "DoStmt", "IfStmt", "ReturnStmt", "FuncDecl",
  "FuncParamList", "FuncParamList1", "FuncParam", "VarDecl", "VarDeclList",
  "VarDeclElement", "ArrayInitializer", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330
};
# endif

#define YYPACT_NINF -189

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-189)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -189,    26,   184,  -189,  -189,  -189,  -189,   -16,  -189,  -189,
    -189,  -189,    41,  -189,  -189,  -189,  -189,  -189,  -189,    67,
    -189,    21,  -189,    46,  -189,    31,    33,    17,    59,  -189,
    -189,    70,    63,   475,   430,   262,    49,   -28,    94,  -189,
    -189,  -189,   475,  -189,    18,  -189,    54,   475,   475,    55,
      55,   475,    -9,    47,    34,    51,    57,    56,    86,   -24,
      20,     1,  -189,  -189,  -189,  -189,  -189,    87,    90,    47,
      66,   105,   110,  -189,    43,  -189,   112,   106,  -189,   109,
     262,    21,  -189,   118,    -8,   475,    96,   116,  -189,  -189,
     121,   121,  -189,   458,   108,  -189,  -189,   475,   475,   475,
     475,   475,  -189,  -189,  -189,  -189,  -189,  -189,   475,  -189,
    -189,   475,  -189,  -189,   475,  -189,  -189,  -189,   475,     7,
     133,  -189,   126,   262,  -189,   135,  -189,  -189,  -189,  -189,
      -1,   134,   117,  -189,    -3,   136,   137,    34,    51,    57,
      56,    86,   -24,    20,     1,  -189,   475,  -189,    16,   230,
    -189,  -189,  -189,  -189,   475,  -189,   141,   138,   475,  -189,
     475,     0,   139,   475,  -189,   140,   142,   475,   158,   145,
     165,   352,  -189,  -189,    49,  -189,   291,  -189,   169,   170,
     514,   -11,  -189,  -189,  -189,  -189,   171,   176,     2,   262,
    -189,  -189,     3,   475,  -189,   175,   413,   475,    47,   475,
    -189,  -189,   190,  -189,  -189,  -189,  -189,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,   179,  -189,  -189,    47,  -189,  -189,  -189,  -189,  -189,
    -189,     5,     6,   180,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,   475,   352,   352,
     475,    -4,   205,  -189,     8,   413,   352,  -189,   183,  -189,
     352,  -189
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    22,    23,    24,     0,    25,    26,
      27,    14,     0,    28,    29,    30,     3,     8,     5,     0,
       6,    13,     7,     0,    15,     0,     0,   154,   151,   152,
       9,     0,     0,     0,     0,   146,     0,     0,     0,    12,
     127,   128,     0,   122,    77,   123,     0,     0,     0,     0,
       0,     0,   117,   155,    82,    84,    86,    88,    90,    92,
      94,   104,   108,   115,   124,   125,   126,     0,     0,    80,
       0,     0,   147,   148,   154,   153,     0,     0,    17,     0,
      19,     0,    21,     0,     0,     0,     0,   133,   112,   114,
     119,   121,   113,     0,     0,   118,   120,     0,     0,     0,
       0,     0,   100,    99,    98,    97,   101,   102,     0,    95,
      96,     0,   105,   106,     0,   109,   110,   111,     0,     0,
     156,   150,     0,     0,    10,     0,    16,    18,    20,   116,
       0,    74,     0,   130,   132,     0,    78,    81,    83,    85,
      87,    89,    91,    93,   103,   107,     0,   159,     0,     0,
     145,   149,    11,    75,     0,   134,   137,     0,     0,   129,
       0,   161,     0,     0,   160,     0,     0,   144,     0,     0,
       0,     0,    44,    32,     0,    40,     0,    34,     0,     0,
     117,     0,    38,    42,    43,    39,     0,     0,     0,     0,
     135,   131,     0,     0,   157,     0,    57,     0,   143,     0,
      46,    47,     0,    31,    33,    37,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    41,    35,    76,   136,    79,   162,   158,    59,    60,
      53,     0,    50,    49,    58,    51,    55,    56,    52,    54,
      48,     0,     0,     0,    73,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    72,    70,    71,     0,     0,     0,
       0,     0,   141,   139,     0,    57,     0,   140,     0,   142,
       0,   138
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,   143,
    -189,     4,  -117,  -189,  -164,   -49,  -188,  -185,   -46,  -189,
     -32,   120,   123,   119,   122,   125,   124,  -189,  -189,   128,
    -189,   113,  -189,   -33,  -189,  -189,  -189,    71,  -189,    42,
    -183,  -179,  -177,  -176,  -175,   228,  -189,  -189,   147,    -2,
    -189,   212,  -129
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    16,    17,    18,    19,    20,    39,    79,
      80,   174,   175,   176,   177,   231,   178,   179,    52,    68,
     181,    54,    55,    56,    57,    58,    59,   111,   108,    60,
     114,    61,   118,    62,    63,    64,    65,   135,    66,   157,
     182,   183,   184,   185,   186,    82,    71,    72,    73,   187,
      28,    29,   162
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      23,    53,    69,    90,    91,   150,    21,   202,   232,    76,
      84,   233,   204,   235,    88,    89,   220,   236,    92,   237,
     238,   239,    93,   265,   129,   158,     3,    94,   193,   153,
     109,   110,   223,   225,   195,    24,    83,   258,   259,    70,
     267,   146,    81,    33,    77,    25,    34,    85,    35,    97,
     163,    86,    97,   130,    95,    96,    97,    97,   147,    97,
      97,   134,    97,    97,   226,    97,    97,   164,    97,    33,
      26,    27,    34,    30,   115,   116,   117,   232,    83,   230,
     233,    31,   235,    32,    81,   145,   236,    36,   237,   238,
     239,   112,   113,    98,   262,   263,    37,    38,     4,    74,
       5,     6,   269,   180,    87,    44,   271,    97,    99,     8,
       9,    10,   101,   119,   161,   100,   121,    13,    14,    15,
     120,     4,   188,     5,     6,   180,   134,    70,   192,    78,
     180,   161,     8,     9,    10,   198,   156,   122,   123,   124,
      13,    14,    15,   125,   126,   128,   131,   132,   230,   155,
     180,   102,   103,   104,   105,   106,   107,    94,   136,   148,
     149,   161,   152,   154,   234,   241,   160,   242,   159,   189,
     190,   196,   200,   197,   194,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,     4,   199,
       5,     6,   201,   156,   240,     7,   205,   206,   221,     8,
       9,    10,    11,   222,   243,    12,   257,    13,    14,    15,
     227,   260,   180,   180,   266,   270,   268,   137,   139,   180,
     180,   138,   140,   127,   180,   261,   141,   144,   264,   191,
      22,   224,   142,   234,     4,   165,     5,     6,   166,   143,
     167,     0,    40,    41,   168,     8,     9,    10,    75,   169,
     170,     0,   171,    13,    14,    15,     0,   172,     0,     0,
       0,    42,     0,   240,   149,   173,     4,    43,     5,     6,
     151,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      44,     0,    45,    46,     0,    13,    14,    15,     0,     0,
       0,    47,    48,    49,    50,     4,   165,     5,     6,   166,
       0,   167,    51,    40,    41,   168,     8,     9,    10,     0,
     169,   170,     0,   171,    13,    14,    15,     0,   172,     0,
       0,     0,    42,     0,     0,   149,   203,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,    46,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     4,   165,     5,     6,
     166,     0,   167,    51,    40,    41,   168,     8,     9,    10,
       0,   169,   170,     0,   171,    13,    14,    15,     0,   172,
       0,     0,     0,    42,     0,     0,   149,     0,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,     4,   165,     5,
       6,   166,     0,   167,    51,    40,    41,   168,     8,     9,
      10,     0,   228,   229,     0,   171,    13,    14,    15,     0,
       0,     0,    40,    41,    42,     0,     0,   149,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    42,     0,    44,     0,    45,    46,    43,     0,     0,
      40,    41,     0,     0,    47,    48,    49,    50,     0,     0,
      44,     0,    45,    46,     0,    51,     0,    40,    41,    42,
     133,    47,    48,    49,    50,    43,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,    42,     0,    44,     0,
      45,    46,    43,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,     0,     0,    44,     0,    45,    46,     0,
      51,     0,     0,     0,     0,     0,    47,    48,    49,    50,
     207,     0,     0,     0,     0,    93,     0,    51,     0,     0,
      94,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96
};

static const yytype_int16 yycheck[] =
{
       2,    33,    34,    49,    50,   122,     2,   171,   196,    37,
      42,   196,   176,   196,    47,    48,    27,   196,    51,   196,
     196,   196,    31,    27,    32,    28,     0,    36,    28,    30,
      54,    55,    30,    30,   163,    51,    38,    32,    32,    35,
      32,    34,    38,    26,    72,     4,    29,    29,    31,    60,
      34,    33,    60,    85,    63,    64,    60,    60,    51,    60,
      60,    93,    60,    60,   193,    60,    60,    51,    60,    26,
       3,    50,    29,    27,    73,    74,    75,   265,    80,   196,
     265,    50,   265,    50,    80,   118,   265,    28,   265,   265,
     265,    71,    72,    59,   258,   259,    26,    34,     4,    50,
       6,     7,   266,   149,    50,    50,   270,    60,    57,    15,
      16,    17,    56,    26,   146,    58,    50,    23,    24,    25,
      30,     4,   154,     6,     7,   171,   158,   123,   160,    35,
     176,   163,    15,    16,    17,   167,   132,    32,    28,    27,
      23,    24,    25,    37,    35,    27,    50,    31,   265,    32,
     196,    65,    66,    67,    68,    69,    70,    36,    50,    26,
      34,   193,    27,    29,   196,   197,    29,   199,    32,    28,
      32,    31,    27,    31,    35,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,     4,    31,
       6,     7,    27,   189,   196,    11,    27,    27,    27,    15,
      16,    17,    18,    27,    14,    21,    27,    23,    24,    25,
      35,    31,   258,   259,     9,    32,   265,    97,    99,   265,
     266,    98,   100,    80,   270,   257,   101,   114,   260,   158,
       2,   189,   108,   265,     4,     5,     6,     7,     8,   111,
      10,    -1,    12,    13,    14,    15,    16,    17,    36,    19,
      20,    -1,    22,    23,    24,    25,    -1,    27,    -1,    -1,
      -1,    31,    -1,   265,    34,    35,     4,    37,     6,     7,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      50,    -1,    52,    53,    -1,    23,    24,    25,    -1,    -1,
      -1,    61,    62,    63,    64,     4,     5,     6,     7,     8,
      -1,    10,    72,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    22,    23,    24,    25,    -1,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,     4,     5,     6,     7,
       8,    -1,    10,    72,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    -1,    22,    23,    24,    25,    -1,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,     4,     5,     6,
       7,     8,    -1,    10,    72,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    22,    23,    24,    25,    -1,
      -1,    -1,    12,    13,    31,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    50,    -1,    52,    53,    37,    -1,    -1,
      12,    13,    -1,    -1,    61,    62,    63,    64,    -1,    -1,
      50,    -1,    52,    53,    -1,    72,    -1,    12,    13,    31,
      32,    61,    62,    63,    64,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    31,    -1,    50,    -1,
      52,    53,    37,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    50,    -1,    52,    53,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      26,    -1,    -1,    -1,    -1,    31,    -1,    72,    -1,    -1,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    78,     0,     4,     6,     7,    11,    15,    16,
      17,    18,    21,    23,    24,    25,    79,    80,    81,    82,
      83,    87,   121,   125,    51,     4,     3,    50,   126,   127,
      27,    50,    50,    26,    29,    31,    28,    26,    34,    84,
      12,    13,    31,    37,    50,    52,    53,    61,    62,    63,
      64,    72,    94,    96,    97,    98,    99,   100,   101,   102,
     105,   107,   109,   110,   111,   112,   114,    30,    95,    96,
      87,   122,   123,   124,    50,   127,    37,    72,    35,    85,
      86,    87,   121,   125,    96,    29,    33,    50,   109,   109,
      94,    94,   109,    31,    36,    63,    64,    60,    59,    57,
      58,    56,    65,    66,    67,    68,    69,    70,   104,    54,
      55,   103,    71,    72,   106,    73,    74,    75,   108,    26,
      30,    50,    32,    28,    27,    37,    35,    85,    27,    32,
      96,    50,    31,    32,    96,   113,    50,    97,    98,    99,
     100,   101,   102,   105,   107,   109,    34,    51,    26,    34,
      88,   124,    27,    30,    29,    32,    87,   115,    28,    32,
      29,    96,   128,    34,    51,     5,     8,    10,    14,    19,
      20,    22,    27,    35,    87,    88,    89,    90,    92,    93,
      94,    96,   116,   117,   118,   119,   120,   125,    96,    28,
      32,   113,    96,    28,    35,   128,    31,    31,    96,    31,
      27,    27,    90,    35,    90,    27,    27,    26,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      27,    27,    27,    30,   115,    30,   128,    35,    19,    20,
      88,    91,    92,    93,    96,   116,   117,   118,   119,   120,
     125,    96,    96,    14,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    27,    32,    32,
      31,    96,    90,    90,    96,    27,     9,    32,    91,    90,
      32,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    79,    79,    79,
      80,    80,    81,    82,    82,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    94,    94,    94,    94,    94,    94,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   117,
     118,   119,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   128,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     2,
       6,     7,     4,     1,     1,     2,     3,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     1,     2,     2,     2,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     6,     1,     3,     6,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     2,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     3,     1,     2,     4,     5,     3,     1,     9,     5,
       6,     5,     7,     2,     1,     6,     0,     1,     1,     3,
       2,     2,     1,     3,     1,     3,     4,     7,     8,     5,
       6,     1,     3
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 108 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {resAST = new ASTProgram((ASTDeclList *)(yyvsp[0]), (yylsp[0]));}
#line 1682 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTDeclList *list = (ASTDeclList *)(yyvsp[-1]);
				list->addDeclaration((ASTDecl *)(yyvsp[0]));
				(yyval) = list;}
#line 1690 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 114 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTDeclList(noloc);}
#line 1696 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 117 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1702 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1708 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 119 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1714 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 120 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1720 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 121 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1726 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 124 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTString *name = (ASTString *)(yyvsp[-3]);
															ASTFloat *val = (ASTFloat *)(yyvsp[-1]);
															(yyval) = new ASTConstDecl(name->getValue(), val,(yylsp[-5]));
															delete name;}
#line 1735 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTString *name = (ASTString *)(yyvsp[-4]);
																  ASTFloat *val = (ASTFloat *)(yyvsp[-1]);
																  val->set_negative(true);
																  (yyval) = new ASTConstDecl(name->getValue(), val,(yylsp[-6]));
																  delete name;}
#line 1745 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 134 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTType *type = (ASTType *)(yyvsp[-3]);
												   int scripttype; //Itemdata pointer instead of item pointer
												   ExtractType temp;
												   type->execute(temp, &scripttype);
												   if(scripttype == ScriptParser::TYPE_ITEM)
												   {
													  ASTType *t = type; //so we can keep the locationdata before deleting
													  type = new ASTTypeItemclass(type->getLocation());
													  delete t;
												   }
												   ASTString *name = (ASTString *)(yyvsp[-1]);
												   ASTDeclList *sblock = (ASTDeclList *)(yyvsp[0]);
												   (yyval) = new ASTScript(type, name->getValue(), sblock,(yylsp[-3]));
												   delete name;}
#line 1764 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 150 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1770 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 151 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeGlobal((yylsp[0]));}
#line 1776 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 154 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTString *str = (ASTString *)(yyvsp[0]);
								 (yyval) = new ASTImportDecl(str->getValue(),(yylsp[-1]));
								 delete str;}
#line 1784 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 159 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1790 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 160 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTDeclList((yylsp[-1]));}
#line 1796 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 163 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTDeclList *dl = (ASTDeclList *)(yyvsp[0]);
											dl->addDeclaration((ASTDecl *)(yyvsp[-1]));
											(yyval) = dl;}
#line 1804 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 166 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {	ASTDeclList *dl = new ASTDeclList((yylsp[0]));
					dl->addDeclaration((ASTDecl *)(yyvsp[0]));
					(yyval) = dl;}
#line 1812 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 171 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1818 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 172 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1824 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 175 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeFloat((yylsp[0]));}
#line 1830 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 176 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeBool((yylsp[0]));}
#line 1836 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 177 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeVoid((yylsp[0]));}
#line 1842 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 178 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeFFC((yylsp[0]));}
#line 1848 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 179 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeItem((yylsp[0]));}
#line 1854 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 180 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeItemclass((yylsp[0]));}
#line 1860 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 181 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeNPC((yylsp[0]));}
#line 1866 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 182 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeLWpn((yylsp[0]));}
#line 1872 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTTypeEWpn((yylsp[0]));}
#line 1878 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 186 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1884 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 187 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTBlock((yylsp[-1]));}
#line 1890 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 190 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTBlock *block = (ASTBlock *)(yyvsp[-1]);
				  ASTStmt *stmt = (ASTStmt *)(yyvsp[0]);
				  block->addStatement(stmt);
				  (yyval) = block;}
#line 1899 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 194 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTBlock *block = new ASTBlock((yylsp[0]));
		  ASTStmt *stmt = (ASTStmt *)(yyvsp[0]);
		  block->addStatement(stmt);
		  (yyval) = block;}
#line 1908 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 200 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1914 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 201 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1920 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 202 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1926 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 203 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1932 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 204 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1938 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 205 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1944 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 206 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1950 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 207 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1956 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 208 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1962 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 209 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtEmpty((yylsp[0]));}
#line 1968 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 210 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1974 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 211 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtBreak((yylsp[-1]));}
#line 1980 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 212 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtContinue((yylsp[-1]));}
#line 1986 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 215 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1992 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 216 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1998 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 217 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2004 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 218 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2010 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 219 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2016 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 220 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2022 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 221 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2028 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 222 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2034 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 223 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2040 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 224 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtEmpty(noloc);}
#line 2046 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 225 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2052 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 226 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtBreak((yylsp[0]));}
#line 2058 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 227 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtContinue((yylsp[0]));}
#line 2064 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 230 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprPlus,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2070 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 231 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprMinus,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2076 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 232 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprTimes,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2082 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 233 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprDivide,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2088 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 234 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprAnd,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2094 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 235 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprOr,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2100 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 236 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprBitAnd,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2106 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 237 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprBitOr,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2112 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 238 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprBitXor,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2118 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 239 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprLShift,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2124 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 240 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprRShift,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2130 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {SHORTCUT(ASTExprModulo,(yyvsp[-2]),(yyvsp[0]),(yyval),(yylsp[-2]),(yylsp[-1])) }
#line 2136 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtAssign((ASTStmt *)(yyvsp[-2]), (ASTExpr *)(yyvsp[0]),(yylsp[-2]));}
#line 2142 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 246 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTString *lval = (ASTString *)(yyvsp[-2]);
						 ASTString *rval = (ASTString *)(yyvsp[0]);
						 (yyval) = new ASTExprDot(lval->getValue(), rval->getValue(),(yylsp[-2]));
						 delete lval; delete rval;}
#line 2151 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 250 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    { ASTString *name = (ASTString *)(yyvsp[-3]);
										ASTExpr *num = (ASTExpr *)(yyvsp[-1]);
										ASTExprArray *ar = new ASTExprArray("", name->getValue(), (yylsp[-3]));
										ar->setIndex(num);
										(yyval) = ar;
										delete name;}
#line 2162 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 256 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    { ASTString *name = (ASTString *)(yyvsp[-5]);
										ASTString *name2 = (ASTString *)(yyvsp[-3]);
										ASTExpr *num = (ASTExpr *)(yyvsp[-1]);
										ASTExprArray *ar = new ASTExprArray(name->getValue(), name2->getValue(), (yylsp[-5]));
										ar->setIndex(num);
										(yyval) = ar;
										delete name;
										delete name2;}
#line 2175 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 264 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTString *rval = (ASTString *)(yyvsp[0]);
				  (yyval) = new ASTExprDot("", rval->getValue(),(yylsp[0]));
				  delete rval;}
#line 2183 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 267 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTExpr *id = (ASTExpr *)(yyvsp[-2]);
								ASTString *rval = (ASTString *)(yyvsp[0]);
								(yyval) = new ASTExprArrow(id, rval->getValue(), (yylsp[-2]));
								delete rval;}
#line 2192 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 271 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTExpr *id = (ASTExpr *)(yyvsp[-5]);
											       	   ASTString *rval = (ASTString *)(yyvsp[-3]);
													   ASTExpr *num = (ASTExpr *)(yyvsp[-1]);
													   ASTExprArrow *res = new ASTExprArrow(id, rval->getValue(), (yylsp[-5]));
													   res->setIndex(num);
													   (yyval) = res;}
#line 2203 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 279 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
		ASTExpr *expr = (ASTExpr *)(yyvsp[0]);
		expr->forceConstant();
		(yyval) = expr;}
#line 2212 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 285 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTLogExpr *e = new ASTExprOr((yylsp[-1]));
				 ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
				 ASTExpr *right = (ASTExpr *)(yyvsp[0]);
				 e->setFirstOperand(left);
				 e->setSecondOperand(right);
				 (yyval)=e;}
#line 2223 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 291 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2229 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 294 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTLogExpr *e = new ASTExprAnd((yylsp[-1]));
				 ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
				 ASTExpr *right = (ASTExpr *)(yyvsp[0]);
				 e->setFirstOperand(left);
				 e->setSecondOperand(right);
				 (yyval)=e;}
#line 2240 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 300 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2246 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 303 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTBitExpr *e = new ASTExprBitOr((yylsp[-1]));
							  ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
							  ASTExpr *right = (ASTExpr *)(yyvsp[0]);
							  e->setFirstOperand(left);
							  e->setSecondOperand(right);
							  (yyval)=e;}
#line 2257 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 309 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2263 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 312 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTBitExpr *e = new ASTExprBitXor((yylsp[-1]));
							   ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
							   ASTExpr *right = (ASTExpr *)(yyvsp[0]);
							   e->setFirstOperand(left);
							   e->setSecondOperand(right);
							   (yyval)=e;}
#line 2274 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 318 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2280 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 321 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTBitExpr *e = new ASTExprBitAnd((yylsp[-1]));
							   ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
							   ASTExpr *right = (ASTExpr *)(yyvsp[0]);
							   e->setFirstOperand(left);
							   e->setSecondOperand(right);
							   (yyval)=e;}
#line 2291 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 327 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2297 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 330 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTRelExpr *e = (ASTRelExpr *)(yyvsp[-1]);
				   ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
				   ASTExpr *right = (ASTExpr *)(yyvsp[0]);
				   e->setFirstOperand(left);
				   e->setSecondOperand(right);
				   (yyval)=e;}
#line 2308 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 336 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2314 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 339 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTShiftExpr *e = (ASTShiftExpr *)(yyvsp[-1]);
							   ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
							   ASTExpr *right = (ASTExpr *)(yyvsp[0]);
							   e->setFirstOperand(left);
							   e->setSecondOperand(right);
							   (yyval)=e;}
#line 2325 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 345 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2331 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 348 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprLShift((yylsp[0]));}
#line 2337 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 349 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprRShift((yylsp[0]));}
#line 2343 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 352 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprGT((yylsp[0]));}
#line 2349 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 353 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprGE((yylsp[0]));}
#line 2355 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 354 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprLT((yylsp[0]));}
#line 2361 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 355 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprLE((yylsp[0]));}
#line 2367 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 356 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprEQ((yylsp[0]));}
#line 2373 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 357 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprNE((yylsp[0]));}
#line 2379 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 360 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTAddExpr *e = (ASTAddExpr *)(yyvsp[-1]);
				   ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
				   ASTExpr *right = (ASTExpr *)(yyvsp[0]);
				   e->setFirstOperand(left);
				   e->setSecondOperand(right);
				   (yyval)=e;}
#line 2390 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 366 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2396 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 369 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprPlus((yylsp[0]));}
#line 2402 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 370 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprMinus((yylsp[0]));}
#line 2408 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 373 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTMultExpr *e = (ASTMultExpr *)(yyvsp[-1]);
				    ASTExpr *left = (ASTExpr *)(yyvsp[-2]);
				    ASTExpr *right = (ASTExpr *)(yyvsp[0]);
				    e->setFirstOperand(left);
				    e->setSecondOperand(right);
				    (yyval)=e;}
#line 2419 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 379 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2425 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 382 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprTimes((yylsp[0]));}
#line 2431 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 383 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprDivide((yylsp[0]));}
#line 2437 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 384 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTExprModulo((yylsp[0]));}
#line 2443 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 387 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTUnaryExpr *e = new ASTExprNot((yylsp[-1]));
			 ASTExpr *op = (ASTExpr *)(yyvsp[0]);
			 e->setOperand(op);
			 (yyval)=e;}
#line 2452 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 391 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTUnaryExpr *e = new ASTExprNegate((yylsp[-1]));
			   ASTExpr *op = (ASTExpr *)(yyvsp[0]);
			   e->setOperand(op);
			   (yyval)=e;}
#line 2461 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 395 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTUnaryExpr *e = new ASTExprBitNot((yylsp[-1]));
					ASTExpr *op = (ASTExpr *)(yyvsp[0]);
					e->setOperand(op);
					(yyval)=e;}
#line 2470 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 399 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2476 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 402 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2482 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 403 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2488 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 404 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTUnaryExpr *e = new ASTExprIncrement((yylsp[0]));
						 ASTExpr *op = (ASTExpr *)(yyvsp[-1]);
						 e->setOperand(op);
						 (yyval)=e;}
#line 2497 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 408 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTUnaryExpr *e = new ASTExprPreIncrement((yylsp[-1]));
						 ASTExpr *op = (ASTExpr *)(yyvsp[0]);
						 e->setOperand(op);
						 (yyval)=e;}
#line 2506 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 412 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTUnaryExpr *e = new ASTExprDecrement((yylsp[0]));
						 ASTExpr *op = (ASTExpr *)(yyvsp[-1]);
						 e->setOperand(op);
						 (yyval)=e;}
#line 2515 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 416 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTUnaryExpr *e = new ASTExprPreDecrement((yylsp[-1]));
						 ASTExpr *op = (ASTExpr *)(yyvsp[0]);
						 e->setOperand(op);
						 (yyval)=e;}
#line 2524 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 420 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTFloat *val = (ASTFloat *)(yyvsp[0]);
		    (yyval) = new ASTNumConstant(val,(yylsp[0]));}
#line 2531 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 422 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTString *as = (ASTString *)(yyvsp[0]);
			char val[15];
			sprintf(val, "%d", as->getValue().at(1));
			(yyval) = new ASTNumConstant(new ASTFloat(val,0,(yylsp[0])),(yylsp[0]));}
#line 2540 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 426 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2546 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 427 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2552 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 428 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2558 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 431 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTBoolConstant(true,(yylsp[0]));}
#line 2564 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 432 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTBoolConstant(false,(yylsp[0]));}
#line 2570 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 435 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTFuncCall *fc = (ASTFuncCall *)(yyvsp[-1]);
							    ASTExpr *name = (ASTExpr *)(yyvsp[-3]);
							    fc->setName(name);
							    (yyval)=fc;}
#line 2579 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 439 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTFuncCall *fc = new ASTFuncCall((yylsp[-2]));
					    ASTExpr *name = (ASTExpr *)(yyvsp[-2]);
					    fc->setName(name);
					    (yyval)=fc;}
#line 2588 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 445 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTFuncCall *fc = (ASTFuncCall *)(yyvsp[0]);
					  ASTExpr *e = (ASTExpr *)(yyvsp[-2]);
					  fc->addParam(e);
					  (yyval) = fc;}
#line 2597 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 449 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTFuncCall *fc = new ASTFuncCall((yylsp[0]));
		  ASTExpr *e = (ASTExpr *)(yyvsp[0]);
		  fc->addParam(e);
		  (yyval) = fc;}
#line 2606 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 455 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
		ASTString *name = (ASTString *)(yyvsp[0]);
		(yyval) = new ASTFuncId(name->getValue(), (yylsp[0]));
		delete name;}
#line 2615 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 459 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
		ASTString *name = (ASTString *)(yyvsp[-2]);
		(yyval) = new ASTFuncId(name->getValue(), (yylsp[-2]));
		delete name;}
#line 2624 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 463 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
		ASTFuncId *fid = (ASTFuncId *)(yyvsp[-1]);
		ASTString *name = (ASTString *)(yyvsp[-3]);
		fid->setName(name->getValue());
		delete name;
		(yyval) = fid;}
#line 2635 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 471 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
		ASTFuncId *fid = (ASTFuncId *)(yyvsp[0]);
		fid->addParam((ASTType *)(yyvsp[-2]));
		(yyval) = fid;}
#line 2644 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 475 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
		ASTFuncId *fid = new ASTFuncId((yylsp[0]));
		fid->addParam((ASTType *)(yyvsp[0]));
		(yyval) = fid;}
#line 2653 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 481 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTStmt *prec = (ASTStmt *)(yyvsp[-6]);
												ASTExpr *term = (ASTExpr *)(yyvsp[-4]);
												ASTStmt *incr = (ASTExpr *)(yyvsp[-2]);
												ASTStmt *stmt = (ASTStmt *)(yyvsp[0]);
												(yyval) = new ASTStmtFor(prec,term,incr,stmt,(yylsp[-8]));}
#line 2663 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 488 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTExpr *cond = (ASTExpr *)(yyvsp[-2]);
										   ASTStmt *stmt = (ASTStmt *)(yyvsp[0]);
										   (yyval) = new ASTStmtWhile(cond,stmt,(yylsp[-4]));}
#line 2671 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 492 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTExpr *cond = (ASTExpr *)(yyvsp[-1]);
										   ASTStmt *stmt = (ASTStmt *)(yyvsp[-4]);
										   (yyval) = new ASTStmtDo(cond,stmt,(yylsp[-5]));}
#line 2679 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 496 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTExpr *cond = (ASTExpr *)(yyvsp[-2]);
							  ASTStmt *stmt = (ASTStmt *)(yyvsp[0]);
							  (yyval) = new ASTStmtIf(cond,stmt,(yylsp[-4]));}
#line 2687 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 499 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {ASTExpr *cond = (ASTExpr *)(yyvsp[-4]);
										ASTStmt *ifstmt = (ASTStmt *)(yyvsp[-2]);
										ASTStmt *elsestmt = (ASTStmt *)(yyvsp[0]);
										(yyval) = new ASTStmtIfElse(cond,ifstmt,elsestmt,(yylsp[-6]));}
#line 2696 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 505 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtReturnVal((ASTExpr *)(yyvsp[0]),(yylsp[-1]));}
#line 2702 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 506 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTStmtReturn((yylsp[0]));}
#line 2708 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 513 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTFuncDecl *fd = new ASTFuncDecl((yylsp[-5]));

			ASTType *type = (ASTType *)(yyvsp[-5]);
	    ASTString *name = (ASTString *)(yyvsp[-4]);
			ASTList *list = (ASTList *)(yyvsp[-2]);
			ASTBlock *block = (ASTBlock *)(yyvsp[0]);

			fd->setReturnType(type);
			fd->setName(name->getValue());
			fd->copyParamList(list);
			fd->setBlock(block);
			(yyval) = fd;

 			delete name;
			delete list;}
#line 2729 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 531 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = new ASTList(noloc);}
#line 2735 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 532 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2741 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 534 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTList *list = new ASTList((yylsp[0]));
			ASTFuncParam *param = (ASTFuncParam *)(yyvsp[0]);
			list->addAST(param);
			(yyval) = list;}
#line 2751 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 539 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTList *list = (ASTList *)(yyvsp[-2]);
			ASTFuncParam *param = (ASTFuncParam *)(yyvsp[0]);
			list->addAST(param);
			(yyval) = list;}
#line 2761 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 546 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTType *type = (ASTType *)(yyvsp[-1]);
			ASTString *name = (ASTString *)(yyvsp[0]);
			(yyval) = new ASTFuncParam(type, name->getValue(), (yylsp[-1]));
			delete name;}
#line 2771 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 557 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTType *type = (ASTType *)(yyvsp[-1]);
			ASTVarDeclList *list = (ASTVarDeclList *)(yyvsp[0]);
			list->copyType(type);
			delete type;
			(yyval) = list;}
#line 2782 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 566 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTVarDeclList *list = new ASTVarDeclList((yylsp[0]));
			list->addVarDecl((ASTVarDecl *)(yyvsp[0]));
			(yyval) = list;}
#line 2791 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 570 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTVarDeclList *list = (ASTVarDeclList *)(yyvsp[-2]);
			list->addVarDecl((ASTVarDecl *)(yyvsp[0]));
			(yyval) = list;}
#line 2800 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 578 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTString *name = (ASTString *)(yyvsp[0]);
			(yyval) = new ASTSingleVarDecl(name->getValue(), (yylsp[0]));
			delete name;}
#line 2809 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 583 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTString *name = (ASTString *)(yyvsp[-2]);
			ASTExpr *init = (ASTExpr *)(yyvsp[0]);
			(yyval) = new ASTSingleVarDecl(name->getValue(), init, (yylsp[-2]));
			delete name;}
#line 2819 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 589 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTString *name = (ASTString *)(yyvsp[-3]);
			ASTExpr *size = (ASTExpr *)(yyvsp[-1]);
			(yyval) = new ASTArrayDecl(name->getValue(), size, (yylsp[-3]));
			delete name;}
#line 2829 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 595 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTString *name = (ASTString *)(yyvsp[-6]);
			ASTArrayInitializer *init = (ASTArrayInitializer *)(yyvsp[-1]);
		  (yyval) = new ASTArrayDecl(name->getValue(), init, (yylsp[-6]));
			delete name;}
#line 2839 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 601 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
 			ASTString *name = (ASTString *)(yyvsp[-7]);
			ASTExpr *size = (ASTExpr *)(yyvsp[-5]);
		  ASTArrayInitializer *init = (ASTArrayInitializer *)(yyvsp[-1]);
			(yyval) = new ASTArrayDecl(name->getValue(), size, init, (yylsp[-7]));
			delete name;}
#line 2850 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 608 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTString *name = (ASTString *)(yyvsp[-4]);
			ASTString *string = (ASTString *)(yyvsp[0]);
			ASTArrayInitializer *init = new ASTArrayInitializer(string, (yylsp[-4]));
			(yyval) = new ASTArrayDecl(name->getValue(), init, (yylsp[-4]));
			delete name;
			delete string;}
#line 2862 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 616 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTString *name = (ASTString *)(yyvsp[-5]);
			ASTExpr *size = (ASTExpr *)(yyvsp[-3]);
			ASTString *string = (ASTString *)(yyvsp[0]);
			ASTArrayInitializer *init = new ASTArrayInitializer(string, (yylsp[-5]));
		  (yyval) = new ASTArrayDecl(name->getValue(), size, init, (yylsp[-5]));
			delete name;
		  delete string;}
#line 2875 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 627 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTArrayInitializer *init = new ASTArrayInitializer((yylsp[0]));
			ASTExpr *element = (ASTExpr *)(yyvsp[0]);
			init->addElement(element);
			(yyval) = init;}
#line 2885 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 632 "src/parser/ffscript.ypp" /* yacc.c:1646  */
    {
			ASTArrayInitializer *init = (ASTArrayInitializer *)(yyvsp[0]);
			ASTExpr *element = (ASTExpr *)(yyvsp[-2]);
		 	init->addElement(element);
			(yyval) = init;}
#line 2895 "src/parser/y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2899 "src/parser/y.tab.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 639 "src/parser/ffscript.ypp" /* yacc.c:1906  */


/*        programs */

void yyerror(const char *s) {
	char temp[512];
    snprintf(temp, 512, "line %d: %s, on token %s", yylineno, s, yytext);
    box_out(temp);
    box_eol();
}

int go(const char *f)
{
yyin = NULL;
resetLexer();
yyin = fopen(f, "r");
if(!yyin)
{
	box_out("Can't open input file");
	box_eol();
	return -1;
}
	curfilename = string(f);
	int result = yyparse();
	fclose(yyin);
	return result;
}
