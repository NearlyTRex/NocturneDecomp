// Name: core_cloth.cpp_FUN_0043e170
// Address: 0043e170
// Address Range: [[0043e170, 0043e19f]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e170()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c6220 (005c6220) at 005c6544 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void core_cloth_cpp_FUN_0043e170(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  in_stack_00000004 = in_stack_00000008 * 0x11c + in_stack_00000004;
  *(undefined4 *)(in_stack_00000004 + 0x57b0) = 0xffffffff;
  *(undefined4 *)(in_stack_00000004 + 0x574c) = 0;
  return;
}


// Assembly code:
// 0043e170: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_cloth.cpp_FUN_0043e170
//   XREF to: Stack[0x8] (READ)
// 0043e174: LEA EAX,[EDX*0x8 + 0x0]
// 0043e17b: ADD EAX,EDX
// 0043e17d: SHL EAX,0x3
// 0043e180: SUB EAX,EDX
// 0043e182: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0043e186: SHL EAX,0x2
// 0043e189: ADD EAX,EDX
// 0043e18b: MOV dword ptr [EAX + 0x57b0],0xffffffff
// 0043e195: MOV dword ptr [EAX + 0x574c],0x0
// 0043e19f: RET
