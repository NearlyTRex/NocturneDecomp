// Name: shape_meshlod.cpp_FUN_0051ed30
// Address: 0051ed30
// Address Range: [[0051ed30, 0051ed52]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051ed30()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d615 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_FUN_0051ecd0

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051ed30(undefined4 param_1) */

void shape_meshlod_cpp_FUN_0051ed30(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    do {
      shape_meshlod_cpp_FUN_0051ecd0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 0051ed30: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051ed30
// 0051ed31: PUSH ESI
// 0051ed32: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051ed36: MOV EDX,dword ptr [ESI]
// 0051ed38: XOR EBX,EBX
// 0051ed3a: TEST EDX,EDX
// 0051ed3c: JLE 0x0051ed50
//   XREF to: 0051ed50 (CONDITIONAL_JUMP)
// 0051ed3e: PUSH EBX
//   Label: LAB_0051ed3e
// 0051ed3f: PUSH ESI
// 0051ed40: CALL shape_meshlod.cpp_FUN_0051ecd0
//   XREF to: 0051ecd0 (UNCONDITIONAL_CALL)
// 0051ed45: INC EBX
// 0051ed46: MOV ECX,dword ptr [ESI]
// 0051ed48: ADD ESP,0x8
// 0051ed4b: CMP EBX,ECX
// 0051ed4d: JL 0x0051ed3e
//   XREF to: 0051ed3e (CONDITIONAL_JUMP)
// 0051ed4f: NOP
// 0051ed50: POP ESI
//   Label: LAB_0051ed50
// 0051ed51: POP EBX
// 0051ed52: RET
