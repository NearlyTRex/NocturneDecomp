#pragma once

// Function prototypes for crt/thread.cpp
// Generated from Ghidra function signatures

// Original: crt_thread.c_GetTLS_FUN_0060242c
// Address: 0060242c
ThreadData * __cdecl GetTLS(void);

// Original: crt_thread.c_noop_lock_FUN_0060b180
// Address: 0060b180
void __cdecl noop::lock(void);

// Original: crt_thread.c_InitializeThreadContext_FUN_0060ccf0
// Address: 0060ccf0
void __cdecl InitializeThreadContext(ThreadData *pThreadData);

// Original: crt_thread.c_threadStartupWrapper_FUN_0060f8c0
// Address: 0060f8c0
void __cdecl threadStartupWrapper(ThreadStartupInfo *info);

// Original: crt_thread.c_create_thread_with_sync_FUN_0060f960
// Address: 0060f960
HANDLE __cdecl create::thread_with_sync(LPVOID thread_param,SIZE_T stack_size_hint,LPVOID sync_param,HANDLE *out_thread_handle);

// Original: crt_thread.c_exit_thread_FUN_0060fa58
// Address: 0060fa58
void __cdecl exit::thread(void);
