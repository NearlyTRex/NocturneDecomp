#pragma once

// Function prototypes for crt/tls.cpp
// Generated from Ghidra function signatures

// Original: crt_tls.c_create_thread_local_data_FUN_0060cac0
// Address: 0060cac0
LPVOID __watcallRegister create::thread_local_data(void);

// Original: crt_tls.c_getThreadLocalData_FUN_0060caf8
// Address: 0060caf8
void * __watcallRegister getThreadLocalData(void);

// Original: crt_tls.c_register_thread_data_FUN_0060cbd0
// Address: 0060cbd0
BOOL __cdecl register::thread_data(void *tls_data,void *thread_param);

// Original: crt_tls.c_unregister_thread_data_FUN_0060cc3c
// Address: 0060cc3c
void __cdecl unregister::thread_data(void *threadDataKey);
