// Name: core_event.cpp_FUN_004aaa70
// Address: 004aaa70
// Address Range: [[004aaa70, 004aaab6]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aaa70()
// Cross-references:
//   core_event.cpp_CEventList_loadState_FUN_004b0fc0 (004b0fc0) at 004b0fd9 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aaa50 (004aaa50) at 004aaa56 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 005247ba [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004aaa70(undefined4 param_1) */

void core_event_cpp_FUN_004aaa70(void)

{
  undefined4 *in_stack_00000004;
  
  in_stack_00000004[0x321] = 0;
  in_stack_00000004[0x963] = 0;
  in_stack_00000004[0xc84] = 0;
  in_stack_00000004[0xcdf] = 0;
  in_stack_00000004[0xd3a] = 0;
  in_stack_00000004[0xeb2] = 0;
  *in_stack_00000004 = 0;
  return;
}


// Assembly code:
// 004aaa70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004aaa70
//   XREF to: Stack[0x4] (READ)
// 004aaa74: MOV dword ptr [EAX + 0xc84],0x0
// 004aaa7e: MOV dword ptr [EAX + 0x258c],0x0
// 004aaa88: MOV dword ptr [EAX + 0x3210],0x0
// 004aaa92: MOV dword ptr [EAX + 0x337c],0x0
// 004aaa9c: MOV dword ptr [EAX + 0x34e8],0x0
// 004aaaa6: MOV dword ptr [EAX + 0x3ac8],0x0
// 004aaab0: MOV dword ptr [EAX],0x0
// 004aaab6: RET
