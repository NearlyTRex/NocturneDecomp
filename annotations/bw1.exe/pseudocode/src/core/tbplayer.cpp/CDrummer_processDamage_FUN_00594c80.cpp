// Name: core_tbplayer.cpp_CDrummer_processDamage_FUN_00594c80
// Address: 00594c80
// Address Range: [[00594c80, 00594cae]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_00594c80(CDrummer *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_00594c80(CDrummer *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  if (((this_ptr->base).base.is_invulnerable == 0) &&
     (fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount,
     (this_ptr->base).base.hit_points = fVar1, fVar1 <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,3,1);
    return;
  }
  return;
}
