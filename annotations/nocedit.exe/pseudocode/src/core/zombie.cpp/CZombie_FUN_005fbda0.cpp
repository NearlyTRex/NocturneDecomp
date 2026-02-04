// Name: core_zombie.cpp_CZombie_FUN_005fbda0
// Address: 005fbda0
// Address Range: [[005fbda0, 005fbdd5]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fbda0(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fbda0(CZombie *this_ptr)

{
  int iVar1;
  
  iVar1 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
  if ((-1 < iVar1) &&
     (iVar1 = *(int *)((this_ptr->base).base.carry_hands[iVar1].unk1 + 4), -1 < iVar1)) {
    return (this_ptr->base).base.model.part_visibility_flags[iVar1];
  }
  return 0;
}
