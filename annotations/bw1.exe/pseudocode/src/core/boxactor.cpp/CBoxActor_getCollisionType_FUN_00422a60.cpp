// Name: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_00422a60
// Address: 00422a60
// Address Range: [[00422a60, 00422aa9]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_00422a60(CBoxActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_00422a60(CBoxActor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if ((this_ptr->collision_flag != 0) && (this_ptr->carrier_actor == (CDemonActor *)0x0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
    if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
      *(CKeyFramedModelInstance **)&collision_info->field_0x24 = &this_ptr->model;
    }
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
