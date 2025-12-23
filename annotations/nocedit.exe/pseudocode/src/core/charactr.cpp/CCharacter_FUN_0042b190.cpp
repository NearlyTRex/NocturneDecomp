// Name: core_charactr.cpp_CCharacter_FUN_0042b190
// Address: 0042b190
// Address Range: [[0042b190, 0042b2e8] [0042b566, 0042b5aa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b190(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b190(CCharacter *this_ptr)

{
  CDemonSet *pCVar1;
  CVector3f *euler_angles;
  CMatrix3x4f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  int in_stack_00000010;
  int in_stack_0000001c;
  float in_stack_fffffd1c;
  float in_stack_fffffd20;
  CMatrix3x4f *in_stack_fffffd24;
  CMatrix3x4f *in_stack_fffffd28;
  CMatrix3x4f *in_stack_fffffd2c;
  CMatrix3x4f *in_stack_fffffd30;
  CMatrix3x4f *in_stack_fffffd38;
  CMatrix3x4f *in_stack_fffffd3c;
  CMatrix3x4f *in_stack_fffffd40;
  uint auStack_2a8 [20];
  uint auStack_258 [4];
  uint auStack_248 [17];
  uint uStack_204;
  CMatrix3x4f CStack_200;
  uint local_1cc [8];
  uint auStack_1ac [10];
  uint uStack_184;
  CMatrix3x4f CStack_180;
  uint auStack_150 [12];
  uint uStack_120;
  CMatrix3x4f CStack_11c;
  byte auStack_e8 [56];
  uint uStack_b0;
  byte local_ac [36];
  float afStack_88 [2];
  CMatrix3x4f CStack_80;
  float local_4c;
  CVector3f local_48;
  CVector3f CStack_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  
  pCVar1 = g_CDemonSetPtr;
  bVar8 = 0;
  iVar3 = *(int *)(this_ptr->cloth_data + 0x35c);
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->field11_0x14d148)) {
    *(int *)(this_ptr->cloth_data + 0x35c) = *(int *)(this_ptr->cloth_data + 0x35c) + 1;
    local_20.z = (float)(this_ptr->cloth_data + iVar3 * 0x38 + 0x360);
    *(int *)local_20.z = pCVar1->field11_0x14d148;
    iVar3 = pCVar1->field12_0x14d14c;
    *(int *)((int)local_20.z + 4) = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(this_ptr->base_actor).vtable[1].getBlockVirtualDirectorFlag)(&this_ptr->base_actor)
      ;
      *(int *)((int)local_20.z + 4) = iVar3;
    }
    local_4c = (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x
    ;
    local_48.x = (g_CDemonSetPtr->collision_result_vec2).y -
                 (g_CDemonSetPtr->collision_result_vec1).y;
    local_48.y = (g_CDemonSetPtr->collision_result_vec2).z -
                 (g_CDemonSetPtr->collision_result_vec1).z;
    local_2c = SQRT(local_48.y * local_48.y + local_48.x * local_48.x + local_4c * local_4c);
    if (local_2c <= 0.0) {
      local_30 = 0.0;
      CStack_3c.z = 0.0;
      local_2c = 0.0;
    }
    else {
      local_2c = 1.0 / local_2c;
      CStack_3c.z = local_4c * local_2c;
      local_30 = local_48.x * local_2c;
      local_2c = local_48.y * local_2c;
    }
    local_20.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,0.6);
    local_30 = local_30 * local_20.z;
    local_2c = local_2c * local_20.z;
    local_28 = local_28 * local_20.z;
    local_24 = (g_CDemonSetPtr->collision_impact_position).x - local_30;
    local_20.x = (g_CDemonSetPtr->collision_impact_position).y - local_2c;
    local_20.y = (g_CDemonSetPtr->collision_impact_position).z - local_28;
    euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_3c,&local_48);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)(local_ac + 8),&local_20,euler_angles);
    pCVar2 = (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(pCVar2,in_stack_fffffd1c);
    puVar5 = auStack_248;
    puVar7 = auStack_2a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    pCVar2 = (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(pCVar2,in_stack_fffffd20);
    puVar5 = auStack_150;
    puVar7 = &uStack_184;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_180,in_stack_fffffd24,in_stack_fffffd28);
    puVar5 = auStack_1ac;
    puVar7 = &uStack_120;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_11c,in_stack_fffffd2c,in_stack_fffffd30);
    pfVar4 = &CStack_80.m[2].y;
    pfVar6 = afStack_88;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)auStack_e8,&(this_ptr->base_actor).location.position,
               (CVector3f *)&(this_ptr->base_actor).orient);
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices +
               *(int *)(in_stack_00000010 + 4),in_stack_fffffd38);
    puVar5 = (uint *)&stack0xfffffd40;
    puVar7 = &uStack_204;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&CStack_80,(CMatrix3x4f *)(auStack_e8 + 8),&CStack_200);
    puVar5 = local_1cc;
    puVar7 = &uStack_b0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)local_ac,in_stack_fffffd3c,in_stack_fffffd40);
    puVar5 = auStack_258;
    puVar7 = (uint *)(in_stack_0000001c + 8);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  return;
}
