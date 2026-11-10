// Name: core_door.cpp_CDoor_getCollisionType_FUN_004602c0
// Address: 004602c0
// Address Range: [[004602c0, 004602f7]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004602c0(CDoor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004602c0(CDoor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  *(CKeyFramedModelInstance **)&collision_info->field_0x24 = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
