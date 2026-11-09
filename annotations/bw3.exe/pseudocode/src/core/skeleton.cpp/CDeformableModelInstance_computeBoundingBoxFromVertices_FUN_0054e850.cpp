// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850
// Address: 0054e850
// Address Range: [[0054e850, 0054ea33]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850(CDeformableModelInstance *this_ptr)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  byte *puVar6;
  int *piVar7;
  int *piVar8;
  byte bVar9;
  int aiStackY_1040 [6];
  float afStackY_1028 [1006];
  int local_64;
  int local_60;
  int local_5c;
  int local_54 [5];
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar9 = 0;
  local_54[4] = 0x7fffffff;
  local_54[3] = 0x7fffffff;
  local_54[2] = 0x7fffffff;
  local_5c = -0x7fffffff;
  local_60 = -0x7fffffff;
  local_64 = -0x7fffffff;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar3 = *(int *)&pCVar4->field_0x2c;
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180(this_ptr,0,0.0);
  core_skeleton_cpp_FUN_0054e420(this_ptr,0);
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      piVar7 = (int *)(*(int *)&this_ptr->field_0x2324 + iVar5);
      piVar8 = piVar7 + (uint)bVar9 * -2 + 1;
      iVar2 = *piVar7;
      local_54[(uint)bVar9 * -2] = *piVar8;
      local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = piVar8[(uint)bVar9 * -2 + 1];
      if (iVar2 < local_54[2]) {
        local_54[2] = iVar2;
      }
      if (local_64 < iVar2) {
        local_64 = iVar2;
      }
      if (local_54[0] < local_54[3]) {
        local_54[3] = local_54[0];
      }
      if (local_60 < local_54[0]) {
        local_60 = local_54[0];
      }
      if (local_54[1] < local_54[4]) {
        local_54[4] = local_54[1];
      }
      if (local_5c < local_54[1]) {
        local_5c = local_54[1];
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 < iVar3 * 0xc);
  }
  puVar1 = &this_ptr->field_0x2328;
  *(float *)puVar1 = (float)local_54[2] * _DAT_005e4760;
  *(float *)&this_ptr->field_0x232c = (float)local_54[3] * _DAT_005e4760;
  *(float *)&this_ptr->field_0x2330 = (float)local_54[4] * _DAT_005e4760;
  puVar6 = &this_ptr->field_0x2334;
  *(float *)puVar6 = (float)local_64 * _DAT_005e4760;
  *(float *)&this_ptr->field_0x2338 = (float)local_60 * _DAT_005e4760;
  *(float *)&this_ptr->field_0x233c = (float)local_5c * _DAT_005e4760;
  local_3c[2] = *(float *)puVar6 - *(float *)puVar1;
  local_3c[3] = *(float *)&this_ptr->field_0x2338 - *(float *)&this_ptr->field_0x232c;
  local_2c = *(float *)&this_ptr->field_0x233c - *(float *)&this_ptr->field_0x2330;
  local_28 = *(float *)puVar6 - *(float *)puVar1;
  local_3c[(uint)bVar9 * -2 + 6] = local_3c[(uint)bVar9 * -2 + 3];
  local_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       local_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  local_1c = local_28 * _DAT_005d20f0;
  local_18 = local_24 * _DAT_005d20f0;
  local_14 = local_20 * _DAT_005d20f0;
  local_40 = local_28 * _DAT_005d20f0;
  local_3c[(uint)bVar9 * -2] = local_3c[(uint)bVar9 * -2 + 9];
  local_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  *(float *)puVar1 = *(float *)puVar1 - local_40;
  *(float *)&this_ptr->field_0x232c = *(float *)&this_ptr->field_0x232c - local_3c[0];
  *(float *)&this_ptr->field_0x2330 = *(float *)&this_ptr->field_0x2330 - local_3c[1];
  *(float *)puVar6 = *(float *)puVar6 + local_40;
  *(float *)&this_ptr->field_0x2338 = *(float *)&this_ptr->field_0x2338 + local_3c[0];
  *(float *)&this_ptr->field_0x233c = *(float *)&this_ptr->field_0x233c + local_3c[1];
  return;
}
