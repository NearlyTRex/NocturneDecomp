// Name: crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878
// Address: 0060e878
// Address Range: [[0060e878, 0060e87e]]
// Convention: unknown
// Signature: void crt_unknown_c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878(void)

#include "nocturne.h"

/* Signature: byte unk_SomethingThatCallsExitThreadAfterCommunicate() */

void SomethingThatCallsExitThreadAfterCommunicate(void)

{
  (*PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598)();
  return;
}
