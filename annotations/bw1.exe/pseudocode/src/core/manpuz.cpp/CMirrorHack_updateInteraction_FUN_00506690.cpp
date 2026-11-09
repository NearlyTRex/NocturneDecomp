// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_00506690
// Address: 00506690
// Address Range: [[00506690, 005066e2]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_00506690(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_00506690(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

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
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    return 1;
  }
  *(uint *)(player_control + 0x10) = 0;
  return 0;
}
