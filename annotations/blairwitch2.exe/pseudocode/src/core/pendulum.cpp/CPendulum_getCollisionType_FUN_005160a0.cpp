// Name: core_pendulum.cpp_CPendulum_getCollisionType_FUN_005160a0
// Address: 005160a0
// Address Range: [[005160a0, 005160de]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_005160a0(CPendulum *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_005160a0(CPendulum *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if (this_ptr->is_stopped == 0) {
    return COLLISION_TYPE_NONE;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    *(CKeyFramedModelInstance **)&collision_info->field_0x24 = &this_ptr->model;
  }
  return COLLISION_TYPE_MESH;
}
