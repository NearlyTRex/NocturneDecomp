// Name: core_drip.cpp_CDrip_getBoundingBox_FUN_004627a0
// Address: 004627a0
// Address Range: [[004627a0, 0046287b]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_004627a0(CDrip *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_004627a0(CDrip *this_ptr,CBoundingBox3D *out_box)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  CBoundingBox3D *pCVar5;
  CKeyFramedModel *pCVar6;
  
  pfVar1 = &(out_box->min).y;
  pfVar2 = &(out_box->min).z;
  pfVar3 = &(out_box->max).y;
  pfVar4 = &(out_box->max).z;
  if (this_ptr->type != DRIP_TYPE_STALAG) {
    (out_box->min).x = -0.5;
    *pfVar1 = 0.0;
    *pfVar2 = -0.5;
    (out_box->max).x = 0.5;
    *pfVar3 = 1.0;
    *pfVar4 = 1.0;
    return out_box;
  }
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  pCVar5 = pCVar6->frame_bounds;
  (out_box->min).x = (pCVar5->min).x;
  *pfVar1 = (pCVar5->min).y;
  *pfVar2 = (pCVar5->min).z;
  (out_box->max).x = (pCVar5->max).x;
  *pfVar3 = (pCVar5->max).y;
  *pfVar4 = (pCVar5->max).z;
  return out_box;
}
