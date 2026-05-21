// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004ee8f0
// Address: 004ee8f0
// Address Range: [[004ee8f0, 004ee9c4]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  CKeyFramedModel *pCVar4;
  CBoundingBox3D *pCVar3;
  float fVar1;
  
  if (g_CDemonMissionPtr->is_in_editor == 0) {
    fVar1 = this_ptr->cur_frame;
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    pCVar3 = pCVar4->frame_bounds + (int)ROUND(ROUND(fVar1));
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
    if (out_box != &pCVar2->bounds) {
      (out_box->min).x = (pCVar2->bounds).min.x;
      (out_box->min).y = (pCVar2->bounds).min.y;
      (out_box->min).z = (pCVar2->bounds).min.z;
    }
    pCVar1 = &(pCVar2->bounds).max;
    if (&out_box->max != pCVar1) {
      (out_box->max).x = pCVar1->x;
      (out_box->max).y = (pCVar2->bounds).max.y;
      (out_box->max).z = (pCVar2->bounds).max.z;
    }
  }
  return out_box;
}
