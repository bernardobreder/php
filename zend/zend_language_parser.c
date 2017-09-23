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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */
#line 1 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:339  */

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2015 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   |          Nikita Popov <nikic@php.net>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE zend_parser_stack_elem

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif


#line 117 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:339  */

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
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_USERS_BERNARDOBREDER_GIT_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_USERS_BERNARDOBREDER_GIT_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 49 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:355  */


#line 150 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    T_INCLUDE = 258,
    T_INCLUDE_ONCE = 259,
    T_EVAL = 260,
    T_REQUIRE = 261,
    T_REQUIRE_ONCE = 262,
    T_LOGICAL_OR = 263,
    T_LOGICAL_XOR = 264,
    T_LOGICAL_AND = 265,
    T_PRINT = 266,
    T_YIELD = 267,
    T_DOUBLE_ARROW = 268,
    T_YIELD_FROM = 269,
    T_PLUS_EQUAL = 270,
    T_MINUS_EQUAL = 271,
    T_MUL_EQUAL = 272,
    T_DIV_EQUAL = 273,
    T_CONCAT_EQUAL = 274,
    T_MOD_EQUAL = 275,
    T_AND_EQUAL = 276,
    T_OR_EQUAL = 277,
    T_XOR_EQUAL = 278,
    T_SL_EQUAL = 279,
    T_SR_EQUAL = 280,
    T_POW_EQUAL = 281,
    T_COALESCE = 282,
    T_BOOLEAN_OR = 283,
    T_BOOLEAN_AND = 284,
    T_IS_EQUAL = 285,
    T_IS_NOT_EQUAL = 286,
    T_IS_IDENTICAL = 287,
    T_IS_NOT_IDENTICAL = 288,
    T_SPACESHIP = 289,
    T_IS_SMALLER_OR_EQUAL = 290,
    T_IS_GREATER_OR_EQUAL = 291,
    T_SL = 292,
    T_SR = 293,
    T_INSTANCEOF = 294,
    T_INC = 295,
    T_DEC = 296,
    T_INT_CAST = 297,
    T_DOUBLE_CAST = 298,
    T_STRING_CAST = 299,
    T_ARRAY_CAST = 300,
    T_OBJECT_CAST = 301,
    T_BOOL_CAST = 302,
    T_UNSET_CAST = 303,
    T_POW = 304,
    T_NEW = 305,
    T_CLONE = 306,
    T_NOELSE = 307,
    T_ELSEIF = 308,
    T_ELSE = 309,
    T_ENDIF = 310,
    T_STATIC = 311,
    T_ABSTRACT = 312,
    T_FINAL = 313,
    T_PRIVATE = 314,
    T_PROTECTED = 315,
    T_PUBLIC = 316,
    T_LNUMBER = 317,
    T_DNUMBER = 318,
    T_STRING = 319,
    T_VARIABLE = 320,
    T_INLINE_HTML = 321,
    T_ENCAPSED_AND_WHITESPACE = 322,
    T_CONSTANT_ENCAPSED_STRING = 323,
    T_STRING_VARNAME = 324,
    T_NUM_STRING = 325,
    T_EXIT = 326,
    T_IF = 327,
    T_ECHO = 328,
    T_DO = 329,
    T_WHILE = 330,
    T_ENDWHILE = 331,
    T_FOR = 332,
    T_ENDFOR = 333,
    T_FOREACH = 334,
    T_ENDFOREACH = 335,
    T_DECLARE = 336,
    T_ENDDECLARE = 337,
    T_AS = 338,
    T_SWITCH = 339,
    T_ENDSWITCH = 340,
    T_CASE = 341,
    T_DEFAULT = 342,
    T_BREAK = 343,
    T_CONTINUE = 344,
    T_GOTO = 345,
    T_FUNCTION = 346,
    T_CONST = 347,
    T_RETURN = 348,
    T_TRY = 349,
    T_CATCH = 350,
    T_FINALLY = 351,
    T_THROW = 352,
    T_USE = 353,
    T_INSTEADOF = 354,
    T_GLOBAL = 355,
    T_VAR = 356,
    T_UNSET = 357,
    T_ISSET = 358,
    T_EMPTY = 359,
    T_HALT_COMPILER = 360,
    T_CLASS = 361,
    T_TRAIT = 362,
    T_INTERFACE = 363,
    T_EXTENDS = 364,
    T_IMPLEMENTS = 365,
    T_OBJECT_OPERATOR = 366,
    T_LIST = 367,
    T_ARRAY = 368,
    T_CALLABLE = 369,
    T_LINE = 370,
    T_FILE = 371,
    T_DIR = 372,
    T_CLASS_C = 373,
    T_TRAIT_C = 374,
    T_METHOD_C = 375,
    T_FUNC_C = 376,
    T_COMMENT = 377,
    T_DOC_COMMENT = 378,
    T_OPEN_TAG = 379,
    T_OPEN_TAG_WITH_ECHO = 380,
    T_CLOSE_TAG = 381,
    T_WHITESPACE = 382,
    T_START_HEREDOC = 383,
    T_END_HEREDOC = 384,
    T_DOLLAR_OPEN_CURLY_BRACES = 385,
    T_CURLY_OPEN = 386,
    T_PAAMAYIM_NEKUDOTAYIM = 387,
    T_NAMESPACE = 388,
    T_NS_C = 389,
    T_NS_SEPARATOR = 390,
    T_ELLIPSIS = 391,
    T_ERROR = 392
  };
#endif
/* Tokens.  */
#define END 0
#define T_INCLUDE 258
#define T_INCLUDE_ONCE 259
#define T_EVAL 260
#define T_REQUIRE 261
#define T_REQUIRE_ONCE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_YIELD 267
#define T_DOUBLE_ARROW 268
#define T_YIELD_FROM 269
#define T_PLUS_EQUAL 270
#define T_MINUS_EQUAL 271
#define T_MUL_EQUAL 272
#define T_DIV_EQUAL 273
#define T_CONCAT_EQUAL 274
#define T_MOD_EQUAL 275
#define T_AND_EQUAL 276
#define T_OR_EQUAL 277
#define T_XOR_EQUAL 278
#define T_SL_EQUAL 279
#define T_SR_EQUAL 280
#define T_POW_EQUAL 281
#define T_COALESCE 282
#define T_BOOLEAN_OR 283
#define T_BOOLEAN_AND 284
#define T_IS_EQUAL 285
#define T_IS_NOT_EQUAL 286
#define T_IS_IDENTICAL 287
#define T_IS_NOT_IDENTICAL 288
#define T_SPACESHIP 289
#define T_IS_SMALLER_OR_EQUAL 290
#define T_IS_GREATER_OR_EQUAL 291
#define T_SL 292
#define T_SR 293
#define T_INSTANCEOF 294
#define T_INC 295
#define T_DEC 296
#define T_INT_CAST 297
#define T_DOUBLE_CAST 298
#define T_STRING_CAST 299
#define T_ARRAY_CAST 300
#define T_OBJECT_CAST 301
#define T_BOOL_CAST 302
#define T_UNSET_CAST 303
#define T_POW 304
#define T_NEW 305
#define T_CLONE 306
#define T_NOELSE 307
#define T_ELSEIF 308
#define T_ELSE 309
#define T_ENDIF 310
#define T_STATIC 311
#define T_ABSTRACT 312
#define T_FINAL 313
#define T_PRIVATE 314
#define T_PROTECTED 315
#define T_PUBLIC 316
#define T_LNUMBER 317
#define T_DNUMBER 318
#define T_STRING 319
#define T_VARIABLE 320
#define T_INLINE_HTML 321
#define T_ENCAPSED_AND_WHITESPACE 322
#define T_CONSTANT_ENCAPSED_STRING 323
#define T_STRING_VARNAME 324
#define T_NUM_STRING 325
#define T_EXIT 326
#define T_IF 327
#define T_ECHO 328
#define T_DO 329
#define T_WHILE 330
#define T_ENDWHILE 331
#define T_FOR 332
#define T_ENDFOR 333
#define T_FOREACH 334
#define T_ENDFOREACH 335
#define T_DECLARE 336
#define T_ENDDECLARE 337
#define T_AS 338
#define T_SWITCH 339
#define T_ENDSWITCH 340
#define T_CASE 341
#define T_DEFAULT 342
#define T_BREAK 343
#define T_CONTINUE 344
#define T_GOTO 345
#define T_FUNCTION 346
#define T_CONST 347
#define T_RETURN 348
#define T_TRY 349
#define T_CATCH 350
#define T_FINALLY 351
#define T_THROW 352
#define T_USE 353
#define T_INSTEADOF 354
#define T_GLOBAL 355
#define T_VAR 356
#define T_UNSET 357
#define T_ISSET 358
#define T_EMPTY 359
#define T_HALT_COMPILER 360
#define T_CLASS 361
#define T_TRAIT 362
#define T_INTERFACE 363
#define T_EXTENDS 364
#define T_IMPLEMENTS 365
#define T_OBJECT_OPERATOR 366
#define T_LIST 367
#define T_ARRAY 368
#define T_CALLABLE 369
#define T_LINE 370
#define T_FILE 371
#define T_DIR 372
#define T_CLASS_C 373
#define T_TRAIT_C 374
#define T_METHOD_C 375
#define T_FUNC_C 376
#define T_COMMENT 377
#define T_DOC_COMMENT 378
#define T_OPEN_TAG 379
#define T_OPEN_TAG_WITH_ECHO 380
#define T_CLOSE_TAG 381
#define T_WHITESPACE 382
#define T_START_HEREDOC 383
#define T_END_HEREDOC 384
#define T_DOLLAR_OPEN_CURLY_BRACES 385
#define T_CURLY_OPEN 386
#define T_PAAMAYIM_NEKUDOTAYIM 387
#define T_NAMESPACE 388
#define T_NS_C 389
#define T_NS_SEPARATOR 390
#define T_ELLIPSIS 391
#define T_ERROR 392

/* Value type.  */



int zendparse (void);

#endif /* !YY_ZEND_USERS_BERNARDOBREDER_GIT_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 443 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7355

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  493
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  914

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,   164,     2,   165,    53,    36,     2,
     157,   158,    51,    48,     8,    49,    50,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   159,
      42,    16,    44,    29,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,   163,    35,     2,   162,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,    34,   161,    56,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    31,    32,    33,    37,    38,    39,    40,    41,
      43,    45,    46,    47,    55,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   265,   265,   269,   269,   269,   269,   269,   269,   269,
     269,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   274,   274,   274,   274,   274,   274,
     274,   274,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   279,   280,   280,   280,   280,   280,   280,   284,   285,
     293,   294,   298,   299,   303,   304,   305,   309,   310,   311,
     312,   313,   314,   318,   321,   321,   324,   324,   327,   328,
     329,   330,   331,   335,   336,   340,   342,   347,   349,   354,
     356,   361,   363,   368,   370,   375,   376,   380,   382,   387,
     388,   392,   393,   397,   400,   405,   406,   407,   408,   409,
     410,   417,   418,   419,   420,   422,   424,   426,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   439,   443,
     442,   446,   447,   449,   450,   451,   456,   457,   462,   463,
     467,   468,   472,   476,   483,   484,   488,   489,   493,   493,
     496,   496,   502,   503,   507,   508,   512,   512,   518,   518,
     524,   525,   529,   530,   534,   535,   539,   540,   541,   545,
     546,   550,   551,   555,   556,   560,   561,   562,   563,   567,
     568,   570,   575,   576,   581,   582,   587,   590,   596,   597,
     602,   605,   611,   612,   618,   619,   624,   626,   631,   633,
     639,   640,   644,   645,   646,   650,   651,   655,   656,   660,
     662,   667,   668,   672,   673,   677,   683,   684,   688,   689,
     694,   697,   702,   704,   706,   708,   715,   716,   720,   721,
     722,   726,   728,   733,   734,   738,   743,   745,   747,   749,
     754,   756,   760,   765,   766,   770,   771,   775,   776,   781,
     782,   787,   788,   789,   790,   791,   792,   796,   797,   801,
     802,   807,   808,   812,   816,   820,   821,   824,   828,   829,
     833,   834,   838,   838,   848,   850,   855,   857,   859,   861,
     862,   864,   866,   868,   870,   872,   874,   876,   878,   880,
     882,   884,   886,   887,   888,   889,   890,   892,   894,   896,
     898,   900,   901,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   918,   920,
     922,   924,   926,   928,   930,   932,   934,   936,   937,   938,
     940,   942,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     966,   974,   978,   982,   983,   987,   988,   992,   993,   997,
     998,  1002,  1004,  1006,  1008,  1013,  1016,  1020,  1021,  1025,
    1026,  1031,  1032,  1033,  1038,  1039,  1044,  1045,  1046,  1050,
    1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1063,  1064,  1065,  1066,  1070,  1071,  1073,  1077,  1079,
    1083,  1084,  1088,  1089,  1093,  1097,  1098,  1099,  1103,  1104,
    1105,  1109,  1111,  1113,  1115,  1117,  1119,  1123,  1125,  1127,
    1132,  1133,  1134,  1138,  1140,  1145,  1147,  1149,  1151,  1153,
    1155,  1160,  1161,  1162,  1166,  1167,  1168,  1172,  1174,  1179,
    1180,  1181,  1186,  1187,  1191,  1193,  1198,  1200,  1201,  1203,
    1208,  1210,  1212,  1214,  1219,  1221,  1224,  1227,  1229,  1231,
    1234,  1238,  1239,  1240,  1245,  1246,  1247,  1249,  1251,  1253,
    1255,  1260,  1261,  1266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"include (T_INCLUDE)\"",
  "\"include_once (T_INCLUDE_ONCE)\"", "\"eval (T_EVAL)\"",
  "\"require (T_REQUIRE)\"", "\"require_once (T_REQUIRE_ONCE)\"", "','",
  "\"or (T_LOGICAL_OR)\"", "\"xor (T_LOGICAL_XOR)\"",
  "\"and (T_LOGICAL_AND)\"", "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"",
  "\"=> (T_DOUBLE_ARROW)\"", "\"yield from (T_YIELD_FROM)\"", "'='",
  "\"+= (T_PLUS_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"**= (T_POW_EQUAL)\"",
  "'?'", "':'", "\"?? (T_COALESCE)\"", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'", "\"== (T_IS_EQUAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"<=> (T_SPACESHIP)\"", "'<'",
  "\"<= (T_IS_SMALLER_OR_EQUAL)\"", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<< (T_SL)\"", "\">> (T_SR)\"",
  "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'",
  "\"instanceof (T_INSTANCEOF)\"", "'~'", "\"++ (T_INC)\"",
  "\"-- (T_DEC)\"", "\"(int) (T_INT_CAST)\"",
  "\"(double) (T_DOUBLE_CAST)\"", "\"(string) (T_STRING_CAST)\"",
  "\"(array) (T_ARRAY_CAST)\"", "\"(object) (T_OBJECT_CAST)\"",
  "\"(bool) (T_BOOL_CAST)\"", "\"(unset) (T_UNSET_CAST)\"", "'@'",
  "\"** (T_POW)\"", "'['", "\"new (T_NEW)\"", "\"clone (T_CLONE)\"",
  "T_NOELSE", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"static (T_STATIC)\"",
  "\"abstract (T_ABSTRACT)\"", "\"final (T_FINAL)\"",
  "\"private (T_PRIVATE)\"", "\"protected (T_PROTECTED)\"",
  "\"public (T_PUBLIC)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable (T_VARIABLE)\"", "T_INLINE_HTML",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"number (T_NUM_STRING)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"var (T_VAR)\"", "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"",
  "\"empty (T_EMPTY)\"", "\"__halt_compiler (T_HALT_COMPILER)\"",
  "\"class (T_CLASS)\"", "\"trait (T_TRAIT)\"",
  "\"interface (T_INTERFACE)\"", "\"extends (T_EXTENDS)\"",
  "\"implements (T_IMPLEMENTS)\"", "\"-> (T_OBJECT_OPERATOR)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"", "\"__DIR__ (T_DIR)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"\\\\ (T_NS_SEPARATOR)\"",
  "\"... (T_ELLIPSIS)\"", "T_ERROR", "'('", "')'", "';'", "'{'", "'}'",
  "'`'", "']'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "$@3", "catch_list", "finally_statement",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "is_reference", "is_variadic", "class_declaration_statement", "@4", "@5",
  "class_modifiers", "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr",
  "expr_without_variable", "function", "backup_doc_comment", "returns_ref",
  "lexical_vars", "lexical_var_list", "lexical_var", "function_call",
  "class_name", "class_name_reference", "exit_expr", "backticks_expr",
  "ctor_arguments", "dereferencable_scalar", "scalar", "constant",
  "possible_comma", "expr", "optional_expr", "variable_class_name",
  "dereferencable", "callable_expr", "callable_variable", "variable",
  "simple_variable", "static_member", "new_variable", "member_name",
  "property_name", "assignment_list", "assignment_list_element",
  "array_pair_list", "non_empty_array_pair_list", "array_pair",
  "encaps_list", "encaps_var", "encaps_var_offset",
  "internal_functions_in_yacc", "isset_variables", "isset_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,   268,   269,    61,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    63,
      58,   282,   283,   284,   124,    94,    38,   285,   286,   287,
     288,   289,    60,   290,    62,   291,   292,   293,    43,    45,
      46,    42,    47,    37,    33,   294,   126,   295,   296,   297,
     298,   299,   300,   301,   302,   303,    64,   304,    91,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    40,    41,    59,
     123,   125,    96,    93,    34,    36
};
# endif

#define YYPACT_NINF -715

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-715)))

#define YYTABLE_NINF -470

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-470)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -715,   111,  1204,  -715,  5441,  5441,   -34,  5441,  5441,  5441,
    5441,  5441,  5441,  5441,  5441,  5441,   242,   242,  5441,  5441,
    5441,  5441,  5441,  5441,  5441,  5441,  4769,   383,  5441,    19,
    -715,  -715,  -715,  -715,    95,  -715,  -715,  -715,   -15,   -13,
    5441,  4606,   -10,    -7,    29,   148,   152,  5441,  5441,    82,
    -715,   235,  5441,   -32,  5441,   346,    13,   173,   175,   182,
     184,  -715,  -715,  -715,   185,   230,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,   363,    23,  -715,   238,  5441,  -715,  -715,
     467,   489,   -29,   236,   -33,  -715,  -715,  -715,  -715,   226,
    -715,  -715,  -715,    62,  -715,    65,  -715,  -715,  -715,   127,
    -715,   272,   177,  -715,   268,  6493,   277,    15,   284,   293,
    7062,  -715,  -715,  -715,   283,  -715,   297,   127,  7288,  7288,
    5441,  7288,  7288,  1026,  1531,  1026,   385,   385,    52,   385,
    -715,  5441,   298,   268,    37,    37,   385,   385,   385,   385,
     385,   385,   385,   385,   242,  7194,   291,   455,  -715,  -715,
    -715,  -715,   313,   284,  -715,   210,  -715,   454,    32,  -715,
     127,  -715,  5441,  -715,  5441,    53,  -715,  7288,   377,  5441,
    5441,  5441,   235,  5441,  7288,   317,   318,   323,   477,    57,
    -715,   338,  -715,  6540,  -715,  -715,   238,    -8,    49,   342,
      58,  -715,  -715,    60,  -715,  -715,   242,  5441,  5441,   357,
     437,   438,   442,   651,  4769,    28,   459,  -715,  4881,   242,
     445,  -715,   238,   -46,   376,   236,  6587,  1367,   311,   382,
     512,   311,   412,  5441,  -715,   456,   352,  -715,  -715,  -715,
     389,  4606,   390,   519,   391,  -715,     7,  1530,  5441,  5441,
    5441,  5441,  4993,  5441,  5441,  5441,  5441,  5441,  5441,  5441,
    5441,  5441,  5441,  5441,  5441,  5441,  5441,  5441,  5441,  5441,
    5441,  5441,  5441,  5441,  5441,  5441,   294,  5441,  -715,  1530,
    5441,   266,  5441,  -715,  5105,  5441,  5441,  5441,  5441,  5441,
    5441,  5441,  5441,  5441,  5441,  5441,  5441,  -715,  -715,   395,
    6634,  5441,  6681,     8,  5217,  -715,  4769,  -715,   284,    13,
    -715,  -715,  5441,   266,    13,  5441,  5441,   480,  -715,   410,
     411,  6728,  5441,  -715,   421,  6775,   422,   572,  7288,  7100,
      46,  6822,  -715,  -715,  -715,  5441,   235,  -715,  -715,  1672,
    -715,    14,  -715,   501,     9,   238,   206,   428,    61,  -715,
     214,  -715,    13,  -715,    55,  -715,    67,  7288,    68,  -715,
    6869,   429,   463,  -715,   464,   443,    70,    71,  -715,   441,
     341,   528,  -715,  -715,    21,  5867,   453,  -715,  -715,  -715,
     236,  -715,   460,  -715,   232,   461,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  5914,  -715,  5441,  -715,    72,
    -715,  7288,   536,  5441,  -715,  5441,  -715,  -715,   465,   370,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  5441,  -715,  -715,   474,   476,
     284,   472,  6162,  5684,  1026,  5441,  7241,  1189,  1350,  1818,
    1981,  1660,  2140,  2303,  2303,  2303,  2303,  2303,   854,   854,
     854,   854,   787,   787,   643,   643,   643,    52,    52,    52,
    -715,   385,   474,   476,   284,   478,  -715,  5441,  -715,   284,
    5962,   242,  1026,  1026,  1026,  1026,  1026,  1026,  1026,  1026,
    1026,  1026,  1026,  1026,  1026,  -715,  1026,   483,   242,  7288,
    -715,   463,  -715,   486,  -715,  -715,  6009,  7288,  -715,   370,
    -715,  3791,  -715,  5441,  3954,  5441,  5441,   458,  -715,    79,
    7288,  -715,  -715,    27,  -715,    16,   209,   116,  -715,  -715,
     238,   217,  -715,  -715,   242,   462,  5441,  -715,  -715,  -715,
     250,   508,   491,   250,  -715,   651,   651,   636,  -715,  -715,
    -715,  -715,   492,  -715,  5441,  -715,  -715,  -715,  -715,   878,
     496,  -715,  7288,  5329,  -715,   463,  6916,  6963,  1835,   370,
    -715,  -715,  -715,   502,   658,  -715,   631,  -715,  6057,  -715,
    -715,  1189,  5441,  -715,  -715,  6104,  -715,  -715,    37,    31,
     508,  -715,  -715,   510,  -715,  -715,  7010,  -715,  -715,  -715,
     511,  7288,   242,   515,    -3,    84,  4117,   524,   527,  -715,
      39,    16,   238,    40,  -715,  -715,   164,   238,  -715,  -715,
    -715,  -715,   250,  -715,  -715,  -715,   693,   543,    73,  -715,
    5441,  -715,  5820,  1041,  -715,   546,  -715,   508,  4606,   677,
     552,   554,   596,   386,  -715,   561,  -715,  1189,  -715,  -715,
     596,  3628,   559,  1998,  5441,    86,   651,   458,  4280,  -715,
    -715,  -715,  -715,   339,  -715,    -4,   565,   564,  -715,    41,
    -715,    16,  -715,   238,    45,  -715,   693,   569,   567,   250,
    -715,  -715,  1026,   570,  -715,  -715,  -715,  -715,  -715,  -715,
     700,   575,   700,  -715,  -715,   653,   579,   700,  -715,   581,
     585,    74,   587,  -715,  -715,  -715,  2161,   375,   588,  5441,
      11,   193,  -715,   250,  -715,  -715,  -715,    48,   238,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  6176,   250,  -715,
    -715,  -715,   662,   283,   549,  -715,  -715,   709,  -715,   589,
    3628,   386,  -715,    78,  -715,   732,  -715,  -715,  -715,  4443,
    -715,  4280,  2324,   592,   593,  -715,  6446,  -715,  -715,  -715,
    -715,   670,  2487,  -715,  -715,  1433,   740,    63,  -715,    51,
     741,    64,  -715,   127,  -715,  -715,  -715,  -715,   598,   676,
    -715,    76,  -715,   603,  5441,  3747,   606,  -715,  -715,  -715,
    -715,   608,  -715,  -715,  -715,  3628,   610,  -715,  -715,  5441,
    6176,  -715,  -715,  5549,  -715,  5441,   662,  -715,  6176,  3910,
    -715,  -715,    78,  -715,  -715,  7288,  -715,  -715,  2650,  -715,
    3628,   609,  7288,  -715,   671,   297,  -715,  -715,   621,  5687,
    -715,   615,   616,   674,   661,  7288,  -715,   623,  -715,  2813,
    -715,  2976,  3139,   622,  -715,  6176,  -715,  -715,  -715,  -715,
    6314,   250,   370,  -715,  -715,  -715,  -715,  3302,  -715,  -715,
    -715,  6176,   693,   633,  -715,  -715,   700,  -715,   -39,  -715,
    -715,  -715,  3465,  -715
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      81,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     365,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,     0,     0,   385,
     174,   175,   399,   400,    82,   440,   144,   398,   389,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   422,     0,
     371,     0,   422,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   176,   178,     0,     0,   401,   402,   403,   408,
     404,   405,   406,     0,    96,   407,     0,     0,   151,   124,
     391,     0,     0,    84,   415,    80,    87,    88,    89,     0,
     172,    90,    91,   208,   132,     0,   133,   348,   421,   373,
     436,     0,   413,   362,   414,     0,     0,   424,     0,   437,
     420,   431,   438,   352,   385,    82,     0,   373,   486,   487,
       0,   489,   490,   364,   366,   368,   333,   334,   335,   336,
     385,     0,   427,     0,   313,   315,   353,   354,   355,   356,
     357,   358,   359,   361,     0,   467,     0,   418,   465,   292,
     386,   295,   387,   394,   445,   388,   299,   238,     0,   237,
     373,   155,   422,   360,     0,     0,   286,   287,     0,     0,
     288,     0,     0,     0,   423,     0,     0,     0,     0,     0,
     122,     0,   124,     0,   103,   104,     0,   117,     0,     0,
       0,   119,   114,     0,   234,   235,     0,     0,     0,     0,
       0,     0,     0,   461,   462,   474,     0,   410,     0,     0,
       0,   472,     0,    94,     0,    86,     0,     0,   392,     0,
     393,     0,     0,     0,   442,     0,     0,   381,   168,   173,
       0,     0,     0,     0,     0,   374,     0,     0,   422,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
     422,     0,     0,   384,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   312,   314,     0,
       0,     0,     0,   425,     0,   397,   419,   463,   394,     0,
     395,   294,   422,     0,     0,     0,     0,     0,   142,     0,
       0,     0,     0,   143,     0,     0,     0,   289,   291,     0,
       0,     0,   138,   139,   154,     0,     0,   102,   140,     0,
     153,   117,   120,     0,     0,     0,   117,     0,     0,    98,
       0,   100,     0,   141,     0,   160,   425,   493,     0,   491,
       0,     0,   180,   372,   182,     0,   425,     0,   458,     0,
       0,     0,   409,   473,     0,     0,   425,   471,   412,   470,
      85,    93,     0,    81,   347,     0,   131,   123,   125,   126,
     127,   128,   129,   363,   411,     0,    83,     0,   227,     0,
     229,   231,     0,     0,   209,     0,   124,   212,     0,   220,
       3,     4,     5,     6,     7,     8,     9,    10,    46,    47,
      11,    12,    13,    16,    17,    18,    72,    73,    74,    75,
      76,    77,    78,    14,    15,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    49,    50,    51,    52,
      53,    41,    42,    43,    44,    45,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    70,    61,    59,
      60,    56,    57,    48,    54,    55,    66,    67,    68,    62,
      63,    65,    64,    58,    69,     0,    71,    79,   416,   443,
       0,     0,   318,   320,   319,     0,     0,   351,   316,   317,
     321,   323,   322,   339,   340,   337,   338,   345,   341,   342,
     343,   344,   331,   332,   325,   326,   324,   327,   329,   330,
     346,   328,   417,   444,     0,     0,   454,     0,   456,   439,
       0,     0,   297,   300,   301,   302,   304,   305,   306,   307,
     308,   309,   310,   311,   303,   488,   367,   426,     0,   466,
     464,   180,   449,     0,   448,   450,     0,   239,   236,   220,
     390,     0,   285,     0,     0,   288,     0,     0,   149,     0,
     284,   121,   156,     0,   118,     0,   117,     0,    99,   101,
       0,   117,   113,   233,     0,     0,     0,   484,   485,    92,
       0,   184,     0,     0,   372,   461,   461,     0,   396,   481,
     483,   482,     0,   476,     0,   478,   477,   480,    81,     0,
       0,   441,   232,     0,   228,   180,     0,     0,     0,   220,
     222,   223,   224,     0,   214,   216,   164,   221,     0,   382,
     433,   350,     0,   383,   432,     0,   435,   434,   298,   425,
     184,   446,   447,     0,   124,   206,     0,   124,   204,   134,
       0,   290,     0,     0,     0,   425,     0,   199,   199,   137,
     158,     0,     0,     0,   110,   115,     0,     0,   161,   146,
     492,   181,     0,   372,   241,   246,   183,     0,     0,   457,
       0,   475,     0,     0,    97,     0,   230,   184,     0,     0,
       0,     0,   375,   220,   165,   166,   452,   349,   455,   372,
     375,   210,     0,     0,   288,   425,   461,     0,     0,   124,
     193,   150,   199,     0,   199,     0,     0,     0,   152,     0,
     116,     0,   107,     0,     0,   112,   185,     0,   267,     0,
     241,   460,   296,     0,    95,   130,   372,   207,   124,   213,
     225,     0,   225,   217,   167,     0,     0,   225,   135,     0,
       0,     0,     0,   124,   191,   147,     0,     0,     0,     0,
       0,     0,   195,     0,   124,   108,   109,     0,     0,   105,
     241,   274,   275,   276,   273,   272,   271,     0,     0,   266,
     177,   240,     0,     0,   265,   269,   247,   267,   479,     0,
     211,     0,   372,     0,   372,   218,   241,   372,   205,     0,
     188,     0,     0,     0,     0,   197,     0,   202,   203,   124,
     196,     0,     0,   106,   111,   267,     0,     0,   282,     0,
     279,     0,   278,   373,   270,   179,   241,   226,     0,     0,
     379,     0,   378,     0,     0,   267,     0,   124,   189,   136,
     148,     0,   194,   198,   124,   201,     0,   159,   171,     0,
       0,   243,   248,     0,   244,     0,     0,   242,     0,   267,
     124,   380,     0,   376,   124,   219,   293,   124,     0,   192,
     200,     0,   283,   281,    82,    58,   249,   260,     0,     0,
     251,     0,     0,     0,   261,   280,   277,     0,   169,     0,
     377,     0,     0,     0,   124,     0,   250,   252,   253,   254,
       0,     0,   220,   163,   369,   370,   190,     0,   262,   256,
     257,   259,   255,     0,   157,   258,   225,   372,     0,   263,
     124,   245,     0,   264
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -715,  -715,   -98,  -715,  -195,  -361,    12,   -26,  -715,  -715,
    -715,   739,  -715,  -715,   145,    85,   611,    90,  -179,   457,
     630,  -169,  -715,     4,  -715,  -715,  -715,  -715,   233,     2,
    -715,  -715,     3,  -715,  -715,  -715,   715,     6,  -715,    35,
    -715,  -456,  -715,  -537,   109,  -715,    18,  -715,  -715,  -264,
      26,  -715,  -715,  -715,  -715,  -715,  -539,  -715,   128,  -715,
      33,  -685,   -82,  -715,   207,  -715,   470,  -715,   506,  -643,
    -715,  -653,  -715,  -715,   -54,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -714,  -715,   -27,  -715,   -17,   498,  -715,
     513,  -504,  -715,  -715,  -715,  -715,  -715,    -2,  -541,  -114,
     137,  -715,   -24,  -715,    17,   578,  -715,  -715,   532,   135,
    -715,   176,  -715,    10,    43,  -715,  -715,  -715,  -715,   179,
      77,  -715,  -715,   576,   538,  -512,   260,   644,  -715,   551,
      80,   350,  -715,  -715,  -715,   274
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   476,   477,   806,     2,    83,    84,    85,   372,
     214,   652,   337,   189,   653,   714,   190,   654,   191,   192,
     179,   217,   377,   378,   646,   650,   708,   344,   345,   379,
     685,   735,   380,   392,   200,    89,    90,   381,   201,   382,
     202,   581,   584,   663,   644,   829,   745,   701,   649,   703,
     799,   639,    93,    94,    95,    96,   613,   614,   615,   616,
     617,   782,   300,   389,   390,   193,   194,   158,   159,   718,
     771,   666,   844,   869,   870,   871,   872,   873,   874,   911,
     772,   773,   774,   775,   811,   812,   807,   808,   180,   165,
     166,   316,   317,   151,   298,    97,    98,   117,   582,   236,
     732,   821,   822,   100,   101,   153,   163,   219,   301,   102,
     103,   104,   297,   105,   175,   106,   107,   108,   109,   110,
     111,   112,   155,   480,   519,   357,   358,   146,   147,   148,
     210,   211,   592,   113,   348,   349
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,   150,   227,   289,    87,    88,    86,   332,    91,   716,
     633,   697,   599,   329,   118,   119,  -469,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   273,   160,   136,   137,
     138,   139,   140,   141,   142,   143,   145,    92,   156,  -468,
     307,   797,   478,   667,   152,   168,   309,   784,   711,   711,
     167,   640,   787,   758,   326,    35,   758,   174,   174,   719,
     814,   312,   174,   574,   183,   326,   340,   187,   342,   340,
     681,   840,   846,   668,   512,  -162,   576,   777,  -459,   586,
     603,   586,   586,   270,   852,   630,   213,   216,   215,   594,
     398,   176,   386,   689,   333,   181,   360,    35,  -186,   115,
    -187,   749,   750,   157,   154,  -425,   115,   266,   225,   647,
     386,     3,   160,   371,   819,   809,   333,   805,  -386,   267,
     909,   910,   717,   120,   226,   161,   184,   185,   182,    50,
     290,   223,   115,   195,   230,   231,    82,   232,   233,   234,
     726,   292,   162,   825,   164,   271,   334,   169,   736,   677,
     170,   132,   132,   706,   707,   698,   332,   752,   361,   224,
     220,   222,   820,   235,   399,   177,  -469,  -425,   563,   565,
     798,  -469,   174,   849,   311,   272,   901,   212,    82,   315,
     318,   319,   595,   321,   741,   779,   171,   651,  -425,  -468,
     740,   308,   133,   133,  -468,   134,   135,  -425,   331,   386,
     336,   712,   755,   335,   558,   310,   759,   347,   350,   803,
     842,   843,   313,   575,   145,    99,   327,   341,   365,   343,
     569,   907,   841,   847,   370,  -162,   577,   608,  -459,   587,
     604,   721,   790,   385,   853,   394,   391,   673,   902,   648,
     150,   818,  -186,   823,  -187,  -427,   826,   386,   174,   482,
     483,   484,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   657,   511,   302,   132,
     174,   481,   520,   152,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   115,   749,   750,
    -426,   536,    30,    31,   539,   172,   145,  -427,   333,   173,
      26,   333,   174,   515,   479,   546,   547,   130,   178,   333,
     133,   115,   167,   293,   713,   115,    35,    99,  -427,    37,
     196,   132,   197,   115,  -430,   560,   238,  -427,   132,   198,
     303,   199,   203,   154,   132,   543,   513,   566,   518,   516,
      35,   228,   571,   903,   800,     4,     5,     6,     7,     8,
     567,   304,  -426,   656,     9,    10,   908,    11,   570,   130,
     305,   225,   133,   612,    65,   346,   542,   115,    35,   133,
     518,   545,   356,  -426,   705,   133,   655,   204,   366,  -429,
     225,   332,  -426,    50,   116,   205,    76,   602,   619,   131,
      12,    13,   116,   606,    76,   607,    14,    82,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   195,
      26,    27,    28,   237,   589,   590,   517,   114,   269,   115,
     591,    82,   623,    32,    33,   115,    35,   626,   747,    37,
     751,   226,    38,   748,   749,   750,   116,   205,    76,   206,
    -428,   212,   267,   115,   295,  -430,   184,   185,   130,    82,
     208,   209,    50,   296,   299,   691,   115,    35,   693,   115,
     306,   314,   655,   710,    58,    59,   322,   323,   715,   794,
     749,   750,   324,    64,    65,   618,    66,    67,    68,    69,
      70,    71,    72,   325,   642,   621,   205,   328,   367,    73,
     186,   339,   610,   611,   116,    75,    76,   387,   149,    77,
     388,   207,   208,   209,    80,   351,    81,    82,   610,   611,
     352,   353,   116,   612,    76,   354,    26,   625,  -215,   205,
     746,   367,   655,   130,   715,   116,   373,    76,   116,   386,
      76,   115,    35,   205,   383,    37,   393,   395,    82,   396,
     397,   205,   399,   218,   661,   635,   363,   665,   638,   780,
     369,   208,   209,   636,   157,   318,   641,   549,   363,   550,
     369,   363,   369,   205,   792,   221,   384,   571,   553,   804,
     556,   555,   571,   612,   564,   802,   347,   568,   579,   643,
      65,   580,   583,   368,   208,   209,   205,    99,   367,   588,
     585,    87,    88,    86,   672,    91,    99,   362,   208,   209,
     116,   593,    76,   391,   597,   131,   208,   209,   600,   605,
     598,   659,   609,    82,   761,   762,   763,   764,   765,   766,
     835,  -451,   687,  -453,    92,   620,   665,   662,   208,   209,
    -429,   624,   761,   762,   763,   764,   765,   766,   867,   631,
     700,   664,   670,   877,   675,   671,   132,   612,   858,  -268,
     682,   208,   209,   571,   571,   860,   683,   684,   690,   571,
     694,    99,   696,   132,   867,    87,    88,    86,   767,    91,
     722,   879,   727,   702,   768,   881,   704,   769,   882,    99,
     898,    99,   132,   776,   263,   264,   265,   133,   266,   848,
     628,   719,   744,   720,   318,   725,   905,   728,    92,   132,
     267,   729,   730,   731,   133,   897,   734,   629,   738,    26,
     132,   132,   753,   571,   754,   571,   130,   801,   770,   760,
     781,   778,   783,   133,   115,    35,   645,   785,    37,   786,
     788,   912,   665,   789,    99,   791,   810,   795,   824,   816,
     133,   832,   833,   346,   836,   612,   839,   845,   850,   796,
     851,   133,   133,   854,   356,   356,   857,   859,   861,   884,
     571,   813,   885,   -78,   888,   889,   890,   132,    99,   891,
     892,   896,   355,    65,   761,   762,   763,   764,   765,   766,
      99,   906,   900,   828,   188,   744,   709,   572,   757,   338,
      99,   756,   320,   116,   229,    76,   742,   658,   131,   830,
     676,   733,   573,   548,   817,   887,    82,   868,   133,   876,
     767,   695,   834,   863,   561,   552,   768,   737,   880,   769,
     541,   132,   132,    99,   855,   260,   261,   262,   263,   264,
     265,   544,   266,   868,   510,   514,   669,   540,   359,   862,
     660,     0,     0,     0,   267,   875,    99,     0,    99,     0,
       0,     0,     0,     0,     0,   665,   612,     0,     0,     0,
     815,     0,   133,   133,     0,   356,   645,    99,     0,    99,
      99,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,    99,  -470,  -470,  -470,  -470,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,    44,     0,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,    55,     0,    56,     0,    57,
      58,    59,    60,    61,    62,    63,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
      74,    75,    76,     0,     0,    77,     0,    78,    79,   674,
      80,     0,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,   242,    11,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,   267,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    54,    55,     0,
      56,     0,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,    74,    75,    76,     0,     0,    77,     0,
      78,    79,   724,    80,     0,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,   267,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,     0,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,    55,     0,    56,     0,    57,    58,    59,    60,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,    74,    75,    76,     0,
       0,    77,     0,    78,    79,     0,    80,     0,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,   267,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   375,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,   761,   762,
     763,   764,   765,   766,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,   376,    80,
       0,    81,    82,   400,   401,   402,   403,   404,     0,   405,
     406,   407,   408,   409,   767,   291,     0,     0,     0,     0,
     768,     0,     0,   769,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   410,   266,     0,     0,     0,
       0,     0,     0,     0,   838,     0,     0,     0,   267,   411,
     412,     0,   413,   414,   415,   416,   417,   418,   419,   420,
     421,     0,     0,   422,    35,     0,     0,     0,     0,     0,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
       0,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       0,     0,   473,   474,     9,    10,     0,    11,     0,     0,
     475,     0,     0,     0,     0,    82,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,   267,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   375,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,   562,    80,     0,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,   267,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,   680,
      29,    30,    31,     0,     0,     0,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,    80,     0,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,   267,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,   739,    43,     0,    44,     0,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,   375,    61,    62,    63,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,     0,
      80,     0,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,   793,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,     0,
      56,     0,    57,    58,    59,   375,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
      78,    79,     0,    80,     0,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
    -470,  -470,  -470,  -470,  -470,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,   831,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,     0,    52,    53,     0,     0,
      54,     0,     0,    56,     0,    57,    58,    59,   375,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,    78,    79,     0,    80,     0,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   375,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,   837,    80,
       0,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,   883,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,   375,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,     0,    80,     0,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,   893,    80,     0,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
     375,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,   894,    80,     0,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   375,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
     895,    80,     0,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   375,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,   904,    80,     0,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
      29,    30,    31,     0,     0,     0,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,   913,    80,     0,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,    44,     0,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,   375,    61,    62,    63,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,     0,
      80,     0,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   634,   761,   762,   763,   764,   765,   766,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   767,    26,
      27,    28,     0,     0,   768,     0,    29,   769,     0,     0,
       0,     0,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,   856,     0,
      56,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
      78,    79,     0,    80,     0,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   637,   761,   762,   763,   764,   765,
     766,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   767,    26,    27,    28,     0,     0,   768,     0,    29,
     769,     0,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,     0,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,     0,    52,    53,     0,     0,
      54,   878,     0,    56,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,    78,    79,     0,    80,     0,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   699,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,     0,    80,
       0,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     743,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,     0,    80,     0,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   827,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,     0,    80,     0,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,     0,    80,     0,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
      32,    33,   115,    35,     0,     0,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     0,
       0,    58,    59,     9,    10,     0,    11,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,     0,    12,
      13,    80,     0,    81,    82,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,    32,    33,   115,    35,     0,     0,    37,   364,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,    58,    59,     9,    10,     0,    11,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,   485,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
       0,    12,    13,    80,     0,    81,    82,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,   114,     0,
       0,     0,     0,     0,    32,    33,   115,    35,     0,     0,
      37,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,    58,    59,     9,    10,     0,
      11,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,   521,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,     0,    12,    13,    80,     0,    81,    82,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,    32,    33,   115,    35,
       0,     0,    37,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,    58,    59,     9,
      10,     0,    11,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,   538,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,     0,    12,    13,    80,     0,    81,
      82,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,    32,    33,
     115,    35,     0,     0,    37,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,    58,
      59,     9,    10,     0,    11,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,     0,    12,    13,    80,
       0,    81,    82,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
      32,    33,   115,    35,     0,     0,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     0,
       0,    58,    59,     9,    10,     0,    11,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,   387,     0,    77,     0,     0,    12,
      13,    80,     0,    81,    82,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,    32,    33,   115,    35,     0,     0,    37,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,   400,   401,   402,   403,   404,     0,   405,   406,
     407,   408,   409,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
       0,     0,     0,    80,   410,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   411,   412,
       0,   413,   414,   415,   416,   417,   418,   419,   420,   421,
       0,     0,   864,     0,     0,     0,     0,     0,     0,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     400,   401,   402,   403,   404,   241,   405,   406,   407,   408,
     409,   865,   474,    76,     0,     0,     0,     0,     0,     0,
     866,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,   410,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,   411,   412,     0,   413,
     414,   415,   416,   417,   418,   419,   420,   421,     0,     0,
     864,     0,     0,     0,     0,     0,     0,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,     0,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,   865,
     474,    76,     0,     0,     0,     0,     0,     0,   886,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,   267,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,   267,     0,   723,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,   596,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,   239,   240,   241,     0,
       0,     0,     0,     0,     0,   601,   267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,   627,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     632,   267,   240,   241,     0,     0,     0,     0,     0,   400,
     401,   402,   403,   404,     0,   405,   406,   407,   408,   409,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   686,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   411,   412,     0,   413,   414,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
       0,     0,     0,     0,     0,   688,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,     0,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   400,   401,   402,
     403,   404,     0,   405,   406,   407,   408,   409,   473,   474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   412,     0,   413,   414,   415,   761,
     762,   763,   764,   765,   766,     0,     0,   899,     0,     0,
       0,     0,     0,     0,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,   473,   474,     0,     0,
       0,     0,     0,     0,     0,   242,   797,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,   239,   240,   241,     0,
       0,     0,     0,     0,     0,   798,     0,   267,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,   268,     0,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
     239,   240,   241,     0,     0,     0,     0,     0,     0,   330,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,   239,   240,   241,
       0,     0,     0,     0,     0,   374,     0,     0,   267,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,   239,   240,   241,     0,     0,     0,
       0,     0,   535,     0,     0,   267,     0,     0,     0,     0,
       0,     0,     0,     0,   242,     0,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     0,
     266,   239,   240,   241,     0,     0,     0,     0,     0,   537,
       0,     0,   267,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,     0,     0,     0,     0,   551,     0,     0,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   239,   240,   241,     0,     0,
       0,     0,     0,   554,     0,     0,   267,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   239,   240,   241,     0,     0,     0,     0,     0,
     559,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,   578,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,   678,     0,     0,   267,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,   287,
     288,   679,     0,     0,     0,     0,     0,     0,     0,   242,
    -425,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,   692,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -425,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   557,   239,   240,   241,     0,     0,   294,     0,
       0,     0,     0,  -425,     0,     0,     0,     0,     0,     0,
       0,     0,  -425,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
     242,   622,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267
};

static const yytype_int16 yycheck[] =
{
       2,    27,    84,   117,     2,     2,     2,   186,     2,   662,
     549,    14,   373,   182,     4,     5,     8,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   108,    29,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     2,    28,     8,
       8,    30,   237,   584,    27,    41,   160,   732,     8,     8,
      40,   555,   737,     8,     8,    84,     8,    47,    48,     8,
     774,     8,    52,     8,    54,     8,     8,    55,     8,     8,
     609,     8,     8,   585,   269,     8,     8,   720,     8,     8,
       8,     8,     8,    68,     8,   541,    74,    77,    76,    68,
      83,    48,    83,   630,   102,    52,    68,    84,    14,    83,
      14,   105,   106,    84,    27,    68,    83,    55,   154,    30,
      83,     0,   114,   159,    36,   768,   102,   760,   151,    67,
     159,   160,   663,   157,   157,    30,   110,   111,   160,   110,
     120,   160,    83,    56,    72,    73,   165,    72,    73,    74,
     677,   131,   157,   786,   157,   130,   154,   157,   689,   605,
     157,    16,    17,   114,   115,   158,   335,   161,   130,    82,
      80,    81,    84,    36,   157,    83,   158,   130,   154,   160,
     159,   163,   162,   816,   164,   160,   890,   154,   165,   169,
     170,   171,   161,   173,   696,   726,   157,   160,   151,   158,
     694,   159,    16,    17,   163,    16,    17,   160,   186,    83,
     188,   161,   161,   154,   158,   162,   161,   197,   198,   161,
     159,   160,   159,   158,   204,   217,   159,   159,   208,   159,
     159,   906,   159,   159,   212,   158,   158,   396,   158,   158,
     158,   158,   158,   223,   158,   231,   226,   598,   891,   160,
     266,   782,   158,   784,   158,    68,   787,    83,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   160,   267,    68,   144,
     270,   238,   272,   266,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,    83,   105,   106,
      68,   291,    76,    77,   294,   157,   296,   130,   102,   157,
      68,   102,   302,   270,   237,   305,   306,    75,    83,   102,
     144,    83,   312,   144,   160,    83,    84,   329,   151,    87,
     157,   196,   157,    83,   157,   325,    68,   160,   203,   157,
     130,   157,   157,   266,   209,   302,   269,   335,   271,    83,
      84,   125,   340,   892,   161,     3,     4,     5,     6,     7,
     154,   151,   130,   154,    12,    13,   907,    15,   154,    75,
     160,   154,   196,   399,   132,   196,   299,    83,    84,   203,
     303,   304,   203,   151,   648,   209,   565,   157,   209,   157,
     154,   570,   160,   110,   152,    84,   154,   387,   480,   157,
      48,    49,   152,   393,   154,   395,    54,   165,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   342,
      68,    69,    70,   151,    83,    84,   160,    75,   151,    83,
      89,   165,   514,    81,    82,    83,    84,   519,   702,    87,
     704,   157,    90,   104,   105,   106,   152,    84,   154,    86,
     157,   154,    67,    83,   163,   157,   110,   111,    75,   165,
     149,   150,   110,     8,   151,   634,    83,    84,   637,    83,
      16,    94,   651,   652,   122,   123,   159,   159,   657,   104,
     105,   106,   159,   131,   132,   475,   134,   135,   136,   137,
     138,   139,   140,    16,    36,   485,    84,   159,    86,   147,
     154,   159,   132,   133,   152,   153,   154,   155,   125,   157,
     158,   148,   149,   150,   162,   158,   164,   165,   132,   133,
      83,    83,   152,   549,   154,    83,    68,   517,   158,    84,
     699,    86,   711,    75,   713,   152,   160,   154,   152,    83,
     154,    83,    84,    84,   162,    87,   157,   157,   165,    30,
     159,    84,   157,    86,   580,   551,   206,   583,   554,   728,
     210,   149,   150,   553,    84,   555,   556,   157,   218,   158,
     220,   221,   222,    84,   743,    86,   164,   565,   157,   758,
       8,   159,   570,   609,    83,   754,   576,   159,   159,   131,
     132,   128,   128,   148,   149,   150,    84,   599,    86,   158,
     157,   599,   599,   599,   594,   599,   608,   148,   149,   150,
     152,    83,   154,   603,   161,   157,   149,   150,   157,    83,
     160,   159,   157,   165,    75,    76,    77,    78,    79,    80,
     799,   157,   622,   157,   599,   163,   662,   129,   149,   150,
     157,   163,    75,    76,    77,    78,    79,    80,   843,   163,
     646,   160,    16,   848,   158,   163,   521,   683,   827,   110,
     158,   149,   150,   651,   652,   834,     8,    36,   158,   657,
     159,   673,   157,   538,   869,   673,   673,   673,   111,   673,
     670,   850,   678,   159,   117,   854,   159,   120,   857,   691,
     885,   693,   557,   719,    51,    52,    53,   521,    55,   813,
     521,     8,   698,   160,   694,   159,   901,    30,   673,   574,
      67,   159,   158,   117,   538,   884,   155,   538,   159,    68,
     585,   586,   157,   711,   160,   713,    75,   753,   161,   160,
      30,   161,   157,   557,    83,    84,   557,    84,    87,   160,
     159,   910,   768,   158,   746,   158,    84,   159,    16,   160,
     574,   159,   159,   574,    84,   781,    16,    16,   160,   749,
      84,   585,   586,   160,   585,   586,   160,   159,   158,   160,
     758,   773,   151,   102,   159,   159,   102,   642,   780,   118,
     157,   159,   131,   132,    75,    76,    77,    78,    79,    80,
     792,   158,   890,   789,    55,   791,   651,   340,   713,   188,
     802,   711,   172,   152,    89,   154,   697,   574,   157,   791,
     603,   683,   342,   307,   781,   869,   165,   843,   642,   846,
     111,   642,   796,   840,   326,   312,   117,   690,   852,   120,
     298,   696,   697,   835,   824,    48,    49,    50,    51,    52,
      53,   303,    55,   869,   266,   269,   586,   296,   204,   839,
     576,    -1,    -1,    -1,    67,   845,   858,    -1,   860,    -1,
      -1,    -1,    -1,    -1,    -1,   891,   892,    -1,    -1,    -1,
     161,    -1,   696,   697,    -1,   696,   697,   879,    -1,   881,
     882,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,   897,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
     912,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,   116,   117,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    29,    15,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,   116,   117,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,   161,   162,    -1,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    67,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,    -1,   162,    -1,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    75,    76,
      77,    78,    79,    80,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,   162,
      -1,   164,   165,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,   111,    14,    -1,    -1,    -1,    -1,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    55,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    67,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,   152,   153,    12,    13,    -1,    15,    -1,    -1,
     160,    -1,    -1,    -1,    -1,   165,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    67,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,   161,   162,    -1,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    67,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,   162,    -1,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,
     162,    -1,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      -1,   100,   101,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,    -1,   162,    -1,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    99,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,    -1,   162,    -1,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,   162,
      -1,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    97,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    -1,   162,    -1,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,   161,   162,    -1,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,   161,   162,    -1,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,   161,   162,    -1,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,   161,   162,    -1,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,
     162,    -1,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,   111,    68,
      69,    70,    -1,    -1,   117,    -1,    75,   120,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,    -1,    -1,   116,   161,    -1,
     119,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,    -1,   162,    -1,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,   111,    68,    69,    70,    -1,    -1,   117,    -1,    75,
     120,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,   161,    -1,   119,    -1,   121,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,    -1,   162,    -1,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,   162,
      -1,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    -1,   162,    -1,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,    -1,   162,    -1,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,    -1,   162,    -1,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   122,   123,    12,    13,    -1,    15,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,    -1,    48,
      49,   162,    -1,   164,   165,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,   122,   123,    12,    13,    -1,    15,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    30,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
      -1,    48,    49,   162,    -1,   164,   165,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,   122,   123,    12,    13,    -1,
      15,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    36,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,    -1,    48,    49,   162,    -1,   164,   165,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   122,   123,    12,
      13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    36,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,    -1,    48,    49,   162,    -1,   164,
     165,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,   122,
     123,    12,    13,    -1,    15,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,    -1,    48,    49,   162,
      -1,   164,   165,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   122,   123,    12,    13,    -1,    15,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,   155,    -1,   157,    -1,    -1,    48,
      49,   162,    -1,   164,   165,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
      -1,    -1,    -1,   162,    55,   164,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
       3,     4,     5,     6,     7,    11,     9,    10,    11,    12,
      13,   152,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    67,    10,    11,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,   161,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,   152,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      68,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   167,   171,     0,     3,     4,     5,     6,     7,    12,
      13,    15,    48,    49,    54,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    69,    70,    75,
      76,    77,    81,    82,    83,    84,    85,    87,    90,    91,
      92,    93,    94,    96,    98,   100,   103,   107,   108,   109,
     110,   111,   112,   113,   116,   117,   119,   121,   122,   123,
     124,   125,   126,   127,   131,   132,   134,   135,   136,   137,
     138,   139,   140,   147,   152,   153,   154,   157,   159,   160,
     162,   164,   165,   172,   173,   174,   189,   195,   198,   201,
     202,   203,   205,   218,   219,   220,   221,   261,   262,   263,
     269,   270,   275,   276,   277,   279,   281,   282,   283,   284,
     285,   286,   287,   299,    75,    83,   152,   263,   279,   279,
     157,   279,   279,   279,   279,   279,   279,   279,   279,   279,
      75,   157,   275,   277,   285,   285,   279,   279,   279,   279,
     279,   279,   279,   279,    36,   279,   293,   294,   295,   125,
     173,   259,   270,   271,   286,   288,   279,    84,   233,   234,
     263,    30,   157,   272,   157,   255,   256,   279,   189,   157,
     157,   157,   157,   157,   279,   280,   280,    83,    83,   186,
     254,   280,   160,   279,   110,   111,   154,   172,   177,   179,
     182,   184,   185,   231,   232,   286,   157,   157,   157,   157,
     200,   204,   206,   157,   157,    84,    86,   148,   149,   150,
     296,   297,   154,   172,   176,   172,   279,   187,    86,   273,
     296,    86,   296,   160,   286,   154,   157,   228,   125,   202,
      72,    73,    72,    73,    74,    36,   265,   151,    68,     9,
      10,    11,    29,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    55,    67,   159,   151,
      68,   130,   160,   228,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    57,    58,   265,
     279,    14,   279,   285,    14,   163,     8,   278,   260,   151,
     228,   274,    68,   130,   151,   160,    16,     8,   159,   265,
     280,   279,     8,   159,    94,   279,   257,   258,   279,   279,
     186,   279,   159,   159,   159,    16,     8,   159,   159,   187,
     159,   172,   184,   102,   154,   154,   172,   178,   182,   159,
       8,   159,     8,   159,   193,   194,   285,   279,   300,   301,
     279,   158,    83,    83,    83,   131,   285,   291,   292,   293,
      68,   130,   148,   297,    88,   279,   285,    86,   148,   297,
     172,   159,   175,   160,   158,   124,   161,   188,   189,   195,
     198,   203,   205,   162,   164,   279,    83,   155,   158,   229,
     230,   279,   199,   157,   189,   157,    30,   159,    83,   157,
       3,     4,     5,     6,     7,     9,    10,    11,    12,    13,
      55,    69,    70,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    83,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   152,   153,   160,   168,   169,   170,   286,
     289,   280,   279,   279,   279,    30,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     271,   279,   170,   286,   289,   280,    83,   160,   286,   290,
     279,    36,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   158,   279,   158,    36,   279,
     295,   274,   286,   280,   290,   286,   279,   279,   234,   157,
     158,   158,   256,   157,   158,   159,     8,   102,   158,   158,
     279,   254,   161,   154,    83,   160,   172,   154,   159,   159,
     154,   172,   185,   232,     8,   158,     8,   158,   158,   159,
     128,   207,   264,   128,   208,   157,     8,   158,   158,    83,
      84,    89,   298,    83,    68,   161,   161,   161,   160,   171,
     157,   161,   279,     8,   158,    83,   279,   279,   187,   157,
     132,   133,   173,   222,   223,   224,   225,   226,   279,   228,
     163,   279,    30,   228,   163,   279,   228,   161,   285,   285,
     207,   163,   161,   222,    30,   189,   279,    30,   189,   217,
     257,   279,    36,   131,   210,   285,   190,    30,   160,   214,
     191,   160,   177,   180,   183,   184,   154,   160,   194,   159,
     301,   173,   129,   209,   160,   173,   237,   264,   291,   292,
      16,   163,   279,   171,   161,   158,   230,   207,   158,   158,
      74,   222,   158,     8,    36,   196,   161,   279,   161,   209,
     158,   187,   158,   187,   159,   285,   157,    14,   158,    30,
     189,   213,   159,   215,   159,   215,   114,   115,   192,   180,
     184,     8,   161,   160,   181,   184,   237,   264,   235,     8,
     160,   158,   279,   163,   161,   159,   209,   189,    30,   159,
     158,   117,   266,   224,   155,   197,   264,   266,   159,    95,
     257,   291,   210,    30,   189,   212,   187,   215,   104,   105,
     106,   215,   161,   157,   160,   161,   183,   181,     8,   161,
     160,    75,    76,    77,    78,    79,    80,   111,   117,   120,
     161,   236,   246,   247,   248,   249,   173,   235,   161,   264,
     187,    30,   227,   157,   227,    84,   160,   227,   159,   158,
     158,   158,   187,   101,   104,   159,   279,    30,   159,   216,
     161,   173,   187,   161,   184,   235,   170,   252,   253,   237,
      84,   250,   251,   263,   249,   161,   160,   226,   264,    36,
      84,   267,   268,   264,    16,   235,   264,    30,   189,   211,
     212,    99,   159,   159,   216,   187,    84,   161,   161,    16,
       8,   159,   159,   160,   238,    16,     8,   159,   265,   235,
     160,    84,     8,   158,   160,   279,   161,   160,   187,   159,
     187,   158,   279,   253,    83,   152,   161,   170,   173,   239,
     240,   241,   242,   243,   244,   279,   251,   170,   161,   187,
     268,   187,   187,    97,   160,   151,   161,   240,   159,   159,
     102,   118,   157,   161,   161,   161,   159,   187,   170,    83,
     168,   249,   237,   222,   161,   170,   158,   227,   264,   159,
     160,   245,   187,   161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   169,   169,   169,   169,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   175,   174,   176,   174,   174,   174,
     174,   174,   174,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   188,   188,   188,
     188,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   190,
     189,   189,   189,   189,   189,   189,   191,   191,   192,   192,
     193,   193,   194,   195,   196,   196,   197,   197,   199,   198,
     200,   198,   201,   201,   202,   202,   204,   203,   206,   205,
     207,   207,   208,   208,   209,   209,   210,   210,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   214,   214,   215,
     215,   215,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   226,   227,   227,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   237,   238,   238,
     238,   239,   239,   240,   240,   241,   242,   242,   242,   242,
     243,   243,   244,   245,   245,   246,   246,   247,   247,   248,
     248,   249,   249,   249,   249,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   254,   255,   255,   256,   257,   257,
     258,   258,   260,   259,   261,   261,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   263,   264,   265,   265,   266,   266,   267,   267,   268,
     268,   269,   269,   269,   269,   270,   270,   271,   271,   272,
     272,   273,   273,   273,   274,   274,   275,   275,   275,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   277,   277,   277,   278,   278,
     279,   279,   280,   280,   281,   282,   282,   282,   283,   283,
     283,   284,   284,   284,   284,   284,   284,   285,   285,   285,
     286,   286,   286,   287,   287,   288,   288,   288,   288,   288,
     288,   289,   289,   289,   290,   290,   290,   291,   291,   292,
     292,   292,   293,   293,   294,   294,   295,   295,   295,   295,
     296,   296,   296,   296,   297,   297,   297,   297,   297,   297,
     297,   298,   298,   298,   299,   299,   299,   299,   299,   299,
     299,   300,   300,   301
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     4,     3,     0,     6,     0,     5,     3,     4,
       3,     4,     3,     1,     1,     5,     6,     5,     6,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     3,     1,
       2,     3,     1,     2,     0,     1,     1,     1,     1,     1,
       4,     3,     1,     1,     5,     7,     9,     5,     3,     3,
       3,     3,     3,     3,     1,     2,     5,     7,     9,     0,
       6,     1,     6,     3,     3,     2,     0,     9,     0,     4,
       1,     3,     1,    11,     0,     1,     0,     1,     0,    10,
       0,     9,     1,     2,     1,     1,     0,     7,     0,     8,
       0,     2,     0,     2,     0,     2,     1,     2,     4,     1,
       4,     1,     4,     1,     4,     3,     4,     4,     5,     0,
       5,     4,     1,     1,     1,     4,     5,     6,     1,     3,
       6,     7,     3,     6,     1,     0,     1,     3,     4,     6,
       0,     1,     1,     1,     1,     0,     2,     2,     3,     1,
       3,     1,     2,     3,     1,     1,     3,     1,     1,     3,
       2,     0,     3,     3,     3,    10,     1,     3,     1,     2,
       3,     1,     2,     2,     2,     3,     3,     3,     4,     3,
       1,     1,     3,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     1,     3,     3,     3,     1,     1,     0,     1,
       3,     1,     0,     9,     3,     2,     6,     3,     4,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     5,
       4,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     2,     1,     2,     4,     2,    11,
      12,     1,     0,     0,     1,     0,     4,     3,     1,     1,
       2,     2,     4,     4,     2,     1,     1,     1,     1,     0,
       3,     0,     1,     1,     0,     1,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     3,     1,     1,     1,     3,     3,     0,     1,
       1,     1,     0,     1,     1,     1,     3,     1,     1,     3,
       1,     1,     4,     4,     4,     4,     1,     1,     1,     3,
       1,     4,     2,     3,     3,     1,     4,     4,     3,     3,
       3,     1,     3,     1,     1,     3,     1,     3,     1,     1,
       4,     0,     0,     2,     3,     1,     3,     1,     4,     2,
       2,     2,     1,     2,     1,     4,     3,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     2,     2,     4,     2,
       2,     1,     3,     1
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
  switch (yytype)
    {
          case 81: /* "integer number (T_LNUMBER)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3303 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 82: /* "floating-point number (T_DNUMBER)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3309 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 83: /* "identifier (T_STRING)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3315 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 84: /* "variable (T_VARIABLE)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3321 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 85: /* T_INLINE_HTML  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3327 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 86: /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3333 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 87: /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3339 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 88: /* "variable name (T_STRING_VARNAME)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3345 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 89: /* "number (T_NUM_STRING)"  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3351 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 170: /* identifier  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3357 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 171: /* top_statement_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3363 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 172: /* namespace_name  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3369 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 173: /* name  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3375 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 174: /* top_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3381 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 178: /* group_use_declaration  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3387 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 179: /* mixed_group_use_declaration  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3393 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 180: /* inline_use_declarations  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3399 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 181: /* unprefixed_use_declarations  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3405 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 182: /* use_declarations  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3411 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 183: /* inline_use_declaration  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3417 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 184: /* unprefixed_use_declaration  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3423 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 185: /* use_declaration  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3429 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 186: /* const_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3435 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 187: /* inner_statement_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3441 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 188: /* inner_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3447 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 189: /* statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3453 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 191: /* catch_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3459 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 192: /* finally_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3465 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 193: /* unset_variables  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3471 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 194: /* unset_variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3477 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 195: /* function_declaration_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3483 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 198: /* class_declaration_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3489 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 203: /* trait_declaration_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3495 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 205: /* interface_declaration_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3501 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 207: /* extends_from  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3507 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 208: /* interface_extends_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3513 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 209: /* implements_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3519 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 210: /* foreach_variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3525 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 211: /* for_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3531 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 212: /* foreach_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3537 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 213: /* declare_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3543 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 214: /* switch_case_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3549 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 215: /* case_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3555 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 217: /* while_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3561 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 218: /* if_stmt_without_else  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3567 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 219: /* if_stmt  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3573 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 220: /* alt_if_stmt_without_else  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3579 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 221: /* alt_if_stmt  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3585 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 222: /* parameter_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3591 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 223: /* non_empty_parameter_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3597 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 224: /* parameter  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3603 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 225: /* optional_type  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3609 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 226: /* type  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3615 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 227: /* return_type  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3621 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 228: /* argument_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3627 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 229: /* non_empty_argument_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3633 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 230: /* argument  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3639 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 231: /* global_var_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3645 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 232: /* global_var  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3651 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 233: /* static_var_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3657 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 234: /* static_var  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3663 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 235: /* class_statement_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3669 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 236: /* class_statement  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3675 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 237: /* name_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3681 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 238: /* trait_adaptations  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3687 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 239: /* trait_adaptation_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3693 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 240: /* trait_adaptation  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3699 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 241: /* trait_precedence  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3705 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 242: /* trait_alias  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3711 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 243: /* trait_method_reference  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3717 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 244: /* absolute_trait_method_reference  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3723 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 245: /* method_body  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3729 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 250: /* property_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3735 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 251: /* property  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3741 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 252: /* class_const_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3747 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 253: /* class_const_decl  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3753 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 254: /* const_decl  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3759 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 255: /* echo_expr_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3765 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 256: /* echo_expr  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3771 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 257: /* for_exprs  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3777 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 258: /* non_empty_for_exprs  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3783 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 259: /* anonymous_class  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3789 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 261: /* new_expr  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3795 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 262: /* expr_without_variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3801 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 264: /* backup_doc_comment  */
#line 53 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { if (((*yyvaluep).str)) zend_string_release(((*yyvaluep).str)); }
#line 3807 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 266: /* lexical_vars  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3813 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 267: /* lexical_var_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3819 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 268: /* lexical_var  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3825 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 269: /* function_call  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3831 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 270: /* class_name  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3837 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 271: /* class_name_reference  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3843 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 272: /* exit_expr  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3849 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 273: /* backticks_expr  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3855 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 274: /* ctor_arguments  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3861 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 275: /* dereferencable_scalar  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3867 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 276: /* scalar  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3873 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 277: /* constant  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3879 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 279: /* expr  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3885 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 280: /* optional_expr  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3891 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 281: /* variable_class_name  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3897 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 282: /* dereferencable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3903 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 283: /* callable_expr  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3909 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 284: /* callable_variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3915 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 285: /* variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3921 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 286: /* simple_variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3927 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 287: /* static_member  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3933 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 288: /* new_variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3939 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 289: /* member_name  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3945 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 290: /* property_name  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3951 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 291: /* assignment_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3957 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 292: /* assignment_list_element  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3963 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 293: /* array_pair_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3969 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 294: /* non_empty_array_pair_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3975 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 295: /* array_pair  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3981 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 296: /* encaps_list  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3987 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 297: /* encaps_var  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3993 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 298: /* encaps_var_offset  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3999 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 299: /* internal_functions_in_yacc  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4005 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 300: /* isset_variables  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4011 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 301: /* isset_variable  */
#line 52 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4017 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
        case 2:
#line 265 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { CG(ast) = (yyvsp[0].ast); }
#line 4285 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 78:
#line 284 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4291 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 79:
#line 285 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    {
			zval zv;
			zend_lex_tstring(&zv);
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
#line 4301 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 80:
#line 293 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4307 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 81:
#line 294 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4313 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 82:
#line 298 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4319 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 83:
#line 299 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_append_str((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4325 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 84:
#line 303 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4331 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 85:
#line 304 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }
#line 4337 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 86:
#line 305 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }
#line 4343 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 87:
#line 309 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4349 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 88:
#line 310 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4355 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 89:
#line 311 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4361 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 90:
#line 312 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4367 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 91:
#line 313 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4373 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 92:
#line 315 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }
#line 4381 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 93:
#line 319 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }
#line 4388 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 94:
#line 321 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { RESET_DOC_COMMENT(); }
#line 4394 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 95:
#line 323 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4400 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 96:
#line 324 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { RESET_DOC_COMMENT(); }
#line 4406 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 97:
#line 326 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }
#line 4412 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 98:
#line 327 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4418 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 99:
#line 328 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4424 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 100:
#line 329 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = T_CLASS; }
#line 4430 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 101:
#line 330 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4436 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 102:
#line 331 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4442 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 103:
#line 335 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = T_FUNCTION; }
#line 4448 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 104:
#line 336 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = T_CONST; }
#line 4454 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 105:
#line 341 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4460 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 106:
#line 343 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4466 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 107:
#line 348 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast));}
#line 4472 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 108:
#line 350 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4478 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 109:
#line 355 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4484 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 110:
#line 357 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4490 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 111:
#line 362 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4496 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 112:
#line 364 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4502 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 113:
#line 369 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4508 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 114:
#line 371 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4514 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 115:
#line 375 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = T_CLASS; }
#line 4520 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 116:
#line 376 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }
#line 4526 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 117:
#line 381 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 4532 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 118:
#line 383 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4538 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 119:
#line 387 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4544 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 120:
#line 388 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4550 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 121:
#line 392 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4556 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 122:
#line 393 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }
#line 4562 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 123:
#line 398 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4568 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 124:
#line 400 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4574 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 125:
#line 405 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4580 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 126:
#line 406 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4586 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 127:
#line 407 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4592 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 128:
#line 408 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4598 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 129:
#line 409 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4604 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 130:
#line 411 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; zend_error_noreturn(E_COMPILE_ERROR,
			      "__HALT_COMPILER() can only be used from the outermost scope"); }
#line 4611 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 131:
#line 417 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4617 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 132:
#line 418 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4623 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 133:
#line 419 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4629 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 134:
#line 421 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4635 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 135:
#line 423 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 4641 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 136:
#line 425 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4647 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 137:
#line 427 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4653 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 138:
#line 428 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }
#line 4659 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 139:
#line 429 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }
#line 4665 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 140:
#line 430 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }
#line 4671 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 141:
#line 431 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4677 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 142:
#line 432 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4683 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 143:
#line 433 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4689 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 144:
#line 434 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 4695 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 145:
#line 435 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4701 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 146:
#line 436 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4707 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 147:
#line 438 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }
#line 4713 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 148:
#line 441 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }
#line 4719 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 149:
#line 443 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { zend_handle_encoding_declaration((yyvsp[-1].ast)); }
#line 4725 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 150:
#line 445 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 4731 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 151:
#line 446 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 4737 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 152:
#line 448 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4743 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 153:
#line 449 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[-1].ast)); }
#line 4749 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 154:
#line 450 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }
#line 4755 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 155:
#line 451 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }
#line 4761 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 156:
#line 456 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }
#line 4767 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 157:
#line 458 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }
#line 4773 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 158:
#line 462 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 4779 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 159:
#line 463 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4785 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 160:
#line 467 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 4791 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 161:
#line 468 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4797 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 162:
#line 472 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }
#line 4803 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 163:
#line 478 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-9].num), (yyvsp[-10].num), (yyvsp[-3].str),
		      zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-6].ast), NULL, (yyvsp[-1].ast), (yyvsp[-4].ast)); }
#line 4810 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 164:
#line 483 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = 0; }
#line 4816 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 165:
#line 484 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_PARAM_REF; }
#line 4822 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 166:
#line 488 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = 0; }
#line 4828 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 167:
#line 489 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_PARAM_VARIADIC; }
#line 4834 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 168:
#line 493 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = CG(zend_lineno); }
#line 4840 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 169:
#line 495 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4846 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 170:
#line 496 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = CG(zend_lineno); }
#line 4852 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 171:
#line 498 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4858 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 172:
#line 502 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = (yyvsp[0].num); }
#line 4864 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 173:
#line 503 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); }
#line 4870 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 174:
#line 507 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
#line 4876 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 175:
#line 508 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_FINAL; }
#line 4882 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 176:
#line 512 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = CG(zend_lineno); }
#line 4888 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 177:
#line 514 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL); }
#line 4894 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 178:
#line 518 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = CG(zend_lineno); }
#line 4900 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 179:
#line 520 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4906 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 180:
#line 524 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 4912 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 181:
#line 525 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4918 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 182:
#line 529 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 4924 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 183:
#line 530 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4930 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 184:
#line 534 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 4936 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 185:
#line 535 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4942 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 186:
#line 539 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4948 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 187:
#line 540 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }
#line 4954 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 188:
#line 541 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4960 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 189:
#line 545 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4966 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 190:
#line 546 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4972 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 191:
#line 550 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4978 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 192:
#line 551 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4984 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 193:
#line 555 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4990 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 194:
#line 556 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4996 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 195:
#line 560 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5002 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 196:
#line 561 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5008 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 197:
#line 562 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5014 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 198:
#line 563 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5020 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 199:
#line 567 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }
#line 5026 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 200:
#line 569 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5032 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 201:
#line 571 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }
#line 5038 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 204:
#line 581 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5044 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 205:
#line 582 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5050 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 206:
#line 588 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5057 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 207:
#line 591 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5064 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 208:
#line 596 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5070 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 209:
#line 598 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }
#line 5076 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 210:
#line 603 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5083 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 211:
#line 606 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5090 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 212:
#line 611 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5096 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 213:
#line 613 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }
#line 5103 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 214:
#line 618 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5109 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 215:
#line 619 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }
#line 5115 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 216:
#line 625 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }
#line 5121 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 217:
#line 627 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5127 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 218:
#line 632 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-2].num) | (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast), NULL); }
#line 5133 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 219:
#line 634 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-4].num) | (yyvsp[-3].num), (yyvsp[-5].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5139 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 220:
#line 639 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 5145 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 221:
#line 640 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5151 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 222:
#line 644 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }
#line 5157 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 223:
#line 645 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }
#line 5163 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 224:
#line 646 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5169 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 225:
#line 650 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 5175 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 226:
#line 651 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5181 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 227:
#line 655 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 5187 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 228:
#line 656 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5193 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 229:
#line 661 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }
#line 5199 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 230:
#line 663 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5205 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 231:
#line 667 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5211 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 232:
#line 668 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 5217 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 233:
#line 672 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5223 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 234:
#line 673 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5229 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 235:
#line 678 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }
#line 5235 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 236:
#line 683 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5241 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 237:
#line 684 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5247 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 238:
#line 688 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }
#line 5253 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 239:
#line 689 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5259 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 240:
#line 695 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5265 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 241:
#line 697 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 5271 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 242:
#line 703 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_append_doc_comment((yyvsp[-1].ast)); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 5277 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 243:
#line 705 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); RESET_DOC_COMMENT(); }
#line 5283 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 244:
#line 707 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5289 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 245:
#line 710 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-7].num) | (yyvsp[-9].num), (yyvsp[-8].num), (yyvsp[-1].str),
				  zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-4].ast), NULL, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 5296 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 246:
#line 715 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 5302 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 247:
#line 716 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5308 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 248:
#line 720 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 5314 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 249:
#line 721 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 5320 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 250:
#line 722 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5326 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 251:
#line 727 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }
#line 5332 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 252:
#line 729 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5338 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 253:
#line 733 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5344 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 254:
#line 734 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5350 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 255:
#line 739 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5356 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 256:
#line 744 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5362 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 257:
#line 746 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { zval zv; zend_lex_tstring(&zv); (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }
#line 5368 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 258:
#line 748 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5374 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 259:
#line 750 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }
#line 5380 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 260:
#line 755 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }
#line 5386 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 261:
#line 756 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5392 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 262:
#line 761 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5398 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 263:
#line 765 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 5404 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 264:
#line 766 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5410 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 265:
#line 770 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5416 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 266:
#line 771 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5422 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 267:
#line 775 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5428 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 268:
#line 777 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }
#line 5434 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 269:
#line 781 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5440 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 270:
#line 783 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); }
#line 5446 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 271:
#line 787 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5452 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 272:
#line 788 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 5458 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 273:
#line 789 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 5464 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 274:
#line 790 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_STATIC; }
#line 5470 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 275:
#line 791 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_ABSTRACT; }
#line 5476 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 276:
#line 792 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_FINAL; }
#line 5482 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 277:
#line 796 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5488 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 278:
#line 797 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }
#line 5494 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 279:
#line 801 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[0].ast), NULL); }
#line 5500 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 280:
#line 803 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5506 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 281:
#line 807 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5512 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 282:
#line 808 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }
#line 5518 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 283:
#line 812 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5524 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 284:
#line 816 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5530 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 285:
#line 820 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5536 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 286:
#line 821 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5542 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 287:
#line 824 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 5548 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 288:
#line 828 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 5554 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 289:
#line 829 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5560 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 290:
#line 833 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5566 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 291:
#line 834 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 5572 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 292:
#line 838 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = CG(zend_lineno); }
#line 5578 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 293:
#line 839 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}
#line 5589 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 294:
#line 849 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5595 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 295:
#line 851 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5601 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 296:
#line 856 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5607 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 297:
#line 858 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5613 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 298:
#line 860 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5619 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 299:
#line 861 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }
#line 5625 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 300:
#line 863 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5631 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 301:
#line 865 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5637 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 302:
#line 867 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5643 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 303:
#line 869 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5649 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 304:
#line 871 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5655 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 305:
#line 873 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5661 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 306:
#line 875 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5667 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 307:
#line 877 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5673 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 308:
#line 879 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5679 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 309:
#line 881 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5685 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 310:
#line 883 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5691 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 311:
#line 885 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5697 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 312:
#line 886 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }
#line 5703 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 313:
#line 887 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }
#line 5709 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 314:
#line 888 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }
#line 5715 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 315:
#line 889 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }
#line 5721 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 316:
#line 891 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5727 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 317:
#line 893 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5733 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 318:
#line 895 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5739 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 319:
#line 897 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5745 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 320:
#line 899 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5751 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 321:
#line 900 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5757 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 322:
#line 901 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5763 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 323:
#line 902 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5769 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 324:
#line 903 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5775 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 325:
#line 904 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5781 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 326:
#line 905 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5787 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 327:
#line 906 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5793 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 328:
#line 907 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5799 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 329:
#line 908 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5805 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 330:
#line 909 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5811 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 331:
#line 910 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5817 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 332:
#line 911 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5823 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 333:
#line 912 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }
#line 5829 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 334:
#line 913 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }
#line 5835 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 335:
#line 914 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }
#line 5841 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 336:
#line 915 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }
#line 5847 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 337:
#line 917 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5853 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 338:
#line 919 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5859 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 339:
#line 921 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5865 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 340:
#line 923 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5871 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 341:
#line 925 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5877 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 342:
#line 927 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5883 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 343:
#line 929 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5889 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 344:
#line 931 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5895 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 345:
#line 933 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5901 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 346:
#line 935 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5907 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 347:
#line 936 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5913 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 348:
#line 937 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5919 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 349:
#line 939 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5925 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 350:
#line 941 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }
#line 5931 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 351:
#line 943 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5937 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 352:
#line 944 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5943 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 353:
#line 945 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }
#line 5949 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 354:
#line 946 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }
#line 5955 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 355:
#line 947 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }
#line 5961 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 356:
#line 948 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }
#line 5967 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 357:
#line 949 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }
#line 5973 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 358:
#line 950 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }
#line 5979 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 359:
#line 951 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }
#line 5985 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 360:
#line 952 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }
#line 5991 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 361:
#line 953 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }
#line 5997 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 362:
#line 954 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6003 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 363:
#line 955 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }
#line 6009 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 364:
#line 956 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }
#line 6015 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 365:
#line 957 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); }
#line 6021 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 366:
#line 958 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); }
#line 6027 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 367:
#line 959 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 6033 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 368:
#line 960 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); }
#line 6039 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 369:
#line 963 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-9].num), (yyvsp[-10].num), (yyvsp[-3].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-1].ast), (yyvsp[-4].ast)); }
#line 6047 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 370:
#line 968 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-9].num) | ZEND_ACC_STATIC, (yyvsp[-10].num), (yyvsp[-3].str),
			      zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-1].ast), (yyvsp[-4].ast)); }
#line 6055 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 371:
#line 974 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = CG(zend_lineno); }
#line 6061 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 372:
#line 978 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }
#line 6067 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 373:
#line 982 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = 0; }
#line 6073 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 374:
#line 983 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }
#line 6079 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 375:
#line 987 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 6085 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 376:
#line 988 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6091 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 377:
#line 992 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6097 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 378:
#line 993 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }
#line 6103 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 379:
#line 997 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6109 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 380:
#line 998 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = 1; }
#line 6115 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 381:
#line 1003 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6121 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 382:
#line 1005 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6127 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 383:
#line 1007 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6133 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 384:
#line 1009 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6139 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 385:
#line 1014 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { zval zv; ZVAL_STRINGL(&zv, "static", sizeof("static")-1);
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }
#line 6146 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 386:
#line 1016 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6152 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 387:
#line 1020 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6158 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 388:
#line 1021 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6164 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 389:
#line 1025 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 6170 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 390:
#line 1026 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6176 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 391:
#line 1031 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 6182 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 392:
#line 1032 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6188 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 393:
#line 1033 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6194 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 394:
#line 1038 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 6200 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 395:
#line 1039 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6206 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 396:
#line 1044 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6212 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 397:
#line 1045 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6218 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 398:
#line 1046 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6224 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 399:
#line 1050 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6230 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 400:
#line 1051 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6236 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 401:
#line 1052 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }
#line 6242 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 402:
#line 1053 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }
#line 6248 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 403:
#line 1054 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }
#line 6254 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 404:
#line 1055 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }
#line 6260 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 405:
#line 1056 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }
#line 6266 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 406:
#line 1057 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }
#line 6272 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 407:
#line 1058 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }
#line 6278 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 408:
#line 1059 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }
#line 6284 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 409:
#line 1060 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6290 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 410:
#line 1062 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 6296 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 411:
#line 1063 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6302 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 412:
#line 1064 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6308 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 413:
#line 1065 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6314 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 414:
#line 1066 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6320 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 415:
#line 1070 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }
#line 6326 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 416:
#line 1072 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6332 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 417:
#line 1074 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6338 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 420:
#line 1083 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6344 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 421:
#line 1084 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6350 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 422:
#line 1088 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 6356 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 423:
#line 1089 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6362 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 424:
#line 1093 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6368 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 425:
#line 1097 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6374 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 426:
#line 1098 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6380 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 427:
#line 1099 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6386 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 428:
#line 1103 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6392 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 429:
#line 1104 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6398 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 430:
#line 1105 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6404 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 431:
#line 1110 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6410 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 432:
#line 1112 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6416 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 433:
#line 1114 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6422 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 434:
#line 1116 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6428 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 435:
#line 1118 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6434 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 436:
#line 1119 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6440 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 437:
#line 1124 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6446 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 438:
#line 1126 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6452 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 439:
#line 1128 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6458 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 440:
#line 1132 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6464 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 441:
#line 1133 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6470 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 442:
#line 1134 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6476 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 443:
#line 1139 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6482 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 444:
#line 1141 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6488 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 445:
#line 1146 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6494 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 446:
#line 1148 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6500 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 447:
#line 1150 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6506 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 448:
#line 1152 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6512 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 449:
#line 1154 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6518 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 450:
#line 1156 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6524 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 451:
#line 1160 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6530 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 452:
#line 1161 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6536 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 453:
#line 1162 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6542 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 454:
#line 1166 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6548 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 455:
#line 1167 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6554 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 456:
#line 1168 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6560 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 457:
#line 1173 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6566 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 458:
#line 1175 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_LIST, (yyvsp[0].ast)); }
#line 6572 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 459:
#line 1179 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6578 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 460:
#line 1180 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6584 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 461:
#line 1181 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = NULL; }
#line 6590 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 462:
#line 1186 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARRAY); }
#line 6596 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 463:
#line 1187 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6602 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 464:
#line 1192 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6608 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 465:
#line 1194 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }
#line 6614 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 466:
#line 1199 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 6620 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 467:
#line 1200 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }
#line 6626 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 468:
#line 1202 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }
#line 6632 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 469:
#line 1204 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }
#line 6638 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 470:
#line 1209 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6644 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 471:
#line 1211 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6650 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 472:
#line 1213 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }
#line 6656 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 473:
#line 1215 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6662 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 474:
#line 1220 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6668 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 475:
#line 1222 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }
#line 6675 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 476:
#line 1225 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6682 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 477:
#line 1228 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 6688 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 478:
#line 1230 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 6694 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 479:
#line 1232 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }
#line 6701 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 480:
#line 1234 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6707 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 481:
#line 1238 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6713 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 482:
#line 1239 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6719 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 483:
#line 1240 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6725 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 484:
#line 1245 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6731 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 485:
#line 1246 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }
#line 6737 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 486:
#line 1248 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }
#line 6743 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 487:
#line 1250 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }
#line 6749 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 488:
#line 1252 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }
#line 6755 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 489:
#line 1254 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }
#line 6761 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 490:
#line 1256 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }
#line 6767 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 491:
#line 1260 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6773 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 492:
#line 1262 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6779 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;

  case 493:
#line 1266 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1661  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }
#line 6785 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
    break;


#line 6789 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.c" /* yacc.c:1661  */
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
#line 1269 "/Users/bernardobreder/git/php-src/Zend/zend_language_parser.y" /* yacc.c:1906  */


/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;

			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}

			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = (unsigned int)yystrlen(yystr);

			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}

			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}
	}
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
