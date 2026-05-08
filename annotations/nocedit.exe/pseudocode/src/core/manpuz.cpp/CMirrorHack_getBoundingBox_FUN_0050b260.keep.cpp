// Name: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_0050b260
// Address: 0050b260
// MANUAL RECONSTRUCTION
// Address Range: [[0050b260, 0050b2ac]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_0050b260(CMirrorHack *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_0050b260(CMirrorHack *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->mirror_model)
  ;
  out_box->min = pCVar1->bounds_min;
  out_box->max = pCVar1->bounds_max;
  return out_box;
}
