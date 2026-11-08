// Name: FUN_00415df0
// Address: 00415df0
// Address Range: [[00415df0, 00415e62]]
// Convention: unknown
// Signature: undefined4 * FUN_00415df0(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_00415df0(uint *param_1,byte param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_2 & 4) != 0) {
    uVar3 = FUN_005c030f(param_1,&DAT_005fca30);
    FUN_005c0336(uVar3);
    return param_1;
  }
  *param_1 = &PTR_FUN_005fc974;
  iVar1 = FUN_004188b0(param_1 + 0x18,0);
  iVar1 = FUN_0040d0c0(iVar1 + -0x5c,0);
  puVar2 = (uint *)FUN_00415bc0(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return puVar2;
  }
  FUN_005c0344(puVar2);
  return puVar2;
}
