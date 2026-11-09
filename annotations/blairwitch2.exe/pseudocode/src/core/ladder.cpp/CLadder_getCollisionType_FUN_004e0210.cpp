// Name: core_ladder.cpp_CLadder_getCollisionType_FUN_004e0210
// Address: 004e0210
// Address Range: [[004e0210, 004e0235]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004e0210(CLadder *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004e0210(CLadder *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
  if (*(int *)&pCVar1->field_0x110 < 1) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_MESH;
}
