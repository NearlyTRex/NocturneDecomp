// Name: FUN_00567c60
// Address: 00567c60
// Address Range: [[00567c60, 00567cbd]]
// Convention: unknown
// Signature: undefined4 * FUN_00567c60(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00567c60(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_02cf61b0;
  uVar3 = _DAT_02cf61ac;
  uVar2 = _DAT_00606860;
  uVar1 = _DAT_0060685c;
  param_1[8] = 0;
  param_1[7] = param_1[8];
  param_1[6] = param_1[7];
  param_1[4] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[5] = 0;
  FUN_00567cc0(param_1,0x1f);
  return param_1;
}
