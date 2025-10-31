// Name: shape_superopt.cpp_FUN_005d8330
// Address: 005d8330
// Address Range: [[005d8330, 005d834e]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8330()
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7af3 [DATA]

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8330(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  in_stack_00000004[3] = in_stack_00000008[3];
  return;
}


// Assembly code:
// 005d8330: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8330
//   XREF to: Stack[0x4] (READ)
// 005d8334: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8338: MOV ECX,dword ptr [EDX]
// 005d833a: MOV dword ptr [EAX],ECX
// 005d833c: MOV ECX,dword ptr [EDX + 0x4]
// 005d833f: MOV dword ptr [EAX + 0x4],ECX
// 005d8342: MOV ECX,dword ptr [EDX + 0x8]
// 005d8345: MOV dword ptr [EAX + 0x8],ECX
// 005d8348: MOV ECX,dword ptr [EDX + 0xc]
// 005d834b: MOV dword ptr [EAX + 0xc],ECX
// 005d834e: RET
