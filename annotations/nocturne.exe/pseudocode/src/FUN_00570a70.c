// Name: FUN_00570a70
// Address: 00570a70
// Address Range: [[00570a70, 00570ac1]]
// Convention: unknown
// Signature: undefined4 FUN_00570a70(uint param_1)

#include "nocturne.h"

uint FUN_00570a70(uint param_1)

{
  uint uVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_005c1ac0)(param_1);
    uVar1 = FUN_00568a50(param_1);
    (*(code *)PTR_FUN_005c1ac4)(param_1);
    (*(code *)PTR_FUN_005c1acc)(param_1);
    return uVar1;
  }
  FUN_00568e80(4);
  return 0xffffffff;
}
