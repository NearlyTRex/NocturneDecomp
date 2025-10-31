// Name: core_event.cpp_FUN_004b19c1
// Address: 004b19c1
// Address Range: [[004b19c1, 004b19ce]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b19c1()

#include "nocturne.h"

undefined4 *
core_event_cpp_FUN_004b19c1
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_2 = *param_5;
  return param_2;
}


// Assembly code:
// 004b19c1: PUSH ESP
//   Label: core_event.cpp_FUN_004b19c1
//   XREF to: Stack[-0x4] (DATA)
// 004b19c2: AND AL,0x4
// 004b19c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b19c8: MOV EAX,dword ptr [EAX]
// 004b19ca: MOV dword ptr [EDX],EAX
// 004b19cc: MOV EAX,EDX
// 004b19ce: RET
