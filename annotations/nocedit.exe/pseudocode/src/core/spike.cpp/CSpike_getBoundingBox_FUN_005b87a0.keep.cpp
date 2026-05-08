// Name: core_spike.cpp_CSpike_getBoundingBox_FUN_005b87a0
// Address: 005b87a0
// MANUAL RECONSTRUCTION
// Address Range: [[005b87a0, 005b87ed]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_spike_cpp_CSpike_getBoundingBox_FUN_005b87a0(CSpike *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_spike_cpp_CSpike_getBoundingBox_FUN_005b87a0(CSpike *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
