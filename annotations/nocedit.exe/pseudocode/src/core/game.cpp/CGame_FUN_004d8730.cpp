// Name: core_game.cpp_CGame_FUN_004d8730
// Address: 004d8730
// Address Range: [[004d8730, 004d8748]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004d8730(CGame * this_ptr)
// Cross-references:
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 005092d3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004d8730(CGame *this_ptr)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  this_ptr->field102_0x9bc = in_stack_00000008;
  this_ptr->field103_0x9c0 = in_stack_0000000c;
  return;
}


// Assembly code:
// 004d8730: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_game.cpp_CGame_FUN_004d8730
//   XREF to: Stack[0x4] (READ)
// 004d8734: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004d8738: MOV dword ptr [EAX + 0x9bc],EDX
// 004d873e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004d8742: MOV dword ptr [EAX + 0x9c0],EDX
// 004d8748: RET
