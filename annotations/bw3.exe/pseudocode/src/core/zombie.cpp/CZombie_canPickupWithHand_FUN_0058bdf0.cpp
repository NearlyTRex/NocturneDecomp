// Name: core_zombie.cpp_CZombie_canPickupWithHand_FUN_0058bdf0
// Address: 0058bdf0
// Address Range: [[0058bdf0, 0058be28]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_0058bdf0(CZombie *this_ptr,int object_shape_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_0058bdf0(CZombie *this_ptr,int object_shape_type)

{
  int iVar1;
  
  iVar1 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50(this_ptr,object_shape_type);
  if ((-1 < iVar1) &&
     (iVar1 = *(int *)((this_ptr->base).base.carry_hands + iVar1 * 0x78 + 4), -1 < iVar1)) {
    return *(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar1 * 4);
  }
  return 0;
}
