// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_00463440
// Address: 00463440
// Address Range: [[00463440, 0046357a]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(undefined4 *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(uint *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  float fVar12;
  int local_44 [3];
  double local_38;
  double local_30;
  float local_1c;
  int local_18;
  
  piVar1 = DAT_005ae704;
  local_18 = param_2;
  local_1c = (float)param_2 * 0.0625f * (float)3.1415926535000001 * (float)2;
  if (param_3 == 0) {
    fVar12 = 0.019634955;
  }
  else {
    fVar12 = (float)param_3 * 5.1806537865363094e-315._0_4_ * (float)3.1415926535000001 *
             (float)0.5;
    local_18 = param_3;
  }
  fVar2 = (float10)fsin((float10)fVar12);
  fVar3 = (float10)fsin((float10)local_1c + (float10)(float)param_1[7]);
  fVar4 = (float10)fcos((float10)fVar12);
  fVar5 = (float10)fcos((float10)local_1c + (float10)(float)param_1[7]);
  fVar6 = (float10)_DAT_005b0678;
  local_38 = (double)fVar4;
  fVar4 = (float10)local_38;
  fVar8 = (float10)local_38;
  fVar7 = (float10)256;
  piVar11 = local_44;
  local_30 = local_38;
  fVar2 = (float10)round(fVar2 * fVar6 * fVar7);
  local_44[0] = (int)ROUND(fVar2);
  uVar10 = 0x463513;
  fVar4 = (float10)round(fVar3 * fVar6 * fVar4 * fVar7);
  uVar9 = 0x46351a;
  fVar8 = (float10)round(fVar5 * fVar6 * fVar8 * fVar7);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
            (*piVar1 + param_4 * 0x30,uVar9,uVar10,(int)ROUND(fVar4),piVar11,(int)ROUND(fVar8));
  uVar9 = *param_1;
  (&DAT_005c5034)[param_4 * 0xc] = uVar9;
  (&DAT_005c5038)[param_4 * 0xc] = uVar9;
  (&DAT_005c503c)[param_4 * 0xc] = uVar9;
  (&DAT_005c5040)[param_4 * 0xc] = 0;
  return;
}
