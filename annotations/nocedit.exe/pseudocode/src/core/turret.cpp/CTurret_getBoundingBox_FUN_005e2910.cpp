// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_005e2910
// Address: 005e2910
// Address Range: [[005e2910, 005e2b12]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint corner_index;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CBoundingBox3D local_40;
  CVector3f local_28;
  CVector3f local_1c;
  CKeyFramedModelInstance *local_10;
  int local_c;
  
  bVar7 = 0;
  fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr,0);
  local_c = (int)ROUND(ROUND(fVar1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&(this_ptr->base).model)
  ;
  pCVar3 = pCVar2->frame_bounds + local_c * 2;
  (out_box->min).x = pCVar3->x;
  (out_box->min).y = pCVar3->y;
  (out_box->min).z = pCVar3->z;
  (out_box->max).x = pCVar3[1].x;
  (out_box->max).y = pCVar3[1].y;
  (out_box->max).z = pCVar3[1].z;
  local_10 = &this_ptr->model;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(local_10);
  if (pCVar2->poly_count < 1) {
    return out_box;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_70,&g_ZeroVector.f,&(this_ptr->home_orient).vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_100,&g_ZeroVector.f,&(this_ptr->base).base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_70,&local_100,&local_a0);
  pCVar5 = &local_a0;
  pCVar6 = &local_d0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar6->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr,1);
  local_c = (int)ROUND(ROUND(fVar1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(local_10);
  pCVar3 = pCVar2->frame_bounds + local_c * 2;
  local_40.min.x = pCVar3->x;
  local_40.min.y = pCVar3->y;
  local_40.min.z = pCVar3->z;
  local_40.max.x = pCVar3[1].x;
  local_40.max.y = pCVar3[1].y;
  local_40.max.z = pCVar3[1].z;
  corner_index = 0;
  do {
    pCVar5 = &local_d0;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_40,&local_1c,corner_index);
    pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_28,pCVar3,pCVar5);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(out_box,pCVar3);
  } while ((int)corner_index < 8);
  return out_box;
}
