// Name: core_zombie.cpp_CZombie_canPickupWithHand_FUN_005bdf60
// Address: 005bdf60
// Address Range: [[005bdf60, 005bdf98]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_005bdf60(CZombie *this_ptr,int object_shape_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_005bdf60(CZombie *this_ptr,int object_shape_type)

{
  int iVar1;
  
  iVar1 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005bdec0(this_ptr,object_shape_type);
  if ((-1 < iVar1) &&
     (iVar1 = *(int *)((this_ptr->base).base.carry_hands + iVar1 * 0x78 + 4), -1 < iVar1)) {
    return *(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar1 * 4);
  }
  return 0;
}
