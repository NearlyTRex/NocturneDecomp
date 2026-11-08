// Name: FUN_005c4080
// Address: 005c4080
// Address Range: [[005c4080, 005c40d1]]
// Convention: unknown
// Signature: undefined4 FUN_005c4080(uint param_1)

#include "nocturne.h"

uint FUN_005c4080(uint param_1)

{
  uint uVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_0061f2a8)(param_1);
    uVar1 = FUN_005bec40(param_1);
    (*(code *)PTR_FUN_0061f2ac)(param_1);
    (*(code *)PTR_FUN_0061f2b4)(param_1);
    return uVar1;
  }
  FUN_005be180(4);
  return 0xffffffff;
}
