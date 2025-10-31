// Name: crt_unknown.c_FUN_0060defc
// Address: 0060defc
// Address Range: [[0060defc, 0060e0b8]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060defc()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060be80 (0060be80) at 0060bed8 [UNCONDITIONAL_CALL]
// Globals:
//   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
//   undefined1 DAT_00684acd
// Function calls:
//   crt_unknown.c_FUN_0060eb57

#include "nocturne.h"

double crt_unknown_c_FUN_0060defc(uint param_1,uint param_2,uint unaff_EBX,uint param_4)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  bool bVar15;
  double dVar16;
  int iVar7;
  
  uVar5 = param_4 ^ 0x80000000;
  if (unaff_EBX == 0) {
    bVar15 = CARRY4(uVar5,uVar5);
    uVar6 = param_1;
    uVar5 = param_2;
    if ((param_4 & 0x7fffffff) == 0) goto LAB_0060df18;
    uVar5 = param_4 & 0x7fffffff | (uint)bVar15 << 0x1f;
  }
  if (param_1 == 0) {
    uVar6 = unaff_EBX;
    if ((param_2 & 0x7fffffff) == 0) {
LAB_0060df18:
      return (double)CONCAT44(uVar5,uVar6);
    }
    param_2 = param_2 & 0x7fffffff | (uint)CARRY4(param_2,param_2) << 0x1f;
  }
  if (DAT_00684acd != '\0') {
    dVar16 = (double)CONCAT44(param_2,param_1) + (double)CONCAT44(uVar5,unaff_EBX);
    if ((int)((ulonglong)dVar16 >> 0x20) == -0x80000000) {
      dVar16 = 0.0;
    }
    return dVar16;
  }
  sVar4 = (short)(param_2 >> 0x10);
  uVar6 = (int)uVar5 >> 0x14 & 0x800007ff;
  sVar2 = (short)(uVar6 >> 0x10) + (sVar4 >> 0xf & 0x8000U);
  uVar13 = sVar4 >> 4 & 0x7ff;
  uVar3 = (ushort)((int)uVar5 >> 0x14) & 0x7ff;
  uVar8 = param_2 & 0xfffff;
  uVar5 = uVar5 & 0xfffff;
  if (uVar13 != 0) {
    uVar8 = uVar8 | 0x100000;
  }
  if (uVar3 != 0) {
    uVar5 = uVar5 | 0x100000;
  }
  uVar14 = param_1 * 2;
  uVar9 = uVar8 * 2 + (uint)CARRY4(param_1,param_1);
  uVar8 = unaff_EBX * 2;
  uVar12 = uVar5 * 2 + (uint)CARRY4(unaff_EBX,unaff_EBX);
  sVar4 = uVar3 - uVar13;
  iVar7 = CONCAT22(sVar2,sVar4);
  uVar5 = uVar14;
  uVar10 = uVar9;
  if (sVar4 != 0) {
    if (uVar3 < uVar13) {
      iVar7 = CONCAT22(sVar2,-sVar4);
      uVar5 = uVar8;
      uVar10 = uVar12;
      uVar8 = uVar14;
      uVar6 = (int)param_2 >> 0x14 & 0x800007ff;
      uVar12 = uVar9;
    }
    if (0x36 < (ushort)iVar7) {
      return (double)CONCAT44(uVar12 >> 1 & 0x800fffff | (uint)CARRY4(uVar6,uVar6) << 0x1f |
                              uVar6 << 0x14,uVar8 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f);
    }
  }
  if (iVar7 < 0) {
    bVar15 = uVar8 != 0;
    uVar8 = -uVar8;
    uVar12 = -(uint)bVar15 - uVar12;
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar14 = 0;
  bVar1 = (byte)iVar7;
  if (bVar1 != 0) {
    uVar9 = uVar10;
    if (0x1f < bVar1) {
      uVar14 = (uint)(uVar5 != 0);
      uVar9 = 0;
      uVar5 = uVar10;
    }
    uVar14 = uVar14 | 0U >> (bVar1 & 0x1f) | uVar5 << 0x20 - (bVar1 & 0x1f);
    uVar5 = uVar5 >> (bVar1 & 0x1f) | uVar9 << 0x20 - (bVar1 & 0x1f);
    uVar10 = uVar9 >> (bVar1 & 0x1f) | 0 << 0x20 - (bVar1 & 0x1f);
  }
  uVar9 = uVar5 + uVar8;
  uVar5 = uVar10 + uVar12 + (uint)CARRY4(uVar5,uVar8);
  if ((int)uVar5 < 0) {
    if (0x34 < bVar1) {
      uVar8 = (uint)((uVar14 & 0x7fffffff) != 0);
      bVar15 = CARRY4(uVar9,uVar8);
      uVar9 = uVar9 + uVar8;
      uVar5 = uVar5 + bVar15;
    }
    bVar15 = uVar9 != 0;
    uVar9 = -uVar9;
    uVar5 = -(uint)bVar15 - uVar5;
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar8 = uVar9 | uVar5;
  if (uVar8 != 0) {
    if ((short)uVar6 == 0) {
LAB_0060e0a5:
      return (double)CONCAT44(uVar5 >> 1 | (uint)CARRY4(uVar6,uVar6) << 0x1f,
                              uVar9 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f);
    }
    while( true ) {
      uVar11 = (undefined2)(uVar6 >> 0x10);
      if ((uVar5 & 0x7fe00000) != 0) break;
      sVar4 = (short)uVar6 + -1;
      uVar6 = CONCAT22(uVar11,sVar4);
      if (sVar4 == 0) goto LAB_0060e0a5;
      bVar15 = CARRY4(uVar9,uVar9);
      uVar9 = uVar9 * 2;
      uVar5 = uVar5 * 2 + (uint)bVar15;
    }
    if ((uVar5 & 0x400000) != 0) {
      uVar12 = uVar5 & 1;
      uVar5 = uVar5 >> 1;
      uVar10 = uVar9 & 1;
      uVar9 = uVar9 >> 1 | (uint)(uVar12 != 0) << 0x1f;
      uVar14 = uVar14 + (uVar10 != 0);
      sVar4 = (short)uVar6 + 1;
      uVar6 = CONCAT22(uVar11,sVar4);
      if (sVar4 == 0x7ff) goto LAB_0060e0af;
    }
    uVar12 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    uVar10 = uVar9 & 1;
    uVar9 = uVar9 >> 1 | (uint)(uVar12 != 0) << 0x1f;
    if (uVar10 != 0) {
      uVar14 = CONCAT31((int3)(uVar8 >> 8),uVar14 != 0) | uVar9;
      uVar8 = uVar14 >> 1;
      uVar14 = (uint)((uVar14 & 1) != 0);
      bVar15 = CARRY4(uVar9,uVar14);
      uVar9 = uVar9 + uVar14;
      uVar5 = uVar5 + bVar15;
      if ((uVar5 & 0x200000) != 0) {
        uVar14 = uVar5 & 1;
        uVar5 = uVar5 >> 1;
        uVar9 = uVar9 >> 1 | (uint)(uVar14 != 0) << 0x1f;
        sVar4 = (short)uVar6 + 1;
        uVar6 = CONCAT22((short)(uVar6 >> 0x10),sVar4);
        if (sVar4 == 0x7ff) {
LAB_0060e0af:
          dVar16 = (double)crt_unknown_c_FUN_0060eb57(uVar6,uVar5,uVar8);
          return dVar16;
        }
      }
    }
    uVar5 = uVar5 & 0xfffff | (uVar6 << 0x15) >> 1 | (uint)CARRY4(uVar6,uVar6) << 0x1f;
  }
  return (double)CONCAT44(uVar5,uVar9);
}


// Assembly code:
// 0060defc: XOR ECX,0x80000000
//   Label: crt_unknown.c_FUN_0060defc
// 0060df02: OR EBX,EBX
// 0060df04: JNZ 0x0060df0c
//   XREF to: 0060df0c (CONDITIONAL_JUMP)
// 0060df06: ADD ECX,ECX
// 0060df08: JZ 0x0060df18
//   XREF to: 0060df18 (CONDITIONAL_JUMP)
// 0060df0a: RCR ECX,0x1
// 0060df0c: OR EAX,EAX
//   Label: LAB_0060df0c
// 0060df0e: JNZ 0x0060df1b
//   XREF to: 0060df1b (CONDITIONAL_JUMP)
// 0060df10: ADD EDX,EDX
// 0060df12: JNZ 0x0060df19
//   XREF to: 0060df19 (CONDITIONAL_JUMP)
// 0060df14: MOV EDX,ECX
// 0060df16: MOV EAX,EBX
// 0060df18: RET
//   Label: LAB_0060df18
// 0060df19: RCR EDX,0x1
//   Label: LAB_0060df19
// 0060df1b: CMP byte ptr [0x00684acd],0x0
//   Label: LAB_0060df1b
//   XREF to: 00684acd (READ)
// 0060df22: JZ 0x0060df45
//   XREF to: 0060df45 (CONDITIONAL_JUMP)
// 0060df24: PUSH EDX
// 0060df25: PUSH EAX
// 0060df26: FLD double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0060df29: PUSH ECX
// 0060df2a: PUSH EBX
// 0060df2b: FADD double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0060df2e: FSTP double ptr [ESP + 0x8]
//   Label: LAB_0060df2e
//   XREF to: Stack[-0x8] (WRITE)
// 0060df32: ADD ESP,0x8
// 0060df35: WAIT
// 0060df36: POP EAX
// 0060df37: POP EDX
// 0060df38: CMP EDX,0x80000000
// 0060df3e: JNZ 0x0060df44
//   XREF to: 0060df44 (CONDITIONAL_JUMP)
// 0060df40: SUB EDX,EDX
// 0060df42: MOV EAX,EDX
// 0060df44: RET
//   Label: LAB_0060df44
// 0060df45: PUSH EBP
//   Label: LAB_0060df45
// 0060df46: PUSH EDI
// 0060df47: PUSH ESI
// 0060df48: MOV EDI,EDX
// 0060df4a: MOV ESI,ECX
// 0060df4c: SAR EDI,0x14
// 0060df4f: SAR ECX,0x14
// 0060df52: AND EDI,0x800007ff
// 0060df58: AND ECX,0x800007ff
// 0060df5e: MOV EBP,ECX
// 0060df60: ROL EDI,0x10
// 0060df63: ROL ECX,0x10
// 0060df66: ADD CX,DI
// 0060df69: ROL EDI,0x10
// 0060df6c: ROL ECX,0x10
// 0060df6f: AND EDX,0xfffff
// 0060df75: AND ESI,0xfffff
// 0060df7b: OR DI,DI
// 0060df7e: JZ 0x0060df86
//   XREF to: 0060df86 (CONDITIONAL_JUMP)
// 0060df80: OR EDX,0x100000
// 0060df86: OR CX,CX
//   Label: LAB_0060df86
// 0060df89: JZ 0x0060df91
//   XREF to: 0060df91 (CONDITIONAL_JUMP)
// 0060df8b: OR ESI,0x100000
// 0060df91: ADD EAX,EAX
//   Label: LAB_0060df91
// 0060df93: ADC EDX,EDX
// 0060df95: ADD EBX,EBX
// 0060df97: ADC ESI,ESI
// 0060df99: SUB CX,DI
// 0060df9c: JZ 0x0060dfcd
//   XREF to: 0060dfcd (CONDITIONAL_JUMP)
// 0060df9e: JNC 0x0060dfa8
//   XREF to: 0060dfa8 (CONDITIONAL_JUMP)
// 0060dfa0: MOV EBP,EDI
// 0060dfa2: NEG CX
// 0060dfa5: XCHG EAX,EBX
// 0060dfa6: XCHG EDX,ESI
// 0060dfa8: CMP CX,0x36
//   Label: LAB_0060dfa8
// 0060dfac: JBE 0x0060dfcd
//   XREF to: 0060dfcd (CONDITIONAL_JUMP)
// 0060dfae: MOV EDX,ESI
// 0060dfb0: MOV EAX,EBX
// 0060dfb2: ADD EBP,EBP
// 0060dfb4: RCR EDX,0x1
// 0060dfb6: RCR EAX,0x1
// 0060dfb8: AND EDX,0x800fffff
// 0060dfbe: ROR EBP,0xd
// 0060dfc1: AND EBP,0x7ff00000
// 0060dfc7: OR EDX,EBP
// 0060dfc9: POP ESI
// 0060dfca: POP EDI
// 0060dfcb: POP EBP
// 0060dfcc: RET
// 0060dfcd: OR ECX,ECX
//   Label: LAB_0060dfcd
// 0060dfcf: JNS 0x0060dfde
//   XREF to: 0060dfde (CONDITIONAL_JUMP)
// 0060dfd1: NEG ESI
// 0060dfd3: NEG EBX
// 0060dfd5: SBB ESI,0x0
// 0060dfd8: XOR EBP,0x80000000
// 0060dfde: SUB EDI,EDI
//   Label: LAB_0060dfde
// 0060dfe0: CMP CL,0x0
// 0060dfe3: JZ 0x0060e008
//   XREF to: 0060e008 (CONDITIONAL_JUMP)
// 0060dfe5: PUSH EBX
// 0060dfe6: SUB EBX,EBX
// 0060dfe8: CMP CL,0x20
// 0060dfeb: JC 0x0060dffa
//   XREF to: 0060dffa (CONDITIONAL_JUMP)
// 0060dfed: OR EAX,EAX
// 0060dfef: SETNZ BL
// 0060dff2: MOV EDI,EBX
// 0060dff4: SUB EBX,EBX
// 0060dff6: MOV EAX,EDX
// 0060dff8: SUB EDX,EDX
// 0060dffa: SHRD EBX,EAX,CL
//   Label: LAB_0060dffa
// 0060dffd: OR EDI,EBX
// 0060dfff: SUB EBX,EBX
// 0060e001: SHRD EAX,EDX,CL
// 0060e004: SHRD EDX,EBX,CL
// 0060e007: POP EBX
// 0060e008: ADD EAX,EBX
//   Label: LAB_0060e008
// 0060e00a: ADC EDX,ESI
// 0060e00c: JNS 0x0060e031
//   XREF to: 0060e031 (CONDITIONAL_JUMP)
// 0060e00e: CMP CL,0x35
// 0060e011: JC 0x0060e024
//   XREF to: 0060e024 (CONDITIONAL_JUMP)
// 0060e013: TEST EDI,0x7fffffff
// 0060e019: SETNZ BL
// 0060e01c: SHR EBX,0x1
// 0060e01e: ADC EAX,0x0
// 0060e021: ADC EDX,0x0
// 0060e024: NEG EDX
//   Label: LAB_0060e024
// 0060e026: NEG EAX
// 0060e028: SBB EDX,0x0
// 0060e02b: XOR EBP,0x80000000
// 0060e031: MOV EBX,EAX
//   Label: LAB_0060e031
// 0060e033: OR EBX,EDX
// 0060e035: JZ 0x0060e0a1
//   XREF to: 0060e0a1 (CONDITIONAL_JUMP)
// 0060e037: OR BP,BP
// 0060e03a: JZ 0x0060e0a5
//   XREF to: 0060e0a5 (CONDITIONAL_JUMP)
// 0060e03c: TEST EDX,0x7fe00000
//   Label: LAB_0060e03c
// 0060e042: JNZ 0x0060e04e
//   XREF to: 0060e04e (CONDITIONAL_JUMP)
// 0060e044: DEC BP
// 0060e046: JZ 0x0060e0a5
//   XREF to: 0060e0a5 (CONDITIONAL_JUMP)
// 0060e048: ADD EAX,EAX
// 0060e04a: ADC EDX,EDX
// 0060e04c: JMP 0x0060e03c
//   XREF to: 0060e03c (UNCONDITIONAL_JUMP)
// 0060e04e: TEST EDX,0x400000
//   Label: LAB_0060e04e
//   XREF to: 00400000 (DATA)
// 0060e054: JZ 0x0060e066
//   XREF to: 0060e066 (CONDITIONAL_JUMP)
// 0060e056: SHR EDX,0x1
// 0060e058: RCR EAX,0x1
// 0060e05a: ADC EDI,0x0
// 0060e05d: INC BP
// 0060e05f: CMP BP,0x7ff
// 0060e064: JZ 0x0060e0af
//   XREF to: 0060e0af (CONDITIONAL_JUMP)
// 0060e066: SHR EDX,0x1
//   Label: LAB_0060e066
// 0060e068: RCR EAX,0x1
// 0060e06a: JNC 0x0060e090
//   XREF to: 0060e090 (CONDITIONAL_JUMP)
// 0060e06c: OR EDI,EDI
// 0060e06e: SETNZ BL
// 0060e071: OR EBX,EAX
// 0060e073: SHR EBX,0x1
// 0060e075: ADC EAX,0x0
// 0060e078: ADC EDX,0x0
// 0060e07b: TEST EDX,0x200000
// 0060e081: JZ 0x0060e090
//   XREF to: 0060e090 (CONDITIONAL_JUMP)
// 0060e083: SHR EDX,0x1
// 0060e085: RCR EAX,0x1
// 0060e087: INC BP
// 0060e089: CMP BP,0x7ff
// 0060e08e: JZ 0x0060e0af
//   XREF to: 0060e0af (CONDITIONAL_JUMP)
// 0060e090: AND EDX,0xfffff
//   Label: LAB_0060e090
// 0060e096: MOV ECX,EBP
// 0060e098: SHL EBP,0x15
// 0060e09b: ADD ECX,ECX
// 0060e09d: RCR EBP,0x1
// 0060e09f: OR EDX,EBP
// 0060e0a1: POP ESI
//   Label: LAB_0060e0a1
// 0060e0a2: POP EDI
// 0060e0a3: POP EBP
// 0060e0a4: RET
// 0060e0a5: ADD EBP,EBP
//   Label: LAB_0060e0a5
// 0060e0a7: RCR EDX,0x1
// 0060e0a9: RCR EAX,0x1
// 0060e0ab: POP ESI
// 0060e0ac: POP EDI
// 0060e0ad: POP EBP
// 0060e0ae: RET
// 0060e0af: MOV EAX,EBP
//   Label: LAB_0060e0af
// 0060e0b1: POP ESI
// 0060e0b2: POP EDI
// 0060e0b3: POP EBP
// 0060e0b4: JMP 0x0060eb57
//   XREF to: 0060eb57 (UNCONDITIONAL_CALL)
