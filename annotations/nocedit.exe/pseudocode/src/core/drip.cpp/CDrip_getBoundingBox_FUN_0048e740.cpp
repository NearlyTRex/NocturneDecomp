// Name: core_drip.cpp_CDrip_getBoundingBox_FUN_0048e740
// Address: 0048e740
// Address Range: [[0048e740, 0048e81b]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_0048e740(CDrip *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_0048e740(CDrip *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar6;
  float *pfVar4;
  CVector3f *pCVar5;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  
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
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar5 = pCVar6->frame_bounds;
  (out_box->min).x = pCVar5->x;
  *pfVar1 = pCVar5->y;
  *pfVar2 = pCVar5->z;
  (out_box->max).x = pCVar5[1].x;
  *pfVar3 = pCVar5[1].y;
  *pfVar4 = pCVar5[1].z;
  return out_box;
}
