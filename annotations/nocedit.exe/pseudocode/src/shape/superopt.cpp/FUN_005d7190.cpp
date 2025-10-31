// Name: shape_superopt.cpp_FUN_005d7190
// Address: 005d7190
// Address Range: [[005d7190, 005d71b2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d7190()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d7190(undefined4 param_1) */

undefined8 shape_superopt_cpp_FUN_005d7190(void)

{
  int in_stack_00000004;
  
  return *(undefined8 *)(in_stack_00000004 + 0x2c);
}


// Assembly code:
// 005d7190: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d7190
// 005d7193: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d7197: MOV EAX,dword ptr [EAX + 0x2c]
// 005d719a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 005d719d: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d71a1: MOV EAX,dword ptr [EAX + 0x30]
// 005d71a4: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005d71a8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d71ab: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005d71af: ADD ESP,0x8
// 005d71b2: RET
