// Name: core_event.cpp_FUN_004b19b1
// Address: 004b19b1
// Address Range: [[004b19b1, 004b19be]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b19b1()

#include "nocturne.h"

undefined4 *
core_event_cpp_FUN_004b19b1
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5)

{
  *param_2 = *param_5;
  return param_2;
}


// Assembly code:
// 004b19b1: PUSH ESP
//   Label: core_event.cpp_FUN_004b19b1
//   XREF to: Stack[-0x4] (DATA)
// 004b19b2: AND AL,0x4
// 004b19b4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b19b8: MOV EAX,dword ptr [EAX]
// 004b19ba: MOV dword ptr [EDX],EAX
// 004b19bc: MOV EAX,EDX
// 004b19be: RET
