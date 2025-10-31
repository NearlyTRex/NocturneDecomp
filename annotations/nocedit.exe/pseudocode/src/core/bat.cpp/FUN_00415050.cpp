// Name: core_bat.cpp_FUN_00415050
// Address: 00415050
// Address Range: [[00415050, 0041505e]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_00415050()

#include "nocturne.h"

undefined4 * core_bat_cpp_FUN_00415050(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 00415050: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bat.cpp_FUN_00415050
//   XREF to: Stack[0x4] (READ)
// 00415054: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00415058: MOV EAX,dword ptr [EAX]
// 0041505a: MOV dword ptr [EDX],EAX
// 0041505c: MOV EAX,EDX
// 0041505e: RET
