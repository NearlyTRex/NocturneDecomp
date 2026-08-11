#pragma once

// Function prototypes for crt/watcom.cpp
// Generated from Ghidra function signatures

// Original: crt_watcom.c__memset_FUN_004b19d0
// Address: 004b19d0
void __fastcall ::memset(void *dest,int fill_byte,uint size);

// Original: crt_watcom.c__memcpy_FUN_004b1a78
// Address: 004b1a78
void __fastcall ::memcpy(void *dest,void *src,uint size);

// Original: crt_watcom.c_memavl_FUN_006008f0
// Address: 006008f0
uint __watcallRegister memavl(void);

// Original: crt_watcom.c__memmax_FUN_00600940
// Address: 00600940
uint ::memmax(void);

// Original: crt_watcom.c__heapchk_FUN_00600ad0
// Address: 00600ad0
int __cdecl ::heapchk(void);

// Original: crt_watcom.c__mkdir_FUN_00600e10
// Address: 00600e10
int __cdecl ::mkdir(char *path);

// Original: crt_watcom.c__getcwd_FUN_0060128c
// Address: 0060128c
char * __cdecl ::getcwd(char *buffer,SIZE_T size);

// Original: crt_watcom.c_notifyAbnormalTermination_FUN_00601620
// Address: 00601620
void __cdecl notifyAbnormalTermination(void);

// Original: crt_watcom.c_getcwd_FUN_00608d20
// Address: 00608d20
char * __cdecl getcwd(char *buffer,SIZE_T size);
