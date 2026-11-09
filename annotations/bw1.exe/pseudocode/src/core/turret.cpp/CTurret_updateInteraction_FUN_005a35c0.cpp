// Name: core_turret.cpp_CTurret_updateInteraction_FUN_005a35c0
// Address: 005a35c0
// Address Range: [[005a35c0, 005a3620]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005a35c0(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005a35c0(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

{
  if (*(int *)(player_control + 0x10) == 0) {
    if ((UOrientationVector *)&this_ptr->field_0x30 != user_orientation) {
      *(uint *)&this_ptr->field_0x30 = *(uint *)user_orientation;
      *(uint *)&this_ptr->field_0x34 = *(uint *)((int)user_orientation + 4);
      *(uint *)&this_ptr->field_0x38 = *(uint *)((int)user_orientation + 8);
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    if (*(int *)(player_control + 0xc) != 0) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe4))(this_ptr);
    }
    return 1;
  }
  *(uint *)(player_control + 0x10) = 0;
  return 0;
}
