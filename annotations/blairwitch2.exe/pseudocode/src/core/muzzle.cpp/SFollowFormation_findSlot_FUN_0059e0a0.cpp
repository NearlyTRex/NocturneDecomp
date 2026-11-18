// Name: core_muzzle.cpp_SFollowFormation_findSlot_FUN_0059e0a0
// Address: 0059e0a0
// Address Range: [[0059e0a0, 0059e0e6]]
// Convention: __cdecl
// Signature: SFollowSlotStruct * __cdecl core_muzzle_cpp_SFollowFormation_findSlot_FUN_0059e0a0(SFollowFormation *this_ptr,CCharacter *follower)

#include "nocturne.h"

SFollowSlotStruct * __cdecl core_muzzle_cpp_SFollowFormation_findSlot_FUN_0059e0a0(SFollowFormation *this_ptr,CCharacter *follower)

{
  int iVar1;
  SFollowFormation *pSVar2;
  
  if (((this_ptr->leader != (CCharacter *)0x0) && (this_ptr->slot_count != 0)) &&
     (iVar1 = 0, pSVar2 = this_ptr, 0 < this_ptr->slot_count)) {
    do {
      if (follower == pSVar2->slots[0].follower) {
        return this_ptr->slots + iVar1;
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (SFollowFormation *)&pSVar2->slots[0].next;
    } while (iVar1 < this_ptr->slot_count);
  }
  return (SFollowSlotStruct *)0x0;
}
