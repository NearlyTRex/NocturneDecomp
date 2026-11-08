// Name: FUN_005ceba8
// Address: 005ceba8
// Address Range: [[005ceba8, 005cebcf]]
// Convention: unknown
// Signature: void FUN_005ceba8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ceba8(void)

{
  (*(code *)PTR_FUN_00626640)();
  FUN_005cb5f4();
  if (_DAT_02c9f060 == 0) {
    FUN_005cad34(1);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}
