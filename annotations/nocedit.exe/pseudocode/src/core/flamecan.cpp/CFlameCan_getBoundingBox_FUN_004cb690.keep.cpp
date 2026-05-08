// Name: core_flamecan.cpp_CFlameCan_getBoundingBox_FUN_004cb690
// Address: 004cb690
// MANUAL RECONSTRUCTION
// Address Range: [[004cb690, 004cb6dd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_flamecan_cpp_CFlameCan_getBoundingBox_FUN_004cb690(CFlameCan *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_flamecan_cpp_CFlameCan_getBoundingBox_FUN_004cb690(CFlameCan *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
