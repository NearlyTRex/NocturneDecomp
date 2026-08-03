// Name: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_0041ef40
// Address: 0041ef40
// Address Range: [[0041ef40, 0041ef89]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041ef40(CBoxActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041ef40(CBoxActor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if ((this_ptr->collision_flag != 0) && (this_ptr->carrier_actor == (CDemonActor *)0x0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
    if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
      collision_info->keyframed_model = &this_ptr->model;
    }
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
