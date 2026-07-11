// Name: FUN_00573fc8
// Address: 00573fc8
// Address Range: [[00573fc8, 00573fef]]
// Convention: unknown
// Signature: void FUN_00573fc8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573fc8(void)

{
  (*(code *)PTR_FUN_005c1b00)();
  FUN_0056ef24();
  if (_DAT_02de4e30 == 0) {
    FUN_0056e664(1);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}
