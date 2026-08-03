// Name: core_trash.cpp_CTrash_getBoundingBox_FUN_00547730
// Address: 00547730
// Address Range: [[00547730, 005477ee]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(CTrash *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(CTrash *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  CVector3f local_20;
  CVector3f local_14;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  (out_box->min).x = (pCVar1->min).x;
  (out_box->min).y = (pCVar1->min).y;
  (out_box->min).z = (pCVar1->min).z;
  (out_box->max).x = (pCVar1->max).x;
  (out_box->max).y = (pCVar1->max).y;
  (out_box->max).z = (pCVar1->max).z;
  local_14.y = this_ptr->collision_radius;
  local_14.x = 0.0;
  local_14.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
            (&this_ptr->base,&local_20,&local_14);
  (out_box->min).x = (out_box->min).x + local_20.x;
  (out_box->min).y = (out_box->min).y + local_20.y;
  (out_box->min).z = (out_box->min).z + local_20.z;
  (out_box->max).x = (out_box->max).x + local_20.x;
  (out_box->max).y = (out_box->max).y + local_20.y;
  (out_box->max).z = (out_box->max).z + local_20.z;
  return out_box;
}
