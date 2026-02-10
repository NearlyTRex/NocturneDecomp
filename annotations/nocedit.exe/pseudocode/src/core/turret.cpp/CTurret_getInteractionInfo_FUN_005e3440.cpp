// Name: core_turret.cpp_CTurret_getInteractionInfo_FUN_005e3440
// Address: 005e3440
// Address Range: [[005e3440, 005e34a8]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_getInteractionInfo_FUN_005e3440 (CTurret *this_ptr,SInteractionInfo *interaction_info)

#include "nocturne.h"

void __cdecl
core_turret_cpp_CTurret_getInteractionInfo_FUN_005e3440
          (CTurret *this_ptr,SInteractionInfo *interaction_info)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030
            ((CDemonActor *)this_ptr,interaction_info);
  if (this_ptr->can_manual_aim == 0) {
    return;
  }
  interaction_info->can_interact = 1;
  pCVar2 = this_ptr->user;
  interaction_info->yaw_min = 6.2831855;
  interaction_info->yaw_max = -6.2831855;
  interaction_info->reference_data = (int)pCVar2;
  fVar3 = -0.5235988f;
  interaction_info->pitch_min = 1.22173f - (this_ptr->base).base.orient.vec.x;
  fVar1 = (this_ptr->base).base.orient.vec.x;
  interaction_info->distance_min = -4.0;
  interaction_info->pitch_max = fVar3 - fVar1;
  interaction_info->distance_max = 0.0;
  return;
}
