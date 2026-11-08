// Name: FUN_005741d0
// Address: 005741d0
// Address Range: [[005741d0, 0057422c]]
// Convention: unknown
// Signature: undefined4 * FUN_005741d0(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_005741d0(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dd5c0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_005e5ac4;
  FUN_005743f0(param_1);
  puVar1 = (uint *)FUN_00572540(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005a30c4(puVar1);
  return puVar1;
}
