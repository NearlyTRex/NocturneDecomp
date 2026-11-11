// Name: core_turret.cpp_CTurret_updateInteraction_FUN_0057f970
// Address: 0057f970
// Address Range: [[0057f970, 0057f9d0]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_0057f970(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_0057f970(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

{
  UOrientationVector *pUVar1;
  CDemonActor *unaff_EDI;
  
  if ((player_control->action_state).use_item == 0) {
    pUVar1 = &(this_ptr->base).base.orient;
    if (pUVar1 != user_orientation) {
      (pUVar1->vec).x = (user_orientation->vec).x;
      (this_ptr->base).base.orient.vec.y = (user_orientation->vec).y;
      (this_ptr->base).base.orient.vec.z = (user_orientation->vec).z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    if ((player_control->action_state).fire != 0) {
      (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)((CCharacter *)this_ptr,unaff_EDI);
    }
    return 1;
  }
  (player_control->action_state).use_item = 0;
  return 0;
}
