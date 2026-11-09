// Name: core_barrier.cpp_CBarrier_getCollisionType_FUN_004109a0
// Address: 004109a0
// Address Range: [[004109a0, 004109dc]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_004109a0(CBarrier *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_004109a0(CBarrier *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (*(int *)collision_info != 0) {
    return COLLISION_TYPE_NONE;
  }
  if (this_ptr->field_0x168 != '\0') {
    iVar1 = core_actor_cpp_FUN_0040c550(DAT_007c2ff4,&this_ptr->field_0x168);
    if (iVar1 == 0) {
      return COLLISION_TYPE_NONE;
    }
  }
  return COLLISION_TYPE_MESH;
}
