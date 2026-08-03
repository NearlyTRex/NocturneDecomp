// Name: core_turret.cpp_CTurret_getInteractionInfo_FUN_0054a800
// Address: 0054a800
// Address Range: [[0054a800, 0054a868]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_getInteractionInfo_FUN_0054a800(CTurret *this_ptr,SInteractionInfo *interaction_info)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_getInteractionInfo_FUN_0054a800(CTurret *this_ptr,SInteractionInfo *interaction_info)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0
            ((CDemonActor *)this_ptr,interaction_info);
  if (this_ptr->can_manual_aim == 0) {
    return;
  }
  interaction_info->can_interact = 1;
  pCVar2 = this_ptr->user;
  interaction_info->yaw_max = 6.2831855;
  interaction_info->yaw_min = -6.2831855;
  interaction_info->interacting_actor = pCVar2;
  fVar3 = -0.5235988f;
  interaction_info->pitch_max = 1.22173f - (this_ptr->base).base.orient.vec.x;
  fVar1 = (this_ptr->base).base.orient.vec.x;
  interaction_info->approach_offset = -4.0;
  interaction_info->pitch_min = fVar3 - fVar1;
  interaction_info->distance_max = 0.0;
  return;
}
