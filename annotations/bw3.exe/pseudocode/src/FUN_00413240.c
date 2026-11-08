// Name: FUN_00413240
// Address: 00413240
// Address Range: [[00413240, 004132b2]]
// Convention: unknown
// Signature: undefined4 * FUN_00413240(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_00413240(uint *param_1,byte param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_2 & 4) != 0) {
    uVar3 = FUN_005a308f(param_1,&DAT_005dbf80);
    FUN_005a30b6(uVar3);
    return param_1;
  }
  *param_1 = &PTR_FUN_005dbee4;
  iVar1 = FUN_004144a0(param_1 + 0x1c,0);
  iVar1 = FUN_0040d300(iVar1 + -0x6c,0);
  puVar2 = (uint *)FUN_00411980(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return puVar2;
  }
  FUN_005a30c4(puVar2);
  return puVar2;
}
