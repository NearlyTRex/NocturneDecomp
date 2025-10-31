// Name: shape_superopt.cpp_FUN_005d8190
// Address: 005d8190
// Address Range: [[005d8190, 005d81ba]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8190()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8190(void)

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
// 005d8190: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8190
//   XREF to: Stack[0x4] (READ)
// 005d8194: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8198: MOV ECX,dword ptr [EDX]
// 005d819a: MOV dword ptr [EAX],ECX
// 005d819c: MOV ECX,dword ptr [EDX + 0x4]
// 005d819f: MOV dword ptr [EAX + 0x4],ECX
// 005d81a2: MOV ECX,dword ptr [EDX + 0x8]
// 005d81a5: MOV dword ptr [EAX + 0x8],ECX
// 005d81a8: MOV ECX,dword ptr [EDX + 0xc]
// 005d81ab: MOV dword ptr [EAX + 0xc],ECX
// 005d81ae: MOV ECX,dword ptr [EDX + 0x10]
// 005d81b1: MOV dword ptr [EAX + 0x10],ECX
// 005d81b4: MOV ECX,dword ptr [EDX + 0x14]
// 005d81b7: MOV dword ptr [EAX + 0x14],ECX
// 005d81ba: RET
