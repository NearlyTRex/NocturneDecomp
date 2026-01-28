// Name: core_charactr.cpp_CCharacter_FUN_0042b190
// Address: 0042b190
// Address Range: [[0042b190, 0042b2e8] [0042b566, 0042b5aa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042b190(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b190(CCharacter *this_ptr)

{
  CDemonSet *pCVar1;
  CVector3f *euler_angles;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  char *pcVar7;
  byte bVar8;
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_2bc;
  CMatrix3x4f local_28c;
  CMatrix3x4f local_25c;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1fc;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  char *local_18;
  float local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar8 = 0;
  iVar2 = *(int *)(this_ptr->cloth_data + 0x35c);
  if ((iVar2 < 5) && (-1 < g_CDemonSetPtr->unk1)) {
    *(int *)(this_ptr->cloth_data + 0x35c) = *(int *)(this_ptr->cloth_data + 0x35c) + 1;
    local_18 = this_ptr->cloth_data + iVar2 * 0x38 + 0x360;
    *(int *)local_18 = pCVar1->unk1;
    iVar2 = pCVar1->unk2;
    *(int *)(local_18 + 4) = iVar2;
    if (iVar2 < 0) {
      iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).cfunc17)();
      *(int *)(local_18 + 4) = iVar2;
    }
    local_4c.x = (g_CDemonSetPtr->collision_result_vec2).x -
                 (g_CDemonSetPtr->collision_result_vec1).x;
    local_4c.y = (g_CDemonSetPtr->collision_result_vec2).y -
                 (g_CDemonSetPtr->collision_result_vec1).y;
    local_4c.z = (g_CDemonSetPtr->collision_result_vec2).z -
                 (g_CDemonSetPtr->collision_result_vec1).z;
    local_2c = SQRT(local_4c.z * local_4c.z + local_4c.y * local_4c.y + local_4c.x * local_4c.x);
    if (local_2c <= 0.0) {
      local_30 = 0.0;
      local_34 = 0.0;
      local_2c = 0.0;
    }
    else {
      local_2c = 1.0 / local_2c;
      local_34 = local_4c.x * local_2c;
      local_30 = local_4c.y * local_2c;
      local_2c = local_4c.z * local_2c;
    }
    local_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,0.6);
    local_34 = local_34 * local_1c;
    local_30 = local_30 * local_1c;
    local_2c = local_2c * local_1c;
    local_28.x = (g_CDemonSetPtr->collision_impact_position).x - local_34;
    local_28.y = (g_CDemonSetPtr->collision_impact_position).y - local_30;
    local_28.z = (g_CDemonSetPtr->collision_impact_position).z - local_2c;
    local_14 = local_1c;
    euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_40,&local_4c);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_ac,&local_28,euler_angles);
    pCVar4 = &local_ac;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(local_14,&local_25c);
    pCVar5 = &local_2bc;
    pCVar3 = &local_25c;
    pCVar6 = &local_2bc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar6->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(local_14,&local_16c);
    pCVar3 = &local_16c;
    pCVar6 = &local_19c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar6->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,pCVar5,&local_1cc);
    pCVar5 = &local_1cc;
    pCVar3 = &local_13c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar3->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_13c,pCVar4,&local_7c);
    pCVar5 = &local_7c;
    pCVar4 = &local_ac;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_10c,&(this_ptr->base).location.position,(CVector3f *)&(this_ptr->base).orient)
    ;
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices + *(int *)(local_18 + 4),
               &local_2ec);
    pCVar5 = &local_22c;
    pCVar4 = &local_2ec;
    pCVar3 = &local_22c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar3->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_ac,&local_10c,&local_1fc);
    pCVar4 = &local_1fc;
    pCVar3 = &local_dc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar3->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_dc,pCVar5,&local_28c);
    pCVar5 = &local_28c;
    pcVar7 = local_18 + 8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(float *)pcVar7 = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
      pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
    }
  }
  return;
}
