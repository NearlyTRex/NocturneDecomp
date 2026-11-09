// Name: core_bugs.cpp_FUN_004253c0
// Address: 004253c0
// Address Range: [[004253c0, 00425476]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_004253c0(CBugs *param_1,float param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_004253c0(CBugs *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar1 != 0) {
    if ((*(int *)&param_1->field_0x19c44 == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,&param_1->field_0x19c4c), iVar1 != 0)) {
      *(uint *)&param_1->field_0x19c44 = 1;
    }
    if ((*(int *)&param_1->field_0x19c48 == 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,&param_1->field_0x19cb0), iVar1 != 0)) {
      *(uint *)&param_1->field_0x19c48 = 1;
    }
    switch(*(uint *)&param_1->field_0xc268) {
    case 0:
      core_bugs_cpp_FUN_00426030(param_1,param_2);
      break;
    case 1:
      core_bugs_cpp_FUN_004263d0(param_1,param_2);
      return;
    case 2:
      core_bugs_cpp_FUN_00426860(param_1,param_2);
      return;
    }
  }
  return;
}
