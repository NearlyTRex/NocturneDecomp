// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004ee8f0
// Address: 004ee8f0
// Address Range: [[004ee8f0, 004ee9c4]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004ee8f0(CGrave *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *pCVar2;
  double dVar3;
  int iVar4;
  
  if (g_CDemonMissionPtr->is_in_editor == 0) {
    dVar3 = round((double)this_ptr->cur_frame);
    iVar4 = (int)ROUND(dVar3);
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    pCVar2 = (CBoundingBox3D *)(pCVar1->frame_bounds + iVar4 * 2);
    if (out_box != pCVar2) {
      (out_box->min).x = (pCVar2->min).x;
      (out_box->min).y = (pCVar2->min).y;
      (out_box->min).z = (pCVar2->min).z;
    }
    if (&out_box->max != &pCVar2->max) {
      (out_box->max).x = (pCVar2->max).x;
      (out_box->max).y = (pCVar2->max).y;
      (out_box->max).z = (pCVar2->max).z;
      return out_box;
    }
  }
  else {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    if (out_box != (CBoundingBox3D *)&pCVar1->bounds_min) {
      (out_box->min).x = (pCVar1->bounds_min).x;
      (out_box->min).y = (pCVar1->bounds_min).y;
      (out_box->min).z = (pCVar1->bounds_min).z;
    }
    if (&out_box->max != &pCVar1->bounds_max) {
      (out_box->max).x = (pCVar1->bounds_max).x;
      (out_box->max).y = (pCVar1->bounds_max).y;
      (out_box->max).z = (pCVar1->bounds_max).z;
    }
  }
  return out_box;
}
