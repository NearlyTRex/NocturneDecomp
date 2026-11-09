// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004e79f0
// Address: 004e79f0
// Address Range: [[004e79f0, 004e7a42]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004e79f0(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004e79f0(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

{
  if (*(int *)(player_control + 0xc) != 0) {
    *(uint *)(player_control + 0xc) = 0;
    return 0;
  }
  if (*(int *)(player_control + 0x10) == 0) {
    if ((UOrientationVector *)&this_ptr->field_0x30 != user_orientation) {
      *(uint *)&this_ptr->field_0x30 = *(uint *)user_orientation;
      *(uint *)&this_ptr->field_0x34 = *(uint *)((int)user_orientation + 4);
      *(uint *)&this_ptr->field_0x38 = *(uint *)((int)user_orientation + 8);
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    return 1;
  }
  *(uint *)(player_control + 0x10) = 0;
  return 0;
}
