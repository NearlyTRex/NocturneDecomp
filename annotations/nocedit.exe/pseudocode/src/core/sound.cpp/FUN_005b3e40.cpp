// Name: core_sound.cpp_FUN_005b3e40
// Address: 005b3e40
// Address Range: [[005b3e40, 005b3e4e]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b3e40()

#include "nocturne.h"

undefined4 * core_sound_cpp_FUN_005b3e40(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 005b3e40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_sound.cpp_FUN_005b3e40
//   XREF to: Stack[0x4] (READ)
// 005b3e44: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b3e48: MOV EAX,dword ptr [EAX]
// 005b3e4a: MOV dword ptr [EDX],EAX
// 005b3e4c: MOV EAX,EDX
// 005b3e4e: RET
