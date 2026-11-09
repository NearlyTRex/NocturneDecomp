// Name: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_0041caf0
// Address: 0041caf0
// Address Range: [[0041caf0, 0041cb39]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041caf0(CBoxActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041caf0(CBoxActor *this_ptr,SCollisionInfo *collision_info)

{
  CKeyFramedModel *pCVar1;
  
  if ((*(int *)&this_ptr->field_0x754 != 0) && (*(int *)&this_ptr->field_0x474 == 0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                       ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
    if (*(int *)&pCVar1->field_0x358 != 0) {
      *(byte **)&collision_info->field_0x24 = &this_ptr->field_0x2b4;
    }
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
