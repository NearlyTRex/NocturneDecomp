// Name: core_bat.cpp_FUN_00415070
// Address: 00415070
// Address Range: [[00415070, 0041507e]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_00415070()

#include "nocturne.h"

undefined4 * core_bat_cpp_FUN_00415070(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 00415070: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bat.cpp_FUN_00415070
//   XREF to: Stack[0x4] (READ)
// 00415074: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00415078: MOV EAX,dword ptr [EAX]
// 0041507a: MOV dword ptr [EDX],EAX
// 0041507c: MOV EAX,EDX
// 0041507e: RET
