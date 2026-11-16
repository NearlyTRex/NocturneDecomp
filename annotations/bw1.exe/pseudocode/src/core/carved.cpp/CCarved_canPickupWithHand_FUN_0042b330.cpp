// Name: core_carved.cpp_CCarved_canPickupWithHand_FUN_0042b330
// Address: 0042b330
// Address Range: [[0042b330, 0042b368]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_canPickupWithHand_FUN_0042b330(CCarved *this_ptr,int object_shape_type)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_carved_cpp_CCarved_canPickupWithHand_FUN_0042b330(CCarved *this_ptr,int object_shape_type)

{
  int iVar1;
  
  iVar1 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_0042b290(this_ptr,object_shape_type);
  if ((-1 < iVar1) &&
     (iVar1 = (this_ptr->base).base.carry_hands[iVar1].secondary_bone_index, -1 < iVar1)) {
    return (this_ptr->base).base.model.part_data.visibility_flags[iVar1];
  }
  return 0;
}
