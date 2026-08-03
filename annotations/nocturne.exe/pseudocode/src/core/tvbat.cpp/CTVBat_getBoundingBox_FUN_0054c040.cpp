// Name: core_tvbat.cpp_CTVBat_getBoundingBox_FUN_0054c040
// Address: 0054c040
// Address Range: [[0054c040, 0054c0b5]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_0054c040(CTVBat *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_0054c040(CTVBat *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *pCVar2;
  double dVar3;
  
  dVar3 = round((double)this_ptr->anim_frame);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3);
  (out_box->min).x = (pCVar2->min).x;
  (out_box->min).y = (pCVar2->min).y;
  (out_box->min).z = (pCVar2->min).z;
  (out_box->max).x = (pCVar2->max).x;
  (out_box->max).y = (pCVar2->max).y;
  (out_box->max).z = (pCVar2->max).z;
  return out_box;
}
