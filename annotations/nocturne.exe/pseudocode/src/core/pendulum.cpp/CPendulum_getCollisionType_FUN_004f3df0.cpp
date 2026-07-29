// Name: core_pendulum.cpp_CPendulum_getCollisionType_FUN_004f3df0
// Address: 004f3df0
// Address Range: [[004f3df0, 004f3e2e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_004f3df0(CPendulum *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_004f3df0(CPendulum *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if (this_ptr->is_stopped == 0) {
    return COLLISION_TYPE_NONE;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  if (*(int *)(pCVar1->texture_list[7].textures[2].texture_name + 4) != 0) {
    collision_info->keyframed_model = &this_ptr->model;
  }
  return COLLISION_TYPE_MESH;
}
