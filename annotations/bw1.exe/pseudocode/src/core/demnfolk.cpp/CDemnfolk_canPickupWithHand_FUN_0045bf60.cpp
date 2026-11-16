// Name: core_demnfolk.cpp_CDemnfolk_canPickupWithHand_FUN_0045bf60
// Address: 0045bf60
// Address Range: [[0045bf60, 0045bf98]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_canPickupWithHand_FUN_0045bf60(CDemnfolk *this_ptr,int object_shape_type)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_demnfolk_cpp_CDemnfolk_canPickupWithHand_FUN_0045bf60(CDemnfolk *this_ptr,int object_shape_type)

{
  int iVar1;
  
  iVar1 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_0045bec0(this_ptr,object_shape_type);
  if ((-1 < iVar1) &&
     (iVar1 = (this_ptr->base).base.carry_hands[iVar1].secondary_bone_index, -1 < iVar1)) {
    return (this_ptr->base).base.model.part_data.visibility_flags[iVar1];
  }
  return 0;
}
