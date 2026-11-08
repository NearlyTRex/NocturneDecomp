// Name: FUN_005057c0
// Address: 005057c0
// Address Range: [[005057c0, 005058de]]
// Convention: unknown
// Signature: undefined4 FUN_005057c0(float *param_1,float param_2,float param_3,undefined4 *param_4,undefined4 param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005057c0(float *param_1,float param_2,float param_3,uint *param_4,uint param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 - *param_1 < -param_3) {
    param_3 = *param_1 - param_3;
  }
  else {
    if (param_2 - *param_1 <= param_3) {
      uVar5 = 1;
      *param_1 = param_2;
      goto LAB_00505807;
    }
    param_3 = *param_1 + param_3;
  }
  *param_1 = param_3;
LAB_00505807:
  fVar1 = *param_1;
  fVar2 = (float)_DAT_005e74d5;
  if (fVar1 * fVar2 <= 0.0) {
    FUN_00573a80();
    return uVar5;
  }
  iVar3 = FUN_005735a0();
  if (iVar3 != 0) {
    FUN_00573760(*param_4,(double)*param_6,(double)param_6[1],(double)param_6[2]);
    FUN_00573950(*param_4,fVar1 * fVar2);
    return uVar5;
  }
  FUN_00572ac0();
  FUN_005728e0();
  FUN_00572780((double)*param_6,(double)param_6[1],(double)param_6[2]);
  uVar4 = FUN_00572d20();
  *param_4 = uVar4;
  FUN_00572b40();
  return uVar5;
}
