// Name: core_event.cpp_FUN_004aaa50
// Address: 004aaa50
// Address Range: [[004aaa50, 004aaa6a]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aaa50()
// Cross-references:
//   core_event.cpp_staticInit_FUN_004aa260 (004aa260) at 004aa265 [UNCONDITIONAL_CALL]
// Function calls:
//   core_event.cpp_FUN_004aaa70
//   core_event.cpp_FUN_004b0460

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004aaa50(void)

{
  undefined4 in_stack_00000004;
  
  core_event_cpp_FUN_004aaa70();
  core_event_cpp_FUN_004b0460();
  return in_stack_00000004;
}


// Assembly code:
// 004aaa50: PUSH EBX
//   Label: core_event.cpp_FUN_004aaa50
// 004aaa51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004aaa55: PUSH EBX
// 004aaa56: CALL core_event.cpp_FUN_004aaa70
//   XREF to: 004aaa70 (UNCONDITIONAL_CALL)
// 004aaa5b: ADD ESP,0x4
// 004aaa5e: PUSH EBX
// 004aaa5f: CALL core_event.cpp_FUN_004b0460
//   XREF to: 004b0460 (UNCONDITIONAL_CALL)
// 004aaa64: ADD ESP,0x4
// 004aaa67: MOV EAX,EBX
// 004aaa69: POP EBX
// 004aaa6a: RET
