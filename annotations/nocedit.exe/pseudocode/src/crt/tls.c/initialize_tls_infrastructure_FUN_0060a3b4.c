// Name: crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
// Address: 0060a3b4
// Address Range: [[0060a3b4, 0060a4cb]]
// Convention: __cdecl
// Signature: void crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4(void)

#include "nocturne.h"

void __cdecl crt_tls_c_initialize_tls_infrastructure_FUN_0060a3b4(void)

{
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8 =
       crt_tls_c_enter_critical_section_by_index_FUN_0060a10c;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec =
       crt_tls_c_leave_critical_section_by_index_FUN_0060a128;
  PTR_crt_sync_c_RegisterHandle_FUN_00602438_00684ef0 =
       crt_io_c_register_handle_wrapper_FUN_0060a144;
  PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4 =
       crt_io_c_invalidate_handle_wrapper_FUN_0060a154;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8 =
       crt_sync_c_enter_global_critical_section_FUN_0060a0ec;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc =
       crt_sync_c_leave_global_critical_section_FUN_0060a0fc;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f10 =
       crt_sync_c_enter_global_io_critical_section_FUN_0060a1bc;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f14 =
       crt_sync_c_leave_global_io_critical_section_FUN_0060a1cc;
  PTR_crt_sync_c_EnterCriticalSection_FUN_006853e4 =
       crt_sync_c_enter_reentrant_critical_section_FUN_0060a060;
  PTR_crt_sync_c_ExitCriticalSection_FUN_006853e8 =
       crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4;
  PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec =
       crt_sync_c_reset_reentrant_critical_section_state_FUN_0060a04c;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00 =
       crt_sync_c_enter_global_memory_critical_section_FUN_0060a17c;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f04 =
       crt_sync_c_enter_global_thread_critical_section_FUN_0060a19c;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08 =
       crt_sync_c_leave_global_memory_critical_section_FUN_0060a18c;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f0c =
       crt_sync_c_leave_global_thread_critical_section_FUN_0060a1ac;
  g_GlobalInitLock = crt_sync_c_allocate_critical_section_FUN_00609f24();
  INT_03f9bfd4 = 1;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c =
       crt_sync_c_leave_global_runtime_critical_section_FUN_0060a1ec;
  PTR_crt_sync_c_CriticalSectionCleanup_FUN_00602434_00684f20 =
       crt_tls_c_shutdown_tls_infrastructure_FUN_0060a388;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18 = crt_unknown_c_FUN_0060a1dc;
  crt_tls_c_register_thread_data_FUN_0060cbd0
            (*(void **)((int)g_CurrentThreadTlsBlock + 0xda),g_CurrentThreadTlsBlock);
  (*g_TlsSetValueFunc)(g_TLSIndex,g_CurrentThreadTlsBlock);
  PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4 = crt_tls_c_get_thread_local_data_FUN_0060a1fc;
  return;
}
