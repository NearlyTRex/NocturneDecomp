// Name: core_door.cpp_CDoor_getCollisionType_FUN_00480d90
// Address: 00480d90
// Address Range: [[00480d90, 00480dc7]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_00480d90(CDoor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_00480d90(CDoor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  collision_info->keyframed_model = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
