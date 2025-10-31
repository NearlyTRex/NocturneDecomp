// Name: core_event.cpp_FUN_004b19a1
// Address: 004b19a1
// Address Range: [[004b19a1, 004b19ae]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b19a1()

#include "nocturne.h"

undefined4 *
core_event_cpp_FUN_004b19a1
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_2 = *param_5;
  return param_2;
}


// Assembly code:
// 004b19a1: PUSH ESP
//   Label: core_event.cpp_FUN_004b19a1
//   XREF to: Stack[-0x4] (DATA)
// 004b19a2: AND AL,0x4
// 004b19a4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b19a8: MOV EAX,dword ptr [EAX]
// 004b19aa: MOV dword ptr [EDX],EAX
// 004b19ac: MOV EAX,EDX
// 004b19ae: RET
