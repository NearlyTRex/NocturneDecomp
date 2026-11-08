// Name: FUN_004418c0
// Address: 004418c0
// Address Range: [[004418c0, 0044191c]]
// Convention: unknown
// Signature: undefined4 * FUN_004418c0(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_004418c0(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dd5e0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_005dd554;
  FUN_00441b60(param_1);
  puVar1 = (uint *)FUN_00572540(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005a30c4(puVar1);
  return puVar1;
}
