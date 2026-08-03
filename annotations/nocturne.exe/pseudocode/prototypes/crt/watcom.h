#pragma once

// Function prototypes for crt/watcom.cpp
// Generated from Ghidra function signatures

// Original: crt_watcom.c__memset_FUN_00481980
// Address: 00481980
void __fastcall ::memset(void *dest,int fill_byte,uint size);

// Original: crt_watcom.c__memcpy_FUN_00481a28
// Address: 00481a28
void __fastcall ::memcpy(void *dest,void *src,uint size);

// Original: crt_watcom.c__mkdir_FUN_00565e40
// Address: 00565e40
int __cdecl ::mkdir(char *path);

// Original: crt_watcom.c_getcwd_FUN_0056c5f0
// Address: 00566440
char * __cdecl getcwd(char *buffer,SIZE_T size);

// Original: crt_watcom.c_notifyAbnormalTermination_FUN_00566f90
// Address: 00566f90
void __cdecl notifyAbnormalTermination(void);

// Original: crt_watcom.c_getcwd_FUN_0056c5f0
// Address: 0056c5f0
char * __cdecl getcwd(char *buffer,SIZE_T size);
