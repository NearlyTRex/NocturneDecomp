// Name: core_bodypart.cpp_FUN_0041b570
// Address: 0041b570
// Address Range: [[0041b570, 0041b588]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b570()

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041b570(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  return;
}


// Assembly code:
// 0041b570: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_FUN_0041b570
//   XREF to: Stack[0x4] (READ)
// 0041b574: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0041b578: MOV ECX,dword ptr [EDX]
// 0041b57a: MOV dword ptr [EAX],ECX
// 0041b57c: MOV ECX,dword ptr [EDX + 0x4]
// 0041b57f: MOV dword ptr [EAX + 0x4],ECX
// 0041b582: MOV ECX,dword ptr [EDX + 0x8]
// 0041b585: MOV dword ptr [EAX + 0x8],ECX
// 0041b588: RET
