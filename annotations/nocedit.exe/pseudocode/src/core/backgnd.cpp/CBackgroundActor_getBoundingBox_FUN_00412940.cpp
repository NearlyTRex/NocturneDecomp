// Name: core_backgnd.cpp_CBackgroundActor_getBoundingBox_FUN_00412940
// Address: 00412940
// Address Range: [[00412940, 0041298d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_backgnd_cpp_CBackgroundActor_getBoundingBox_FUN_00412940(CBackgroundActor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_backgnd_cpp_CBackgroundActor_getBoundingBox_FUN_00412940(CBackgroundActor *this_ptr,CBoundingBox3D *out_box)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  (out_box->min).x = pCVar1->x;
  (out_box->min).y = pCVar1->y;
  (out_box->min).z = pCVar1->z;
  (out_box->max).x = pCVar1[1].x;
  (out_box->max).y = pCVar1[1].y;
  (out_box->max).z = pCVar1[1].z;
  return out_box;
}
