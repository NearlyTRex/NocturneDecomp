// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_005e2910
// Address: 005e2910
// MANUAL RECONSTRUCTION
// Address Range: [[005e2910, 005e2b12] [03fc3be0, 03fc3c3c]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  CKeyFramedModel *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  uint corner_index;
  CMatrix3x4f *matrix;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CBoundingBox3D local_40;
  CVector3f local_28;
  CVector3f local_1c;
  
  fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr,0);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&(this_ptr->base).model)
  ;
  pCVar4 = pCVar2->frame_bounds + (int)ROUND(ROUND(fVar1)) * 2;
  (out_box->min).x = pCVar4->x;
  (out_box->min).y = pCVar4->y;
  (out_box->min).z = pCVar4->z;
  (out_box->max).x = pCVar4[1].x;
  (out_box->max).y = pCVar4[1].y;
  (out_box->max).z = pCVar4[1].z;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->poly_count < 1) {
    return out_box;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_70,&g_ZeroVector.f,&(this_ptr->home_orient).vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_100,&g_ZeroVector.f,&(this_ptr->base).base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_70,&local_100,&local_a0);
  fVar2 = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr,1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar4 = pCVar1->frame_bounds + (int)ROUND(ROUND(fVar2)) * 2;
  local_40.min.x = pCVar4->x;
  local_40.min.y = pCVar4->y;
  local_40.min.z = pCVar4->z;
  local_40.max.x = pCVar4[1].x;
  local_40.max.y = pCVar4[1].y;
  local_40.max.z = pCVar4[1].z;
  corner_index = 0;
  do {
    matrix = &local_d0;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_40,&local_1c,corner_index);
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_28,pCVar3,matrix);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(out_box,pCVar4);
  } while ((int)corner_index < 8);
  return out_box;
}
