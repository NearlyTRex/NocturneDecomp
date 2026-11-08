// Name: FUN_005a0a50
// Address: 005a0a50
// Address Range: [[005a0a50, 005a0aac]]
// Convention: unknown
// Signature: undefined4 * FUN_005a0a50(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_005a0a50(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fb2d0);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_00607384;
  FUN_005a0dc0(param_1);
  puVar1 = (uint *)FUN_0059f550(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005c0344(puVar1);
  return puVar1;
}
