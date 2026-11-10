// Name: core_styldemo.cpp_CStylerDemon_getDeathState_FUN_005a0180
// Address: 005a0180
// Address Range: [[005a0180, 005a01b2]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_styldemo_cpp_CStylerDemon_getDeathState_FUN_005a0180(CStylerDemon *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_styldemo_cpp_CStylerDemon_getDeathState_FUN_005a0180(CStylerDemon *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  switch(*(uint *)(pSVar1 + 0x24)) {
  case 5:
  case 0xe:
    return DEATH_STATE_DYING;
  case 6:
  case 0xf:
    return DEATH_STATE_DEAD;
  default:
    return DEATH_STATE_ALIVE;
  }
}
