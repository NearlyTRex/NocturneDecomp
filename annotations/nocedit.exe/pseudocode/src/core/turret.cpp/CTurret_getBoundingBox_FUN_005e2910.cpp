// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_005e2910
// Address: 005e2910
// Address Range: [[005e2910, 005e2b12] [03fc3be0, 03fc3c3c]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar4;
  float fVar5;
  CVector3f *pCVar3;
  CVector3f *point;
  int iVar4;
  uint corner_index;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CMatrix3x4f *matrix;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CBoundingBox3D local_40;
  CVector3f local_28;
  CVector3f local_1c;
  CKeyFramedModelInstance *local_10;
  int local_c;
  
  fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr,0);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&(this_ptr->base).model)
  ;
  pCVar1 = pCVar2->frame_bounds + (int)ROUND(ROUND(fVar1));
  (out_box->min).x = (pCVar1->min).x;
  (out_box->min).y = (pCVar1->min).y;
  (out_box->min).z = (pCVar1->min).z;
  (out_box->max).x = (pCVar1->max).x;
  (out_box->max).y = (pCVar1->max).y;
  (out_box->max).z = (pCVar1->max).z;
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar4->poly_count < 1) {
    return out_box;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_70,&g_ZeroVector.f,&(this_ptr->home_orient).vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_100,&g_ZeroVector.f,&(this_ptr->base).base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_70,&local_100,&local_a0);
  fVar5 = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr,1);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar4->frame_bounds + (int)ROUND(ROUND(fVar5));
  local_40.min.x = (pCVar1->min).x;
  local_40.min.y = (pCVar1->min).y;
  local_40.min.z = (pCVar1->min).z;
  local_40.max.x = (pCVar1->max).x;
  local_40.max.y = (pCVar1->max).y;
  local_40.max.z = (pCVar1->max).z;
  corner_index = 0;
  do {
    matrix = &local_d0;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_40,&local_1c,corner_index);
    point = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_28,pCVar3,matrix);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(out_box,point);
  } while ((int)corner_index < 8);
  return out_box;
}
