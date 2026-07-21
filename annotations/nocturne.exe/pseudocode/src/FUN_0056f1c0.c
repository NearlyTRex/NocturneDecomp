// Name: FUN_0056f1c0
// Address: 0056f1c0
// Address Range: [[0056f1c0, 0056f21c]]
// Convention: unknown
// Signature: undefined4 FUN_0056f1c0(uint param_1)

#include "nocturne.h"

uint FUN_0056f1c0(uint param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_005c1ac0)(param_1);
    BVar1 = FlushFileBuffers(*(HANDLE *)(DAT_005c1f54 + param_1 * 4));
    if (BVar1 == 0) {
      __set_errno();
      uVar2 = 0xffffffff;
    }
    (*(code *)PTR_FUN_005c1ac4)(param_1);
    return uVar2;
  }
  FUN_00568e80(4);
  return 0xffffffff;
}
