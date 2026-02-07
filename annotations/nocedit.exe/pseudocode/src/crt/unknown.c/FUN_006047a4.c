// Name: crt_unknown.c_FUN_006047a4
// Address: 006047a4
// Address Range: [[006047a4, 006047d2]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_006047a4(void)

#include "nocturne.h"

void FUN_006047a4(void)

{
  if (BYTE_00684acd != 0) {
    PTR_crt_thread_c_EnterCriticalSection_FUN_0060b180_00685464 =
         (ENTER_CRITICAL_SECTION_FUNC *)&LAB_00604790;
    PTR_crt_thread_c_ExitCriticalSection_FUN_0060b180_00685468 =
         (EXIT_CRITICAL_SECTION_FUNC *)&LAB_0060479c;
  }
  FUN_0060b190(0x127F);
  return;
}
