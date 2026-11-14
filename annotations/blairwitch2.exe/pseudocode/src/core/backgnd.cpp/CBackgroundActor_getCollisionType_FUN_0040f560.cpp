// Name: core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_0040f560
// Address: 0040f560
// Address Range: [[0040f560, 0040f59e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_backgnd_cpp_CBackgroundActor_getCollisionType_FUN_0040f560(CBackgroundActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_backgnd_cpp_CBackgroundActor_getCollisionType_FUN_0040f560(CBackgroundActor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if (this_ptr->collide_with_me == 0) {
    return COLLISION_TYPE_NONE;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    collision_info->keyframed_model = &this_ptr->model;
  }
  return COLLISION_TYPE_MESH;
}
