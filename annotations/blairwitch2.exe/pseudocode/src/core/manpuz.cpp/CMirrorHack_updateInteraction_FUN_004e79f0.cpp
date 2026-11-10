// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004e79f0
// Address: 004e79f0
// Address Range: [[004e79f0, 004e7a42]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004e79f0(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004e79f0(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

{
  UOrientationVector *pUVar1;
  
  if (*(int *)(player_control + 0xc) != 0) {
    *(uint *)(player_control + 0xc) = 0;
    return 0;
  }
  if (*(int *)(player_control + 0x10) == 0) {
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != user_orientation) {
      (pUVar1->vec).x = (user_orientation->vec).x;
      (this_ptr->base).orient.vec.y = (user_orientation->vec).y;
      (this_ptr->base).orient.vec.z = (user_orientation->vec).z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
    return 1;
  }
  *(uint *)(player_control + 0x10) = 0;
  return 0;
}
