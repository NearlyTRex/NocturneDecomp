// Name: crt_unknown.c_FUN_00573fc8
// Address: 00573fc8
// Address Range: [[00573fc8, 00573fef]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00573fc8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573fc8(void)

{
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_00567208_005c1b00)();
  RemoveExceptionHandler();
  if (_DAT_02de4e30 == 0) {
    FUN_0056e664(1);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}
