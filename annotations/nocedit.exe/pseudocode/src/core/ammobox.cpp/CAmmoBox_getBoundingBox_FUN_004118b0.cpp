// Name: core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_004118b0
// Address: 004118b0
// Address Range: [[004118b0, 004118fd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_004118b0(CAmmoBox *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_004118b0(CAmmoBox *this_ptr,CBoundingBox3D *out_box)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  (out_box->min).x = pCVar1->x;
  (out_box->min).y = pCVar1->y;
  (out_box->min).z = pCVar1->z;
  (out_box->max).x = pCVar1[1].x;
  (out_box->max).y = pCVar1[1].y;
  (out_box->max).z = pCVar1[1].z;
  return out_box;
}
