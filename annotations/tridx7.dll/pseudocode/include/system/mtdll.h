#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/crtdefs.h"

// =============================================================================
// MTDLL - System Header
// =============================================================================

// Structure: _is_ctype_compatible
#pragma pack(push, 8)
typedef struct _is_ctype_compatible {
    ulong id;
    int is_clike;
} __attribute__((aligned(4))) _is_ctype_compatible;
#pragma pack(pop)

// Typedef: _ptiddata
// pointer to _tiddata
typedef struct _tiddata* _ptiddata;

// Structure: setloc_struct
#pragma pack(push, 8)
typedef struct setloc_struct {
    wchar_t* pchLanguage;
    wchar_t* pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
} __attribute__((aligned(4))) setloc_struct;
#pragma pack(pop)

// Typedef: _setloc_struct
typedef setloc_struct _setloc_struct;

// Structure: _tiddata
#pragma pack(push, 8)
typedef struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char* _token;
    wchar_t* _wtoken;
    uchar* _mtoken;
    char* _errmsg;
    wchar_t* _werrmsg;
    char* _namebuf0;
    wchar_t* _wnamebuf0;
    char* _namebuf1;
    wchar_t* _wnamebuf1;
    char* _asctimebuf;
    wchar_t* _wasctimebuf;
    void* _gmtimebuf;
    char* _cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void* _initaddr;
    void* _initarg;
    void* _pxcptacttab;
    void* _tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void* _terminate;
    void* _unexpected;
    void* _translator;
    void* _purecall;
    void* _curexception;
    void* _curcontext;
    int _ProcessingThrow;
    void* _curexcspec;
    void* _pFrameInfoChain;
    _setloc_struct _setloc_data;
    void* _reserved1;
    void* _reserved2;
    void* _reserved3;
    void* _reserved4;
    void* _reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
} __attribute__((aligned(4))) _tiddata;
#pragma pack(pop)

