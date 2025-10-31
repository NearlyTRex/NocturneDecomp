// Name: crt_unknown.c_FUN_0060e0b9
// Address: 0060e0b9
// Address Range: [[0060e0b9, 0060e255]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060e0b9()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060be80 (0060be80) at 0060bec7 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_00684acd
// Function calls:
//   crt_unknown.c_FUN_0060eb3a
//   crt_unknown.c_FUN_0060eb57

#include "nocturne.h"

double crt_unknown_c_FUN_0060e0b9(uint param_1,uint param_2,uint unaff_EBX,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  uint uVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  double dVar21;
  
  if (param_1 == 0) {
    if ((param_2 & 0x7fffffff) == 0) {
      return 0.0;
    }
    param_2 = param_2 & 0x7fffffff | (uint)CARRY4(param_2,param_2) << 0x1f;
  }
  if (unaff_EBX == 0) {
    if ((param_4 & 0x7fffffff) == 0) {
      return 0.0;
    }
    param_4 = param_4 & 0x7fffffff | (uint)CARRY4(param_4,param_4) << 0x1f;
  }
  if (DAT_00684acd != '\0') {
    dVar21 = (double)CONCAT44(param_2,param_1) * (double)CONCAT44(param_4,unaff_EBX);
    if ((int)((ulonglong)dVar21 >> 0x20) == -0x80000000) {
      dVar21 = 0.0;
    }
    return dVar21;
  }
  uVar18 = (int)param_2 >> 0x14 & 0x800007ff;
  uVar10 = ((ushort)((int)param_4 >> 0x1f) & 0x8000) + (short)(uVar18 >> 0x10);
  sVar17 = (short)uVar18;
  uVar18 = (int)param_4 >> 0x14 & 0x7ff;
  uVar11 = (uint)uVar10 << 0x10 | uVar18;
  param_2 = param_2 & 0xfffff;
  param_4 = param_4 & 0xfffff;
  if (sVar17 == 0) {
    sVar17 = 1;
    do {
      sVar17 = sVar17 + -1;
      bVar20 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      param_2 = param_2 * 2 + (uint)bVar20;
    } while ((param_2 & 0x100000) == 0);
  }
  if ((short)uVar18 == 0) {
    uVar11 = CONCAT22(uVar10,1);
    do {
      uVar11 = CONCAT22((short)(uVar11 >> 0x10),(short)uVar11 + -1);
      bVar20 = CARRY4(unaff_EBX,unaff_EBX);
      unaff_EBX = unaff_EBX * 2;
      param_4 = param_4 * 2 + (uint)bVar20;
    } while ((param_4 & 0x100000) == 0);
  }
  uVar10 = ((short)uVar11 + sVar17) - 0x3ff;
  uVar18 = CONCAT22((short)(uVar11 >> 0x10),uVar10);
  if ((-1 < (short)uVar10) && (0x7fe < uVar10)) {
    dVar21 = (double)crt_unknown_c_FUN_0060eb57(uVar18);
    return dVar21;
  }
  if ((short)uVar10 < -0x35) {
    dVar21 = (double)crt_unknown_c_FUN_0060eb3a();
    return dVar21;
  }
  uVar13 = (param_2 | 0x100000) << 0xb | param_1 >> 0x15;
  uVar16 = (param_4 | 0x100000) << 0xb | unaff_EBX >> 0x15;
  lVar2 = (ulonglong)(param_1 << 0xb) * (ulonglong)(unaff_EBX << 0xb);
  uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar3 = (ulonglong)uVar16 * (ulonglong)(param_1 << 0xb);
  lVar8 = lVar3 + (ulonglong)uVar14;
  uVar19 = (uint)((ulonglong)lVar8 >> 0x20);
  lVar4 = (ulonglong)(unaff_EBX << 0xb) * (ulonglong)uVar13;
  uVar15 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar11 = (uint)CARRY4((uint)lVar8,(uint)lVar4);
  uVar1 = uVar19 + uVar15;
  uVar7 = (ulonglong)uVar13 * (ulonglong)uVar16 +
          CONCAT44((uint)CARRY4((uint)((ulonglong)lVar3 >> 0x20),(uint)CARRY4(uVar14,(uint)lVar3)) +
                   (uint)(CARRY4(uVar19,uVar15) || CARRY4(uVar1,uVar11)),uVar1 + uVar11);
  uVar11 = (int)uVar7 << 0x16;
  uVar7 = uVar7 >> 10;
  do {
    uVar12 = (undefined2)(uVar18 >> 0x10);
    if ((uVar7 & 0x20000000000000) == 0) {
      bVar20 = CARRY4(uVar11,uVar11);
      if (bVar20) {
        if (((uVar11 & 0x7fffffff) == 0) && (bVar20 = (int)lVar2 != 0, !bVar20)) {
          bVar20 = (uVar7 & 1) != 0;
        }
        uVar9 = uVar7 + (uint)bVar20;
        uVar7 = uVar7 + (uint)bVar20;
        if ((uVar9 & 0x20000000000000) != 0) {
          uVar7 = CONCAT44((uint)(uVar9 >> 0x21),
                           (uint)uVar9 >> 1 | (uint)((uVar9 & 0x100000000) != 0) << 0x1f);
          sVar17 = (short)uVar18 + 1;
          uVar18 = CONCAT22(uVar12,sVar17);
          if (sVar17 == 0x7ff) break;
        }
      }
      uVar11 = (uint)(uVar7 >> 0x20);
      sVar17 = (short)uVar18;
      if (sVar17 < 1) {
        if (sVar17 == 0) {
          uVar18 = CONCAT31((int3)(uVar18 >> 8),1);
        }
        else {
          uVar18 = CONCAT22((short)(uVar18 >> 0x10),-1 - sVar17);
        }
        bVar5 = (byte)uVar18 & 0x1f;
        bVar6 = (byte)uVar18 & 0x1f;
        uVar7 = CONCAT44(uVar11 >> bVar6 | 0 << 0x20 - bVar6,
                         (uint)uVar7 >> bVar5 | uVar11 << 0x20 - bVar5);
        uVar18 = uVar18 & 0xffff0000;
      }
      return (double)CONCAT44((uint)(uVar7 >> 0x20) & 0xfffff |
                              (uVar18 << 0x15) >> 1 | (uint)CARRY4(uVar18,uVar18) << 0x1f,(int)uVar7
                             );
    }
    uVar9 = uVar7 & 1;
    uVar7 = CONCAT44((uint)(uVar7 >> 0x21),
                     (uint)uVar7 >> 1 | (uint)((uVar7 & 0x100000000) != 0) << 0x1f);
    uVar11 = uVar11 >> 1 | (uint)(uVar9 != 0) << 0x1f;
    sVar17 = (short)uVar18 + 1;
    uVar18 = CONCAT22(uVar12,sVar17);
  } while (sVar17 != 0x7ff);
  dVar21 = (double)crt_unknown_c_FUN_0060eb57(uVar18);
  return dVar21;
}


// Assembly code:
// 0060e0b9: OR EAX,EAX
//   Label: crt_unknown.c_FUN_0060e0b9
// 0060e0bb: JNZ 0x0060e0c4
//   XREF to: 0060e0c4 (CONDITIONAL_JUMP)
// 0060e0bd: ADD EDX,EDX
// 0060e0bf: JNZ 0x0060e0c2
//   XREF to: 0060e0c2 (CONDITIONAL_JUMP)
// 0060e0c1: RET
// 0060e0c2: RCR EDX,0x1
//   Label: LAB_0060e0c2
// 0060e0c4: OR EBX,EBX
//   Label: LAB_0060e0c4
// 0060e0c6: JNZ 0x0060e0d3
//   XREF to: 0060e0d3 (CONDITIONAL_JUMP)
// 0060e0c8: ADD ECX,ECX
// 0060e0ca: JNZ 0x0060e0d1
//   XREF to: 0060e0d1 (CONDITIONAL_JUMP)
// 0060e0cc: SUB EAX,EAX
// 0060e0ce: SUB EDX,EDX
// 0060e0d0: RET
// 0060e0d1: RCR ECX,0x1
//   Label: LAB_0060e0d1
// 0060e0d3: CMP byte ptr [0x00684acd],0x0
//   Label: LAB_0060e0d3
//   XREF to: 00684acd (READ)
// 0060e0da: JZ 0x0060e0eb
//   XREF to: 0060e0eb (CONDITIONAL_JUMP)
// 0060e0dc: PUSH EDX
// 0060e0dd: PUSH EAX
// 0060e0de: FLD double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0060e0e1: PUSH ECX
// 0060e0e2: PUSH EBX
// 0060e0e3: FMUL double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0060e0e6: JMP 0x0060df2e
//   XREF to: 0060df2e (UNCONDITIONAL_JUMP)
// 0060e0eb: PUSH EBP
//   Label: LAB_0060e0eb
// 0060e0ec: PUSH EDI
// 0060e0ed: PUSH ESI
// 0060e0ee: MOV EDI,EDX
// 0060e0f0: MOV ESI,ECX
// 0060e0f2: SAR EDI,0x14
// 0060e0f5: SAR ECX,0x14
// 0060e0f8: AND EDI,0x800007ff
// 0060e0fe: AND ECX,0x800007ff
// 0060e104: ROL EDI,0x10
// 0060e107: ROL ECX,0x10
// 0060e10a: ADD CX,DI
// 0060e10d: ROL EDI,0x10
// 0060e110: ROL ECX,0x10
// 0060e113: AND EDX,0xfffff
// 0060e119: AND ESI,0xfffff
// 0060e11f: OR DI,DI
// 0060e122: JNZ 0x0060e134
//   XREF to: 0060e134 (CONDITIONAL_JUMP)
// 0060e124: INC DI
// 0060e126: DEC DI
//   Label: LAB_0060e126
// 0060e128: ADD EAX,EAX
// 0060e12a: ADC EDX,EDX
// 0060e12c: TEST EDX,0x100000
// 0060e132: JZ 0x0060e126
//   XREF to: 0060e126 (CONDITIONAL_JUMP)
// 0060e134: OR EDX,0x100000
//   Label: LAB_0060e134
// 0060e13a: OR CX,CX
// 0060e13d: JNZ 0x0060e14f
//   XREF to: 0060e14f (CONDITIONAL_JUMP)
// 0060e13f: INC CX
// 0060e141: DEC CX
//   Label: LAB_0060e141
// 0060e143: ADD EBX,EBX
// 0060e145: ADC ESI,ESI
// 0060e147: TEST ESI,0x100000
// 0060e14d: JZ 0x0060e141
//   XREF to: 0060e141 (CONDITIONAL_JUMP)
// 0060e14f: OR ESI,0x100000
//   Label: LAB_0060e14f
// 0060e155: ADD CX,DI
// 0060e158: SUB CX,0x3ff
// 0060e15d: JS 0x0060e170
//   XREF to: 0060e170 (CONDITIONAL_JUMP)
// 0060e15f: CMP CX,0x7ff
// 0060e164: JC 0x0060e170
//   XREF to: 0060e170 (CONDITIONAL_JUMP)
// 0060e166: MOV EAX,ECX
// 0060e168: POP ESI
// 0060e169: POP EDI
// 0060e16a: POP EBP
// 0060e16b: JMP 0x0060eb57
//   XREF to: 0060eb57 (UNCONDITIONAL_CALL)
// 0060e170: CMP CX,-0x35
//   Label: LAB_0060e170
// 0060e174: JGE 0x0060e17e
//   XREF to: 0060e17e (CONDITIONAL_JUMP)
// 0060e176: POP ESI
// 0060e177: POP EDI
// 0060e178: POP EBP
// 0060e179: JMP 0x0060eb3a
//   XREF to: 0060eb3a (UNCONDITIONAL_CALL)
// 0060e17e: PUSH ECX
//   Label: LAB_0060e17e
// 0060e17f: MOV CL,0xb
// 0060e181: SHLD EDX,EAX,CL
// 0060e184: SHLD EAX,EBP,CL
// 0060e187: AND EAX,0xfffff800
// 0060e18c: SHLD ESI,EBX,CL
// 0060e18f: SHLD EBX,EBP,CL
// 0060e192: AND EBX,0xfffff800
// 0060e198: SUB EBP,EBP
// 0060e19a: PUSH ESI
// 0060e19b: PUSH EDX
// 0060e19c: PUSH EAX
// 0060e19d: MUL EBX
// 0060e19f: XCHG EAX,ESI
// 0060e1a0: MOV ECX,EDX
// 0060e1a2: POP EDX
// 0060e1a3: MUL EDX
// 0060e1a5: MOV EDI,EDX
// 0060e1a7: ADD ECX,EAX
// 0060e1a9: ADC EDI,EBP
// 0060e1ab: ADC EBP,EBP
// 0060e1ad: POP EAX
// 0060e1ae: XCHG EAX,EBX
// 0060e1af: MUL EBX
// 0060e1b1: ADD ECX,EAX
// 0060e1b3: ADC EDI,EDX
// 0060e1b5: ADC EBP,0x0
// 0060e1b8: MOV EAX,EBX
// 0060e1ba: POP EDX
// 0060e1bb: MUL EDX
// 0060e1bd: ADD EAX,EDI
// 0060e1bf: ADC EDX,EBP
// 0060e1c1: SUB EBX,EBX
// 0060e1c3: MOV CL,0xa
// 0060e1c5: SHRD EBX,EAX,CL
// 0060e1c8: SHRD EAX,EDX,CL
// 0060e1cb: SHRD EDX,EBX,CL
// 0060e1ce: POP ECX
// 0060e1cf: TEST EDX,0x200000
//   Label: LAB_0060e1cf
// 0060e1d5: JZ 0x0060e1e8
//   XREF to: 0060e1e8 (CONDITIONAL_JUMP)
// 0060e1d7: SHR EDX,0x1
// 0060e1d9: RCR EAX,0x1
// 0060e1db: RCR EBX,0x1
// 0060e1dd: INC CX
// 0060e1df: CMP CX,0x7ff
// 0060e1e4: JZ 0x0060e24c
//   XREF to: 0060e24c (CONDITIONAL_JUMP)
// 0060e1e6: JMP 0x0060e1cf
//   XREF to: 0060e1cf (UNCONDITIONAL_JUMP)
// 0060e1e8: ADD EBX,EBX
//   Label: LAB_0060e1e8
// 0060e1ea: JNC 0x0060e216
//   XREF to: 0060e216 (CONDITIONAL_JUMP)
// 0060e1ec: JNZ 0x0060e1fb
//   XREF to: 0060e1fb (CONDITIONAL_JUMP)
// 0060e1ee: OR ESI,ESI
// 0060e1f0: SETNZ BL
// 0060e1f3: SHR EBX,0x1
// 0060e1f5: JC 0x0060e1fb
//   XREF to: 0060e1fb (CONDITIONAL_JUMP)
// 0060e1f7: MOV ESI,EAX
// 0060e1f9: SHR ESI,0x1
// 0060e1fb: ADC EAX,0x0
//   Label: LAB_0060e1fb
// 0060e1fe: ADC EDX,0x0
// 0060e201: TEST EDX,0x200000
// 0060e207: JZ 0x0060e216
//   XREF to: 0060e216 (CONDITIONAL_JUMP)
// 0060e209: SHR EDX,0x1
// 0060e20b: RCR EAX,0x1
// 0060e20d: INC CX
// 0060e20f: CMP CX,0x7ff
// 0060e214: JZ 0x0060e24c
//   XREF to: 0060e24c (CONDITIONAL_JUMP)
// 0060e216: OR CX,CX
//   Label: LAB_0060e216
// 0060e219: JG 0x0060e231
//   XREF to: 0060e231 (CONDITIONAL_JUMP)
// 0060e21b: JNZ 0x0060e221
//   XREF to: 0060e221 (CONDITIONAL_JUMP)
// 0060e21d: MOV CL,0x1
// 0060e21f: JMP 0x0060e226
//   XREF to: 0060e226 (UNCONDITIONAL_JUMP)
// 0060e221: NEG CX
//   Label: LAB_0060e221
// 0060e224: DEC CX
// 0060e226: SUB EBX,EBX
//   Label: LAB_0060e226
// 0060e228: SHRD EAX,EDX,CL
// 0060e22b: SHRD EDX,EBX,CL
// 0060e22e: SUB CX,CX
// 0060e231: AND EDX,0xfffff
//   Label: LAB_0060e231
// 0060e237: MOV ESI,ECX
// 0060e239: ROR ECX,0xb
// 0060e23c: ADD ESI,ESI
// 0060e23e: RCR ECX,0x1
// 0060e240: AND ECX,0xfff00000
// 0060e246: OR EDX,ECX
// 0060e248: POP ESI
// 0060e249: POP EDI
// 0060e24a: POP EBP
// 0060e24b: RET
// 0060e24c: MOV EAX,ECX
//   Label: LAB_0060e24c
// 0060e24e: POP ESI
// 0060e24f: POP EDI
// 0060e250: POP EBP
// 0060e251: JMP 0x0060eb57
//   XREF to: 0060eb57 (UNCONDITIONAL_CALL)
