// Name: core_pendulum.cpp_CPendulum_getBoundingBox_FUN_0054a360
// Address: 0054a360
// MANUAL RECONSTRUCTION
// Address Range: [[0054a360, 0054a3ad]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_pendulum_cpp_CPendulum_getBoundingBox_FUN_0054a360(CPendulum *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_pendulum_cpp_CPendulum_getBoundingBox_FUN_0054a360(CPendulum *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
