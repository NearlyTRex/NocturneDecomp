// Name: core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_0040f0e0
// Address: 0040f0e0
// Address Range: [[0040f0e0, 0040f11e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_backgnd_cpp_CBackgroundActor_getCollisionType_FUN_0040f0e0(CBackgroundActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_backgnd_cpp_CBackgroundActor_getCollisionType_FUN_0040f0e0(CBackgroundActor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if (this_ptr->collide_with_me == 0) {
    return COLLISION_TYPE_NONE;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    *(CKeyFramedModelInstance **)&collision_info->field_0x24 = &this_ptr->model;
  }
  return COLLISION_TYPE_MESH;
}
