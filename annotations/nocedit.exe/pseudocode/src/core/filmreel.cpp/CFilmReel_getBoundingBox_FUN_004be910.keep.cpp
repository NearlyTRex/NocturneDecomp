// Name: core_filmreel.cpp_CFilmReel_getBoundingBox_FUN_004be910
// Address: 004be910
// MANUAL RECONSTRUCTION
// Address Range: [[004be910, 004be95d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmReel_getBoundingBox_FUN_004be910(CFilmReel *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmReel_getBoundingBox_FUN_004be910(CFilmReel *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
