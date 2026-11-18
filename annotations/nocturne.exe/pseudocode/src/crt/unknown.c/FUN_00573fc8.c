// Name: crt_unknown.c_FUN_00573fc8
// Address: 00573fc8
// Address Range: [[00573fc8, 00573fef]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00573fc8(void)

#include "nocturne.h"

void FUN_00573fc8(void)

{
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_00567208_005c1b00)();
  RemoveExceptionHandler();
  if (g_EmergencyExitFlag == 0) {
    FUN_0056e664(1);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}
