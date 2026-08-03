// Name: core_door.cpp_CDoor_getCollisionType_FUN_004561d0
// Address: 004561d0
// Address Range: [[004561d0, 00456207]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004561d0(CDoor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004561d0(CDoor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  collision_info->keyframed_model = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
