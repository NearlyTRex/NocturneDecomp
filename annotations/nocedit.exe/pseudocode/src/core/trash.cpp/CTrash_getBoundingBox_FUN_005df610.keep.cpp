// Name: core_trash.cpp_CTrash_getBoundingBox_FUN_005df610
// Address: 005df610
// MANUAL RECONSTRUCTION
// Address Range: [[005df610, 005df6ce]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_005df610(CTrash *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_005df610(CTrash *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar2;
  CVector3f local_20;
  CVector3f local_14;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  *out_box = *pCVar2->frame_bounds;
  local_14.y = this_ptr->collision_radius;
  local_14.x = 0.0;
  local_14.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr->base,&local_20,&local_14);
  (out_box->min).x = (out_box->min).x + local_20.x;
  (out_box->min).y = (out_box->min).y + local_20.y;
  (out_box->min).z = (out_box->min).z + local_20.z;
  (out_box->max).x = (out_box->max).x + local_20.x;
  (out_box->max).y = (out_box->max).y + local_20.y;
  (out_box->max).z = (out_box->max).z + local_20.z;
  return out_box;
}
