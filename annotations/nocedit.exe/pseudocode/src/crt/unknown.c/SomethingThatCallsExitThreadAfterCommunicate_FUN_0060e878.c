// Name: crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878
// Address: 0060e878
// Address Range: [[0060e878, 0060e87e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878()
// Cross-references:
//   crt_thread.c_threadStartupWrapper_FUN_0060f8c0 (0060f8c0) at 0060f94c [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_crt_thread.c_exit_thread_FUN_0060fa58_00685598 = 0060fa58
// Function calls:
//   crt_thread.c_exit_thread_FUN_0060fa58

#include "nocturne.h"

/* Signature: undefined1 unk_SomethingThatCallsExitThreadAfterCommunicate() */

void crt_unknown_c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878(void)

{
  (*(code *)PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598)();
  return;
}


// Assembly code:
// 0060e878: CALL dword ptr [PTR_crt_thread.c_exit_thread_FUN_0060fa58_00685598]
//   Label: crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878
//   XREF to: 0060fa58 (COMPUTED_CALL)
//   XREF to: 00685598 (READ)
// 0060e87e: RET
