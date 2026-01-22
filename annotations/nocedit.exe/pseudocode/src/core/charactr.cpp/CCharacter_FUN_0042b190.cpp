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
  float fVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  float *pfVar8;
  byte bVar9;
  CMatrix3x4f CStack_2e8;
  CMatrix3x4f CStack_2b8;
  CMatrix3x4f CStack_288;
  CMatrix3x4f CStack_258;
  CMatrix3x4f CStack_228;
  CMatrix3x4f CStack_1f8;
  CMatrix3x4f CStack_1c8;
  CMatrix3x4f CStack_198;
  CMatrix3x4f CStack_168;
  CMatrix3x4f CStack_138;
  CMatrix3x4f CStack_108;
  CMatrix3x4f CStack_d8;
  CMatrix3x4f CStack_a8;
  CMatrix3x4f CStack_78;
  CVector3f local_48;
  CVector3f CStack_3c;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  char *local_18;
  int local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar9 = 0;
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
      *(int *)(local_14 + 4) = iVar3;
    }
    local_48.x = (g_CDemonSetPtr->collision_result_vec2).x -
                 (g_CDemonSetPtr->collision_result_vec1).x;
    local_48.y = (g_CDemonSetPtr->collision_result_vec2).y -
                 (g_CDemonSetPtr->collision_result_vec1).y;
    local_48.z = (g_CDemonSetPtr->collision_result_vec2).z -
                 (g_CDemonSetPtr->collision_result_vec1).z;
    local_28 = SQRT(local_48.z * local_48.z + local_48.y * local_48.y + local_48.x * local_48.x);
    if (local_28 <= 0.0) {
      local_2c = 0.0;
      local_30 = 0.0;
      local_28 = 0.0;
    }
    else {
      local_28 = 1.0 / local_28;
      local_30 = local_48.x * local_28;
      local_2c = local_48.y * local_28;
      local_28 = local_48.z * local_28;
    }
    local_18 = (char *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,0.6);
    local_30 = local_30 * (float)local_18;
    local_2c = local_2c * (float)local_18;
    local_28 = local_28 * (float)local_18;
    local_24.x = (g_CDemonSetPtr->collision_impact_position).x - local_30;
    local_24.y = (g_CDemonSetPtr->collision_impact_position).y - local_2c;
    local_24.z = (g_CDemonSetPtr->collision_impact_position).z - local_28;
    euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_3c,&local_48);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&CStack_a8,&local_24,euler_angles);
    pCVar5 = &CStack_a8;
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(fVar2,&CStack_258);
    pCVar6 = &CStack_2b8;
    pCVar4 = &CStack_258;
    pCVar7 = &CStack_2b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    }
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(fVar2,&CStack_168);
    pCVar4 = &CStack_168;
    pCVar7 = &CStack_198;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_198,pCVar6,&CStack_1c8);
    pCVar6 = &CStack_1c8;
    pCVar4 = &CStack_138;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_138,pCVar5,&CStack_78);
    pCVar6 = &CStack_78;
    pCVar5 = &CStack_a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&CStack_108,&(this_ptr->base_actor).location.position,
               (CVector3f *)&(this_ptr->base_actor).orient);
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices + *(int *)(local_14 + 4),
               &CStack_2e8);
    pCVar6 = &CStack_228;
    pCVar5 = &CStack_2e8;
    pCVar4 = &CStack_228;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_a8,&CStack_108,&CStack_1f8);
    pCVar5 = &CStack_1f8;
    pCVar4 = &CStack_d8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_d8,pCVar6,&CStack_288);
    pCVar6 = &CStack_288;
    pfVar8 = (float *)(local_14 + 8);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  return;
}
