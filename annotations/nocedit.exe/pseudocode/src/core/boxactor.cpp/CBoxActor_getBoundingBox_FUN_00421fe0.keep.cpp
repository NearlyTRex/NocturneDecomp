// Name: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_00421fe0
// Address: 00421fe0
// MANUAL RECONSTRUCTION
// Address Range: [[00421fe0, 00422055]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_00421fe0(CBoxActor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_00421fe0(CBoxActor *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar2;
  float fVar1;

  fVar1 = this_ptr->anim_frame;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  *out_box = pCVar2->frame_bounds[(int)ROUND(ROUND(fVar1))];
  return out_box;
}
