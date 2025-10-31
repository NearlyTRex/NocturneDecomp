// Name: core_conveyor.cpp_FUN_004423f0
// Address: 004423f0
// Address Range: [[004423f0, 004423fe]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004423f0()

#include "nocturne.h"

undefined4 * core_conveyor_cpp_FUN_004423f0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 004423f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_conveyor.cpp_FUN_004423f0
//   XREF to: Stack[0x4] (READ)
// 004423f4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004423f8: MOV EAX,dword ptr [EAX]
// 004423fa: MOV dword ptr [EDX],EAX
// 004423fc: MOV EAX,EDX
// 004423fe: RET
