// Name: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_00594980
// Address: 00594980
// Address Range: [[00594980, 005949c4]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CBassPlayer_processDamage_FUN_00594980(CBassPlayer *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CBassPlayer_processDamage_FUN_00594980(CBassPlayer *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  if ((*(int *)&(this_ptr->base).base.field_0x27b0 == 0) &&
     (fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4),
     (this_ptr->base).base.hit_points = fVar1, fVar1 <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,3,1);
    return;
  }
  return;
}
