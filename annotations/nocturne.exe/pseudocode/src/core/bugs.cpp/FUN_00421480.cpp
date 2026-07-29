// Name: core_bugs.cpp_FUN_00421480
// Address: 00421480
// Address Range: [[00421480, 00421536]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00421480(CBugs *param_1,float param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_00421480(CBugs *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar1 != 0) {
    if ((param_1->allow_chase == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,param_1->allow_chase_event), iVar1 != 0)) {
      param_1->allow_chase = 1;
    }
    if ((param_1->allow_swarm == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,param_1->allow_swarm_event), iVar1 != 0)) {
      param_1->allow_swarm = 1;
    }
    switch(param_1->state) {
    case BUGS_STATE_IDLE:
      core_bugs_cpp_FUN_00422050(param_1,param_2);
      break;
    case BUGS_STATE_ATTACK:
      core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422370(param_1,param_2);
      return;
    case BUGS_STATE_DETACH:
      core_bugs_cpp_CBugs_updateBoundingBox_FUN_004227a0(param_1,param_2);
      return;
    }
  }
  return;
}
