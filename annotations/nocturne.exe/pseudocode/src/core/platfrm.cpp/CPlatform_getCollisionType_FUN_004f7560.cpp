// Name: core_platfrm.cpp_CPlatform_getCollisionType_FUN_004f7560
// Address: 004f7560
// Address Range: [[004f7560, 004f757f] [004f7586, 004f759b]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_004f7560(CPlatform *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_004f7560(CPlatform *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  collision_info->keyframed_model = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
