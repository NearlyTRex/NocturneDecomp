// Name: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0
// Address: 004cbce0
// Address Range: [[004cbce0, 004cbd23]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0(CDemonActor *param_1,SInteractionInfo *param_2)

#include "nocturne.h"

void core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0(CDemonActor *param_1,SInteractionInfo *param_2)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0(param_1,param_2);
  param_2->can_interact = 1;
  pCVar1 = (CDemonActor *)param_1[2].location.area_id;
  param_2->yaw_max = 6.2831855;
  param_2->yaw_min = -6.2831855;
  param_2->approach_offset = -1.0;
  param_2->distance_max = 0.0;
  param_2->interacting_actor = pCVar1;
  return;
}
