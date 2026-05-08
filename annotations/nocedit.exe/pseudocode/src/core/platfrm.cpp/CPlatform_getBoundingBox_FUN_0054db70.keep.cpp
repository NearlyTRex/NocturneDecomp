// Name: core_platfrm.cpp_CPlatform_getBoundingBox_FUN_0054db70
// Address: 0054db70
// MANUAL RECONSTRUCTION
// Address Range: [[0054db70, 0054dbbd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_platfrm_cpp_CPlatform_getBoundingBox_FUN_0054db70(CPlatform *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_platfrm_cpp_CPlatform_getBoundingBox_FUN_0054db70(CPlatform *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
