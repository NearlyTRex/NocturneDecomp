// Name: core_charactr.cpp_CCharacter_FUN_0042b190
// Address: 0042b190
// Address Range: [[0042b190, 0042b2e8] [0042b566, 0042b5aa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b190(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b190(CCharacter *this_ptr)

{
  CDemonSet *pCVar1;
  float fVar2;
  CVector3f *euler_angles;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  uint *puVar5;
  int unaff_EDI;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  CMatrix3x4f *pCStack00000008;
  CMatrix3x4f *pCStack00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  float in_stack_fffffd28;
  float in_stack_fffffd2c;
  CMatrix3x4f *in_stack_fffffd30;
  CMatrix3x4f *in_stack_fffffd34;
  CMatrix3x4f *in_stack_fffffd38;
  CMatrix3x4f *in_stack_fffffd3c;
  CMatrix3x4f *in_stack_fffffd44;
  CMatrix3x4f *in_stack_fffffd48;
  CMatrix3x4f *in_stack_fffffd4c;
  uint auStack_29c [20];
  uint auStack_24c [4];
  uint auStack_23c [17];
  uint uStack_1f8;
  CMatrix3x4f CStack_1f4;
  uint auStack_1c0 [8];
  uint auStack_1a0 [10];
  uint uStack_178;
  CMatrix3x4f CStack_174;
  uint auStack_144 [12];
  uint uStack_114;
  CMatrix3x4f CStack_110;
  byte local_dc [56];
  uint uStack_a4;
  byte auStack_a0 [36];
  float local_7c [2];
  CMatrix3x4f CStack_74;
  float local_40;
  CVector3f CStack_3c;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  char *local_18;
  float local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar8 = 0;
  iVar3 = *(int *)(this_ptr->cloth_data + 0x35c);
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->field11_0x14d148)) {
    *(int *)(this_ptr->cloth_data + 0x35c) = *(int *)(this_ptr->cloth_data + 0x35c) + 1;
    local_18 = this_ptr->cloth_data + iVar3 * 0x38 + 0x360;
    *(int *)local_18 = pCVar1->field11_0x14d148;
    iVar3 = pCVar1->field12_0x14d14c;
    *(int *)(local_18 + 4) = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(this_ptr->base_actor).vtable[1].getBlockVirtualDirectorFlag)(&this_ptr->base_actor)
      ;
      *(int *)(unaff_EDI + 4) = iVar3;
    }
    local_40 = (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x
    ;
    CStack_3c.x = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
    CStack_3c.y = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
    local_20 = SQRT(CStack_3c.y * CStack_3c.y + CStack_3c.x * CStack_3c.x + local_40 * local_40);
    if (local_20 <= 0.0) {
      local_24 = 0.0;
      local_30.z = 0.0;
      local_20 = 0.0;
    }
    else {
      local_20 = 1.0 / local_20;
      local_30.z = local_40 * local_20;
      local_24 = CStack_3c.x * local_20;
      local_20 = CStack_3c.y * local_20;
    }
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,0.6);
    local_24 = local_24 * fVar2;
    local_20 = local_20 * fVar2;
    local_1c = local_1c * fVar2;
    local_18 = (char *)((g_CDemonSetPtr->collision_impact_position).x - local_24);
    local_14 = (g_CDemonSetPtr->collision_impact_position).y - local_20;
    euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_30,&CStack_3c);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)(auStack_a0 + 8),(CVector3f *)&local_14,euler_angles);
    pCStack00000008 =
         (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(pCStack00000008,in_stack_fffffd28);
    puVar5 = auStack_23c;
    puVar7 = auStack_29c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    pCStack00000010 =
         (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(pCStack00000010,in_stack_fffffd2c);
    puVar5 = auStack_144;
    puVar7 = &uStack_178;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_174,in_stack_fffffd30,in_stack_fffffd34);
    puVar5 = auStack_1a0;
    puVar7 = &uStack_114;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_110,in_stack_fffffd38,in_stack_fffffd3c);
    pfVar4 = &CStack_74.m[2].y;
    pfVar6 = local_7c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)local_dc,&(this_ptr->base_actor).location.position,
               (CVector3f *)&(this_ptr->base_actor).orient);
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices +
               *(int *)(in_stack_0000001c + 4),in_stack_fffffd44);
    puVar5 = (uint *)&stack0xfffffd4c;
    puVar7 = &uStack_1f8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&CStack_74,(CMatrix3x4f *)(local_dc + 8),&CStack_1f4);
    puVar5 = auStack_1c0;
    puVar7 = &uStack_a4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)auStack_a0,in_stack_fffffd48,in_stack_fffffd4c);
    puVar5 = auStack_24c;
    puVar7 = (uint *)(in_stack_00000028 + 8);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  return;
}
