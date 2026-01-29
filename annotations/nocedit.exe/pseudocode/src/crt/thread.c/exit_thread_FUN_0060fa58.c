// Name: crt_thread.c_exit_thread_FUN_0060fa58
// Address: 0060fa58
// Address Range: [[0060fa58, 0060fa7e]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c_exit_thread_FUN_0060fa58(void)

#include "nocturne.h"

void __cdecl exit_thread(void)

{
  (*PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f28)();
  RemoveExceptionHandler();
  if (g_EmergencyExitFlag == 0) {
    cleanup_thread_tls_data(1);
  }
  (*g_ExitThreadFunc)(0);
  return;
}
