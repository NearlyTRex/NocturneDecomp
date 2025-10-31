/*
** SQLEXT.H - This is the include for applications using
**             the Microsoft SQL Extensions
**
** (C) Copyright 1990, 1991, 1992, 1993 By Microsoft Corp.
*/

#ifndef __SQLEXT
#define __SQLEXT

#ifdef __cplusplus
extern "C" {                         /* Assume C declarations for C++ */
#endif	/* __cplusplus */

#ifndef __SQL
#include "sql.h"
#endif

/* Defines used by both Level 1 and Level 2 functions */

/* Additional return codes */
#define SQL_STILL_EXECUTING 2

/* SQL extended datatypes */
#define SQL_DATE            9
#define SQL_TIME           10
#define SQL_TIMESTAMP      11
#define SQL_LONGVARCHAR    -1
#define SQL_BINARY         -2
#define SQL_VARBINARY      -3
#define SQL_LONGVARBINARY  -4
#define SQL_BIGINT         -5
#define SQL_TINYINT        -6
#define SQL_BIT            -7

/* C datatype to SQL datatype mapping */
#define SQL_C_DATE         SQL_DATE
#define SQL_C_TIME         SQL_TIME
#define SQL_C_TIMESTAMP    SQL_TIMESTAMP
#define SQL_C_BINARY       SQL_BINARY
#define SQL_C_BIT          SQL_BIT
#define SQL_C_TINYINT      SQL_TINYINT

#ifndef RC_INVOKED
/* SQL portable types for C */
/* transfer types for DATE, TIME, TIMESTAMP */
typedef struct tagDATE_STRUCT
  {
  SWORD year;
  UWORD month;
  UWORD day;
  } DATE_STRUCT;

typedef struct tagTIME_STRUCT
  {
  UWORD hour;
  UWORD minute;
  UWORD second;
  } TIME_STRUCT;

typedef struct tagTIMESTAMP_STRUCT
  {
  SWORD year;
  UWORD month;
  UWORD day;
  UWORD hour;
  UWORD minute;
  UWORD second;
  UDWORD fraction;
  } TIMESTAMP_STRUCT;
#endif /* RC_INVOKED */

/* from SQL.h -- extended data types change this */
#undef  SQL_TYPE_MIN  
#define SQL_TYPE_MIN      -7
#define SQL_ALL_TYPES      0


/* Level 1 Functions                             */

/* Access modes                 */
#define SQL_MODE_READ_WRITE     0
#define SQL_MODE_READ_ONLY      1

/* Options for SQLDriverConnect */
#define SQL_DRIVER_NOPROMPT           0
#define SQL_DRIVER_COMPLETE           1
#define SQL_DRIVER_PROMPT             2
#define SQL_DRIVER_COMPLETE_REQUIRED  3

/* Special return values for SQLGetData */
#define SQL_NO_TOTAL           -4

/* Defines for SQLGetFunctions */
#define SQL_API_SQLALLOCCONNECT      1    /* Core Functions           */
#define SQL_API_SQLALLOCENV          2
#define SQL_API_SQLALLOCSTMT         3
#define SQL_API_SQLBINDCOL           4
#define SQL_API_SQLCANCEL            5
#define SQL_API_SQLCOLATTRIBUTES     6
#define SQL_API_SQLCONNECT           7
#define SQL_API_SQLDESCRIBECOL       8
#define SQL_API_SQLDISCONNECT        9
#define SQL_API_SQLERROR            10
#define SQL_API_SQLEXECDIRECT       11
#define SQL_API_SQLEXECUTE          12
#define SQL_API_SQLFETCH            13
#define SQL_API_SQLFREECONNECT      14
#define SQL_API_SQLFREEENV          15
#define SQL_API_SQLFREESTMT         16
#define SQL_API_SQLGETCURSORNAME    17
#define SQL_API_SQLNUMRESULTCOLS    18
#define SQL_API_SQLPREPARE          19
#define SQL_API_SQLROWCOUNT         20
#define SQL_API_SQLSETCURSORNAME    21
#define SQL_API_SQLSETPARAM         22
#define SQL_API_SQLTRANSACT         23

#define SQL_NUM_FUNCTIONS           23

#define SQL_EXT_API_START           40

#define SQL_API_SQLCOLUMNS          40    /* Level 1 Functions        */
#define SQL_API_SQLDRIVERCONNECT    41
#define SQL_API_SQLGETCONNECTOPTION 42
#define SQL_API_SQLGETDATA          43
#define SQL_API_SQLGETFUNCTIONS     44
#define SQL_API_SQLGETINFO          45
#define SQL_API_SQLGETSTMTOPTION    46
#define SQL_API_SQLGETTYPEINFO      47
#define SQL_API_SQLPARAMDATA        48
#define SQL_API_SQLPUTDATA          49
#define SQL_API_SQLSETCONNECTOPTION 50
#define SQL_API_SQLSETSTMTOPTION    51
#define SQL_API_SQLSPECIALCOLUMNS   52
#define SQL_API_SQLSTATISTICS       53
#define SQL_API_SQLTABLES           54

#define SQL_API_SQLBROWSECONNECT    55    /* Level 2 Functions        */
#define SQL_API_SQLCOLUMNPRIVILEGES 56
#define SQL_API_SQLDATASOURCES      57
#define SQL_API_SQLDESCRIBEPARAM    58
#define SQL_API_SQLEXTENDEDFETCH    59
#define SQL_API_SQLFOREIGNKEYS      60
#define SQL_API_SQLMORERESULTS      61
#define SQL_API_SQLNATIVESQL        62
#define SQL_API_SQLNUMPARAMS        63
#define SQL_API_SQLPARAMOPTIONS     64
#define SQL_API_SQLPRIMARYKEYS      65
#define SQL_API_SQLPROCEDURECOLUMNS 66
#define SQL_API_SQLPROCEDURES       67
#define SQL_API_SQLSETPOS           68
#define SQL_API_SQLSETSCROLLOPTIONS 69
#define SQL_API_SQLTABLEPRIVILEGES  70

#define SQL_EXT_API_LAST            70

#define SQL_NUM_EXTENSIONS (SQL_EXT_API_LAST-SQL_EXT_API_START+1)

/* Defines for SQLGetInfo */
#define SQL_INFO_FIRST                       0
#define SQL_ACTIVE_CONNECTIONS               0
#define SQL_ACTIVE_STATEMENTS                1
#define SQL_DATA_SOURCE_NAME                 2
#define SQL_DRIVER_HDBC                      3
#define SQL_DRIVER_HENV                      4
#define SQL_DRIVER_HSTMT                     5
#define SQL_DRIVER_NAME                      6
#define SQL_DRIVER_VER                       7
#define SQL_FETCH_DIRECTION                  8
#define SQL_ODBC_API_CONFORMANCE             9
#define SQL_ODBC_VER                        10
#define SQL_ROW_UPDATES                     11
#define SQL_ODBC_SAG_CLI_CONFORMANCE        12
#define SQL_SERVER_NAME                     13
#define SQL_SEARCH_PATTERN_ESCAPE           14
#define SQL_ODBC_SQL_CONFORMANCE            15

#define SQL_DATABASE_NAME                   16
#define SQL_DBMS_NAME                       17
#define SQL_DBMS_VER                        18

#define SQL_ACCESSIBLE_TABLES               19
#define SQL_ACCESSIBLE_PROCEDURES           20
#define SQL_PROCEDURES                      21
#define SQL_CONCAT_NULL_BEHAVIOR            22
#define SQL_CURSOR_COMMIT_BEHAVIOR          23
#define SQL_CURSOR_ROLLBACK_BEHAVIOR        24
#define SQL_DATA_SOURCE_READ_ONLY           25
#define SQL_DEFAULT_TXN_ISOLATION           26
#define SQL_EXPRESSIONS_IN_ORDERBY          27
#define SQL_IDENTIFIER_CASE                 28
#define SQL_IDENTIFIER_QUOTE_CHAR           29
#define SQL_MAX_COLUMN_NAME_LEN             30
#define SQL_MAX_CURSOR_NAME_LEN             31
#define SQL_MAX_OWNER_NAME_LEN              32
#define SQL_MAX_PROCEDURE_NAME_LEN          33
#define SQL_MAX_QUALIFIER_NAME_LEN          34
#define SQL_MAX_TABLE_NAME_LEN              35
#define SQL_MULT_RESULT_SETS                36
#define SQL_MULTIPLE_ACTIVE_TXN             37
#define SQL_OUTER_JOINS                     38
#define SQL_OWNER_TERM                      39
#define SQL_PROCEDURE_TERM                  40
#define SQL_QUALIFIER_NAME_SEPARATOR        41
#define SQL_QUALIFIER_TERM                  42
#define SQL_SCROLL_CONCURRENCY              43
#define SQL_SCROLL_OPTIONS                  44
#define SQL_TABLE_TERM                      45
#define SQL_TXN_CAPABLE                     46
#define SQL_USER_NAME                       47

#define SQL_CONVERT_FUNCTIONS               48
#define SQL_NUMERIC_FUNCTIONS               49
#define SQL_STRING_FUNCTIONS                50
#define SQL_SYSTEM_FUNCTIONS                51
#define SQL_TIMEDATE_FUNCTIONS              52

#define SQL_CONVERT_BIGINT                  53
#define SQL_CONVERT_BINARY                  54
#define SQL_CONVERT_BIT                     55
#define SQL_CONVERT_CHAR                    56
#define SQL_CONVERT_DATE                    57
#define SQL_CONVERT_DECIMAL                 58
#define SQL_CONVERT_DOUBLE                  59
#define SQL_CONVERT_FLOAT                   60
#define SQL_CONVERT_INTEGER                 61
#define SQL_CONVERT_LONGVARCHAR             62
#define SQL_CONVERT_NUMERIC                 63
#define SQL_CONVERT_REAL                    64
#define SQL_CONVERT_SMALLINT                65
#define SQL_CONVERT_TIME                    66
#define SQL_CONVERT_TIMESTAMP               67
#define SQL_CONVERT_TINYINT                 68
#define SQL_CONVERT_VARBINARY               69
#define SQL_CONVERT_VARCHAR                 70
#define SQL_CONVERT_LONGVARBINARY           71

#define SQL_TXN_ISOLATION_OPTION            72
#define SQL_ODBC_SQL_OPT_IEF                73

/*** ODBC SDK 1.0 Additions ***/
#define SQL_CORRELATION_NAME				74
#define SQL_NON_NULLABLE_COLUMNS			75

/*** ODBC SDK 2.0 Additions ***/
#define SQL_DRIVER_HLIB 					76
#define SQL_DRIVER_ODBC_VER 				77
#define SQL_LOCK_TYPES						78
#define SQL_POS_OPERATIONS					79
#define SQL_POSITIONED_STATEMENTS			80
#define SQL_GETDATA_EXTENSIONS				81
#define SQL_BOOKMARK_PERSISTENCE			82
#define SQL_STATIC_SENSITIVITY				83
#define SQL_FILE_USAGE						84
#define SQL_NULL_COLLATION					85
#define SQL_ALTER_TABLE 					86
#define SQL_COLUMN_ALIAS					87
#define SQL_GROUP_BY						88
#define SQL_KEYWORDS						89
#define SQL_ORDER_BY_COLUMNS_IN_SELECT		90
#define SQL_OWNER_USAGE 					91
#define SQL_QUALIFIER_USAGE 				92
#define SQL_QUOTED_IDENTIFIER_CASE			93
#define SQL_SPECIAL_CHARACTERS				94
#define SQL_SUBQUERIES						95
#define SQL_UNION							96
#define SQL_MAX_COLUMNS_IN_GROUP_BY 		97
#define SQL_MAX_COLUMNS_IN_INDEX			98
#define SQL_MAX_COLUMNS_IN_ORDER_BY 		99
#define SQL_MAX_COLUMNS_IN_SELECT		   100
#define SQL_MAX_COLUMNS_IN_TABLE		   101
#define SQL_MAX_INDEX_SIZE				   102
#define SQL_MAX_ROW_SIZE_INCLUDES_LONG	   103
#define SQL_MAX_ROW_SIZE				   104
#define SQL_MAX_STATEMENT_LEN			   105
#define SQL_MAX_TABLES_IN_SELECT		   106
#define SQL_MAX_USER_NAME_LEN			   107
#define SQL_MAX_CHAR_LITERAL_LEN 		   108
#define SQL_TIMEDATE_ADD_INTERVALS		   109
#define SQL_TIMEDATE_DIFF_INTERVALS 	   110

#define SQL_CONVERT_C_BINARY			   111
#define SQL_CONVERT_C_BIT				   112
#define SQL_CONVERT_C_CHAR				   113
#define SQL_CONVERT_C_DATE				   114
#define SQL_CONVERT_C_DOUBLE			   115
#define SQL_CONVERT_C_FLOAT 			   116
#define SQL_CONVERT_C_SLONG 			   117
#define SQL_CONVERT_C_SSHORT			   118
#define SQL_CONVERT_C_STINYINT			   119
#define SQL_CONVERT_C_TIME				   120
#define SQL_CONVERT_C_TIMESTAMP 		   121
#define SQL_CONVERT_C_ULONG 			   122
#define SQL_CONVERT_C_USHORT			   123
#define SQL_CONVERT_C_UTINYINT			   124

#define SQL_CONVERT_SQL_BIGINT			   125
#define SQL_CONVERT_SQL_BINARY			   126
#define SQL_CONVERT_SQL_BIT 			   127
#define SQL_CONVERT_SQL_CHAR			   128
#define SQL_CONVERT_SQL_DATE			   129
#define SQL_CONVERT_SQL_DECIMAL 		   130
#define SQL_CONVERT_SQL_DOUBLE			   131
#define SQL_CONVERT_SQL_FLOAT			   132
#define SQL_CONVERT_SQL_INTEGER 		   133
#define SQL_CONVERT_SQL_LONGVARBINARY	   134
#define SQL_CONVERT_SQL_LONGVARCHAR 	   135
#define SQL_CONVERT_SQL_NUMERIC 		   136
#define SQL_CONVERT_SQL_REAL			   137
#define SQL_CONVERT_SQL_SMALLINT		   138
#define SQL_CONVERT_SQL_TIME			   139
#define SQL_CONVERT_SQL_TIMESTAMP		   140
#define SQL_CONVERT_SQL_TINYINT 		   141
#define SQL_CONVERT_SQL_VARBINARY		   142
#define SQL_CONVERT_SQL_VARCHAR 		   143

#define SQL_INFO_LAST					   143
#define SQL_INFO_DRIVER_START             1000


/* "SQL_CONVERT_" return value bitmasks */

#define SQL_CVT_CHAR                        0x00000001L
#define SQL_CVT_NUMERIC                     0x00000002L
#define SQL_CVT_DECIMAL                     0x00000004L
#define SQL_CVT_INTEGER                     0x00000008L
#define SQL_CVT_SMALLINT                    0x00000010L
#define SQL_CVT_FLOAT                       0x00000020L
#define SQL_CVT_REAL                        0x00000040L
#define SQL_CVT_DOUBLE                      0x00000080L
#define SQL_CVT_VARCHAR                     0x00000100L
#define SQL_CVT_LONGVARCHAR                 0x00000200L
#define SQL_CVT_BINARY                      0x00000400L
#define SQL_CVT_VARBINARY                   0x00000800L
#define SQL_CVT_BIT                         0x00001000L
#define SQL_CVT_TINYINT                     0x00002000L
#define SQL_CVT_BIGINT                      0x00004000L
#define SQL_CVT_DATE                        0x00008000L
#define SQL_CVT_TIME                        0x00010000L
#define SQL_CVT_TIMESTAMP                   0x00020000L
#define SQL_CVT_LONGVARBINARY               0x00040000L

/* Conversion functions */
#define SQL_FN_CVT_CONVERT                  0x00000001L

/* String functions */

#define SQL_FN_STR_CONCAT                   0x00000001L
#define SQL_FN_STR_INSERT                   0x00000002L
#define SQL_FN_STR_LEFT                     0x00000004L
#define SQL_FN_STR_LTRIM                    0x00000008L
#define SQL_FN_STR_LENGTH                   0x00000010L
#define SQL_FN_STR_LOCATE                   0x00000020L
#define SQL_FN_STR_LCASE                    0x00000040L
#define SQL_FN_STR_REPEAT                   0x00000080L
#define SQL_FN_STR_REPLACE                  0x00000100L
#define SQL_FN_STR_RIGHT                    0x00000200L
#define SQL_FN_STR_RTRIM                    0x00000400L
#define SQL_FN_STR_SUBSTRING                0x00000800L
#define SQL_FN_STR_UCASE                    0x00001000L
#define SQL_FN_STR_ASCII                    0x00002000L
#define SQL_FN_STR_CHAR                     0x00004000L

/* Numeric functions */

#define SQL_FN_NUM_ABS                      0x00000001L
#define SQL_FN_NUM_ACOS                     0x00000002L
#define SQL_FN_NUM_ASIN                     0x00000004L
#define SQL_FN_NUM_ATAN                     0x00000008L
#define SQL_FN_NUM_ATAN2                    0x00000010L
#define SQL_FN_NUM_CEILING                  0x00000020L
#define SQL_FN_NUM_COS                      0x00000040L
#define SQL_FN_NUM_COT                      0x00000080L
#define SQL_FN_NUM_EXP                      0x00000100L
#define SQL_FN_NUM_FLOOR                    0x00000200L
#define SQL_FN_NUM_LOG                      0x00000400L
#define SQL_FN_NUM_MOD                      0x00000800L
#define SQL_FN_NUM_SIGN                     0x00001000L
#define SQL_FN_NUM_SIN                      0x00002000L
#define SQL_FN_NUM_SQRT                     0x00004000L
#define SQL_FN_NUM_TAN                      0x00008000L
#define SQL_FN_NUM_PI                       0x00010000L
#define SQL_FN_NUM_RAND                     0x00020000L

/* Time/date functions */

#define SQL_FN_TD_NOW                       0x00000001L
#define SQL_FN_TD_CURDATE                   0x00000002L
#define SQL_FN_TD_DAYOFMONTH                0x00000004L
#define SQL_FN_TD_DAYOFWEEK                 0x00000008L
#define SQL_FN_TD_DAYOFYEAR                 0x00000010L
#define SQL_FN_TD_MONTH                     0x00000020L
#define SQL_FN_TD_QUARTER                   0x00000040L
#define SQL_FN_TD_WEEK                      0x00000080L
#define SQL_FN_TD_YEAR                      0x00000100L
#define SQL_FN_TD_CURTIME                   0x00000200L
#define SQL_FN_TD_HOUR                      0x00000400L
#define SQL_FN_TD_MINUTE                    0x00000800L
#define SQL_FN_TD_SECOND                    0x00001000L

/* System functions */

#define SQL_FN_SYS_USERNAME                 0x00000001L
#define SQL_FN_SYS_DBNAME                   0x00000002L
#define SQL_FN_SYS_IFNULL                   0x00000004L

/* ODBC API Conformance values */

#define SQL_OAC_NONE						0x0000
#define SQL_OAC_LEVEL1						0x0001
#define SQL_OAC_LEVEL2						0x0002

/* ODBC SQL Conformance values */

#define SQL_OSC_MINIMUM 					0x0000
#define SQL_OSC_CORE						0x0001
#define SQL_OSC_EXTENDED					0x0002

/* Cursor Commit Behavior values */

#define SQL_CC_DELETE						0x0000
#define SQL_CC_CLOSE						0x0001
#define SQL_CC_PRESERVE						0x0002

/* Cursor Rollback Behavior values */

#define SQL_CR_DELETE					   0x0000
#define SQL_CR_CLOSE					   0x0001
#define SQL_CR_PRESERVE					   0x0002

/* Scroll option masks */

#define SQL_SO_FORWARD_ONLY                 0x00000001L
#define SQL_SO_KEYSET_DRIVEN                0x00000002L
#define SQL_SO_DYNAMIC                      0x00000004L
#define SQL_SO_MIXED                        0x00000008L
#define SQL_SO_STATIC                       0x00000010L

/* Scroll concurrency option masks */

#define SQL_SCCO_READ_ONLY                  0x00000001L
#define SQL_SCCO_LOCK                       0x00000002L
#define SQL_SCCO_OPT_TIMESTAMP              0x00000004L
#define SQL_SCCO_OPT_VALUES                 0x00000008L

/* Fetch direction option masks */

#define SQL_FD_FETCH_NEXT                   0x00000001L
#define SQL_FD_FETCH_FIRST                  0x00000002L
#define SQL_FD_FETCH_LAST                   0x00000004L
#define SQL_FD_FETCH_PREV                   0x00000008L
#define SQL_FD_FETCH_ABSOLUTE               0x00000010L
#define SQL_FD_FETCH_RELATIVE               0x00000020L
#define SQL_FD_FETCH_RESUME                 0x00000040L

/* Transaction isolation option masks */

#define SQL_TXN_READ_UNCOMMITTED            0x00000001L
#define SQL_TXN_READ_COMMITTED              0x00000002L
#define SQL_TXN_REPEATABLE_READ             0x00000004L
#define SQL_TXN_SERIALIZABLE                0x00000008L
#define SQL_TXN_VERSIONING                  0x00000010L

/* Positioned statements option masks */

#define SQL_PS_POSITIONED_DELETE	0x00000001L
#define SQL_PS_POSITIONED_UPDATE	0x00000002L
#define SQL_PS_SELECT_FOR_UPDATE	0x00000004L

/* Lock Types option masks */

#define SQL_LCK_NO_CHANGE			0x00000001L
#define SQL_LCK_EXCLUSIVE			0x00000002L
#define SQL_LCK_UNLOCK				0x00000004L

/* options for SQLGetStmtOption/SQLSetStmtOption */
#define SQL_QUERY_TIMEOUT       0
#define SQL_MAX_ROWS            1
#define SQL_NOSCAN              2
#define SQL_MAX_LENGTH          3
#define SQL_ASYNC_ENABLE        4
#define SQL_BIND_TYPE           5

#define SQL_BIND_BY_COLUMN      0    /* Suboption for SQL_BIND_TYPE */

/* options for SQLSetConnectOption/SQLGetConnectOption */
#define SQL_ACCESS_MODE 			101
#define SQL_AUTOCOMMIT				102
#define SQL_LOGIN_TIMEOUT			103
#define SQL_OPT_TRACE				104
#define SQL_OPT_TRACEFILE			105
#define SQL_TRANSLATE_DLL			106
#define SQL_TRANSLATE_OPTION		107
#define SQL_TXN_ISOLATION			108
#define SQL_CURRENT_QUALIFIER		109
#define SQL_ODBC_CURSORS			110
#define SQL_CONNECT_OPT_DRVR_START	1000

#define	CONN_OPT_MIN				SQL_ACCESS_MODE
#define CONN_OPT_MAX				SQL_ODBC_CURSORS

/* SQL_ODBC_CURSORS options */
#define SQL_CUR_USE_IF_NEEDED		0UL
#define SQL_CUR_USE_ODBC			1UL
#define SQL_CUR_USE_DRIVER			2UL
#define SQL_CUR_DEFAULT 			SQL_CUR_USE_DRIVER

/*  Column types and scopes in SQLSpecialColumns.  */
#define SQL_BEST_ROWID 1
#define SQL_ROWVER     2

#define SQL_SCOPE_CURROW       0
#define SQL_SCOPE_TRANSACTION  1
#define SQL_SCOPE_SESSION      2

#ifndef RC_INVOKED
/* Level 1 Prototypes */
RETCODE SQL_API SQLColumns(
    HSTMT      hstmt,
    UCHAR  FAR *szTableQualifier,
    SWORD      cbTableQualifier,
    UCHAR  FAR *szTableOwner,
    SWORD      cbTableOwner,
    UCHAR  FAR *szTableName,
    SWORD      cbTableName,
    UCHAR  FAR *szColumnName,
    SWORD      cbColumnName);

RETCODE SQL_API SQLDriverConnect(
    HDBC       hdbc,
    HWND       hwnd,
    UCHAR  FAR *szConnStrIn,
    SWORD      cbConnStrIn,
    UCHAR  FAR *szConnStrOut,
    SWORD      cbConnStrOutMax,
    SWORD  FAR *pcbConnStrOut,
    UWORD      fDriverCompletion);

RETCODE SQL_API SQLGetConnectOption(
    HDBC       hdbc,
    UWORD      fOption,
    PTR        pvParam);

RETCODE SQL_API SQLGetData(
    HSTMT      hstmt,
    UWORD      icol,
    SWORD      fCType,
    PTR        rgbValue,
    SDWORD     cbValueMax,
    SDWORD FAR *pcbValue);

RETCODE SQL_API SQLGetFunctions(
    HDBC       hdbc,
    UWORD      fFunction,
    UWORD  FAR *pfExists);

RETCODE SQL_API SQLGetInfo(
    HDBC       hdbc,
    UWORD      fInfoType,
    PTR        rgbInfoValue,
    SWORD      cbInfoValueMax,
    SWORD  FAR *pcbInfoValue);

RETCODE SQL_API SQLGetStmtOption(
    HSTMT      hstmt,
    UWORD      fOption,
    PTR        pvParam);

RETCODE SQL_API SQLGetTypeInfo(
    HSTMT      hstmt,
    SWORD      fSqlType);

RETCODE SQL_API SQLParamData(
    HSTMT      hstmt,
    PTR    FAR *prgbValue);

RETCODE SQL_API SQLPutData(
    HSTMT      hstmt,
    PTR        rgbValue,
    SDWORD     cbValue);

RETCODE SQL_API SQLSetConnectOption(
    HDBC       hdbc,
    UWORD      fOption,
    UDWORD     vParam);

RETCODE SQL_API SQLSetStmtOption(
    HSTMT      hstmt,
    UWORD      fOption,
    UDWORD     vParam);

RETCODE SQL_API SQLSpecialColumns(
    HSTMT      hstmt,
    UWORD      fColType,
    UCHAR  FAR *szTableQualifier,
    SWORD      cbTableQualifier,
    UCHAR  FAR *szTableOwner,
    SWORD      cbTableOwner,
    UCHAR  FAR *szTableName,
    SWORD      cbTableName,
    UWORD      fScope,
    UWORD      fNullable);

RETCODE SQL_API SQLStatistics(
    HSTMT      hstmt,
    UCHAR  FAR *szTableQualifier,
    SWORD      cbTableQualifier,
    UCHAR  FAR *szTableOwner,
    SWORD      cbTableOwner,
    UCHAR  FAR *szTableName,
    SWORD      cbTableName,
    UWORD      fUnique,
    UWORD      fAccuracy);

RETCODE SQL_API SQLTables(
    HSTMT      hstmt,
    UCHAR  FAR *szTableQualifier,
    SWORD      cbTableQualifier,
    UCHAR  FAR *szTableOwner,
    SWORD      cbTableOwner,
    UCHAR  FAR *szTableName,
    SWORD      cbTableName,
    UCHAR  FAR *szTableType,
    SWORD      cbTableType);
#endif /* RC_INVOKED */


/* Level 2 Functions                             */

/* SQLExtendedFetch "fFetchType" values */
#define SQL_FETCH_NEXT      1
#define SQL_FETCH_FIRST     2
#define SQL_FETCH_LAST      3
#define SQL_FETCH_PREV      4
#define SQL_FETCH_ABSOLUTE  5
#define SQL_FETCH_RELATIVE  6
#define SQL_FETCH_RESUME    7

/* SQLExtendedFetch "rgfRowStatus" element values */
#define SQL_ROW_SUCCESS 		0
#define SQL_ROW_DELETED 		1
#define SQL_ROW_UPDATED 		2
#define SQL_ROW_NOROW			3

/* Defines for SQLForeignKeys (returned in result set) */
#define SQL_CASCADE         0
#define SQL_RESTRICT        1
#define SQL_SET_NULL        2

/* Defines for SQLProcedureColumns (returned in the result set) */
#define SQL_PARAM_TYPE_UNKNOWN  0
#define SQL_PARAM_INPUT         1
#define SQL_PARAM_INPUT_OUTPUT  2
#define SQL_RESULT_COL          3

/* Defines for SQLSetScrollOptions */
#define SQL_CONCUR_READ_ONLY    1
#define SQL_CONCUR_LOCK         2
#define SQL_CONCUR_TIMESTAMP    3
#define SQL_CONCUR_VALUES       4

#define SQL_SCROLL_FORWARD_ONLY      0
#define SQL_SCROLL_KEYSET_DRIVEN    -1
#define SQL_SCROLL_DYNAMIC          -2
#define SQL_SCROLL_STATIC           -3

/* Defines for SQLStatistics */
#define SQL_INDEX_UNIQUE    0
#define SQL_INDEX_ALL       1
#define SQL_ENSURE          1
#define SQL_QUICK           0

/* Defines for SQLStatistics (returned in the result set) */
#define SQL_TABLE_STAT      0
#define SQL_INDEX_CLUSTERED 1
#define SQL_INDEX_HASHED    2
#define SQL_INDEX_OTHER     3

#ifndef RC_INVOKED
/* Level 2 Prototypes */
RETCODE SQL_API SQLBrowseConnect(
    HDBC       hdbc,
    UCHAR  FAR *szConnStrIn,
    SWORD      cbConnStrIn,
    UCHAR  FAR *szConnStrOut,
    SWORD      cbConnStrOutMax,
    SWORD  FAR *pcbConnStrOut);

RETCODE SQL_API SQLColumnPrivileges(
    HSTMT      hstmt,
    UCHAR  FAR *szTableQualifier,
    SWORD      cbTableQualifier,
    UCHAR  FAR *szTableOwner,
    SWORD      cbTableOwner,
    UCHAR  FAR *szTableName,
    SWORD      cbTableName,
    UCHAR  FAR *szColumnName,
    SWORD      cbColumnName);

RETCODE SQL_API SQLDataSources(
    HENV       henv,
    UWORD      fDirection,
    UCHAR  FAR *szDSN,
    SWORD      cbDSNMax,
    SWORD  FAR *pcbDSN,
    UCHAR  FAR *szDescription,
    SWORD      cbDescriptionMax,
    SWORD  FAR *pcbDescription);

RETCODE SQL_API SQLDescribeParam(
    HSTMT      hstmt,
    UWORD      ipar,
    SWORD  FAR *pfSqlType,
    UDWORD FAR *pcbColDef,
    SWORD  FAR *pibScale,
    SWORD  FAR *pfNullable);
               
RETCODE SQL_API SQLExtendedFetch(
    HSTMT      hstmt,
    UWORD      fFetchType,
    SDWORD     irow,
    UDWORD FAR *pcrow,
    UWORD  FAR *rgfRowStatus);

RETCODE SQL_API SQLForeignKeys(
    HSTMT      hstmt,
    UCHAR  FAR *szPkTableQualifier,
    SWORD      cbPkTableQualifier,
    UCHAR  FAR *szPkTableOwner,
    SWORD      cbPkTableOwner,
    UCHAR  FAR *szPkTableName,
    SWORD      cbPkTableName,
    UCHAR  FAR *szFkTableQualifier,
    SWORD      cbFkTableQualifier,
    UCHAR  FAR *szFkTableOwner,
    SWORD      cbFkTableOwner,
    UCHAR  FAR *szFkTableName,
    SWORD      cbFkTableName);

RETCODE SQL_API SQLMoreResults(
    HSTMT      hstmt);

RETCODE SQL_API SQLNativeSql(
    HDBC       hdbc,
    UCHAR  FAR *szSqlStrIn,
    SDWORD     cbSqlStrIn,
    UCHAR  FAR *szSqlStr,
    SDWORD     cbSqlStrMax,
    SDWORD FAR *pcbSqlStr);

RETCODE SQL_API SQLNumParams(
    HSTMT      hstmt,
    SWORD  FAR *pcpar);

RETCODE SQL_API SQLParamOptions(
    HSTMT      hstmt,
    UDWORD     crow,
    UDWORD FAR *pirow);

RETCODE SQL_API SQLPrimaryKeys(
    HSTMT      hstmt,
    UCHAR  FAR *szTableQualifier,
    SWORD      cbTableQualifier,
    UCHAR  FAR *szTableOwner,
    SWORD      cbTableOwner,
    UCHAR  FAR *szTableName,
    SWORD      cbTableName);

RETCODE SQL_API SQLProcedureColumns(
    HSTMT      hstmt,
    UCHAR  FAR *szProcQualifier,
    SWORD      cbProcQualifier,
    UCHAR  FAR *szProcOwner,
    SWORD      cbProcOwner,
    UCHAR  FAR *szProcName,
    SWORD      cbProcName,
    UCHAR  FAR *szColumnName,
    SWORD      cbColumnName);

RETCODE SQL_API SQLProcedures(
    HSTMT      hstmt,
    UCHAR  FAR *szProcQualifier,
    SWORD      cbProcQualifier,
    UCHAR  FAR *szProcOwner,
    SWORD      cbProcOwner,
    UCHAR  FAR *szProcName,
    SWORD      cbProcName);

RETCODE SQL_API SQLSetPos(
    HSTMT      hstmt,
    UWORD      irow,
    BOOL       fRefresh,
    BOOL       fLock);

RETCODE SQL_API SQLSetScrollOptions(
    HSTMT      hstmt,
    UWORD      fConcurrency,
    SDWORD     crowKeyset,
    UWORD      crowRowset);

RETCODE SQL_API SQLTablePrivileges(
    HSTMT      hstmt,
    UCHAR  FAR *szTableQualifier,
    SWORD      cbTableQualifier,
    UCHAR  FAR *szTableOwner,
    SWORD      cbTableOwner,
    UCHAR  FAR *szTableName,
    SWORD      cbTableName);

#endif /* RC_INVOKED */

#ifdef __cplusplus
}                                    /* End of extern "C" { */
#endif	/* __cplusplus */

#endif /* __SQLEXT */
