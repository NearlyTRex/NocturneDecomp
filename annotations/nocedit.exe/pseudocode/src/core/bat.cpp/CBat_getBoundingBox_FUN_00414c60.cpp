// Name: core_bat.cpp_CBat_getBoundingBox_FUN_00414c60
// Address: 00414c60
// Address Range: [[00414c60, 00414cd5]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bat_cpp_CBat_getBoundingBox_FUN_00414c60(CBat *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CBoundingBox3D * __cdecl core_bat_cpp_CBat_getBoundingBox_FUN_00414c60(CBat *this_ptr,CBoundingBox3D *out_box)

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
