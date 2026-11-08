// Name: FUN_005c3870
// Address: 005c3870
// Address Range: [[005c3870, 005c38cc]]
// Convention: unknown
// Signature: undefined4 FUN_005c3870(uint param_1)

#include "nocturne.h"

uint FUN_005c3870(uint param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_0061f2a8)(param_1);
    BVar1 = FlushFileBuffers(*(HANDLE *)(DAT_0061f4d8 + param_1 * 4));
    if (BVar1 == 0) {
      FUN_005c036c();
      uVar2 = 0xffffffff;
    }
    (*(code *)PTR_FUN_0061f2ac)(param_1);
    return uVar2;
  }
  FUN_005be180(4);
  return 0xffffffff;
}
