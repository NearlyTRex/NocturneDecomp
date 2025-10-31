// Name: core_zombie.cpp_FUN_005fcd10
// Address: 005fcd10
// Address Range: [[005fcd10, 005fcd1e]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005fcd10()

#include "nocturne.h"

undefined4 * core_zombie_cpp_FUN_005fcd10(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 005fcd10: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_zombie.cpp_FUN_005fcd10
//   XREF to: Stack[0x4] (READ)
// 005fcd14: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005fcd18: MOV EAX,dword ptr [EAX]
// 005fcd1a: MOV dword ptr [EDX],EAX
// 005fcd1c: MOV EAX,EDX
// 005fcd1e: RET
