// Name: core_bat.cpp_FUN_00415060
// Address: 00415060
// Address Range: [[00415060, 0041506e]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_00415060()

#include "nocturne.h"

undefined4 * core_bat_cpp_FUN_00415060(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 00415060: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bat.cpp_FUN_00415060
//   XREF to: Stack[0x4] (READ)
// 00415064: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00415068: MOV EAX,dword ptr [EAX]
// 0041506a: MOV dword ptr [EDX],EAX
// 0041506c: MOV EAX,EDX
// 0041506e: RET
