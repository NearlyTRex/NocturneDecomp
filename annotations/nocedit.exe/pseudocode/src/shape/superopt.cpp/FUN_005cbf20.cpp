// Name: shape_superopt.cpp_FUN_005cbf20
// Address: 005cbf20
// Address Range: [[005cbf20, 005cbf89]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cbf20()
// Cross-references:
//   shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20 (005cbe20) at 005cbe32 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006542d2

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005cbf20(undefined1 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 shape_superopt_cpp_FUN_005cbf20(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  int in_stack_00000008;
  uint in_stack_0000000c;
  uint uVar5;
  
  if (in_stack_0000000c != 0) {
    pdVar8 = (double *)(in_stack_00000008 + 0x10);
    uVar5 = in_stack_0000000c - 1;
    uVar6 = 0;
    do {
      iVar4 = uVar5 * 0x60;
      dVar1 = *pdVar8 - *(double *)(in_stack_00000008 + 0x28 + iVar4);
      dVar3 = pdVar8[1] - *(double *)(in_stack_00000008 + 0x30 + iVar4);
      dVar2 = pdVar8[2] - *(double *)(in_stack_00000008 + 0x38 + iVar4);
      if (_DAT_006542d2 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) {
        return 0;
      }
      uVar7 = uVar6 + 1;
      pdVar8 = pdVar8 + 0xc;
      uVar5 = uVar6;
      uVar6 = uVar7;
    } while (uVar7 < in_stack_0000000c);
  }
  return 1;
}


// Assembly code:
// 005cbf20: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cbf20
// 005cbf21: PUSH ESI
// 005cbf22: PUSH EBP
// 005cbf23: MOV EBP,ESP
// 005cbf25: SUB ESP,0x18
// 005cbf28: AND ESP,0xfffffff8
// 005cbf2b: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cbf2e: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cbf31: LEA EAX,[EBX + -0x1]
// 005cbf34: XOR ECX,ECX
// 005cbf36: TEST EBX,EBX
// 005cbf38: JBE 0x005cbf77
//   XREF to: 005cbf77 (CONDITIONAL_JUMP)
// 005cbf3a: LEA EDX,[ESI + 0x10]
// 005cbf3d: IMUL EAX,EAX,0x60
//   Label: LAB_005cbf3d
// 005cbf40: FLD double ptr [EDX]
// 005cbf42: FSUB double ptr [ESI + EAX*0x1 + 0x28]
// 005cbf46: FMUL ST0
// 005cbf48: FLD double ptr [EDX + 0x8]
// 005cbf4b: FSUB double ptr [ESI + EAX*0x1 + 0x30]
// 005cbf4f: FMUL ST0
// 005cbf51: FLD double ptr [EDX + 0x10]
// 005cbf54: FXCH
// 005cbf56: FADDP ST2,ST0
// 005cbf58: FSUB double ptr [ESI + EAX*0x1 + 0x38]
// 005cbf5c: FMUL ST0
// 005cbf5e: FADDP
// 005cbf60: FSQRT
// 005cbf62: FCOMP double ptr [0x006542d2]
//   XREF to: 006542d2 (READ)
// 005cbf68: FNSTSW AX
// 005cbf6a: SAHF
// 005cbf6b: JA 0x005cbf82
//   XREF to: 005cbf82 (CONDITIONAL_JUMP)
// 005cbf6d: MOV EAX,ECX
// 005cbf6f: INC ECX
// 005cbf70: ADD EDX,0x60
// 005cbf73: CMP ECX,EBX
// 005cbf75: JC 0x005cbf3d
//   XREF to: 005cbf3d (CONDITIONAL_JUMP)
// 005cbf77: MOV EAX,0x1
//   Label: LAB_005cbf77
// 005cbf7c: MOV ESP,EBP
// 005cbf7e: POP EBP
// 005cbf7f: POP ESI
// 005cbf80: POP EBX
// 005cbf81: RET
// 005cbf82: XOR EAX,EAX
//   Label: LAB_005cbf82
// 005cbf84: MOV ESP,EBP
// 005cbf86: POP EBP
// 005cbf87: POP ESI
// 005cbf88: POP EBX
// 005cbf89: RET
