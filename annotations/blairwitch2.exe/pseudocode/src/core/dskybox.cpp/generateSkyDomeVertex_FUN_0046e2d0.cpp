// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_0046e2d0
// Address: 0046e2d0
// Address Range: [[0046e2d0, 0046e40a]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_0046e2d0(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_0046e2d0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  CVector3i *input;
  float local_48;
  CVector3i local_44;
  double local_38;
  double local_30;
  float local_1c;
  int local_18;
  
  local_18 = param_2;
  local_1c = (float)param_2 * _DAT_005d18ff * _DAT_005d1903 * (float)_DAT_005d190b;
  if (param_3 == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)param_3 * _DAT_005d1913 * _DAT_005d1903 * (float)_DAT_005d191b;
    local_18 = param_3;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)fsin((float10)local_1c + (float10)(float)param_1[7]);
  fVar5 = (float10)fcos((float10)local_48);
  fVar6 = (float10)fcos((float10)local_1c + (float10)(float)param_1[7]);
  fVar7 = (float10)_DAT_0060d1f4;
  local_30 = (double)fVar5;
  fVar5 = (float10)_DAT_005d1923;
  fVar3 = fVar3 * fVar7 * fVar5;
  fVar4 = fVar4 * fVar7 * (float10)local_30 * fVar5;
  fVar5 = fVar6 * fVar7 * (float10)local_30 * fVar5;
  input = &local_44;
  local_38 = local_30;
  round();
  local_44.y = (int)ROUND(fVar3);
  round();
  uVar8 = round();
  iVar2 = (int)uVar8;
  local_44.x = (int)ROUND(fVar4);
  local_44.z = (int)ROUND(fVar5);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)((ulonglong)uVar8 >> 0x20) + iVar2 * 0x10),input);
  uVar1 = *param_1;
  (&DAT_00622034)[iVar2 * 4] = uVar1;
  (&DAT_00622038)[iVar2 * 4] = uVar1;
  (&DAT_0062203c)[iVar2 * 4] = uVar1;
  (&DAT_00622040)[iVar2 * 4] = 0;
  return;
}
