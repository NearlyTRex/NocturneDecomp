// Name: core_tvbat.cpp_CTVBat_getBoundingBox_FUN_005e5050
// Address: 005e5050
// Address Range: [[005e5050, 005e50c5]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_005e5050(CTVBat *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_005e5050(CTVBat *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  float fVar1;
  
  fVar1 = this_ptr->anim_frame;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar3 = &pCVar2->frame_bounds[(int)ROUND(ROUND(fVar1))].min;
  (out_box->min).x = pCVar3->x;
  (out_box->min).y = pCVar3->y;
  (out_box->min).z = pCVar3->z;
  (out_box->max).x = pCVar3[1].x;
  (out_box->max).y = pCVar3[1].y;
  (out_box->max).z = pCVar3[1].z;
  return out_box;
}
