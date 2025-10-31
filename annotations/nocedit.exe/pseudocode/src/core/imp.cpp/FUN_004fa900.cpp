// Name: core_imp.cpp_FUN_004fa900
// Address: 004fa900
// Address Range: [[004fa900, 004fa918]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004fa900()

#include "nocturne.h"

void core_imp_cpp_FUN_004fa900(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[2] = in_stack_0000000c;
  in_stack_00000004[1] = in_stack_00000010;
  return;
}


// Assembly code:
// 004fa900: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_imp.cpp_FUN_004fa900
//   XREF to: Stack[0x4] (READ)
// 004fa904: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004fa908: MOV dword ptr [EAX],EDX
// 004fa90a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004fa90e: MOV dword ptr [EAX + 0x8],EDX
// 004fa911: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004fa915: MOV dword ptr [EAX + 0x4],EDX
// 004fa918: RET
