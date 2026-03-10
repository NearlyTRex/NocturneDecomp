// Name: core_zombie.cpp_CZombie_canPickupWithHand_FUN_005fbda0
// Address: 005fbda0
// Address Range: [[005fbda0, 005fbdd5]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_005fbda0(CZombie *this_ptr,int object_shape_type)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_005fbda0(CZombie *this_ptr,int object_shape_type)

{
  int iVar1;
  
  iVar1 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(this_ptr,object_shape_type);
  if ((-1 < iVar1) &&
     (iVar1 = (this_ptr->base).base.carry_hands[iVar1].secondary_bone_index, -1 < iVar1)) {
    return (this_ptr->base).base.model.part_data.visibility_flags[iVar1];
  }
  return 0;
}
