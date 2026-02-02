// Name: core_platfrm.cpp_CPlatform_hasCollision_FUN_0054e180
// Address: 0054e180
// Address Range: [[0054e180, 0054e19f] [0054e1a6, 0054e1bb]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_hasCollision_FUN_0054e180 (CPlatform *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_platfrm_cpp_CPlatform_hasCollision_FUN_0054e180
          (CPlatform *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return 1;
  }
  collision_info->model = &this_ptr->model;
  return 1;
}
