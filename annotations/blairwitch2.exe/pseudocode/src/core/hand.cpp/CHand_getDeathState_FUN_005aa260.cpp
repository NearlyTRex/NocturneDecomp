// Name: core_hand.cpp_CHand_getDeathState_FUN_005aa260
// Address: 005aa260
// Address Range: [[005aa260, 005aa2d0]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_hand_cpp_CHand_getDeathState_FUN_005aa260(CHand *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_hand_cpp_CHand_getDeathState_FUN_005aa260(CHand *this_ptr)

{
  int iVar1;
  byte *puVar2;
  
  puVar2 = &this_ptr->field_0x10af8;
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(puVar2,"Death");
  if (((iVar1 == 0) &&
      (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(puVar2,"Animation"), iVar1 == 0)) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(puVar2,"Sleeping"), iVar1 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0) {
    return DEATH_STATE_DEAD;
  }
  if (*(int *)(iVar1 + 0x24) != 5) {
    return DEATH_STATE_ALIVE;
  }
  return DEATH_STATE_DYING;
}
