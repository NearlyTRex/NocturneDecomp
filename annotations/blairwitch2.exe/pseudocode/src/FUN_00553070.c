// Name: FUN_00553070
// Address: 00553070
// Address Range: [[00553070, 005530ee]]
// Convention: unknown
// Signature: undefined4 FUN_00553070(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00553070(void)

{
  int iVar1;
  
  iVar1 = FUN_00552f50();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00552f60();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_005532f0();
  iVar1 = FUN_00552f80(_DAT_0061bcd0,_DAT_0061bcd4,_DAT_0061bcd8,_DAT_02649870);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*_DAT_02649868 + 4))(_DAT_02649868);
    if (iVar1 != 0) {
      _DAT_0264986c = 1;
      FUN_00551440();
      return 1;
    }
  }
  FUN_00551440();
  return 0;
}
