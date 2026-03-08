// Name: core_pendulum.cpp_CPendulum_getCollisionType_FUN_0054a550
// Address: 0054a550
// Address Range: [[0054a550, 0054a58e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_0054a550(CPendulum *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_0054a550(CPendulum *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if (this_ptr->is_stopped == 0) {
    return COLLISION_TYPE_NONE;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    collision_info->keyframed_model = &this_ptr->model;
  }
  return COLLISION_TYPE_MESH;
}
