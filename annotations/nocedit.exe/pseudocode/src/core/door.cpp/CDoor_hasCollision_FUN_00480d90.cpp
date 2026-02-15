// Name: core_door.cpp_CDoor_hasCollision_FUN_00480d90
// Address: 00480d90
// Address Range: [[00480d90, 00480dc7]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_hasCollision_FUN_00480d90(CDoor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_hasCollision_FUN_00480d90(CDoor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return 1;
  }
  collision_info->keyframed_model = &this_ptr->model;
  return 1;
}
