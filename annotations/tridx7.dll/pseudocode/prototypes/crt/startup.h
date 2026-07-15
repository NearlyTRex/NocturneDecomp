#pragma once

// Function prototypes for crt/startup.cpp
// Generated from Ghidra function signatures

// Original: crt_startup.c__chkstk_FUN_10005600
// Address: 10005600
void __cdecl ::chkstk(void);

// Original: crt_startup.c___CRTDLL_INIT_FUN_100056a0
// Address: 100056a0
BOOL __cdecl ::_CRTDLL_INIT(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved);

// Original: crt_startup.c__DllMainCRTStartup_FUN_100057f0
// Address: 100057f0
int __cdecl ::DllMainCRTStartup(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved);

// Original: crt_startup.c__amsg_exit_FUN_100058c0
// Address: 100058c0
void __cdecl ::amsg_exit(int rterrnum);

// Original: crt_startup.c__cinit_FUN_10007570
// Address: 10007570
int __cdecl ::cinit(int init_fp);

// Original: crt_startup.c__exit_crt_FUN_100075c0
// Address: 100075c0
void __cdecl ::exit_crt(int code);

// Original: crt_startup.c__cexit_FUN_100075e0
// Address: 100075e0
void __cdecl ::cexit(void);

// Original: crt_startup.c_doexit_FUN_10007600
// Address: 10007600
void __cdecl doexit(int code,int quick,int retcaller);

// Original: crt_startup.c__lockexit_FUN_100076c0
// Address: 100076c0
void __cdecl ::lockexit(void);

// Original: crt_startup.c__unlockexit_FUN_100076d0
// Address: 100076d0
void __cdecl ::unlockexit(void);

// Original: crt_startup.c__initterm_FUN_100076e0
// Address: 100076e0
void __cdecl ::initterm(char *pfbegin,char *pfend);

// Original: crt_startup.c__ioterm_FUN_10007b00
// Address: 10007b00
void __cdecl ::ioterm(void);

// Original: crt_startup.c__setargv_FUN_10007c40
// Address: 10007c40
int __cdecl ::setargv(void);

// Original: crt_startup.c___set_app_type_FUN_100085b0
// Address: 100085b0
void __cdecl ::_set_app_type(int app_type);

// Original: crt_startup.c_DllMain_FUN_100085c0
// Address: 100085c0
BOOL __cdecl DllMain(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved);

// Original: crt_startup.c__FF_MSGBANNER_FUN_100085d0
// Address: 100085d0
void __cdecl ::FF_MSGBANNER(void);

// Original: crt_startup.c__NMSG_WRITE_FUN_10008610
// Address: 10008610
int __cdecl ::NMSG_WRITE(int rterrnum);

// Original: crt_startup.c__GET_RTERRMSG_FUN_10008800
// Address: 10008800
char * __cdecl ::GET_RTERRMSG(int rterrnum);
