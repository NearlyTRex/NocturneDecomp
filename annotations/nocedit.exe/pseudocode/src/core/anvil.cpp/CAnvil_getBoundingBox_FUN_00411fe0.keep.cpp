// Name: core_anvil.cpp_CAnvil_getBoundingBox_FUN_00411fe0
// Address: 00411fe0
// MANUAL RECONSTRUCTION
// Address Range: [[00411fe0, 0041202d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_anvil_cpp_CAnvil_getBoundingBox_FUN_00411fe0(CAnvil *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_anvil_cpp_CAnvil_getBoundingBox_FUN_00411fe0(CAnvil *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
