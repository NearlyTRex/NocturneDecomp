// Name: core_sound.cpp_FUN_005b3e30
// Address: 005b3e30
// Address Range: [[005b3e30, 005b3e3e]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b3e30()

#include "nocturne.h"

undefined4 * core_sound_cpp_FUN_005b3e30(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 005b3e30: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_sound.cpp_FUN_005b3e30
//   XREF to: Stack[0x4] (READ)
// 005b3e34: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b3e38: MOV EAX,dword ptr [EAX]
// 005b3e3a: MOV dword ptr [EDX],EAX
// 005b3e3c: MOV EAX,EDX
// 005b3e3e: RET
