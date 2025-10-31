// Name: crt_thread.c_exit_thread_FUN_0060fa58
// Address: 0060fa58
// Address Range: [[0060fa58, 0060fa7e]]
// Convention: __cdecl
// Signature: undefined crt_thread.c_exit_thread_FUN_0060fa58()
// Cross-references:
//   crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878 (0060e878) at 0060e878 [COMPUTED_CALL]
// Globals:
//   ExitThread* PTR_ExitThread_00611538 = 00211d20
//   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f28 = 00602458
//   int g_EmergencyExitFlag
// Function calls:
//   crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
//   crt_sync.c_CriticalSectionStub_FUN_00602458
//   crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
//   ExitThread

#include "nocturne.h"

void __cdecl crt_thread_c_exit_thread_FUN_0060fa58(void)

{
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f28)();
  crt_exception_c_RemoveExceptionHandler_FUN_0060abf4();
  if (g_EmergencyExitFlag == 0) {
    crt_tls_c_cleanup_thread_tls_data_FUN_0060a334(1);
  }
  (*PTR_ExitThread_00611538)(0);
  return;
}


// Assembly code:
// 0060fa58: CALL dword ptr [PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f28]
//   Label: crt_thread.c_exit_thread_FUN_0060fa58
//   XREF to: 00602458 (COMPUTED_CALL)
//   XREF to: 00684f28 (READ)
// 0060fa5e: CALL crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
//   XREF to: 0060abf4 (UNCONDITIONAL_CALL)
// 0060fa63: CMP dword ptr [0x03f9b220],0x0
//   XREF to: 03f9b220 (READ)
// 0060fa6a: JNZ 0x0060fa76
//   XREF to: 0060fa76 (CONDITIONAL_JUMP)
// 0060fa6c: PUSH 0x1
// 0060fa6e: CALL crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
//   XREF to: 0060a334 (UNCONDITIONAL_CALL)
// 0060fa73: ADD ESP,0x4
// 0060fa76: PUSH 0x0
//   Label: LAB_0060fa76
// 0060fa78: CALL dword ptr CS:[0x611538]
//   XREF to: EXTERNAL:00000059 (COMPUTED_CALL)
//   XREF to: 00611538 (READ)
