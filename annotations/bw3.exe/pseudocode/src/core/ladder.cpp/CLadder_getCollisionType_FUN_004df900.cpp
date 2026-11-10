// Name: core_ladder.cpp_CLadder_getCollisionType_FUN_004df900
// Address: 004df900
// Address Range: [[004df900, 004df925]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004df900(CLadder *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004df900(CLadder *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  if (pCVar1->poly_count < 1) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_MESH;
}
