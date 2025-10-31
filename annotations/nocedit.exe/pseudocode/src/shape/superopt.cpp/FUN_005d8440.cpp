// Name: shape_superopt.cpp_FUN_005d8440
// Address: 005d8440
// Address Range: [[005d8440, 005d846d]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8440()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8440(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[1] = in_stack_0000000c;
  in_stack_00000004[2] = in_stack_00000010;
  in_stack_00000004[3] = in_stack_00000014;
  in_stack_00000004[4] = in_stack_00000018;
  in_stack_00000004[5] = in_stack_0000001c;
  return;
}


// Assembly code:
// 005d8440: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8440
//   XREF to: Stack[0x4] (READ)
// 005d8444: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8448: MOV dword ptr [EAX],EDX
// 005d844a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005d844e: MOV dword ptr [EAX + 0x4],EDX
// 005d8451: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 005d8455: MOV dword ptr [EAX + 0x8],EDX
// 005d8458: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 005d845c: MOV dword ptr [EAX + 0xc],EDX
// 005d845f: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 005d8463: MOV dword ptr [EAX + 0x10],EDX
// 005d8466: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (READ)
// 005d846a: MOV dword ptr [EAX + 0x14],EDX
// 005d846d: RET
