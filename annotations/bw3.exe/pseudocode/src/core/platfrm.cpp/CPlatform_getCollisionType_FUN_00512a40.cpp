// Name: core_platfrm.cpp_CPlatform_getCollisionType_FUN_00512a40
// Address: 00512a40
// Address Range: [[00512a40, 00512a5f] [00512a66, 00512a7b]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_00512a40(CPlatform *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_platfrm_cpp_CPlatform_getCollisionType_FUN_00512a40(CPlatform *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return COLLISION_TYPE_MESH;
  }
  collision_info->keyframed_model = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
