// Name: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0
// Address: 004cbce0
// Address Range: [[004cbce0, 004cbd23]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0(CMirrorHack *this_ptr,SInteractionInfo *out_info)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0(CMirrorHack *this_ptr,SInteractionInfo *out_info)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0(&this_ptr->base,out_info);
  out_info->can_interact = 1;
  pCVar1 = this_ptr->interacting_actor;
  out_info->yaw_max = 6.2831855;
  out_info->yaw_min = -6.2831855;
  out_info->approach_offset = -1.0;
  out_info->distance_max = 0.0;
  out_info->interacting_actor = pCVar1;
  return;
}
