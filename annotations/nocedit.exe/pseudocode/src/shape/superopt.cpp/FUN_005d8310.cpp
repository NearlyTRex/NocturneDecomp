// Name: shape_superopt.cpp_FUN_005d8310
// Address: 005d8310
// Address Range: [[005d8310, 005d832f]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8310()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8310(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[1] = in_stack_0000000c;
  in_stack_00000004[2] = in_stack_00000010;
  in_stack_00000004[3] = in_stack_00000014;
  return;
}


// Assembly code:
// 005d8310: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8310
//   XREF to: Stack[0x4] (READ)
// 005d8314: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8318: MOV dword ptr [EAX],EDX
// 005d831a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005d831e: MOV dword ptr [EAX + 0x4],EDX
// 005d8321: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 005d8325: MOV dword ptr [EAX + 0x8],EDX
// 005d8328: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 005d832c: MOV dword ptr [EAX + 0xc],EDX
// 005d832f: RET
