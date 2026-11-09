// Name: core_door.cpp_CDoor_getCollisionType_FUN_004787d0
// Address: 004787d0
// Address Range: [[004787d0, 00478807]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004787d0(CDoor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004787d0(CDoor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  if (*(int *)&pCVar1->field_0x358 == 0) {
    return COLLISION_TYPE_MESH;
  }
  *(byte **)&collision_info->field_0x24 = &this_ptr->field_0x158;
  return COLLISION_TYPE_MESH;
}
