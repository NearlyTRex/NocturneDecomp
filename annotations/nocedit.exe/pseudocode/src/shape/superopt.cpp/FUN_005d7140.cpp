// Name: shape_superopt.cpp_FUN_005d7140
// Address: 005d7140
// Address Range: [[005d7140, 005d7162]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d7140()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d7140(undefined4 param_1) */

undefined8 shape_superopt_cpp_FUN_005d7140(void)

{
  int in_stack_00000004;
  
  return *(undefined8 *)(in_stack_00000004 + 0x24);
}


// Assembly code:
// 005d7140: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d7140
// 005d7143: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d7147: MOV EAX,dword ptr [EAX + 0x24]
// 005d714a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 005d714d: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d7151: MOV EAX,dword ptr [EAX + 0x28]
// 005d7154: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005d7158: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d715b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005d715f: ADD ESP,0x8
// 005d7162: RET
