// Name: shape_superopt.cpp_FUN_005d82b0
// Address: 005d82b0
// Address Range: [[005d82b0, 005d82da]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d82b0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d82b0(void)

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
// 005d82b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d82b0
//   XREF to: Stack[0x4] (READ)
// 005d82b4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d82b8: MOV ECX,dword ptr [EDX]
// 005d82ba: MOV dword ptr [EAX],ECX
// 005d82bc: MOV ECX,dword ptr [EDX + 0x4]
// 005d82bf: MOV dword ptr [EAX + 0x4],ECX
// 005d82c2: MOV ECX,dword ptr [EDX + 0x8]
// 005d82c5: MOV dword ptr [EAX + 0x8],ECX
// 005d82c8: MOV ECX,dword ptr [EDX + 0xc]
// 005d82cb: MOV dword ptr [EAX + 0xc],ECX
// 005d82ce: MOV ECX,dword ptr [EDX + 0x10]
// 005d82d1: MOV dword ptr [EAX + 0x10],ECX
// 005d82d4: MOV ECX,dword ptr [EDX + 0x14]
// 005d82d7: MOV dword ptr [EAX + 0x14],ECX
// 005d82da: RET
