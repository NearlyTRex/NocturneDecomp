#pragma once

// Function prototypes for crt/errno.cpp
// Generated from Ghidra function signatures

// Original: crt_errno.c__dosmaperr_FUN_100089a0
// Address: 100089a0
void __cdecl ::dosmaperr(ulong oserrno);

// Original: crt_errno.c__errno_FUN_10008a20
// Address: 10008a20
int * __cdecl ::errno(void);

// Original: crt_errno.c___doserrno_FUN_10008a30
// Address: 10008a30
ulong * __cdecl ::_doserrno(void);
