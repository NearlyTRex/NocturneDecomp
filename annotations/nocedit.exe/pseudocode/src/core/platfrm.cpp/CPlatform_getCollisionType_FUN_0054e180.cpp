// Name: core_platfrm.cpp_CPlatform_getCollisionType_FUN_0054e180
// Address: 0054e180
// Address Range: [[0054e180, 0054e19f] [0054e1a6, 0054e1bb]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_0054e180(CPlatform *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_0054e180(CPlatform *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  collision_info->keyframed_model = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
