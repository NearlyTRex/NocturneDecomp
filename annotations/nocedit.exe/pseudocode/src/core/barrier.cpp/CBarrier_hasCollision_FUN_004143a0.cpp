// Name: core_barrier.cpp_CBarrier_hasCollision_FUN_004143a0
// Address: 004143a0
// Address Range: [[004143a0, 004143dc]]
// Convention: __cdecl
// Signature: int __cdecl core_barrier_cpp_CBarrier_hasCollision_FUN_004143a0 (CBarrier *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_barrier_cpp_CBarrier_hasCollision_FUN_004143a0
          (CBarrier *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (collision_info->ray_type != 0) {
    return 0;
  }
  if (this_ptr->unk[0x10] != '\0') {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(PTR_00821ff4,this_ptr->unk + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
