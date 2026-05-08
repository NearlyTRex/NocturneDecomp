// Name: core_crate.cpp_CCrate_getBoundingBox_FUN_00448980
// Address: 00448980
// MANUAL RECONSTRUCTION
// Address Range: [[00448980, 004489cd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_crate_cpp_CCrate_getBoundingBox_FUN_00448980(CCrate *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_crate_cpp_CCrate_getBoundingBox_FUN_00448980(CCrate *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
