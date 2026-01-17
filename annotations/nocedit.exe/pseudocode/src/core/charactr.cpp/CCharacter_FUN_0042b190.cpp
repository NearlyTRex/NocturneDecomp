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
  CMatrix3x4f *pCVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  CMatrix3x4f *pCVar7;
  uint *puVar8;
  byte bVar9;
  CMatrix3x4f *matrix_b;
  float afStack_2e8 [12];
  CMatrix3x4f CStack_2b8;
  uint auStack_288 [12];
  float afStack_258 [12];
  CMatrix3x4f CStack_228;
  float afStack_1f8 [12];
  float afStack_1c8 [12];
  CMatrix3x4f CStack_198;
  float afStack_168 [12];
  CMatrix3x4f CStack_138;
  CMatrix3x4f CStack_108;
  CMatrix3x4f CStack_d8;
  CMatrix3x4f CStack_a8;
  float afStack_78 [12];
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
  iVar4 = *(int *)(this_ptr->cloth_data + 0x35c);
  if ((iVar4 < 5) && (-1 < g_CDemonSetPtr->field11_0x14d148)) {
    *(int *)(this_ptr->cloth_data + 0x35c) = *(int *)(this_ptr->cloth_data + 0x35c) + 1;
    local_18 = this_ptr->cloth_data + iVar4 * 0x38 + 0x360;
    *(int *)local_18 = pCVar1->field11_0x14d148;
    iVar4 = pCVar1->field12_0x14d14c;
    *(int *)(local_18 + 4) = iVar4;
    if (iVar4 < 0) {
      iVar4 = (*(this_ptr->base_actor).vtable[1].getBlockVirtualDirectorFlag)(&this_ptr->base_actor)
      ;
      *(int *)(local_14 + 4) = iVar4;
    }
    local_48.x = (g_CDemonSetPtr->collision_result_vec2).x -
                 (g_CDemonSetPtr->collision_result_vec1).x;
    local_48.y = (g_CDemonSetPtr->collision_result_vec2).y -
                 (g_CDemonSetPtr->collision_result_vec1).y;
    local_48.z = (g_CDemonSetPtr->collision_result_vec2).z -
                 (g_CDemonSetPtr->collision_result_vec1).z;
    matrix_b = (CMatrix3x4f *)
               SQRT(local_48.z * local_48.z + local_48.y * local_48.y + local_48.x * local_48.x);
    if ((float)matrix_b <= 0.0) {
      local_2c = 0.0;
      local_30 = 0.0;
      local_28 = 0.0;
    }
    else {
      local_28 = 1.0 / (float)matrix_b;
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
    pCVar7 = &CStack_a8;
    pCVar2 = (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(pCVar2,(float)pCVar7);
    pCVar2 = &CStack_2b8;
    pfVar5 = afStack_258;
    pCVar3 = &CStack_2b8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar3->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar9 * -2 + 1) * 4);
    }
    pCVar3 = (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(pCVar3,(float)pCVar2);
    pfVar5 = afStack_168;
    pCVar3 = &CStack_198;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar3->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_198,pCVar2,pCVar7);
    pfVar5 = afStack_1c8;
    pCVar2 = &CStack_138;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar2->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_138,pCVar7,matrix_b);
    pfVar5 = afStack_78;
    pCVar2 = &CStack_a8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar2->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&CStack_108,&(this_ptr->base_actor).location.position,
               (CVector3f *)&(this_ptr->base_actor).orient);
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices + *(int *)(local_14 + 4),
               matrix_b);
    pCVar2 = &CStack_228;
    pfVar5 = afStack_2e8;
    pCVar7 = &CStack_228;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar7->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_a8,&CStack_108,pCVar2);
    pfVar5 = afStack_1f8;
    pCVar7 = &CStack_d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar7->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_d8,pCVar2,matrix_b);
    puVar6 = auStack_288;
    puVar8 = (uint *)(local_14 + 8);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  return;
}
