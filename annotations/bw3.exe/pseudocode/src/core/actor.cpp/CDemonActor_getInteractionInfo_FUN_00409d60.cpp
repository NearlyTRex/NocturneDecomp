// Name: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409d60
// Address: 00409d60
// Address Range: [[00409d60, 00409d9f]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409d60(CDemonActor *this_ptr,SInteractionInfo *out_info)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409d60(CDemonActor *this_ptr,SInteractionInfo *out_info)

{
  out_info->interacting_actor = (CDemonActor *)0x0;
  out_info->yaw_max = 0.0;
  out_info->yaw_min = 0.0;
  out_info->pitch_max = 0.0;
  out_info->pitch_min = 0.0;
  out_info->approach_offset = -2.0;
  out_info->distance_max = 4.0;
  out_info->can_interact = 0;
  return;
}
