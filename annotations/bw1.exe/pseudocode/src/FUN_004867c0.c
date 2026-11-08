// Name: FUN_004867c0
// Address: 004867c0
// Address Range: [[004867c0, 004868fa]]
// Convention: unknown
// Signature: void FUN_004867c0(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004867c0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  float local_1c;
  int local_18;
  
  local_18 = param_2;
  local_1c = (float)param_2 * _DAT_005db6f8 * _DAT_005db6fc * (float)_DAT_005db704;
  if (param_3 == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)param_3 * _DAT_005db70c * _DAT_005db6fc * (float)_DAT_005db714;
    local_18 = param_3;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)fsin((float10)local_1c + (float10)(float)param_1[7]);
  fVar5 = (float10)fcos((float10)local_48);
  fVar6 = (float10)fcos((float10)local_1c + (float10)(float)param_1[7]);
  fVar7 = (float10)_DAT_006144d4;
  local_30 = (double)fVar5;
  fVar5 = (float10)_DAT_005db71c;
  fVar3 = fVar3 * fVar7 * fVar5;
  fVar4 = fVar4 * fVar7 * (float10)local_30 * fVar5;
  fVar5 = fVar6 * fVar7 * (float10)local_30 * fVar5;
  local_38 = local_30;
  FUN_005c03a0(&local_44);
  local_40 = (int)ROUND(fVar3);
  FUN_005c03a0();
  uVar8 = FUN_005c03a0();
  iVar2 = (int)uVar8;
  local_44 = (int)ROUND(fVar4);
  local_3c = (int)ROUND(fVar5);
  FUN_00580173(*(int *)((ulonglong)uVar8 >> 0x20) + iVar2 * 0x10);
  uVar1 = *param_1;
  (&DAT_00629034)[iVar2 * 4] = uVar1;
  (&DAT_00629038)[iVar2 * 4] = uVar1;
  (&DAT_0062903c)[iVar2 * 4] = uVar1;
  (&DAT_00629040)[iVar2 * 4] = 0;
  return;
}
