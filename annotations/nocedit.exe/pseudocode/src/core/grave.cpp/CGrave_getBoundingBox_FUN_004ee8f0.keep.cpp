// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004ee8f0
// Address: 004ee8f0
// MANUAL RECONSTRUCTION
// Address Range: [[004ee8f0, 004ee9c4]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar2;
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *pCVar3;
  float fVar1;
  
  if (g_CDemonMissionPtr->is_in_editor == 0) {
    fVar1 = this_ptr->cur_frame;
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    pCVar3 = (CBoundingBox3D *)(pCVar1->frame_bounds + (int)ROUND(ROUND(fVar1)) * 2);
    if (out_box != pCVar3) {
      out_box->min = pCVar3->min;
    }
    if (&out_box->max != &pCVar3->max) {
      out_box->max = pCVar3->max;
      return out_box;
    }
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    if (out_box != &pCVar2->bounds) {
      out_box->min = pCVar2->bounds.min;
    }
    if (&out_box->max != &pCVar2->bounds.max) {
      out_box->max = pCVar2->bounds.max;
    }
  }
  return out_box;
}
