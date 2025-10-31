// Name: core_stranger.cpp_FUN_005c695e
// Address: 005c695e
// Address Range: [[005c695e, 005c696a]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c695e()

#include "nocturne.h"

undefined4 core_stranger_cpp_FUN_005c695e(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(in_stack_00000004 + 0x10c);
}


// Assembly code:
// 005c695e: MOV ECX,ECX
//   Label: core_stranger.cpp_FUN_005c695e
// 005c6960: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005c6964: MOV EAX,dword ptr [EAX + 0x10c]
// 005c696a: RET
