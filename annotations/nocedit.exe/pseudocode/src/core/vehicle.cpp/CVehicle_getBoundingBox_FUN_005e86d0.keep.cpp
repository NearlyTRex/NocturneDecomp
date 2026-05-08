// Name: core_vehicle.cpp_CVehicle_getBoundingBox_FUN_005e86d0
// Address: 005e86d0
// MANUAL RECONSTRUCTION
// Address Range: [[005e86d0, 005e871d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_vehicle_cpp_CVehicle_getBoundingBox_FUN_005e86d0(CVehicle *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_vehicle_cpp_CVehicle_getBoundingBox_FUN_005e86d0(CVehicle *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
