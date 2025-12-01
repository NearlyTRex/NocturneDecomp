// Name: shape_superopt.cpp_FUN_005cbf90
// Address: 005cbf90
// Address Range: [[005cbf90, 005cc61f]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cbf90()
// Cross-references:
//   shape_superopt.cpp_FUN_005c91e0 (005c91e0) at 005c92d6 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_superopt.cpp_FUN_005d6640

#include "nocturne.h"

undefined4 shape_superopt_cpp_FUN_005cbf90(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  double local_138;
  double local_128;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint local_28;
  
  dVar5 = (double)CONCAT44(uStack_114,local_118);
  if (0.0 <= *in_stack_00000008) {
    local_128 = *in_stack_00000008;
  }
  else {
    local_128 = -*in_stack_00000008;
  }
  if (in_stack_00000008[1] < 0.0) {
    local_138 = -in_stack_00000008[1];
  }
  else {
    local_138 = in_stack_00000008[1];
  }
  if (in_stack_00000008[2] < 0.0) {
    local_120 = -in_stack_00000008[2];
  }
  else {
    local_120 = in_stack_00000008[2];
  }
  if ((local_128 < local_138) || (local_128 < local_120)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((local_138 < local_128) || (local_138 < local_120)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((local_120 < local_128) || (local_120 < local_138)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (in_stack_00000018 != 0) {
    local_28 = in_stack_00000014;
    do {
      if ((local_28 < in_stack_0000000c) ||
         (in_stack_0000000c + in_stack_00000010 * 0x60 <= local_28)) {
        if (bVar2) {
          local_d8 = *(undefined4 *)(local_28 + 0x18);
          uStack_d4 = *(undefined4 *)(local_28 + 0x1c);
          local_d0 = *(undefined4 *)(local_28 + 0x20);
          uStack_cc = *(undefined4 *)(local_28 + 0x24);
        }
        else if (bVar3) {
          local_d8 = *(undefined4 *)(local_28 + 0x10);
          uStack_d4 = *(undefined4 *)(local_28 + 0x14);
          local_d0 = *(undefined4 *)(local_28 + 0x20);
          uStack_cc = *(undefined4 *)(local_28 + 0x24);
        }
        else if (bVar4) {
          local_d8 = *(undefined4 *)(local_28 + 0x10);
          uStack_d4 = *(undefined4 *)(local_28 + 0x14);
          local_d0 = *(undefined4 *)(local_28 + 0x18);
          uStack_cc = *(undefined4 *)(local_28 + 0x1c);
        }
        iVar7 = 0;
        bVar1 = false;
        if (in_stack_00000010 != 0) {
          uVar6 = in_stack_0000000c;
          do {
            if (bVar2) {
              local_f8 = *(undefined4 *)(uVar6 + 0x18);
              uStack_f4 = *(undefined4 *)(uVar6 + 0x1c);
              local_f0 = *(undefined4 *)(uVar6 + 0x20);
              uStack_ec = *(undefined4 *)(uVar6 + 0x24);
              local_e8 = *(undefined4 *)(uVar6 + 0x30);
              uStack_e4 = *(undefined4 *)(uVar6 + 0x34);
              local_e0 = *(undefined4 *)(uVar6 + 0x38);
              uStack_dc = *(undefined4 *)(uVar6 + 0x3c);
            }
            else if (bVar3) {
              local_f8 = *(undefined4 *)(uVar6 + 0x10);
              uStack_f4 = *(undefined4 *)(uVar6 + 0x14);
              local_f0 = *(undefined4 *)(uVar6 + 0x20);
              uStack_ec = *(undefined4 *)(uVar6 + 0x24);
              local_e8 = *(undefined4 *)(uVar6 + 0x28);
              uStack_e4 = *(undefined4 *)(uVar6 + 0x2c);
              local_e0 = *(undefined4 *)(uVar6 + 0x38);
              uStack_dc = *(undefined4 *)(uVar6 + 0x3c);
            }
            else if (bVar4) {
              local_f8 = *(undefined4 *)(uVar6 + 0x10);
              uStack_f4 = *(undefined4 *)(uVar6 + 0x14);
              local_f0 = *(undefined4 *)(uVar6 + 0x18);
              uStack_ec = *(undefined4 *)(uVar6 + 0x1c);
              local_e8 = *(undefined4 *)(uVar6 + 0x28);
              uStack_e4 = *(undefined4 *)(uVar6 + 0x2c);
              local_e0 = *(undefined4 *)(uVar6 + 0x30);
              uStack_dc = *(undefined4 *)(uVar6 + 0x34);
            }
            if ((((double)CONCAT44(uStack_f4,local_f8) != (double)CONCAT44(uStack_d4,local_d8)) ||
                ((double)CONCAT44(uStack_ec,local_f0) != (double)CONCAT44(uStack_cc,local_d0))) &&
               (((double)CONCAT44(uStack_e4,local_e8) != (double)CONCAT44(uStack_d4,local_d8) ||
                ((double)CONCAT44(uStack_dc,local_e0) != (double)CONCAT44(uStack_cc,local_d0))))) {
              dVar8 = (double)shape_superopt_cpp_FUN_005d6640();
              if ((((ulonglong)dVar8 & 0x7fffffff00000000) != 0) || (SUB84(dVar8,0) != 0)) {
                if (bVar1) {
                  if (((dVar5 < 0.0) && (0.0 < dVar8)) || ((0.0 < dVar5 && (dVar8 < 0.0)))) break;
                }
                else {
                  bVar1 = true;
                  dVar5 = dVar8;
                }
              }
            }
            uVar6 = uVar6 + 0x60;
            iVar7 = iVar7 + 1;
          } while (uVar6 < in_stack_0000000c + in_stack_00000010 * 0x60);
        }
        if (iVar7 == in_stack_00000010) {
          return 1;
        }
      }
      local_28 = local_28 + 0x60;
    } while (local_28 < in_stack_00000014 + in_stack_00000018 * 0x60);
  }
  return 0;
}


// Assembly code:
// 005cbf90: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cbf90
// 005cbf91: PUSH ESI
// 005cbf92: PUSH EDI
// 005cbf93: PUSH EBP
// 005cbf94: MOV EBP,ESP
// 005cbf96: SUB ESP,0x124
// 005cbf9c: AND ESP,0xfffffff8
// 005cbf9f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cbfa2: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005cbfa5: MOV ESI,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005cbfa8: FLDZ
// 005cbfaa: FCOMP double ptr [EBX]
// 005cbfac: FNSTSW AX
// 005cbfae: SAHF
// 005cbfaf: JBE 0x005cc122
//   XREF to: 005cc122 (CONDITIONAL_JUMP)
// 005cbfb5: FLD double ptr [EBX]
// 005cbfb7: FCHS
// 005cbfb9: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x128] (WRITE)
// 005cbfbd: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005cbfbd
//   XREF to: Stack[-0x128] (READ)
// 005cbfc1: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005cbfc5: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x124] (READ)
// 005cbfc9: FLDZ
// 005cbfcb: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005cbfcf: FCOMP double ptr [EBX + 0x8]
// 005cbfd2: FNSTSW AX
// 005cbfd4: SAHF
// 005cbfd5: JA 0x005cc134
//   XREF to: 005cc134 (CONDITIONAL_JUMP)
// 005cbfdb: MOV EAX,dword ptr [EBX + 0x8]
// 005cbfde: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x138] (DATA)
// 005cbfe1: MOV EAX,dword ptr [EBX + 0xc]
// 005cbfe4: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 005cbfe8: MOV EAX,dword ptr [ESP]
//   Label: LAB_005cbfe8
//   XREF to: Stack[-0x138] (DATA)
// 005cbfeb: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005cbfef: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x134] (READ)
// 005cbff3: FLDZ
// 005cbff5: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 005cbff9: FCOMP double ptr [EBX + 0x10]
// 005cbffc: FNSTSW AX
// 005cbffe: SAHF
// 005cbfff: JA 0x005cc141
//   XREF to: 005cc141 (CONDITIONAL_JUMP)
// 005cc005: MOV EAX,dword ptr [EBX + 0x10]
// 005cc008: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005cc00c: MOV EAX,dword ptr [EBX + 0x14]
// 005cc00f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005cc013: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005cc013
//   XREF to: Stack[-0x120] (READ)
// 005cc017: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005cc01b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x11c] (READ)
// 005cc01f: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x108] (READ)
// 005cc023: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 005cc027: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x100] (READ)
// 005cc02b: FNSTSW AX
// 005cc02d: SAHF
// 005cc02e: JC 0x005cc14f
//   XREF to: 005cc14f (CONDITIONAL_JUMP)
// 005cc034: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x108] (READ)
// 005cc038: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x120] (READ)
// 005cc03c: FNSTSW AX
// 005cc03e: SAHF
// 005cc03f: JC 0x005cc14f
//   XREF to: 005cc14f (CONDITIONAL_JUMP)
// 005cc045: MOV EAX,0x1
// 005cc04a: FLD double ptr [ESP + 0x38]
//   Label: LAB_005cc04a
//   XREF to: Stack[-0x100] (READ)
// 005cc04e: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005cc055: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x108] (READ)
// 005cc059: FNSTSW AX
// 005cc05b: SAHF
// 005cc05c: JC 0x005cc156
//   XREF to: 005cc156 (CONDITIONAL_JUMP)
// 005cc062: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x100] (READ)
// 005cc066: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x110] (READ)
// 005cc06a: FNSTSW AX
// 005cc06c: SAHF
// 005cc06d: JC 0x005cc156
//   XREF to: 005cc156 (CONDITIONAL_JUMP)
// 005cc073: MOV EAX,0x1
// 005cc078: FLD double ptr [ESP + 0x28]
//   Label: LAB_005cc078
//   XREF to: Stack[-0x110] (READ)
// 005cc07c: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005cc083: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x108] (READ)
// 005cc087: FNSTSW AX
// 005cc089: SAHF
// 005cc08a: JC 0x005cc15d
//   XREF to: 005cc15d (CONDITIONAL_JUMP)
// 005cc090: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x110] (READ)
// 005cc094: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x100] (READ)
// 005cc098: FNSTSW AX
// 005cc09a: SAHF
// 005cc09b: JC 0x005cc15d
//   XREF to: 005cc15d (CONDITIONAL_JUMP)
// 005cc0a1: MOV EAX,0x1
// 005cc0a6: MOV dword ptr [ESP + 0x118],EAX
//   Label: LAB_005cc0a6
//   XREF to: Stack[-0x20] (WRITE)
// 005cc0ad: TEST ESI,ESI
// 005cc0af: JBE 0x005cc119
//   XREF to: 005cc119 (CONDITIONAL_JUMP)
// 005cc0b1: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005cc0b4: LEA EAX,[EBX*0x4 + 0x0]
// 005cc0bb: SUB EAX,EBX
// 005cc0bd: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cc0c0: SHL EAX,0x5
// 005cc0c3: ADD EBX,EAX
// 005cc0c5: LEA EAX,[ESI*0x4 + 0x0]
// 005cc0cc: SUB EAX,ESI
// 005cc0ce: SHL EAX,0x5
// 005cc0d1: MOV dword ptr [ESP + 0x110],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005cc0d8: ADD EDI,EAX
// 005cc0da: MOV dword ptr [ESP + 0x10c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 005cc0e1: MOV dword ptr [ESP + 0x108],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005cc0e8: MOV EAX,dword ptr [ESP + 0x110]
//   Label: LAB_005cc0e8
//   XREF to: Stack[-0x28] (READ)
// 005cc0ef: CMP EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cc0f2: JC 0x005cc164
//   XREF to: 005cc164 (CONDITIONAL_JUMP)
// 005cc0f4: CMP EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 005cc0fb: JNC 0x005cc164
//   XREF to: 005cc164 (CONDITIONAL_JUMP)
// 005cc0fd: MOV EDX,dword ptr [ESP + 0x110]
//   Label: LAB_005cc0fd
//   XREF to: Stack[-0x28] (READ)
// 005cc104: ADD EDX,0x60
// 005cc107: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (READ)
// 005cc10e: MOV dword ptr [ESP + 0x110],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005cc115: CMP EDX,ECX
// 005cc117: JC 0x005cc0e8
//   XREF to: 005cc0e8 (CONDITIONAL_JUMP)
// 005cc119: XOR EAX,EAX
//   Label: LAB_005cc119
// 005cc11b: MOV ESP,EBP
// 005cc11d: POP EBP
// 005cc11e: POP EDI
// 005cc11f: POP ESI
// 005cc120: POP EBX
// 005cc121: RET
// 005cc122: MOV EAX,dword ptr [EBX]
//   Label: LAB_005cc122
// 005cc124: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005cc128: MOV EAX,dword ptr [EBX + 0x4]
// 005cc12b: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005cc12f: JMP 0x005cbfbd
//   XREF to: 005cbfbd (UNCONDITIONAL_JUMP)
// 005cc134: FLD double ptr [EBX + 0x8]
//   Label: LAB_005cc134
// 005cc137: FCHS
// 005cc139: FSTP double ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 005cc13c: JMP 0x005cbfe8
//   XREF to: 005cbfe8 (UNCONDITIONAL_JUMP)
// 005cc141: FLD double ptr [EBX + 0x10]
//   Label: LAB_005cc141
// 005cc144: FCHS
// 005cc146: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x120] (WRITE)
// 005cc14a: JMP 0x005cc013
//   XREF to: 005cc013 (UNCONDITIONAL_JUMP)
// 005cc14f: XOR EAX,EAX
//   Label: LAB_005cc14f
// 005cc151: JMP 0x005cc04a
//   XREF to: 005cc04a (UNCONDITIONAL_JUMP)
// 005cc156: XOR EAX,EAX
//   Label: LAB_005cc156
// 005cc158: JMP 0x005cc078
//   XREF to: 005cc078 (UNCONDITIONAL_JUMP)
// 005cc15d: XOR EAX,EAX
//   Label: LAB_005cc15d
// 005cc15f: JMP 0x005cc0a6
//   XREF to: 005cc0a6 (UNCONDITIONAL_JUMP)
// 005cc164: CMP dword ptr [ESP + 0x120],0x0
//   Label: LAB_005cc164
//   XREF to: Stack[-0x18] (READ)
// 005cc16c: JZ 0x005cc341
//   XREF to: 005cc341 (CONDITIONAL_JUMP)
// 005cc172: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc179: MOV EAX,dword ptr [EAX + 0x18]
// 005cc17c: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005cc180: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc187: MOV EAX,dword ptr [EAX + 0x1c]
// 005cc18a: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005cc18e: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc195: MOV EAX,dword ptr [EAX + 0x20]
// 005cc198: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005cc19f: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc1a6: MOV EAX,dword ptr [EAX + 0x24]
// 005cc1a9: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005cc1b0: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0xc8] (READ)
// 005cc1b4: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005cc1b8: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0xc4] (READ)
// 005cc1bc: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005cc1c0: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x78] (READ)
// 005cc1c7: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005cc1cb: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x74] (READ)
// 005cc1d2: MOV dword ptr [ESP + 0x6c],EAX
//   Label: LAB_005cc1d2
//   XREF to: Stack[-0xcc] (WRITE)
// 005cc1d6: MOV ECX,dword ptr [EBP + 0x20]
//   Label: LAB_005cc1d6
//   XREF to: Stack[0x10] (READ)
// 005cc1d9: XOR ESI,ESI
// 005cc1db: XOR EDI,EDI
// 005cc1dd: TEST ECX,ECX
// 005cc1df: JBE 0x005cc32c
//   XREF to: 005cc32c (CONDITIONAL_JUMP)
// 005cc1e5: IMUL EAX,ECX,0x60
// 005cc1e8: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cc1eb: LEA EDX,[EBX + EAX*0x1]
// 005cc1ee: MOV dword ptr [ESP + 0x114],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005cc1f5: CMP dword ptr [ESP + 0x120],0x0
//   Label: LAB_005cc1f5
//   XREF to: Stack[-0x18] (READ)
// 005cc1fd: JZ 0x005cc43b
//   XREF to: 005cc43b (CONDITIONAL_JUMP)
// 005cc203: MOV EAX,dword ptr [EBX + 0x18]
// 005cc206: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005cc20d: MOV EAX,dword ptr [EBX + 0x1c]
// 005cc210: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005cc217: MOV EAX,dword ptr [EBX + 0x20]
// 005cc21a: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005cc221: MOV EAX,dword ptr [EBX + 0x24]
// 005cc224: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005cc22b: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x58] (READ)
// 005cc232: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005cc236: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x54] (READ)
// 005cc23d: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cc241: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (READ)
// 005cc248: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cc24c: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (READ)
// 005cc253: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005cc257: MOV EAX,dword ptr [EBX + 0x30]
// 005cc25a: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005cc261: MOV EAX,dword ptr [EBX + 0x34]
// 005cc264: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005cc26b: MOV EAX,dword ptr [EBX + 0x38]
// 005cc26e: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005cc275: MOV EAX,dword ptr [EBX + 0x3c]
// 005cc278: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005cc27f: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x40] (READ)
// 005cc286: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005cc28a: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x3c] (READ)
// 005cc291: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005cc295: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x70] (READ)
// 005cc29c: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005cc2a0: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x6c] (READ)
// 005cc2a7: MOV dword ptr [ESP + 0x5c],EAX
//   Label: LAB_005cc2a7
//   XREF to: Stack[-0xdc] (WRITE)
// 005cc2ab: FLD double ptr [ESP + 0x40]
//   Label: LAB_005cc2ab
//   XREF to: Stack[-0xf8] (READ)
// 005cc2af: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0xd8] (READ)
// 005cc2b3: FNSTSW AX
// 005cc2b5: SAHF
// 005cc2b6: JZ 0x005cc59d
//   XREF to: 005cc59d (CONDITIONAL_JUMP)
// 005cc2bc: FLD double ptr [ESP + 0x50]
//   Label: LAB_005cc2bc
//   XREF to: Stack[-0xe8] (READ)
// 005cc2c0: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0xd8] (READ)
// 005cc2c4: FNSTSW AX
// 005cc2c6: SAHF
// 005cc2c7: JZ 0x005cc5b3
//   XREF to: 005cc5b3 (CONDITIONAL_JUMP)
// 005cc2cd: LEA EAX,[ESP + 0x60]
//   Label: LAB_005cc2cd
//   XREF to: Stack[-0xd8] (DATA)
// 005cc2d1: PUSH EAX
// 005cc2d2: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0xe8] (DATA)
// 005cc2d6: PUSH EAX
// 005cc2d7: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0xf8] (DATA)
// 005cc2db: PUSH EAX
// 005cc2dc: CALL shape_superopt.cpp_FUN_005d6640
//   XREF to: 005d6640 (UNCONDITIONAL_CALL)
// 005cc2e1: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005cc2e8: MOV dword ptr [ESP + 0xa8],EDX
//   XREF to: Stack[-0x9c] (WRITE)
// 005cc2ef: FLD double ptr [ESP + 0xa4]
//   XREF to: Stack[-0xa0] (READ)
// 005cc2f6: ADD ESP,0xc
// 005cc2f9: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x130] (WRITE)
// 005cc2fd: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x12c] (READ)
// 005cc301: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x130] (READ)
// 005cc305: TEST ECX,0x7fffffff
// 005cc30b: JNZ 0x005cc5c9
//   XREF to: 005cc5c9 (CONDITIONAL_JUMP)
// 005cc311: TEST EAX,EAX
// 005cc313: JNZ 0x005cc5c9
//   XREF to: 005cc5c9 (CONDITIONAL_JUMP)
// 005cc319: MOV EAX,dword ptr [ESP + 0x114]
//   Label: LAB_005cc319
//   XREF to: Stack[-0x24] (READ)
// 005cc320: ADD EBX,0x60
// 005cc323: INC ESI
// 005cc324: CMP EBX,EAX
// 005cc326: JC 0x005cc1f5
//   XREF to: 005cc1f5 (CONDITIONAL_JUMP)
// 005cc32c: CMP ESI,dword ptr [EBP + 0x20]
//   Label: LAB_005cc32c
//   XREF to: Stack[0x10] (READ)
// 005cc32f: JNZ 0x005cc0fd
//   XREF to: 005cc0fd (CONDITIONAL_JUMP)
// 005cc335: MOV EAX,0x1
// 005cc33a: MOV ESP,EBP
// 005cc33c: POP EBP
// 005cc33d: POP EDI
// 005cc33e: POP ESI
// 005cc33f: POP EBX
// 005cc340: RET
// 005cc341: CMP dword ptr [ESP + 0x11c],0x0
//   Label: LAB_005cc341
//   XREF to: Stack[-0x1c] (READ)
// 005cc349: JZ 0x005cc3bc
//   XREF to: 005cc3bc (CONDITIONAL_JUMP)
// 005cc34b: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc352: MOV EAX,dword ptr [EAX + 0x10]
// 005cc355: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005cc35c: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc363: MOV EAX,dword ptr [EAX + 0x14]
// 005cc366: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005cc36d: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc374: MOV EAX,dword ptr [EAX + 0x20]
// 005cc377: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005cc37e: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc385: MOV EAX,dword ptr [EAX + 0x24]
// 005cc388: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005cc38f: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x98] (READ)
// 005cc396: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005cc39a: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x94] (READ)
// 005cc3a1: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005cc3a5: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x90] (READ)
// 005cc3ac: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005cc3b0: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x8c] (READ)
// 005cc3b7: JMP 0x005cc1d2
//   XREF to: 005cc1d2 (UNCONDITIONAL_JUMP)
// 005cc3bc: CMP dword ptr [ESP + 0x118],0x0
//   Label: LAB_005cc3bc
//   XREF to: Stack[-0x20] (READ)
// 005cc3c4: JZ 0x005cc1d6
//   XREF to: 005cc1d6 (CONDITIONAL_JUMP)
// 005cc3ca: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc3d1: MOV EAX,dword ptr [EAX + 0x10]
// 005cc3d4: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005cc3db: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc3e2: MOV EAX,dword ptr [EAX + 0x14]
// 005cc3e5: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005cc3ec: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc3f3: MOV EAX,dword ptr [EAX + 0x18]
// 005cc3f6: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005cc3fd: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005cc404: MOV EAX,dword ptr [EAX + 0x1c]
// 005cc407: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005cc40e: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x50] (READ)
// 005cc415: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005cc419: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x4c] (READ)
// 005cc420: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005cc424: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x80] (READ)
// 005cc42b: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005cc42f: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x7c] (READ)
// 005cc436: JMP 0x005cc1d2
//   XREF to: 005cc1d2 (UNCONDITIONAL_JUMP)
// 005cc43b: CMP dword ptr [ESP + 0x11c],0x0
//   Label: LAB_005cc43b
//   XREF to: Stack[-0x1c] (READ)
// 005cc443: JZ 0x005cc4e6
//   XREF to: 005cc4e6 (CONDITIONAL_JUMP)
// 005cc449: MOV EAX,dword ptr [EBX + 0x10]
// 005cc44c: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005cc453: MOV EAX,dword ptr [EBX + 0x14]
// 005cc456: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005cc45d: MOV EAX,dword ptr [EBX + 0x20]
// 005cc460: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005cc467: MOV EAX,dword ptr [EBX + 0x24]
// 005cc46a: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005cc471: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x68] (READ)
// 005cc478: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005cc47c: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x64] (READ)
// 005cc483: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cc487: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0xb8] (READ)
// 005cc48e: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cc492: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0xb4] (READ)
// 005cc499: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005cc49d: MOV EAX,dword ptr [EBX + 0x28]
// 005cc4a0: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005cc4a4: MOV EAX,dword ptr [EBX + 0x2c]
// 005cc4a7: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005cc4ab: MOV EAX,dword ptr [EBX + 0x38]
// 005cc4ae: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005cc4b5: MOV EAX,dword ptr [EBX + 0x3c]
// 005cc4b8: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005cc4bf: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xc0] (READ)
// 005cc4c3: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005cc4c7: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0xbc] (READ)
// 005cc4cb: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005cc4cf: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x88] (READ)
// 005cc4d6: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005cc4da: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x84] (READ)
// 005cc4e1: JMP 0x005cc2a7
//   XREF to: 005cc2a7 (UNCONDITIONAL_JUMP)
// 005cc4e6: CMP dword ptr [ESP + 0x118],0x0
//   Label: LAB_005cc4e6
//   XREF to: Stack[-0x20] (READ)
// 005cc4ee: JZ 0x005cc2ab
//   XREF to: 005cc2ab (CONDITIONAL_JUMP)
// 005cc4f4: MOV EAX,dword ptr [EBX + 0x10]
// 005cc4f7: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005cc4fe: MOV EAX,dword ptr [EBX + 0x14]
// 005cc501: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005cc508: MOV EAX,dword ptr [EBX + 0x18]
// 005cc50b: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005cc512: MOV EAX,dword ptr [EBX + 0x1c]
// 005cc515: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005cc51c: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0xb0] (READ)
// 005cc523: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005cc527: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0xac] (READ)
// 005cc52e: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cc532: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x48] (READ)
// 005cc539: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cc53d: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x44] (READ)
// 005cc544: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005cc548: MOV EAX,dword ptr [EBX + 0x28]
// 005cc54b: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005cc552: MOV EAX,dword ptr [EBX + 0x2c]
// 005cc555: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005cc55c: MOV EAX,dword ptr [EBX + 0x30]
// 005cc55f: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005cc566: MOV EAX,dword ptr [EBX + 0x34]
// 005cc569: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005cc570: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x60] (READ)
// 005cc577: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005cc57b: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x5c] (READ)
// 005cc582: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005cc586: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0xa8] (READ)
// 005cc58d: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005cc591: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0xa4] (READ)
// 005cc598: JMP 0x005cc2a7
//   XREF to: 005cc2a7 (UNCONDITIONAL_JUMP)
// 005cc59d: FLD double ptr [ESP + 0x48]
//   Label: LAB_005cc59d
//   XREF to: Stack[-0xf0] (READ)
// 005cc5a1: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0xd0] (READ)
// 005cc5a5: FNSTSW AX
// 005cc5a7: SAHF
// 005cc5a8: JZ 0x005cc319
//   XREF to: 005cc319 (CONDITIONAL_JUMP)
// 005cc5ae: JMP 0x005cc2bc
//   XREF to: 005cc2bc (UNCONDITIONAL_JUMP)
// 005cc5b3: FLD double ptr [ESP + 0x58]
//   Label: LAB_005cc5b3
//   XREF to: Stack[-0xe0] (READ)
// 005cc5b7: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0xd0] (READ)
// 005cc5bb: FNSTSW AX
// 005cc5bd: SAHF
// 005cc5be: JZ 0x005cc319
//   XREF to: 005cc319 (CONDITIONAL_JUMP)
// 005cc5c4: JMP 0x005cc2cd
//   XREF to: 005cc2cd (UNCONDITIONAL_JUMP)
// 005cc5c9: TEST EDI,EDI
//   Label: LAB_005cc5c9
// 005cc5cb: JZ 0x005cc60a
//   XREF to: 005cc60a (CONDITIONAL_JUMP)
// 005cc5cd: FLDZ
// 005cc5cf: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x118] (READ)
// 005cc5d3: FNSTSW AX
// 005cc5d5: SAHF
// 005cc5d6: JBE 0x005cc5e7
//   XREF to: 005cc5e7 (CONDITIONAL_JUMP)
// 005cc5d8: FLDZ
// 005cc5da: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x130] (READ)
// 005cc5de: FNSTSW AX
// 005cc5e0: SAHF
// 005cc5e1: JC 0x005cc32c
//   XREF to: 005cc32c (CONDITIONAL_JUMP)
// 005cc5e7: FLDZ
//   Label: LAB_005cc5e7
// 005cc5e9: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x118] (READ)
// 005cc5ed: FNSTSW AX
// 005cc5ef: SAHF
// 005cc5f0: JNC 0x005cc319
//   XREF to: 005cc319 (CONDITIONAL_JUMP)
// 005cc5f6: FLDZ
// 005cc5f8: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x130] (READ)
// 005cc5fc: FNSTSW AX
// 005cc5fe: SAHF
// 005cc5ff: JA 0x005cc32c
//   XREF to: 005cc32c (CONDITIONAL_JUMP)
// 005cc605: JMP 0x005cc319
//   XREF to: 005cc319 (UNCONDITIONAL_JUMP)
// 005cc60a: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005cc60a
//   XREF to: Stack[-0x130] (READ)
// 005cc60e: MOV EDI,0x1
// 005cc613: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x114] (WRITE)
// 005cc617: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005cc61b: JMP 0x005cc319
//   XREF to: 005cc319 (UNCONDITIONAL_JUMP)
