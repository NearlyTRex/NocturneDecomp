// Name: core_platfrm.cpp_CPlatform_getCollisionType_FUN_0053ad50
// Address: 0053ad50
// Address Range: [[0053ad50, 0053ad6f] [0053ad76, 0053ad8b]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_0053ad50(CPlatform *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_0053ad50(CPlatform *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  collision_info->keyframed_model = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
