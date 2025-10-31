// Name: shape_superopt.cpp_FUN_005cbb40
// Address: 005cbb40
// Address Range: [[005cbb40, 005cbe16]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cbb40()
// Cross-references:
//   shape_superopt.cpp_FUN_005cb3a0 (005cb3a0) at 005cb3c0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cbb40(undefined1 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

double * shape_superopt_cpp_FUN_005cbb40(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  BADSPACEBASE *in_ESP;
  double *pdVar8;
  double *pdVar9;
  double *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  undefined8 local_110;
  undefined4 local_100;
  undefined4 uStack_fc;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  uint local_18;
  double *local_14;
  
  local_18 = 0;
  local_100 = 0;
  uStack_fc = 0x3ff00000;
  if (in_stack_00000010 != 0) {
    pdVar7 = (double *)(in_stack_0000000c + 0x10);
    do {
      uVar4 = local_18 + 1;
      if (in_stack_00000010 <= uVar4) {
        uVar4 = 0;
      }
      local_a8 = pdVar7[3] - *pdVar7;
      local_a0 = pdVar7[4] - pdVar7[1];
      iVar5 = uVar4 * 0x60 + in_stack_0000000c;
      local_98 = pdVar7[5] - pdVar7[2];
      pdVar8 = &local_a8;
      pdVar9 = &local_90;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_14 = (double *)(iVar5 + 0x28);
      dVar1 = 1.0 / SQRT(local_80 * local_80 + local_90 * local_90 + local_88 * local_88);
      dVar2 = local_90 * dVar1;
      dVar3 = local_88 * dVar1;
      dVar1 = local_80 * dVar1;
      local_c0 = *(double *)(iVar5 + 0x28) - pdVar7[3];
      local_b8 = *(double *)(iVar5 + 0x30) - pdVar7[4];
      local_b0 = *(double *)(iVar5 + 0x38) - pdVar7[5];
      pdVar8 = &local_c0;
      pdVar9 = &local_60;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_68 = 1.0 / SQRT(local_50 * local_50 + local_60 * local_60 + local_58 * local_58);
      local_78 = local_60 * local_68;
      local_70 = local_58 * local_68;
      local_68 = local_50 * local_68;
      local_110 = dVar2 * local_78 + dVar3 * local_70 + dVar1 * local_68;
      if (local_110 < 0.0) {
        local_110 = -local_110;
      }
      if (local_110 < (double)CONCAT44(uStack_fc,local_100)) {
        local_100 = (undefined4)local_110;
        uStack_fc = local_110._4_4_;
        *in_stack_00000008 = dVar3 * local_68 - dVar1 * local_70;
        in_stack_00000008[1] = dVar1 * local_78 - dVar2 * local_68;
        in_stack_00000008[2] = dVar2 * local_70 - dVar3 * local_78;
      }
      local_18 = local_18 + 1;
      pdVar7 = pdVar7 + 0xc;
    } while (local_18 < in_stack_00000010);
  }
  dVar1 = 1.0 / SQRT(in_stack_00000008[2] * in_stack_00000008[2] +
                     *in_stack_00000008 * *in_stack_00000008 +
                     in_stack_00000008[1] * in_stack_00000008[1]);
  *in_stack_00000008 = *in_stack_00000008 * dVar1;
  in_stack_00000008[1] = in_stack_00000008[1] * dVar1;
  in_stack_00000008[2] = in_stack_00000008[2] * dVar1;
  return in_stack_00000008;
}


// Assembly code:
// 005cbb40: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cbb40
// 005cbb41: PUSH ESI
// 005cbb42: PUSH EDI
// 005cbb43: PUSH EBP
// 005cbb44: MOV EBP,ESP
// 005cbb46: SUB ESP,0x100
// 005cbb4c: AND ESP,0xfffffff8
// 005cbb4f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cbb52: MOV ECX,0x3ff00000
// 005cbb57: XOR EDX,EDX
// 005cbb59: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005cbb5c: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005cbb63: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x100] (WRITE)
// 005cbb67: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xfc] (WRITE)
// 005cbb6b: TEST EDI,EDI
// 005cbb6d: JBE 0x005cbdd0
//   XREF to: 005cbdd0 (CONDITIONAL_JUMP)
// 005cbb73: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cbb76: ADD EDX,0x10
// 005cbb79: MOV EAX,dword ptr [ESP + 0xf8]
//   Label: LAB_005cbb79
//   XREF to: Stack[-0x18] (READ)
// 005cbb80: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005cbb83: INC EAX
// 005cbb84: CMP EAX,ESI
// 005cbb86: JC 0x005cbb8a
//   XREF to: 005cbb8a (CONDITIONAL_JUMP)
// 005cbb88: XOR EAX,EAX
// 005cbb8a: IMUL EAX,EAX,0x60
//   Label: LAB_005cbb8a
// 005cbb8d: FLD double ptr [EDX + 0x18]
// 005cbb90: FLD double ptr [EDX + 0x20]
// 005cbb93: FLD double ptr [EDX + 0x28]
// 005cbb96: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cbb99: MOV ECX,0x6
// 005cbb9e: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0xa8] (DATA)
// 005cbba2: FXCH ST2
// 005cbba4: FSUB double ptr [EDX]
// 005cbba6: FXCH
// 005cbba8: FSUB double ptr [EDX + 0x8]
// 005cbbab: FXCH ST2
// 005cbbad: FSUB double ptr [EDX + 0x10]
// 005cbbb0: FXCH
// 005cbbb2: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0xa8] (WRITE)
// 005cbbb6: FXCH
// 005cbbb8: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (WRITE)
// 005cbbbc: ADD EAX,EDI
// 005cbbbe: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[-0x90] (DATA)
// 005cbbc5: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x98] (WRITE)
// 005cbbc9: MOVSD.REP ES:EDI,ESI
// 005cbbcb: FLD double ptr [ESP + 0x88]
//   XREF to: Stack[-0x88] (READ)
// 005cbbd2: FMUL ST0
// 005cbbd4: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0x90] (READ)
// 005cbbdb: FMUL ST0
// 005cbbdd: FADDP
// 005cbbdf: FLD double ptr [ESP + 0x90]
//   XREF to: Stack[-0x80] (READ)
// 005cbbe6: FMUL ST0
// 005cbbe8: ADD EAX,0x28
// 005cbbeb: FADDP
// 005cbbed: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005cbbf4: FSQRT
// 005cbbf6: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0x90] (READ)
// 005cbbfd: FLD1
// 005cbbff: FDIVRP ST2,ST0
// 005cbc01: FMUL ST1
// 005cbc03: FLD double ptr [ESP + 0x88]
//   XREF to: Stack[-0x88] (READ)
// 005cbc0a: FMUL ST2
// 005cbc0c: FLD double ptr [ESP + 0x90]
//   XREF to: Stack[-0x80] (READ)
// 005cbc13: FMULP ST3
// 005cbc15: MOV ECX,0x6
// 005cbc1a: LEA EDI,[ESP + 0xb0]
//   XREF to: Stack[-0x60] (DATA)
// 005cbc21: LEA ESI,[ESP + 0x50]
//   XREF to: Stack[-0xc0] (DATA)
// 005cbc25: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005cbc2c: FXCH
// 005cbc2e: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xf0] (WRITE)
// 005cbc32: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (WRITE)
// 005cbc36: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xe0] (WRITE)
// 005cbc3a: FLD double ptr [EAX]
// 005cbc3c: FLD double ptr [EAX + 0x8]
// 005cbc3f: FLD double ptr [EAX + 0x10]
// 005cbc42: FXCH ST2
// 005cbc44: FSUB double ptr [EDX + 0x18]
// 005cbc47: FXCH
// 005cbc49: FSUB double ptr [EDX + 0x20]
// 005cbc4c: FXCH ST2
// 005cbc4e: FSUB double ptr [EDX + 0x28]
// 005cbc51: FXCH
// 005cbc53: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0xc0] (WRITE)
// 005cbc57: FXCH
// 005cbc59: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0xb8] (WRITE)
// 005cbc5d: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0xb0] (WRITE)
// 005cbc61: MOVSD.REP ES:EDI,ESI
// 005cbc63: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x58] (READ)
// 005cbc6a: FMUL ST0
// 005cbc6c: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x60] (READ)
// 005cbc73: FMUL ST0
// 005cbc75: FADDP
// 005cbc77: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x50] (READ)
// 005cbc7e: FMUL ST0
// 005cbc80: FADDP
// 005cbc82: FSQRT
// 005cbc84: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x60] (READ)
// 005cbc8b: FLD1
// 005cbc8d: FDIVRP ST2,ST0
// 005cbc8f: FMUL ST1
// 005cbc91: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x58] (READ)
// 005cbc98: FMUL ST2
// 005cbc9a: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x50] (READ)
// 005cbca1: FMULP ST3
// 005cbca3: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (READ)
// 005cbca7: FXCH
// 005cbca9: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (WRITE)
// 005cbcb0: FMUL double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (READ)
// 005cbcb7: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xe0] (READ)
// 005cbcbb: FXCH ST3
// 005cbcbd: FSTP double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (WRITE)
// 005cbcc4: FXCH ST2
// 005cbcc6: FMUL double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (READ)
// 005cbccd: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xf0] (READ)
// 005cbcd1: FXCH ST2
// 005cbcd3: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0x78] (WRITE)
// 005cbcda: FXCH
// 005cbcdc: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x78] (READ)
// 005cbce3: FXCH
// 005cbce5: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xf8] (WRITE)
// 005cbce9: FADDP
// 005cbceb: FADD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xf8] (READ)
// 005cbcef: FLDZ
// 005cbcf1: FXCH
// 005cbcf3: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x108] (WRITE)
// 005cbcf7: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 005cbcfb: FNSTSW AX
// 005cbcfd: SAHF
// 005cbcfe: JA 0x005cbe09
//   XREF to: 005cbe09 (CONDITIONAL_JUMP)
// 005cbd04: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 005cbd08: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x110] (DATA)
// 005cbd0b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x104] (READ)
// 005cbd0f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 005cbd13: FLD double ptr [ESP]
//   Label: LAB_005cbd13
//   XREF to: Stack[-0x110] (DATA)
// 005cbd16: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x100] (READ)
// 005cbd1a: FNSTSW AX
// 005cbd1c: SAHF
// 005cbd1d: JNC 0x005cbdb3
//   XREF to: 005cbdb3 (CONDITIONAL_JUMP)
// 005cbd23: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (READ)
// 005cbd27: FMUL double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (READ)
// 005cbd2e: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xe0] (READ)
// 005cbd32: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x78] (READ)
// 005cbd39: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xf0] (READ)
// 005cbd3d: FMUL double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (READ)
// 005cbd44: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xe0] (READ)
// 005cbd48: FMUL double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (READ)
// 005cbd4f: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 005cbd52: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xf0] (READ)
// 005cbd56: FMUL double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (READ)
// 005cbd5d: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005cbd61: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (READ)
// 005cbd65: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 005cbd69: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x78] (READ)
// 005cbd70: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 005cbd74: FXCH ST2
// 005cbd76: FSUBP ST5,ST0
// 005cbd78: FSUBP ST3,ST0
// 005cbd7a: FSUBP
// 005cbd7c: FXCH ST2
// 005cbd7e: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xd8] (WRITE)
// 005cbd82: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0xd0] (WRITE)
// 005cbd86: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xd8] (READ)
// 005cbd8a: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0xc8] (WRITE)
// 005cbd8e: MOV dword ptr [EBX],EAX
// 005cbd90: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0xd4] (READ)
// 005cbd94: MOV dword ptr [EBX + 0x4],EAX
// 005cbd97: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0xd0] (READ)
// 005cbd9b: MOV dword ptr [EBX + 0x8],EAX
// 005cbd9e: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0xcc] (READ)
// 005cbda2: MOV dword ptr [EBX + 0xc],EAX
// 005cbda5: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0xc8] (READ)
// 005cbda9: MOV dword ptr [EBX + 0x10],EAX
// 005cbdac: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc4] (READ)
// 005cbdb0: MOV dword ptr [EBX + 0x14],EAX
// 005cbdb3: MOV EAX,dword ptr [ESP + 0xf8]
//   Label: LAB_005cbdb3
//   XREF to: Stack[-0x18] (READ)
// 005cbdba: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005cbdbd: INC EAX
// 005cbdbe: ADD EDX,0x60
// 005cbdc1: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005cbdc8: CMP EAX,ECX
// 005cbdca: JC 0x005cbb79
//   XREF to: 005cbb79 (CONDITIONAL_JUMP)
// 005cbdd0: FLD double ptr [EBX + 0x8]
//   Label: LAB_005cbdd0
// 005cbdd3: FMUL ST0
// 005cbdd5: FLD double ptr [EBX]
// 005cbdd7: FMUL ST0
// 005cbdd9: FADDP
// 005cbddb: FLD double ptr [EBX + 0x10]
// 005cbdde: FMUL ST0
// 005cbde0: FADDP
// 005cbde2: FSQRT
// 005cbde4: FLD double ptr [EBX]
// 005cbde6: FLD1
// 005cbde8: FDIVRP ST2,ST0
// 005cbdea: FMUL ST1
// 005cbdec: FLD double ptr [EBX + 0x8]
// 005cbdef: FMUL ST2
// 005cbdf1: FLD double ptr [EBX + 0x10]
// 005cbdf4: FMULP ST3
// 005cbdf6: MOV EAX,EBX
// 005cbdf8: FXCH
// 005cbdfa: FSTP double ptr [EBX]
// 005cbdfc: FSTP double ptr [EBX + 0x8]
// 005cbdff: FSTP double ptr [EBX + 0x10]
// 005cbe02: MOV ESP,EBP
// 005cbe04: POP EBP
// 005cbe05: POP EDI
// 005cbe06: POP ESI
// 005cbe07: POP EBX
// 005cbe08: RET
// 005cbe09: FLD double ptr [ESP + 0x8]
//   Label: LAB_005cbe09
//   XREF to: Stack[-0x108] (READ)
// 005cbe0d: FCHS
// 005cbe0f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 005cbe12: JMP 0x005cbd13
//   XREF to: 005cbd13 (UNCONDITIONAL_JUMP)
