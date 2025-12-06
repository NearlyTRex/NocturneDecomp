// Name: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
// Address: 0040a030
// Address Range: [[0040a030, 0040a084]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030(CDemonActor * this_ptr, SInteractionInfo * out_info)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030
          (CDemonActor *this_ptr,SInteractionInfo *out_info)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x58c);
  out_info->can_interact = 0;
  out_info->reference_data = 0;
  out_info->yaw_min = 0.0;
  out_info->yaw_max = 0.0;
  out_info->pitch_min = 0.0;
  out_info->pitch_max = 0.0;
  out_info->distance_min = -2.0;
  out_info->distance_max = 4.0;
  return;
}
