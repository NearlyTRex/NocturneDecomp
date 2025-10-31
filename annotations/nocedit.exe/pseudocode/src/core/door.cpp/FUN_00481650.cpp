// Name: core_door.cpp_FUN_00481650
// Address: 00481650
// Address Range: [[00481650, 00481661]]
// Convention: unknown
// Signature: undefined core_door.cpp_FUN_00481650()
// Function calls:
//   core_event.cpp_FUN_004b1670

#include "nocturne.h"

undefined4 core_door_cpp_FUN_00481650(void)

{
  undefined4 in_stack_00000004;
  
  core_event_cpp_FUN_004b1670();
  return in_stack_00000004;
}


// Assembly code:
// 00481650: PUSH EBX
//   Label: core_door.cpp_FUN_00481650
// 00481651: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481655: PUSH EBX
// 00481656: CALL core_event.cpp_FUN_004b1670
//   XREF to: 004b1670 (UNCONDITIONAL_CALL)
// 0048165b: ADD ESP,0x4
// 0048165e: MOV EAX,EBX
// 00481660: POP EBX
// 00481661: RET
