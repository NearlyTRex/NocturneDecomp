// Name: core_pendulum.cpp_CPendulum_hasCollision_FUN_0054a550
// Address: 0054a550
// Address Range: [[0054a550, 0054a58e]]
// Convention: __cdecl
// Signature: int __cdecl core_pendulum_cpp_CPendulum_hasCollision_FUN_0054a550(CPendulum *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_pendulum_cpp_CPendulum_hasCollision_FUN_0054a550(CPendulum *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if (this_ptr->unk7 == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    collision_info->model = &this_ptr->model;
  }
  return 1;
}
