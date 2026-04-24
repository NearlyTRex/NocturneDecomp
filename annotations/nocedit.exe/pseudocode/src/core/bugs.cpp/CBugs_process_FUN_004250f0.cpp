// Name: core_bugs.cpp_CBugs_process_FUN_004250f0
// Address: 004250f0
// Address Range: [[004250f0, 004251a6]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_process_FUN_004250f0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_process_FUN_004250f0(CBugs *this_ptr,float delta_time)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar1 != 0) {
    if ((this_ptr->allow_chase == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,this_ptr->allow_chase_event), iVar1 != 0)) {
      this_ptr->allow_chase = 1;
    }
    if ((this_ptr->allow_swarm == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,this_ptr->allow_swarm_event), iVar1 != 0)) {
      this_ptr->allow_swarm = 1;
    }
    switch(this_ptr->state) {
    case BUGS_STATE_IDLE:
      core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00425cc0(this_ptr,delta_time);
      break;
    case BUGS_STATE_ATTACK:
      core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00425fe0(this_ptr,delta_time);
      return;
    case BUGS_STATE_DETACH:
      core_bugs_cpp_CBugs_updateBoundingBox_FUN_00426410(this_ptr,delta_time);
      return;
    }
  }
  return;
}
