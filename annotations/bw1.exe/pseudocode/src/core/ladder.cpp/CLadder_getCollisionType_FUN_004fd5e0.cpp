// Name: core_ladder.cpp_CLadder_getCollisionType_FUN_004fd5e0
// Address: 004fd5e0
// Address Range: [[004fd5e0, 004fd605]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004fd5e0(CLadder *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004fd5e0(CLadder *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  if (*(int *)&pCVar1->field_0x110 < 1) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_MESH;
}
