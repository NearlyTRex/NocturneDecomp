// Name: core_hostage.cpp_CHostage_FUN_004f6390
// Address: 004f6390
// Address Range: [[004f6390, 004f63cf]]
// Convention: __cdecl
// Signature: int core_hostage.cpp_CHostage_FUN_004f6390(CHostage * this_ptr)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_FUN_004f6390(CHostage *this_ptr)

{
  SMotion *pSVar1;
  
  if (((*(int *)this_ptr->field4_0x1fab8 != 0) && (this_ptr->hostage_state != 3)) &&
     (this_ptr->hostage_state != 4)) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_npc).base_character.model.motion_controller);
    if (pSVar1->state_index != 10) {
      return 1;
    }
  }
  return 0;
}
