// Name: shape_superopt.cpp_FUN_005d8470
// Address: 005d8470
// Address Range: [[005d8470, 005d849a]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8470()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8470(void)

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
// 005d8470: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8470
//   XREF to: Stack[0x4] (READ)
// 005d8474: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8478: MOV ECX,dword ptr [EDX]
// 005d847a: MOV dword ptr [EAX],ECX
// 005d847c: MOV ECX,dword ptr [EDX + 0x4]
// 005d847f: MOV dword ptr [EAX + 0x4],ECX
// 005d8482: MOV ECX,dword ptr [EDX + 0x8]
// 005d8485: MOV dword ptr [EAX + 0x8],ECX
// 005d8488: MOV ECX,dword ptr [EDX + 0xc]
// 005d848b: MOV dword ptr [EAX + 0xc],ECX
// 005d848e: MOV ECX,dword ptr [EDX + 0x10]
// 005d8491: MOV dword ptr [EAX + 0x10],ECX
// 005d8494: MOV ECX,dword ptr [EDX + 0x14]
// 005d8497: MOV dword ptr [EAX + 0x14],ECX
// 005d849a: RET
