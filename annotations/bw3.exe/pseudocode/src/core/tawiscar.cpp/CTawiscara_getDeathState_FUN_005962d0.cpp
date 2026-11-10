// Name: core_tawiscar.cpp_CTawiscara_getDeathState_FUN_005962d0
// Address: 005962d0
// Address Range: [[005962d0, 0059630a]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_tawiscar_cpp_CTawiscara_getDeathState_FUN_005962d0(CTawiscara *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_tawiscar_cpp_CTawiscara_getDeathState_FUN_005962d0(CTawiscara *this_ptr)

{
  uint uVar1;
  SMotion *pSVar2;
  
  if (*(int *)&this_ptr->field_0x70 == 2) {
    return DEATH_STATE_DEAD;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  uVar1 = *(uint *)(pSVar2 + 0x24);
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return DEATH_STATE_DYING;
    }
    if (uVar1 == 0xd) {
      return DEATH_STATE_DEAD;
    }
  }
  return DEATH_STATE_ALIVE;
}
