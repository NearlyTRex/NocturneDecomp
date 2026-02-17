// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004ee8f0
// Address: 004ee8f0
// Address Range: [[004ee8f0, 004ee9c4]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  CBoundingBox3D *pCVar3;
  
  if (g_CDemonMissionPtr->is_in_editor == 0) {
    fVar1 = this_ptr->cur_frame;
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    pCVar3 = (CBoundingBox3D *)(pCVar2->frame_bounds + (int)ROUND(ROUND(fVar1)) * 2);
    if (out_box != pCVar3) {
      (out_box->min).x = (pCVar3->min).x;
      (out_box->min).y = (pCVar3->min).y;
      (out_box->min).z = (pCVar3->min).z;
    }
    if (&out_box->max != &pCVar3->max) {
      (out_box->max).x = (pCVar3->max).x;
      (out_box->max).y = (pCVar3->max).y;
      (out_box->max).z = (pCVar3->max).z;
      return out_box;
    }
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    if (out_box != (CBoundingBox3D *)&pCVar2->bounds_min) {
      (out_box->min).x = (pCVar2->bounds_min).x;
      (out_box->min).y = (pCVar2->bounds_min).y;
      (out_box->min).z = (pCVar2->bounds_min).z;
    }
    if (&out_box->max != &pCVar2->bounds_max) {
      (out_box->max).x = (pCVar2->bounds_max).x;
      (out_box->max).y = (pCVar2->bounds_max).y;
      (out_box->max).z = (pCVar2->bounds_max).z;
    }
  }
  return out_box;
}
