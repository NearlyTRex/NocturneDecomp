// Name: core_twigzomb.cpp_CTwigZombie_processDeathState_FUN_005a2a90
// Address: 005a2a90
// Address Range: [[005a2a90, 005a2ab0]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_processDeathState_FUN_005a2a90(CTwigZombie *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_processDeathState_FUN_005a2a90(CTwigZombie *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x342c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,3,1);
  return;
}
