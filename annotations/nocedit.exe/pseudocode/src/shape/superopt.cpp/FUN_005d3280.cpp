// Name: shape_superopt.cpp_FUN_005d3280
// Address: 005d3280
// Address Range: [[005d3280, 005d32d9]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3280()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3280(undefined4 param_1, undefined4 param_2) */

void shape_superopt_cpp_FUN_005d3280(void)

{
  int iVar1;
  uint uVar2;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  
  uVar2 = 0;
  if (*in_stack_00000004 != 0) {
    do {
      if ((*(uint *)(uVar2 * 0x38 + 0x34 + in_stack_00000004[1]) & in_stack_00000008) ==
          in_stack_00000008) {
        iVar1 = (**(code **)(in_stack_00000004[6] + 0x48))();
        if (iVar1 == 0) {
          return;
        }
        iVar1 = (**(code **)(in_stack_00000004[6] + 0x54))();
        if (iVar1 == 0) {
          return;
        }
        uVar2 = uVar2 - 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *in_stack_00000004);
  }
  (**(code **)(in_stack_00000004[6] + 0xcc))();
  return;
}


// Assembly code:
// 005d3280: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d3280
// 005d3281: PUSH ESI
// 005d3282: PUSH EDI
// 005d3283: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d3287: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d328b: MOV EDX,dword ptr [ESI]
// 005d328d: XOR EBX,EBX
// 005d328f: TEST EDX,EDX
// 005d3291: JBE 0x005d32a8
//   XREF to: 005d32a8 (CONDITIONAL_JUMP)
// 005d3293: IMUL EDX,EBX,0x38
//   Label: LAB_005d3293
// 005d3296: MOV EAX,dword ptr [ESI + 0x4]
// 005d3299: MOV EAX,dword ptr [EDX + EAX*0x1 + 0x34]
// 005d329d: AND EAX,EDI
// 005d329f: CMP EAX,EDI
// 005d32a1: JZ 0x005d32b9
//   XREF to: 005d32b9 (CONDITIONAL_JUMP)
// 005d32a3: INC EBX
//   Label: LAB_005d32a3
// 005d32a4: CMP EBX,dword ptr [ESI]
// 005d32a6: JC 0x005d3293
//   XREF to: 005d3293 (CONDITIONAL_JUMP)
// 005d32a8: PUSH ESI
//   Label: LAB_005d32a8
// 005d32a9: MOV EAX,dword ptr [ESI + 0x18]
// 005d32ac: CALL dword ptr [EAX + 0xcc]
// 005d32b2: ADD ESP,0x4
// 005d32b5: POP EDI
//   Label: LAB_005d32b5
// 005d32b6: POP ESI
// 005d32b7: POP EBX
// 005d32b8: RET
// 005d32b9: PUSH EBX
//   Label: LAB_005d32b9
// 005d32ba: MOV EAX,dword ptr [ESI + 0x18]
// 005d32bd: PUSH ESI
// 005d32be: CALL dword ptr [EAX + 0x48]
// 005d32c1: ADD ESP,0x8
// 005d32c4: TEST EAX,EAX
// 005d32c6: JZ 0x005d32b5
//   XREF to: 005d32b5 (CONDITIONAL_JUMP)
// 005d32c8: PUSH EBX
// 005d32c9: MOV EAX,dword ptr [ESI + 0x18]
// 005d32cc: PUSH ESI
// 005d32cd: CALL dword ptr [EAX + 0x54]
// 005d32d0: ADD ESP,0x8
// 005d32d3: TEST EAX,EAX
// 005d32d5: JZ 0x005d32b5
//   XREF to: 005d32b5 (CONDITIONAL_JUMP)
// 005d32d7: DEC EBX
// 005d32d8: JMP 0x005d32a3
//   XREF to: 005d32a3 (UNCONDITIONAL_JUMP)
