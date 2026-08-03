// Name: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
// Address: 004cbc50
// Address Range: [[004cbc50, 004cbc9c]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(CMirrorHack *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(CMirrorHack *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->mirror_model)
  ;
  (out_box->min).x = (pCVar1->bounds).min.x;
  (out_box->min).y = (pCVar1->bounds).min.y;
  (out_box->min).z = (pCVar1->bounds).min.z;
  (out_box->max).x = (pCVar1->bounds).max.x;
  (out_box->max).y = (pCVar1->bounds).max.y;
  (out_box->max).z = (pCVar1->bounds).max.z;
  return out_box;
}
