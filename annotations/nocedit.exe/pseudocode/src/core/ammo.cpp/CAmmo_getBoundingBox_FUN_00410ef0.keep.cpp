// Name: core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0
// Address: 00410ef0
// MANUAL RECONSTRUCTION
// Address Range: [[00410ef0, 00410f3d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_ammo_cpp_CAmmo_getBoundingBox_FUN_00410ef0(CAmmo *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_ammo_cpp_CAmmo_getBoundingBox_FUN_00410ef0(CAmmo *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
