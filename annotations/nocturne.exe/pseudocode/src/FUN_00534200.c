// Name: FUN_00534200
// Address: 00534200
// Address Range: [[00534200, 0053425d]]
// Convention: unknown
// Signature: undefined4 * FUN_00534200(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00534200(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_02dc9ea4;
  uVar3 = _DAT_02dc9ea0;
  uVar2 = _DAT_005c0fac;
  uVar1 = _DAT_005c0fa8;
  param_1[8] = 0;
  param_1[7] = param_1[8];
  param_1[6] = param_1[7];
  param_1[4] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[5] = 0;
  FUN_00534260(param_1,0x1f);
  return param_1;
}
