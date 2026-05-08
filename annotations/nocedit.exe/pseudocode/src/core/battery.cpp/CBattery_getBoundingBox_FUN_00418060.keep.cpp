// Name: core_battery.cpp_CBattery_getBoundingBox_FUN_00418060
// Address: 00418060
// MANUAL RECONSTRUCTION
// Address Range: [[00418060, 004180ad]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_battery_cpp_CBattery_getBoundingBox_FUN_00418060(CBattery *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_battery_cpp_CBattery_getBoundingBox_FUN_00418060(CBattery *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
