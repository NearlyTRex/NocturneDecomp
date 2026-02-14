// Name: core_tbplayer.cpp_CDrummer_processDamage_FUN_005da510
// Address: 005da510
// Address Range: [[005da510, 005da534]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_005da510(CDrummer *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_005da510(CDrummer *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  (this_ptr->base).base.hit_points = 0.0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,3,1);
  return;
}
