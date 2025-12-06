// Name: core_turret.cpp_CTurret_FUN_005e2910
// Address: 005e2910
// Address Range: [[005e2910, 005e2b12]]
// Convention: __cdecl
// Signature: int * core_turret.cpp_CTurret_FUN_005e2910(CTurret * this_ptr)

#include "nocturne.h"

int * __cdecl core_turret_cpp_CTurret_FUN_005e2910(CTurret *this_ptr)

{
  CTurret *pCVar1;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint extraout_EDX;
  uint corner_index;
  BADSPACEBASE *in_ESP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  int unaff_retaddr;
  CBoundingBox3D *in_stack_00000008;
  CKeyFramedModelInstance *in_stack_00000010;
  float fStack00000014;
  int iStack00000018;
  int in_stack_0000001c;
  CMatrix3x4f *in_stack_ffffff10;
  float fStack_ec;
  CBoundingBox3D *in_stack_ffffff28;
  uint auStack_b4 [12];
  uint auStack_84 [9];
  byte auStack_60 [72];
  float fStack_18;
  float fStack_14;
  float local_10;
  float local_c;
  
  pCVar1 = this_ptr;
  bVar7 = 0;
  core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,&(pCVar1->base_weapon).model))
  ;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84 /* extract 2-byte value */(dVar9,0));
  pCVar3 = pCVar2->frame_bounds + unaff_retaddr * 2;
  (in_stack_00000008->min).x = pCVar3->x;
  (in_stack_00000008->min).y = pCVar3->y;
  (in_stack_00000008->min).z = pCVar3->z;
  (in_stack_00000008->max).x = pCVar3[1].x;
  (in_stack_00000008->max).y = pCVar3[1].y;
  (in_stack_00000008->max).z = pCVar3[1].z;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(pCVar1->field1_0x578 + 0xc));
  if (pCVar2->poly_count < 1) {
    return (int *)in_stack_00000008;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_60,&g_ZeroVector,(CVector3f *)pCVar1->field1_0x578);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)&fStack_ec,&g_ZeroVector,
             (CVector3f *)&(pCVar1->base_weapon).base_actor.orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_60 + 8),(CMatrix3x4f *)&stack0xffffff18,in_stack_ffffff10);
  puVar5 = auStack_84;
  puVar6 = auStack_b4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  dVar9 = (double)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
  fStack00000014 = SUB84 /* extract 2-byte value */(dVar9,0);
  fVar8 = (float10)fStack00000014;
  fStack_ec = 8.647718e-39;
  crt_math_c_round_FUN_005fe6b0(dVar9);
  iStack00000018 = (int)ROUND(fVar8);
  fStack_ec = 8.647737e-39;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(in_stack_00000010);
  pCVar3 = pCVar2->frame_bounds + in_stack_0000001c * 2;
  fStack_18 = pCVar3->x;
  fStack_14 = pCVar3->y;
  local_10 = pCVar3->z;
  local_c = pCVar3[1].x;
  corner_index = 0;
  do {
    fStack_ec = 8.647923e-39;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)&fStack_18,(CVector3f *)&stack0x0000000c,corner_index);
    pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)&this_ptr,pCVar3,(CMatrix3x4f *)in_stack_ffffff28);
    corner_index = corner_index + 1;
    in_stack_ffffff28 = in_stack_00000008;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(in_stack_00000008,pCVar3);
  } while ((int)corner_index < 8);
  return (int *)in_stack_00000008;
}
