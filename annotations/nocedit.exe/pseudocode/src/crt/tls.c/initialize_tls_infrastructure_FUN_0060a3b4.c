// Name: crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
// Address: 0060a3b4
// Address Range: [[0060a3b4, 0060a4cb]]
// Convention: __cdecl
// Signature: void __cdecl crt_tls_c_initialize_tls_infrastructure_FUN_0060a3b4(void)

#include "nocturne.h"

void __cdecl initialize_tls_infrastructure(void)

{
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8 =
       enter_critical_section_by_index;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec =
       leave_critical_section_by_index;
  PTR_crt_sync_c_RegisterHandle_FUN_00602438_00684ef0 =
       register_handle_wrapper;
  PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4 =
       invalidate_handle_wrapper;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8 =
       enter_global_critical_section;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc =
       leave_global_critical_section;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f10 =
       enter_global_io_critical_section;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f14 =
       leave_global_io_critical_section;
  PTR_crt_sync_c_EnterCriticalSection_FUN_006853e4 =
       enter_reentrant_critical_section;
  PTR_crt_sync_c_ExitCriticalSection_FUN_006853e8 =
       leave_reentrant_critical_section;
  PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec =
       reset_reentrant_critical_section_state;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00 =
       enter_global_memory_critical_section;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f04 =
       enter_global_thread_critical_section;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08 =
       leave_global_memory_critical_section;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f0c =
       leave_global_thread_critical_section;
  g_GlobalInitLock = allocate_critical_section();
  INT_03f9bfd4 = 1;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c =
       leave_global_runtime_critical_section;
  PTR_crt_sync_c_CriticalSectionCleanup_FUN_00602434_00684f20 =
       shutdown_tls_infrastructure;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18 = crt_unknown_c_FUN_0060a1dc;
  register_thread_data
            (*(void **)((int)g_CurrentThreadTlsBlock + 0xda),g_CurrentThreadTlsBlock);
  (*g_TlsSetValueFunc)(g_TLSIndex,g_CurrentThreadTlsBlock);
  PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4 = get_thread_local_data;
  return;
}
