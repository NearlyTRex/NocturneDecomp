// Name: core_tbplayer.cpp_FUN_005da100
// Address: 005da100
// Address Range: [[005da100, 005da118]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da100()

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da100(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[2] = in_stack_0000000c;
  in_stack_00000004[1] = in_stack_00000010;
  return;
}


// Assembly code:
// 005da100: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_tbplayer.cpp_FUN_005da100
//   XREF to: Stack[0x4] (READ)
// 005da104: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005da108: MOV dword ptr [EAX],EDX
// 005da10a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005da10e: MOV dword ptr [EAX + 0x8],EDX
// 005da111: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 005da115: MOV dword ptr [EAX + 0x4],EDX
// 005da118: RET
