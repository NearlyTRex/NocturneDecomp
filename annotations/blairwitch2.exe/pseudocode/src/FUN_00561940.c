// Name: FUN_00561940
// Address: 00561940
// Address Range: [[00561940, 0056199d]]
// Convention: unknown
// Signature: undefined4 * FUN_00561940(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00561940(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_0264bd84;
  uVar3 = _DAT_0264bd80;
  uVar2 = _DAT_0061e2b0;
  uVar1 = _DAT_0061e2ac;
  param_1[8] = 0;
  param_1[7] = param_1[8];
  param_1[6] = param_1[7];
  param_1[4] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[5] = 0;
  FUN_005619a0(param_1,0x1f);
  return param_1;
}
