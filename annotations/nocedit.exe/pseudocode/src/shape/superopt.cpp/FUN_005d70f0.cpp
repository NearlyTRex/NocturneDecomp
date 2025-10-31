// Name: shape_superopt.cpp_FUN_005d70f0
// Address: 005d70f0
// Address Range: [[005d70f0, 005d7112]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d70f0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d70f0(undefined4 param_1) */

undefined8 shape_superopt_cpp_FUN_005d70f0(void)

{
  int in_stack_00000004;
  
  return *(undefined8 *)(in_stack_00000004 + 0x1c);
}


// Assembly code:
// 005d70f0: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d70f0
// 005d70f3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d70f7: MOV EAX,dword ptr [EAX + 0x1c]
// 005d70fa: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 005d70fd: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d7101: MOV EAX,dword ptr [EAX + 0x20]
// 005d7104: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005d7108: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d710b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005d710f: ADD ESP,0x8
// 005d7112: RET
