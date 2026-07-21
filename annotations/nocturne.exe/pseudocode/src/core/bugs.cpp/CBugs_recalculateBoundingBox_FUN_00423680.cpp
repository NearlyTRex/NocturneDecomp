// Name: core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680
// Address: 00423680
// Address Range: [[00423680, 00423781]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  puVar7 = (uint *)(param_1 + 0x19834);
  puVar1 = (uint *)(param_1 + 0xbd34);
  if (puVar7 != puVar1) {
    *puVar7 = *puVar1;
    *(uint *)(param_1 + 0x19838) = *(uint *)(param_1 + 0xbd38);
    *(uint *)(param_1 + 0x1983c) = *(uint *)(param_1 + 0xbd3c);
  }
  if ((uint *)(param_1 + 0x19840) != puVar1) {
    *(uint *)(param_1 + 0x19840) = *puVar1;
    *(uint *)(param_1 + 0x19844) = *(uint *)(param_1 + 0xbd38);
    puVar7 = *(uint **)(param_1 + 0xbd3c);
    *(uint **)(param_1 + 0x19848) = puVar7;
  }
  iVar9 = 1;
  if (1 < *(int *)(param_1 + 0xbd28)) {
    iVar8 = param_1 + 0xbd74;
    do {
      iVar9 = iVar9 + 1;
      puVar7 = (uint *)
               core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_1 + 0x19834,iVar8);
      iVar8 = iVar8 + 0x40;
    } while (iVar9 < *(int *)(param_1 + 0xbd28));
  }
  fVar2 = *(float *)(param_1 + 0x19834) + _DAT_00579d85;
  fVar3 = *(float *)(param_1 + 0x1983c) + _DAT_00579d85;
  fVar4 = *(float *)(param_1 + 0x19840) + _DAT_00579d89;
  fVar5 = *(float *)(param_1 + 0x19844) + _DAT_00579d89;
  fVar6 = *(float *)(param_1 + 0x19848) + _DAT_00579d89;
  *(float *)(param_1 + 0x19838) = *(float *)(param_1 + 0x19838) + _DAT_00579d85;
  *(float *)(param_1 + 0x1983c) = fVar3;
  *(float *)(param_1 + 0x19840) = fVar4;
  *(float *)(param_1 + 0x19844) = fVar5;
  *(float *)(param_1 + 0x19848) = fVar6;
  *(float *)(param_1 + 0x19834) = fVar2;
  return puVar7;
}
