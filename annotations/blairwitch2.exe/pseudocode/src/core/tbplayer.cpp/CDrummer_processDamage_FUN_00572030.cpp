// Name: core_tbplayer.cpp_CDrummer_processDamage_FUN_00572030
// Address: 00572030
// Address Range: [[00572030, 0057205e]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_00572030(CDrummer *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_00572030(CDrummer *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  if ((*(int *)&(this_ptr->base).base.field_0x281c == 0) &&
     (fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4),
     (this_ptr->base).base.hit_points = fVar1, fVar1 <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,3,1);
    return;
  }
  return;
}
