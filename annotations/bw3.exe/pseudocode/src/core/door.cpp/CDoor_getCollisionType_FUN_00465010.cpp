// Name: core_door.cpp_CDoor_getCollisionType_FUN_00465010
// Address: 00465010
// Address Range: [[00465010, 00465047]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_00465010(CDoor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_00465010(CDoor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  *(CKeyFramedModelInstance **)&collision_info->field_0x24 = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
