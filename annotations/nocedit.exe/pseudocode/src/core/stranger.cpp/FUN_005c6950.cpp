// Name: core_stranger.cpp_FUN_005c6950
// Address: 005c6950
// Address Range: [[005c6950, 005c695a]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c6950()

#include "nocturne.h"

undefined4 core_stranger_cpp_FUN_005c6950(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(in_stack_00000004 + 0x104);
}


// Assembly code:
// 005c6950: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_stranger.cpp_FUN_005c6950
//   XREF to: Stack[0x4] (READ)
// 005c6954: MOV EAX,dword ptr [EAX + 0x104]
// 005c695a: RET
