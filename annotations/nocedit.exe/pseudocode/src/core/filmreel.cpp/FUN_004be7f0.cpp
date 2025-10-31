// Name: core_filmreel.cpp_FUN_004be7f0
// Address: 004be7f0
// Address Range: [[004be7f0, 004be7ff]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be7f0()

#include "nocturne.h"

undefined4 core_filmreel_cpp_FUN_004be7f0(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(in_stack_00000004 + 0x2d4);
}


// Assembly code:
// 004be7f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_filmreel.cpp_FUN_004be7f0
//   XREF to: Stack[0x4] (READ)
// 004be7f4: MOV EAX,dword ptr [EAX + 0x2d4]
// 004be7fa: LEA EAX,[EAX]
