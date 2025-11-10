// Name: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
// Address Range: [[005ffd76, 005ffeb1]]
// Convention: __cdecl
// Signature: float10 crt_math.c_pow_FUN_005ffd76(float10 x, float10 y)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0 (00453bd0) at 00453c08 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512597 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setGamma_FUN_00570d60 (00570d60) at 00570dab [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540 (00532540) at 00532580 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50 (00531d50) at 0053214b [UNCONDITIONAL_CALL]
// Globals:
//   byte g_UseSoftwareMath = 0x0
// Function calls:
//   crt_math.c_exp_FUN_006068e2
//   crt_math.c_function_dispatch_FUN_00606a77
//   crt_math.c_integer_power_FUN_005ffeb2
//   crt_unknown.c_FUN_00606832

#include "nocturne.h"

float10 __cdecl crt_math_c_pow_FUN_005ffd76(float10 x,float10 y)

{
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char extraout_AL;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  undefined4 uVar8;
  undefined6 uVar9;
  ushort uStack_e;
  ushort exponent;
  undefined4 local_c;
  short sStack_a;
  undefined4 uStack_8;
  
  fVar6 = (float10)0;
  uVar8 = (undefined4)((ulonglong)(double)x >> 0x20);
  if ((x == fVar6) == 0) {
    fVar7 = ROUND(y);
    _local_c = (ulonglong)
               (ushort)((ushort)(x < fVar6) << 8 | (ushort)(NAN(x) || NAN(fVar6)) << 10 |
                       (ushort)(x == fVar6) << 0xe);
    if (x < fVar6) {
      if (fVar7 == y) {
        bVar5 = 0;
        if ((!NAN(fVar7) && !NAN(y)) && (bVar5 = 0, y - (y / (float10)2) * (float10)2 != (float10)0)
           ) {
          bVar5 = 1;
        }
        _local_c = (ulonglong)bVar5 << 8;
LAB_005ffe01:
        uVar3 = _local_c;
        uVar9 = SUB86((double)y,0);
        uStack_e = (ushort)((ulonglong)(double)y >> 0x30);
        uVar4 = _local_c;
        if (0xff < (ushort)((uStack_e & 0x7ff0) + 0xc010)) goto LAB_005ffe88;
        iVar1 = (int)ROUND(y);
        _local_c = CONCAT44(iVar1,local_c);
        uVar4 = _local_c;
        uStack_8._2_2_ = (ushort)((uint)iVar1 >> 0x10);
        exponent = (ushort)uVar3;
        if (uStack_8._2_2_ == 0) {
          fVar6 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64(uVar9,uVar8),exponent);
        }
        else {
          if ((uStack_8._2_2_ != -1) || (uStack_8._0_2_ = (short)iVar1, (short)uStack_8 == 0))
          goto LAB_005ffe88;
          fVar6 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64(uVar9,uVar8),exponent);
          if ((g_UseSoftwareMath & 1) == 0) {
            fVar6 = (float10)1 / fVar6;
          }
          else {
            crt_math_c_function_dispatch_FUN_00606a77(0xf);
            fVar6 = extraout_ST0;
          }
        }
        dVar2 = (double)fVar6;
        exponent = SUB82(dVar2,0);
        sStack_a = (short)((ulonglong)dVar2 >> 0x10);
        uStack_8._0_2_ = (short)((ulonglong)dVar2 >> 0x20);
        if (((exponent != 0 || sStack_a != 0) || (short)uStack_8 != 0) ||
           (uStack_8._2_2_ = (ushort)((ulonglong)dVar2 >> 0x30), (uStack_8._2_2_ & 0x7fff) != 0x7ff0
           )) goto LAB_005ffea7;
      }
    }
    else {
      uVar4 = _local_c;
      if (fVar7 == y) goto LAB_005ffe01;
LAB_005ffe88:
      _local_c = uVar4;
      fVar6 = crt_math_c_exp_FUN_006068e2((float10)0.6931471805599453 * y * ABS(x));
      if (extraout_AL == '\0') {
        if ((_local_c & 0x100) != 0) {
          fVar6 = -fVar6;
        }
        goto LAB_005ffea7;
      }
    }
  }
  dVar2 = (double)crt_unknown_c_FUN_00606832();
  fVar6 = (float10)dVar2;
LAB_005ffea7:
  return (float10)(double)fVar6;
}


// Assembly code:
// 005ffd76: PUSH EBP
//   Label: crt_math.c_pow_FUN_005ffd76
// 005ffd77: MOV EBP,ESP
// 005ffd79: FTST
// 005ffd7b: SUB ESP,0x18
// 005ffd7e: FSTSW word ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 005ffd82: FST double ptr [EBP + -0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 005ffd85: MOV AH,byte ptr [EBP + -0x7]
//   XREF to: Stack[-0xb] (READ)
// 005ffd88: SAHF
// 005ffd89: JNZ 0x005ffdae
//   XREF to: 005ffdae (CONDITIONAL_JUMP)
// 005ffd8b: MOV AL,0x0
// 005ffd8d: FSTP ST0
//   Label: LAB_005ffd8d
// 005ffd8f: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 005ffd92: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005ffd95: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 005ffd98: CALL crt_unknown.c_FUN_00606832
//   XREF to: 00606832 (UNCONDITIONAL_CALL)
// 005ffd9d: SUB ESP,0x8
// 005ffda0: PUSH EDX
// 005ffda1: PUSH EAX
// 005ffda2: FLD double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 005ffda5: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 005ffda8: WAIT
// 005ffda9: JMP 0x005ffea7
//   XREF to: 005ffea7 (UNCONDITIONAL_JUMP)
// 005ffdae: FLD ST1
//   Label: LAB_005ffdae
// 005ffdb0: FRNDINT
// 005ffdb2: FCOMP ST2
// 005ffdb4: FSTSW word ptr [EBP + -0x6]
//   XREF to: Stack[-0xa] (WRITE)
// 005ffdb8: WAIT
// 005ffdb9: MOV AH,byte ptr [EBP + -0x5]
//   XREF to: Stack[-0x9] (READ)
// 005ffdbc: JNC 0x005ffdf9
//   XREF to: 005ffdf9 (CONDITIONAL_JUMP)
// 005ffdbe: MOV AL,0x1
// 005ffdc0: SAHF
// 005ffdc1: JNZ 0x005ffd8d
//   XREF to: 005ffd8d (CONDITIONAL_JUMP)
// 005ffdc3: MOV AX,0x2
// 005ffdc7: MOV word ptr [EBP + -0x4],AX
//   XREF to: Stack[-0x8] (WRITE)
// 005ffdcb: FILD word ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 005ffdce: FLD ST2
// 005ffdd0: FPREM
// 005ffdd2: FSTSW word ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 005ffdd6: WAIT
// 005ffdd7: MOV AH,byte ptr [EBP + -0x3]
//   XREF to: Stack[-0x7] (READ)
// 005ffdda: SAHF
// 005ffddb: MOV AH,0x0
// 005ffddd: JP 0x005ffdf0
//   XREF to: 005ffdf0 (CONDITIONAL_JUMP)
// 005ffddf: FTST
// 005ffde1: FSTSW word ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 005ffde5: WAIT
// 005ffde6: MOV AH,byte ptr [EBP + -0x3]
//   XREF to: Stack[-0x7] (READ)
// 005ffde9: SAHF
// 005ffdea: MOV AH,0x0
// 005ffdec: JZ 0x005ffdf0
//   XREF to: 005ffdf0 (CONDITIONAL_JUMP)
// 005ffdee: MOV AH,0x1
// 005ffdf0: MOV byte ptr [EBP + -0x7],AH
//   Label: LAB_005ffdf0
//   XREF to: Stack[-0xb] (WRITE)
// 005ffdf3: FSTP ST0
// 005ffdf5: FSTP ST0
// 005ffdf7: JMP 0x005ffe01
//   XREF to: 005ffe01 (UNCONDITIONAL_JUMP)
// 005ffdf9: SAHF
//   Label: LAB_005ffdf9
// 005ffdfa: JZ 0x005ffe01
//   XREF to: 005ffe01 (CONDITIONAL_JUMP)
// 005ffdfc: JMP 0x005ffe88
//   XREF to: 005ffe88 (UNCONDITIONAL_JUMP)
// 005ffe01: FLD ST1
//   Label: LAB_005ffe01
// 005ffe03: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 005ffe06: WAIT
// 005ffe07: MOV AX,word ptr [EBP + -0xa]
//   XREF to: Stack[-0xe] (READ)
// 005ffe0b: AND AX,0x7ff0
// 005ffe0f: SUB AX,0x3ff0
// 005ffe13: CMP AX,0x100
// 005ffe17: JNC 0x005ffe88
//   XREF to: 005ffe88 (CONDITIONAL_JUMP)
// 005ffe19: FLD ST1
// 005ffe1b: FISTP dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 005ffe1e: WAIT
// 005ffe1f: MOV AX,word ptr [EBP + -0x2]
//   XREF to: Stack[-0x6] (READ)
// 005ffe23: OR AX,AX
// 005ffe26: JNZ 0x005ffe33
//   XREF to: 005ffe33 (CONDITIONAL_JUMP)
// 005ffe28: MOV AX,word ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 005ffe2c: CALL crt_math.c_integer_power_FUN_005ffeb2
//   XREF to: 005ffeb2 (UNCONDITIONAL_CALL)
// 005ffe31: JMP 0x005ffe5e
//   XREF to: 005ffe5e (UNCONDITIONAL_JUMP)
// 005ffe33: INC AX
//   Label: LAB_005ffe33
// 005ffe35: JNZ 0x005ffe88
//   XREF to: 005ffe88 (CONDITIONAL_JUMP)
// 005ffe37: OR AX,word ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 005ffe3b: JZ 0x005ffe88
//   XREF to: 005ffe88 (CONDITIONAL_JUMP)
// 005ffe3d: NEG AX
// 005ffe40: CALL crt_math.c_integer_power_FUN_005ffeb2
//   XREF to: 005ffeb2 (UNCONDITIONAL_CALL)
// 005ffe45: FLD1
// 005ffe47: TEST byte ptr [0x00685060],0x1
//   XREF to: 00685060 (READ)
// 005ffe4e: JNZ 0x005ffe54
//   XREF to: 005ffe54 (CONDITIONAL_JUMP)
// 005ffe50: FDIVRP
// 005ffe52: JMP 0x005ffe5e
//   XREF to: 005ffe5e (UNCONDITIONAL_JUMP)
// 005ffe54: MOV EAX,0xf
//   Label: LAB_005ffe54
// 005ffe59: CALL crt_math.c_function_dispatch_FUN_00606a77
//   XREF to: 00606a77 (UNCONDITIONAL_CALL)
// 005ffe5e: FST double ptr [EBP + -0x8]
//   Label: LAB_005ffe5e
//   XREF to: Stack[-0xc] (WRITE)
// 005ffe61: WAIT
// 005ffe62: MOV AX,word ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 005ffe66: OR AX,word ptr [EBP + -0x6]
//   XREF to: Stack[-0xa] (READ)
// 005ffe6a: OR AX,word ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 005ffe6e: JNZ 0x005ffe84
//   XREF to: 005ffe84 (CONDITIONAL_JUMP)
// 005ffe70: MOV AX,word ptr [EBP + -0x2]
//   XREF to: Stack[-0x6] (READ)
// 005ffe74: SHL AX,0x1
// 005ffe77: CMP AX,0xffe0
// 005ffe7b: JNZ 0x005ffe84
//   XREF to: 005ffe84 (CONDITIONAL_JUMP)
// 005ffe7d: MOV AL,0x2
//   Label: LAB_005ffe7d
// 005ffe7f: JMP 0x005ffd8d
//   XREF to: 005ffd8d (UNCONDITIONAL_JUMP)
// 005ffe84: FSTP ST1
//   Label: LAB_005ffe84
// 005ffe86: JMP 0x005ffea7
//   XREF to: 005ffea7 (UNCONDITIONAL_JUMP)
// 005ffe88: FLDLN2
//   Label: LAB_005ffe88
// 005ffe8a: FMUL ST2
// 005ffe8c: FXCH
// 005ffe8e: FABS
// 005ffe90: FYL2X
// 005ffe92: MOV AL,0x7
// 005ffe94: CALL crt_math.c_exp_FUN_006068e2
//   XREF to: 006068e2 (UNCONDITIONAL_CALL)
// 005ffe99: CMP AL,0x0
// 005ffe9b: JNZ 0x005ffe7d
//   XREF to: 005ffe7d (CONDITIONAL_JUMP)
// 005ffe9d: MOV AH,byte ptr [EBP + -0x7]
//   XREF to: Stack[-0xb] (READ)
// 005ffea0: SAHF
// 005ffea1: JNC 0x005ffea5
//   XREF to: 005ffea5 (CONDITIONAL_JUMP)
// 005ffea3: FCHS
// 005ffea5: FSTP ST1
//   Label: LAB_005ffea5
// 005ffea7: FSTP double ptr [EBP + -0x8]
//   Label: LAB_005ffea7
//   XREF to: Stack[-0xc] (WRITE)
// 005ffeaa: FLD double ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 005ffead: WAIT
// 005ffeae: MOV ESP,EBP
// 005ffeb0: POP EBP
// 005ffeb1: RET
