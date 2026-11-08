// Name: FUN_005cc380
// Address: 005cc380
// Address Range: [[005cc380, 005cc3d1]]
// Convention: unknown
// Signature: undefined4 FUN_005cc380(uint param_1)

#include "nocturne.h"

uint FUN_005cc380(uint param_1)

{
  uint uVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_00626600)(param_1);
    uVar1 = FUN_005c6f10(param_1);
    (*(code *)PTR_FUN_00626604)(param_1);
    (*(code *)PTR_FUN_0062660c)(param_1);
    return uVar1;
  }
  FUN_005c6450(4);
  return 0xffffffff;
}
