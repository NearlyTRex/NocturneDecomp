// Name: shape_meshlod.cpp_FUN_0051a7ff
// Address: 0051a7ff
// Address Range: [[0051a7ff, 0051a828]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a7ff()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a6b0 (0051a6b0) at 0051a760 [COMPUTED_JUMP]

#include "nocturne.h"

undefined4 *
shape_meshlod_cpp_FUN_0051a7ff(undefined4 param_1,undefined4 param_2,undefined4 *unaff_EBX)

{
  undefined4 *in_stack_00000010;
  
  *unaff_EBX = *in_stack_00000010;
  unaff_EBX[1] = in_stack_00000010[1];
  unaff_EBX[2] = in_stack_00000010[2];
  return unaff_EBX;
}


// Assembly code:
// 0051a7ff: MOV EDX,dword ptr [ESP + 0x10]
//   Label: shape_meshlod.cpp_FUN_0051a7ff
//   XREF to: Stack[0x10] (READ)
// 0051a803: MOV EDX,dword ptr [EDX]
// 0051a805: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 0051a809: MOV dword ptr [EBX],EDX
// 0051a80b: LEA EDX,[EBX + 0x4]
// 0051a80e: MOV ECX,dword ptr [ECX + 0x4]
// 0051a811: MOV dword ptr [EDX],ECX
// 0051a813: LEA ECX,[EDX + 0x4]
// 0051a816: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 0051a81a: MOV EDX,dword ptr [EDX + 0x8]
// 0051a81d: MOV dword ptr [ECX],EDX
// 0051a81f: MOV EAX,EBX
// 0051a821: ADD ESP,0x14
// 0051a824: POP EBP
// 0051a825: POP EDI
// 0051a826: POP ESI
// 0051a827: POP EBX
// 0051a828: RET
