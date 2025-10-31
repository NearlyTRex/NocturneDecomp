// Name: core_filmreel.cpp_FUN_004be7d0
// Address: 004be7d0
// Address Range: [[004be7d0, 004be7de]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be7d0()

#include "nocturne.h"

void core_filmreel_cpp_FUN_004be7d0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x2d4) = in_stack_00000008;
  return;
}


// Assembly code:
// 004be7d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_filmreel.cpp_FUN_004be7d0
//   XREF to: Stack[0x4] (READ)
// 004be7d4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004be7d8: MOV dword ptr [EDX + 0x2d4],EAX
// 004be7de: RET
