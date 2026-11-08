// Name: FUN_004e6b20
// Address: 004e6b20
// Address Range: [[004e6b20, 004e6c3e]]
// Convention: unknown
// Signature: undefined4 FUN_004e6b20(float *param_1,float param_2,float param_3,undefined4 *param_4,undefined4 param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e6b20(float *param_1,float param_2,float param_3,uint *param_4,uint param_5,float *param_6)

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
      goto LAB_004e6b67;
    }
    param_3 = *param_1 + param_3;
  }
  *param_1 = param_3;
LAB_004e6b67:
  fVar1 = *param_1;
  fVar2 = (float)_DAT_005dc585;
  if (fVar1 * fVar2 <= 0.0) {
    FUN_00551050();
    return uVar5;
  }
  iVar3 = FUN_00550b70();
  if (iVar3 != 0) {
    FUN_00550d30(*param_4,(double)*param_6,(double)param_6[1],(double)param_6[2]);
    FUN_00550f20(*param_4,fVar1 * fVar2);
    return uVar5;
  }
  FUN_00550450();
  FUN_00550270();
  FUN_00550110((double)*param_6,(double)param_6[1],(double)param_6[2]);
  uVar4 = FUN_005506b0();
  *param_4 = uVar4;
  FUN_005504d0();
  return uVar5;
}
