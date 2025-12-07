// Name: core_turret.cpp_CTurret_FUN_005e2910
// Address: 005e2910
// Address Range: [[005e2910, 005e2b12]]
// Convention: __cdecl
// Signature: int * core_turret.cpp_CTurret_FUN_005e2910(CTurret * this_ptr)

#include "nocturne.h"

int * __cdecl core_turret_cpp_CTurret_FUN_005e2910(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint corner_index;
  BADSPACEBASE *in_ESP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  CKeyFramedModelInstance *in_stack_00000008;
  float fStack0000000c;
  CMatrix3x4f *in_stack_ffffff08;
  CKeyFramedModelInstance *in_stack_ffffff18;
  uint auStack_bc [12];
  uint auStack_8c [9];
  byte auStack_68 [64];
  CBoundingBox3D local_28;
  CKeyFramedModelInstance *local_c;
  
  bVar7 = 0;
  fVar1 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  local_c = (CKeyFramedModelInstance *)(int)ROUND(dVar8);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&(this_ptr->base_weapon).model);
  pCVar3 = pCVar2->frame_bounds + (int)fVar1 * 2;
  in_stack_00000008->part_visibility_flags[0] = (int)pCVar3->x;
  in_stack_00000008->part_visibility_flags[1] = (int)pCVar3->y;
  in_stack_00000008->part_visibility_flags[2] = (int)pCVar3->z;
  in_stack_00000008->part_visibility_flags[3] = (int)pCVar3[1].x;
  in_stack_00000008->part_visibility_flags[4] = (int)pCVar3[1].y;
  in_stack_00000008->part_visibility_flags[5] = (int)pCVar3[1].z;
  local_c = (CKeyFramedModelInstance *)(this_ptr->field1_0x578 + 0xc);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(local_c);
  if (pCVar2->poly_count < 1) {
    return in_stack_00000008->part_visibility_flags;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_68,&g_ZeroVector,(CVector3f *)this_ptr->field1_0x578);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)&stack0xffffff0c,&g_ZeroVector,
             (CVector3f *)&(this_ptr->base_weapon).base_actor.orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_68 + 8),(CMatrix3x4f *)&stack0xffffff10,in_stack_ffffff08);
  puVar5 = auStack_8c;
  puVar6 = auStack_bc;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  fStack0000000c = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
  crt_math_c_round_FUN_005fe6b0((double)fStack0000000c);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(in_stack_00000008);
  pCVar3 = pCVar2->frame_bounds + (int)fStack0000000c * 2;
  local_28.min.x = pCVar3->x;
  local_28.min.y = pCVar3->y;
  local_28.min.z = pCVar3->z;
  local_28.max.x = pCVar3[1].x;
  local_28.max.y = pCVar3[1].y;
  local_28.max.z = pCVar3[1].z;
  corner_index = 0;
  do {
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (&local_28,(CVector3f *)&stack0xfffffffc,corner_index);
    pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)&local_c,pCVar3,(CMatrix3x4f *)in_stack_ffffff18);
    corner_index = corner_index + 1;
    in_stack_ffffff18 = in_stack_00000008;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)in_stack_00000008,pCVar3);
  } while ((int)corner_index < 8);
  return in_stack_00000008->part_visibility_flags;
}
