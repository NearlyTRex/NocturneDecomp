// Name: core_bugs.cpp_CBugs_process_FUN_004253c0
// Address: 004253c0
// Address Range: [[004253c0, 00425476]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_process_FUN_004253c0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_process_FUN_004253c0(CBugs *this_ptr,float delta_time)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar1 != 0) {
    if ((this_ptr->allow_chase == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,this_ptr->allow_chase_event), iVar1 != 0)) {
      this_ptr->allow_chase = 1;
    }
    if ((this_ptr->allow_swarm == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,this_ptr->allow_swarm_event), iVar1 != 0)) {
      this_ptr->allow_swarm = 1;
    }
    switch(this_ptr->state) {
    case BUGS_STATE_IDLE:
      core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00426030(this_ptr,delta_time);
      break;
    case BUGS_STATE_ATTACK:
      core_bugs_cpp_CBugs_attackSwarmTarget_FUN_004263d0(this_ptr,delta_time);
      return;
    case BUGS_STATE_DETACH:
      core_bugs_cpp_CBugs_updateBoundingBox_FUN_00426860(this_ptr,delta_time);
      return;
    }
  }
  return;
}
