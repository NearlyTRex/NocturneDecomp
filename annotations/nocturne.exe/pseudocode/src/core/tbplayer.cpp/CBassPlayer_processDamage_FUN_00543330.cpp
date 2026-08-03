// Name: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_00543330
// Address: 00543330
// Address Range: [[00543330, 0054336e]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CBassPlayer_processDamage_FUN_00543330(CBassPlayer *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CBassPlayer_processDamage_FUN_00543330(CBassPlayer *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  (this_ptr->base).base.hit_points = 0.0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,3,1);
  return;
}
