// Name: core_gabriela.cpp_FUN_004d5f70
// Address: 004d5f70
// Address Range: [[004d5f70, 004d5fd2]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5f70()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3647 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d5f70(undefined4 param_1) */

int core_gabriela_cpp_FUN_004d5f70(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (((((*(byte *)(in_stack_00000004 + 0x1fbd4) & 2) == 0) ||
       (*(float *)(in_stack_00000004 + 0x1fbdc) < 1.0)) ||
      (*(float *)(in_stack_00000004 + 0x1fc10) < 1.0)) ||
     (0.0 < *(float *)(in_stack_00000004 + 0x1fc0c))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fa68) + 0x154) + 0xfc))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return iVar1;
}


// Assembly code:
// 004d5f70: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_gabriela.cpp_FUN_004d5f70
//   XREF to: Stack[0x4] (READ)
// 004d5f74: TEST byte ptr [EDX + 0x1fbd4],0x2
// 004d5f7b: JZ 0x004d5faa
//   XREF to: 004d5faa (CONDITIONAL_JUMP)
// 004d5f7d: FLD float ptr [EDX + 0x1fbdc]
// 004d5f83: FLD1
// 004d5f85: FCOMPP
// 004d5f87: FNSTSW AX
// 004d5f89: SAHF
// 004d5f8a: JA 0x004d5faa
//   XREF to: 004d5faa (CONDITIONAL_JUMP)
// 004d5f8c: FLD float ptr [EDX + 0x1fc10]
// 004d5f92: FLD1
// 004d5f94: FCOMPP
// 004d5f96: FNSTSW AX
// 004d5f98: SAHF
// 004d5f99: JA 0x004d5faa
//   XREF to: 004d5faa (CONDITIONAL_JUMP)
// 004d5f9b: FLD float ptr [EDX + 0x1fc0c]
// 004d5fa1: FLDZ
// 004d5fa3: FCOMPP
// 004d5fa5: FNSTSW AX
// 004d5fa7: SAHF
// 004d5fa8: JNC 0x004d5fad
//   XREF to: 004d5fad (CONDITIONAL_JUMP)
// 004d5faa: XOR EAX,EAX
//   Label: LAB_004d5faa
// 004d5fac: RET
//   Label: LAB_004d5fac
// 004d5fad: LEA EAX,[EDX + 0x1f738]
//   Label: LAB_004d5fad
// 004d5fb3: MOV EAX,dword ptr [EAX + 0x330]
// 004d5fb9: PUSH EAX
// 004d5fba: MOV EDX,dword ptr [EAX + 0x154]
// 004d5fc0: CALL dword ptr [EDX + 0xfc]
// 004d5fc6: ADD ESP,0x4
// 004d5fc9: TEST EAX,EAX
// 004d5fcb: JZ 0x004d5fac
//   XREF to: 004d5fac (CONDITIONAL_JUMP)
// 004d5fcd: MOV EAX,0x1
// 004d5fd2: RET
