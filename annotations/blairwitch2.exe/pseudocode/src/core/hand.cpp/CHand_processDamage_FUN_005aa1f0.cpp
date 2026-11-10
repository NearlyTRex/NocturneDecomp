// Name: core_hand.cpp_CHand_processDamage_FUN_005aa1f0
// Address: 005aa1f0
// Address Range: [[005aa1f0, 005aa229]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processDamage_FUN_005aa1f0(CHand *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_processDamage_FUN_005aa1f0(CHand *this_ptr,SDamageInfo *damage_info)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  *(uint *)&this_ptr->field_0x11864 = *(uint *)&this_ptr->field_0x11860;
  unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Sleeping");
  return;
}
