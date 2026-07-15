#pragma once

// Function prototypes for crt/signal.cpp
// Generated from Ghidra function signatures

// Original: crt_signal.c__XcptFilter_FUN_1000a7b0
// Address: 1000a7b0
int __cdecl ::XcptFilter(uint xcpt_num,_EXCEPTION_POINTERS *pxcpt_ptrs);

// Original: crt_signal.c__xcptlookup_FUN_1000a900
// Address: 1000a900
void * __cdecl ::xcptlookup(void *table,int xcpt_num);

// Original: crt_signal.c_signal_FUN_1000b950
// Address: 1000b950
_sigfn __cdecl signal(int sig,_sigfn handler);

// Original: crt_signal.c_siglookup2_FUN_1000bb30
// Address: 1000bb30
void * __cdecl siglookup2(int sig);

// Original: crt_signal.c_raise_FUN_1000bbc0
// Address: 1000bbc0
int __cdecl raise(int sig);

// Original: crt_signal.c_siglookup_FUN_1000bda0
// Address: 1000bda0
_XCPT_ACTION * __cdecl siglookup(int signum,_XCPT_ACTION *table);
