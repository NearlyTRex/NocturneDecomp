// Name: crt_unknown.c_FUN_0060dcf6
// Address: 0060dcf6
// Address Range: [[0060dcf6, 0060defb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060dcf6()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060be80 (0060be80) at 0060bebb [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_00684acd
//   byte g_UseSoftwareMath = 0x0
// Function calls:
//   crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
//   crt_unknown.c_FUN_0060eb3a
//   crt_unknown.c_FUN_0060eb4b
//   crt_unknown.c_FUN_0060eb57

#include "nocturne.h"

uint crt_unknown_c_FUN_0060dcf6(uint param_1,uint param_2,uint unaff_EBX,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  float10 fVar20;
  undefined4 local_24;
  undefined4 local_20;
  
  if (unaff_EBX == 0) {
    if ((param_4 & 0x7fffffff) == 0) {
      uVar4 = crt_unknown_c_FUN_0060eb4b();
      return uVar4;
    }
    param_4 = param_4 & 0x7fffffff | (uint)CARRY4(param_4,param_4) << 0x1f;
  }
  if (param_1 == 0) {
    if ((param_2 & 0x7fffffff) == 0) {
      return param_1;
    }
    param_2 = param_2 & 0x7fffffff | (uint)CARRY4(param_2,param_2) << 0x1f;
  }
  if (DAT_00684acd == '\0') {
    uVar4 = (int)param_2 >> 0x14 & 0x7ff;
    uVar7 = (int)param_4 >> 0x14 & 0x800007ff;
    param_2 = param_2 & 0xfffff;
    uVar10 = param_4 & 0xfffff;
    uVar15 = (ushort)uVar4;
    if (uVar15 == 0) {
      do {
        bVar17 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        param_2 = param_2 * 2 + (uint)bVar17;
        uVar15 = (short)uVar4 - 1;
        uVar4 = (uint)uVar15;
      } while ((param_2 & 0x100000) == 0);
    }
    else {
      param_2 = param_2 | 0x100000;
    }
    if (((ushort)((int)param_4 >> 0x14) & 0x7ff) == 0) {
      do {
        bVar17 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        uVar10 = uVar10 * 2 + (uint)bVar17;
        uVar7 = CONCAT22((short)(uVar7 >> 0x10),(short)uVar7 + -1);
      } while ((uVar10 & 0x100000) == 0);
    }
    else {
      uVar10 = uVar10 | 0x100000;
    }
    sVar14 = uVar15 - (short)uVar7;
    uVar15 = sVar14 + 0x3ff;
    if ((-1 < (short)uVar15) && (0x7fe < uVar15)) {
      uVar4 = crt_unknown_c_FUN_0060eb57(uVar7);
      return uVar4;
    }
    if (-0x35 < (short)uVar15) {
      uVar7 = param_2 << 0xb | param_1 >> 0x15;
      param_1 = param_1 * 0x800;
      uVar10 = uVar10 << 0xb | unaff_EBX >> 0x15;
      unaff_EBX = unaff_EBX * 0x800;
      bVar17 = uVar10 <= uVar7;
      uVar4 = uVar7;
      if (bVar17) {
        uVar4 = uVar7 - uVar10;
      }
      uVar1 = CONCAT44(uVar4,param_1) / (ulonglong)uVar10;
      local_20 = (uint)uVar1;
      uVar2 = (ulonglong)unaff_EBX * (uVar1 & 0xffffffff);
      iVar5 = (int)uVar2;
      lVar3 = (ulonglong)uVar10 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
      if (bVar17) {
        lVar3 = lVar3 + CONCAT44(uVar10,unaff_EBX);
      }
      uVar8 = -iVar5;
      uVar4 = (uint)(iVar5 != 0);
      uVar9 = param_1 - (uint)lVar3;
      uVar11 = uVar9 - uVar4;
      for (iVar5 = (uVar7 - (int)((ulonglong)lVar3 >> 0x20)) -
                   (uint)(param_1 < (uint)lVar3 || uVar9 < uVar4); iVar5 != 0;
          iVar5 = iVar5 + (uint)(bVar19 || CARRY4(uVar4,(uint)bVar18))) {
        bVar18 = local_20 == 0;
        local_20 = local_20 - 1;
        bVar17 = (bool)(bVar17 ^ bVar18);
        bVar18 = CARRY4(uVar8,unaff_EBX);
        uVar8 = uVar8 + unaff_EBX;
        bVar19 = CARRY4(uVar11,uVar10);
        uVar4 = uVar11 + uVar10;
        uVar11 = uVar4 + bVar18;
      }
      if (uVar10 <= uVar11) {
        uVar11 = uVar11 - uVar10;
        bVar18 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        bVar17 = (bool)(bVar17 ^ bVar18);
      }
      uVar1 = CONCAT44(uVar11,uVar8) / (ulonglong)uVar10;
      local_24 = (uint)uVar1;
      if (local_24 != 0) {
        uVar2 = (ulonglong)unaff_EBX * (uVar1 & 0xffffffff);
        iVar5 = (int)uVar2;
        lVar3 = (ulonglong)uVar10 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
        uVar6 = (uint)lVar3;
        uVar9 = -iVar5;
        uVar4 = (uint)(iVar5 != 0);
        uVar7 = uVar8 - uVar6;
        uVar12 = uVar7 - uVar4;
        for (iVar5 = (uVar11 - (int)((ulonglong)lVar3 >> 0x20)) -
                     (uint)(uVar8 < uVar6 || uVar7 < uVar4); iVar5 != 0;
            iVar5 = iVar5 + (uint)(bVar19 || CARRY4(uVar4,(uint)bVar18))) {
          bVar19 = local_24 == 0;
          local_24 = local_24 - 1;
          bVar18 = local_20 < bVar19;
          local_20 = local_20 - bVar19;
          bVar17 = (bool)(bVar17 ^ bVar18);
          bVar18 = CARRY4(uVar9,unaff_EBX);
          uVar9 = uVar9 + unaff_EBX;
          bVar19 = CARRY4(uVar12,uVar10);
          uVar4 = uVar12 + uVar10;
          uVar12 = uVar4 + bVar18;
        }
      }
      uVar16 = sVar14 + 0x3fe;
      if (bVar17) {
        uVar4 = local_20 & 1;
        local_20 = local_20 >> 1 | (uint)bVar17 << 0x1f;
        local_24 = local_24 >> 1 | (uint)(uVar4 != 0) << 0x1f;
        uVar16 = uVar15;
      }
      uVar7 = local_24 >> 0xb | local_20 << 0x15;
      uVar4 = (uint)((local_24 >> 10 & 1) != 0) << 0x1f;
      uVar9 = local_20 >> 0xb | 0xfff00000;
      uVar4 = (uint)CARRY4(uVar4,uVar4);
      uVar10 = uVar7 + uVar4;
      uVar4 = (uint)CARRY4(uVar7,uVar4);
      sVar14 = uVar16 + CARRY4(uVar9,uVar4);
      if (sVar14 < 1) {
        if (sVar14 == 0) {
          bVar13 = 1;
        }
        else {
          bVar13 = -(char)sVar14;
        }
        uVar10 = uVar10 >> (bVar13 & 0x1f) | (uVar9 + uVar4 & 0x1fffff) << 0x20 - (bVar13 & 0x1f);
      }
      return uVar10;
    }
    uVar4 = crt_unknown_c_FUN_0060eb3a();
    return uVar4;
  }
  if ((g_UseSoftwareMath & 1) == 0) {
    fVar20 = (float10)(double)CONCAT44(param_2,param_1) /
             (float10)(double)CONCAT44(param_4,unaff_EBX);
  }
  else {
    fVar20 = crt_math_c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
                       ((float10)(double)CONCAT44(param_2,param_1),
                        (double)CONCAT44(param_4,unaff_EBX));
  }
  uVar4 = SUB84((double)fVar20,0);
  if ((int)((ulonglong)(double)fVar20 >> 0x20) == -0x80000000) {
    uVar4 = 0;
  }
  return uVar4;
}


// Assembly code:
// 0060dcf6: OR EBX,EBX
//   Label: crt_unknown.c_FUN_0060dcf6
// 0060dcf8: JNZ 0x0060dd05
//   XREF to: 0060dd05 (CONDITIONAL_JUMP)
// 0060dcfa: ADD ECX,ECX
// 0060dcfc: JNZ 0x0060dd03
//   XREF to: 0060dd03 (CONDITIONAL_JUMP)
// 0060dcfe: JMP 0x0060eb4b
//   XREF to: 0060eb4b (UNCONDITIONAL_CALL)
// 0060dd03: RCR ECX,0x1
//   Label: LAB_0060dd03
// 0060dd05: OR EAX,EAX
//   Label: LAB_0060dd05
// 0060dd07: JNZ 0x0060dd10
//   XREF to: 0060dd10 (CONDITIONAL_JUMP)
// 0060dd09: ADD EDX,EDX
// 0060dd0b: JNZ 0x0060dd0e
//   XREF to: 0060dd0e (CONDITIONAL_JUMP)
// 0060dd0d: RET
// 0060dd0e: RCR EDX,0x1
//   Label: LAB_0060dd0e
// 0060dd10: CMP byte ptr [0x00684acd],0x0
//   Label: LAB_0060dd10
//   XREF to: 00684acd (READ)
// 0060dd17: JZ 0x0060dd49
//   XREF to: 0060dd49 (CONDITIONAL_JUMP)
// 0060dd19: PUSH EDX
// 0060dd1a: PUSH EAX
// 0060dd1b: FLD double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0060dd1e: PUSH ECX
// 0060dd1f: PUSH EBX
// 0060dd20: TEST byte ptr [0x00685060],0x1
//   XREF to: 00685060 (READ)
// 0060dd27: JZ 0x0060dd30
//   XREF to: 0060dd30 (CONDITIONAL_JUMP)
// 0060dd29: CALL crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
//   XREF to: 00606f98 (UNCONDITIONAL_CALL)
// 0060dd2e: JMP 0x0060dd36
//   XREF to: 0060dd36 (UNCONDITIONAL_JUMP)
// 0060dd30: FDIV double ptr [ESP]
//   Label: LAB_0060dd30
//   XREF to: Stack[-0x10] (DATA)
// 0060dd33: ADD ESP,0x8
// 0060dd36: FSTP double ptr [ESP]
//   Label: LAB_0060dd36
//   XREF to: Stack[-0x8] (DATA)
// 0060dd39: WAIT
// 0060dd3a: POP EAX
// 0060dd3b: POP EDX
// 0060dd3c: CMP EDX,0x80000000
// 0060dd42: JNZ 0x0060dd48
//   XREF to: 0060dd48 (CONDITIONAL_JUMP)
// 0060dd44: SUB EDX,EDX
// 0060dd46: MOV EAX,EDX
// 0060dd48: RET
//   Label: LAB_0060dd48
// 0060dd49: PUSH EBP
//   Label: LAB_0060dd49
// 0060dd4a: MOV EBP,ESP
// 0060dd4c: PUSH EDI
// 0060dd4d: PUSH ESI
// 0060dd4e: MOV EDI,EDX
// 0060dd50: MOV ESI,ECX
// 0060dd52: SAR EDI,0x14
// 0060dd55: SAR ECX,0x14
// 0060dd58: AND EDI,0x800007ff
// 0060dd5e: AND ECX,0x800007ff
// 0060dd64: ROL EDI,0x10
// 0060dd67: ROL ECX,0x10
// 0060dd6a: ADD DI,CX
// 0060dd6d: ROL EDI,0x10
// 0060dd70: ROL ECX,0x10
// 0060dd73: AND EDX,0xfffff
// 0060dd79: AND ESI,0xfffff
// 0060dd7f: OR DI,DI
// 0060dd82: JZ 0x0060dd8c
//   XREF to: 0060dd8c (CONDITIONAL_JUMP)
// 0060dd84: OR EDX,0x100000
// 0060dd8a: JMP 0x0060dd9a
//   XREF to: 0060dd9a (UNCONDITIONAL_JUMP)
// 0060dd8c: ADD EAX,EAX
//   Label: LAB_0060dd8c
// 0060dd8e: ADC EDX,EDX
// 0060dd90: DEC DI
// 0060dd92: TEST EDX,0x100000
// 0060dd98: JZ 0x0060dd8c
//   XREF to: 0060dd8c (CONDITIONAL_JUMP)
// 0060dd9a: OR CX,CX
//   Label: LAB_0060dd9a
// 0060dd9d: JZ 0x0060dda7
//   XREF to: 0060dda7 (CONDITIONAL_JUMP)
// 0060dd9f: OR ESI,0x100000
// 0060dda5: JMP 0x0060ddb5
//   XREF to: 0060ddb5 (UNCONDITIONAL_JUMP)
// 0060dda7: ADD EBX,EBX
//   Label: LAB_0060dda7
// 0060dda9: ADC ESI,ESI
// 0060ddab: DEC CX
// 0060ddad: TEST ESI,0x100000
// 0060ddb3: JZ 0x0060dda7
//   XREF to: 0060dda7 (CONDITIONAL_JUMP)
// 0060ddb5: SUB DI,CX
//   Label: LAB_0060ddb5
// 0060ddb8: ADD DI,0x3ff
// 0060ddbd: JS 0x0060ddd0
//   XREF to: 0060ddd0 (CONDITIONAL_JUMP)
// 0060ddbf: CMP DI,0x7ff
// 0060ddc4: JC 0x0060ddd0
//   XREF to: 0060ddd0 (CONDITIONAL_JUMP)
// 0060ddc6: MOV EAX,ECX
// 0060ddc8: POP ESI
// 0060ddc9: POP EDI
// 0060ddca: POP EBP
// 0060ddcb: JMP 0x0060eb57
//   XREF to: 0060eb57 (UNCONDITIONAL_CALL)
// 0060ddd0: CMP DI,-0x34
//   Label: LAB_0060ddd0
// 0060ddd4: JGE 0x0060ddde
//   XREF to: 0060ddde (CONDITIONAL_JUMP)
// 0060ddd6: POP ESI
// 0060ddd7: POP EDI
// 0060ddd8: POP EBP
// 0060ddd9: JMP 0x0060eb3a
//   XREF to: 0060eb3a (UNCONDITIONAL_CALL)
// 0060ddde: PUSH EDI
//   Label: LAB_0060ddde
// 0060dddf: MOV CL,0xb
// 0060dde1: SHLD EDX,EAX,CL
// 0060dde4: SHLD EAX,EBP,CL
// 0060dde7: AND EAX,0xfffff800
// 0060ddec: SHLD ESI,EBX,CL
// 0060ddef: SHLD EBX,EBP,CL
// 0060ddf2: AND EBX,0xfffff800
// 0060ddf8: PUSH ESI
// 0060ddf9: PUSH EBX
// 0060ddfa: MOV ECX,ESI
// 0060ddfc: MOV EDI,EDX
// 0060ddfe: MOV ESI,EAX
// 0060de00: SUB EAX,EAX
// 0060de02: CMP ECX,EDX
// 0060de04: JA 0x0060de09
//   XREF to: 0060de09 (CONDITIONAL_JUMP)
// 0060de06: SUB EDX,ECX
// 0060de08: INC EAX
// 0060de09: PUSH EAX
//   Label: LAB_0060de09
// 0060de0a: MOV EAX,ESI
// 0060de0c: DIV ECX
// 0060de0e: PUSH EAX
// 0060de0f: XCHG EAX,EBX
// 0060de10: MUL EBX
// 0060de12: XCHG EAX,ECX
// 0060de13: XCHG EBX,EDX
// 0060de15: MUL EDX
// 0060de17: ADD EAX,EBX
// 0060de19: ADC EDX,0x0
// 0060de1c: MOV EBX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 0060de1f: TEST byte ptr [EBP + -0x18],0x1
//   XREF to: Stack[-0x1c] (READ)
// 0060de23: JZ 0x0060de2a
//   XREF to: 0060de2a (CONDITIONAL_JUMP)
// 0060de25: ADD EAX,EBX
// 0060de27: ADC EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060de2a: NEG ECX
//   Label: LAB_0060de2a
// 0060de2c: SBB ESI,EAX
// 0060de2e: SBB EDI,EDX
// 0060de30: JZ 0x0060de44
//   XREF to: 0060de44 (CONDITIONAL_JUMP)
// 0060de32: SUB dword ptr [EBP + -0x1c],0x1
//   Label: LAB_0060de32
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0060de36: SBB dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0060de3a: ADD ECX,EBX
// 0060de3c: ADC ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060de3f: ADC EDI,0x0
// 0060de42: JNZ 0x0060de32
//   XREF to: 0060de32 (CONDITIONAL_JUMP)
// 0060de44: MOV EDI,ESI
//   Label: LAB_0060de44
// 0060de46: MOV ESI,ECX
// 0060de48: MOV ECX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060de4b: CMP ECX,EDI
// 0060de4d: JA 0x0060de59
//   XREF to: 0060de59 (CONDITIONAL_JUMP)
// 0060de4f: SUB EDI,ECX
// 0060de51: ADD dword ptr [EBP + -0x1c],0x1
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0060de55: ADC dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0060de59: MOV EDX,EDI
//   Label: LAB_0060de59
// 0060de5b: MOV EAX,ESI
// 0060de5d: DIV ECX
// 0060de5f: PUSH EAX
// 0060de60: OR EAX,EAX
// 0060de62: JZ 0x0060de90
//   XREF to: 0060de90 (CONDITIONAL_JUMP)
// 0060de64: XCHG EAX,EBX
// 0060de65: MUL EBX
// 0060de67: XCHG EAX,ECX
// 0060de68: XCHG EBX,EDX
// 0060de6a: MUL EDX
// 0060de6c: ADD EAX,EBX
// 0060de6e: ADC EDX,0x0
// 0060de71: NEG ECX
// 0060de73: SBB ESI,EAX
// 0060de75: SBB EDI,EDX
// 0060de77: JZ 0x0060de90
//   XREF to: 0060de90 (CONDITIONAL_JUMP)
// 0060de79: SUB dword ptr [EBP + -0x20],0x1
//   Label: LAB_0060de79
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0060de7d: SBB dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0060de81: SBB dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0060de85: ADD ECX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 0060de88: ADC ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060de8b: ADC EDI,0x0
// 0060de8e: JNZ 0x0060de79
//   XREF to: 0060de79 (CONDITIONAL_JUMP)
// 0060de90: POP EAX
//   Label: LAB_0060de90
// 0060de91: POP EDX
// 0060de92: POP EBX
// 0060de93: ADD ESP,0x8
// 0060de96: POP EDI
// 0060de97: DEC DI
// 0060de99: SHR EBX,0x1
// 0060de9b: JNC 0x0060dea2
//   XREF to: 0060dea2 (CONDITIONAL_JUMP)
// 0060de9d: RCR EDX,0x1
// 0060de9f: RCR EAX,0x1
// 0060dea1: INC EDI
// 0060dea2: SUB ESI,ESI
//   Label: LAB_0060dea2
// 0060dea4: MOV CL,0xb
// 0060dea6: SHRD EAX,EDX,CL
// 0060dea9: RCR ESI,0x1
// 0060deab: SHRD EDX,ESI,CL
// 0060deae: OR EDX,0xfff00000
// 0060deb4: ADD ESI,ESI
// 0060deb6: ADC EAX,0x0
// 0060deb9: ADC EDX,0x0
// 0060debc: ADC EDI,0x0
// 0060debf: OR DI,DI
// 0060dec2: JG 0x0060dee1
//   XREF to: 0060dee1 (CONDITIONAL_JUMP)
// 0060dec4: JNZ 0x0060deca
//   XREF to: 0060deca (CONDITIONAL_JUMP)
// 0060dec6: MOV CL,0x1
// 0060dec8: JMP 0x0060ded0
//   XREF to: 0060ded0 (UNCONDITIONAL_JUMP)
// 0060deca: NEG DI
//   Label: LAB_0060deca
// 0060decd: MOV CX,DI
// 0060ded0: AND EDX,0x1fffff
//   Label: LAB_0060ded0
// 0060ded6: SUB EBX,EBX
// 0060ded8: SHRD EAX,EDX,CL
// 0060dedb: SHRD EDX,EBX,CL
// 0060dede: SUB DI,DI
// 0060dee1: AND EDX,0xfffff
//   Label: LAB_0060dee1
// 0060dee7: MOV ESI,EDI
// 0060dee9: ROR EDI,0xb
// 0060deec: ADD ESI,ESI
// 0060deee: RCR EDI,0x1
// 0060def0: AND EDI,0xfff00000
// 0060def6: OR EDX,EDI
// 0060def8: POP ESI
// 0060def9: POP EDI
// 0060defa: POP EBP
// 0060defb: RET
