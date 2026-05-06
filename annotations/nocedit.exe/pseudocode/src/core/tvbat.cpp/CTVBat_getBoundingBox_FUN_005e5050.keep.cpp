// Name: core_tvbat.cpp_CTVBat_getBoundingBox_FUN_005e5050
// Address: 005e5050
// MANUAL RECONSTRUCTION
// Address Range: [[005e5050, 005e50c5]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_005e5050(CTVBat *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_005e5050(CTVBat *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar2;
  float fVar1;

  fVar1 = this_ptr->anim_frame;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  *out_box = pCVar2->frame_bounds[(int)ROUND(ROUND(fVar1))];
  return out_box;
}
