// Name: FUN_00463440
// Address: 00463440
// Address Range: [[00463440, 0046357a]]
// Convention: unknown
// Signature: void FUN_00463440(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463440(uint *param_1,int param_2,int param_3)

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
  local_1c = (float)param_2 * ram0x0057df82 * (float)_DAT_0057df86 * (float)_DAT_0057df8e;
  if (param_3 == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)param_3 * _DAT_0057df96 * (float)_DAT_0057df86 * (float)_DAT_0057df9e;
    local_18 = param_3;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)fsin((float10)local_1c + (float10)(float)param_1[7]);
  fVar5 = (float10)fcos((float10)local_48);
  fVar6 = (float10)fcos((float10)local_1c + (float10)(float)param_1[7]);
  fVar7 = (float10)_DAT_005b0678;
  local_38 = (double)fVar5;
  fVar5 = (float10)_DAT_0057dfa6;
  fVar3 = fVar3 * fVar7 * fVar5;
  fVar4 = fVar4 * fVar7 * (float10)local_38 * fVar5;
  fVar5 = fVar6 * fVar7 * (float10)local_38 * fVar5;
  local_30 = local_38;
  FUN_00563a30(&local_44);
  local_40 = (int)ROUND(fVar3);
  FUN_00563a30();
  uVar8 = FUN_00563a30();
  iVar2 = (int)uVar8;
  local_44 = (int)ROUND(fVar4);
  local_3c = (int)ROUND(fVar5);
  FUN_0053075c(*(int *)((ulonglong)uVar8 >> 0x20) + iVar2 * 0x10);
  uVar1 = *param_1;
  (&DAT_005c5034)[iVar2 * 4] = uVar1;
  (&DAT_005c5038)[iVar2 * 4] = uVar1;
  (&DAT_005c503c)[iVar2 * 4] = uVar1;
  (&DAT_005c5040)[iVar2 * 4] = 0;
  return;
}
