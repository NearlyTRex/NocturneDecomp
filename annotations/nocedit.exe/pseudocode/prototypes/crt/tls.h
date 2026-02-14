#pragma once

// Function prototypes for crt/tls.cpp
// Generated from Ghidra function signatures

// Original: crt_tls.c_enter_critical_section_by_index_FUN_0060a10c
// Address: 0060a10c
void __cdecl enter::critical_section_by_index(int sectionIndex);

// Original: crt_tls.c_leave_critical_section_by_index_FUN_0060a128
// Address: 0060a128
void __cdecl leave::critical_section_by_index(int sectionIndex);

// Original: crt_tls.c_get_thread_local_data_FUN_0060a1fc
// Address: 0060a1fc
LPVOID __cdecl get::thread_local_data(void);

// Original: crt_tls.c_allocate_tls_index_FUN_0060a27c
// Address: 0060a27c
BOOL __cdecl allocate::tls_index(void);

// Original: crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
// Address: 0060a2d8
BOOL __cdecl initialize::thread_tls_data(void *init_param);

// Original: crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
// Address: 0060a334
void __cdecl cleanup::thread_tls_data(int shutdownMode);

// Original: crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388
// Address: 0060a388
BOOL __cdecl shutdown::tls_infrastructure(void);

// Original: crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
// Address: 0060a3b4
void __cdecl initialize::tls_infrastructure(void);

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
