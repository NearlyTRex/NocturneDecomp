// Name: shape_meshlod.cpp_FUN_0051ee50
// Address: 0051ee50
// Address Range: [[0051ee50, 0051ee68]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051ee50()

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051ee50(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  return;
}


// Assembly code:
// 0051ee50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_0051ee50
//   XREF to: Stack[0x4] (READ)
// 0051ee54: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051ee58: MOV ECX,dword ptr [EDX]
// 0051ee5a: MOV dword ptr [EAX],ECX
// 0051ee5c: MOV ECX,dword ptr [EDX + 0x4]
// 0051ee5f: MOV dword ptr [EAX + 0x4],ECX
// 0051ee62: MOV ECX,dword ptr [EDX + 0x8]
// 0051ee65: MOV dword ptr [EAX + 0x8],ECX
// 0051ee68: RET
