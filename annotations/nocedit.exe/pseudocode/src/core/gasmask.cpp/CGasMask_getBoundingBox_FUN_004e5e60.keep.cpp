// Name: core_gasmask.cpp_CGasMask_getBoundingBox_FUN_004e5e60
// Address: 004e5e60
// MANUAL RECONSTRUCTION
// Address Range: [[004e5e60, 004e5ead]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_gasmask_cpp_CGasMask_getBoundingBox_FUN_004e5e60(CGasMask *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_gasmask_cpp_CGasMask_getBoundingBox_FUN_004e5e60(CGasMask *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
