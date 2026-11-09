// Name: core_barrier.cpp_CBarrier_getCollisionType_FUN_0040ec30
// Address: 0040ec30
// Address Range: [[0040ec30, 0040ec6c]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_0040ec30(CBarrier *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_0040ec30(CBarrier *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (*(int *)collision_info != 0) {
    return COLLISION_TYPE_NONE;
  }
  if (this_ptr->field_0x168 != '\0') {
    iVar1 = core_actor_cpp_FUN_0040c790(DAT_007df974,&this_ptr->field_0x168);
    if (iVar1 == 0) {
      return COLLISION_TYPE_NONE;
    }
  }
  return COLLISION_TYPE_MESH;
}
