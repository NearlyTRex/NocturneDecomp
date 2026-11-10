// Name: core_shadow.cpp_CShadow_getDeathState_FUN_00560110
// Address: 00560110
// Address Range: [[00560110, 0056014d]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_00560110(CShadow *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_00560110(CShadow *this_ptr)

{
  SMotion *pSVar1;
  
  if (*(int *)&this_ptr->field_0x70 != 2) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    switch(*(uint *)(pSVar1 + 0x24)) {
    case 0xf:
    case 0x10:
      return DEATH_STATE_DYING;
    case 0x11:
    case 0x12:
      return DEATH_STATE_DEAD;
    default:
      return DEATH_STATE_ALIVE;
    }
  }
  return DEATH_STATE_DEAD;
}
