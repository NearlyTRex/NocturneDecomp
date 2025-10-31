// Name: shape_superopt.cpp_FUN_005d84a0
// Address: 005d84a0
// Address Range: [[005d84a0, 005d84ca]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d84a0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d84a0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  in_stack_00000004[3] = in_stack_00000008[3];
  in_stack_00000004[4] = in_stack_00000008[4];
  in_stack_00000004[5] = in_stack_00000008[5];
  return;
}


// Assembly code:
// 005d84a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d84a0
//   XREF to: Stack[0x4] (READ)
// 005d84a4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d84a8: MOV ECX,dword ptr [EDX]
// 005d84aa: MOV dword ptr [EAX],ECX
// 005d84ac: MOV ECX,dword ptr [EDX + 0x4]
// 005d84af: MOV dword ptr [EAX + 0x4],ECX
// 005d84b2: MOV ECX,dword ptr [EDX + 0x8]
// 005d84b5: MOV dword ptr [EAX + 0x8],ECX
// 005d84b8: MOV ECX,dword ptr [EDX + 0xc]
// 005d84bb: MOV dword ptr [EAX + 0xc],ECX
// 005d84be: MOV ECX,dword ptr [EDX + 0x10]
// 005d84c1: MOV dword ptr [EAX + 0x10],ECX
// 005d84c4: MOV ECX,dword ptr [EDX + 0x14]
// 005d84c7: MOV dword ptr [EAX + 0x14],ECX
// 005d84ca: RET
