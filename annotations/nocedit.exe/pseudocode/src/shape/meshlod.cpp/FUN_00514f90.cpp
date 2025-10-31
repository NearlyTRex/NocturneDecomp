// Name: shape_meshlod.cpp_FUN_00514f90
// Address: 00514f90
// Address Range: [[00514f90, 00515104]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00514f90()
// Cross-references:
//   shape_meshlod.cpp_FUN_00515110 (00515110) at 00515128 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a4e5 (0051a4e5) at 0051a4f1 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a526 (0051a526) at 0051a532 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a598 (0051a598) at 0051a5a0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a7cb (0051a7cb) at 0051a7d3 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a7e5 (0051a7e5) at 0051a7ed [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a829 (0051a829) at 0051a82d [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00514f90(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

float * shape_meshlod_cpp_FUN_00514f90(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  
  fVar1 = *in_stack_00000010 - *in_stack_0000000c;
  fVar2 = in_stack_00000010[1] - in_stack_0000000c[1];
  fVar4 = in_stack_00000010[2] - in_stack_0000000c[2];
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  pfVar6 = in_stack_0000000c + 2;
  if (0.0 < fVar3) {
    fVar5 = 1.0 / fVar3;
    fVar1 = fVar1 * fVar5;
    fVar2 = fVar2 * fVar5;
    fVar4 = fVar4 * fVar5;
    fVar5 = (in_stack_00000008[2] * fVar4 +
            *in_stack_00000008 * fVar1 + in_stack_00000008[1] * fVar2) -
            (in_stack_0000000c[2] * fVar4 +
            *in_stack_0000000c * fVar1 + in_stack_0000000c[1] * fVar2);
    if (0.0 < fVar5) {
      if (fVar5 < fVar3) {
        *in_stack_00000004 = *in_stack_0000000c + fVar1 * fVar5;
        in_stack_00000004[1] = in_stack_0000000c[1] + fVar2 * fVar5;
        in_stack_00000004[2] = in_stack_0000000c[2] + fVar4 * fVar5;
        return in_stack_00000004;
      }
      *in_stack_00000004 = *in_stack_00000010;
      in_stack_00000004[1] = in_stack_00000010[1];
      pfVar6 = in_stack_00000010 + 2;
      goto LAB_00515093;
    }
  }
  *in_stack_00000004 = *in_stack_0000000c;
  in_stack_00000004[1] = in_stack_0000000c[1];
LAB_00515093:
  in_stack_00000004[2] = *pfVar6;
  return in_stack_00000004;
}


// Assembly code:
// 00514f90: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00514f90
// 00514f91: PUSH ESI
// 00514f92: PUSH EDI
// 00514f93: PUSH EBP
// 00514f94: MOV EBP,ESP
// 00514f96: SUB ESP,0x40
// 00514f99: AND ESP,0xfffffff8
// 00514f9c: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00514f9f: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00514fa2: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00514fa5: FLD float ptr [EBX]
// 00514fa7: FSUB float ptr [EDX]
// 00514fa9: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (WRITE)
// 00514fad: FLD float ptr [EBX + 0x4]
// 00514fb0: FSUB float ptr [EDX + 0x4]
// 00514fb3: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 00514fb7: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 00514fbb: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 00514fbf: FMUL ST0
// 00514fc1: FLD float ptr [EBX + 0x8]
// 00514fc4: FSUB float ptr [EDX + 0x8]
// 00514fc7: FXCH
// 00514fc9: FADDP ST2,ST0
// 00514fcb: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (WRITE)
// 00514fcf: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 00514fd3: FADDP
// 00514fd5: FSQRT
// 00514fd7: FLDZ
// 00514fd9: LEA ESI,[ECX + 0x4]
// 00514fdc: LEA EAX,[EDX + 0x8]
// 00514fdf: LEA EDI,[ECX + 0x8]
// 00514fe2: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00514fe6: LEA EAX,[EDX + 0x4]
// 00514fe9: FXCH
// 00514feb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00514fee: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00514ff2: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00514ff5: FNSTSW AX
// 00514ff7: SAHF
// 00514ff8: JNC 0x005150a0
//   XREF to: 005150a0 (CONDITIONAL_JUMP)
// 00514ffe: FLD double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00515001: FLD1
// 00515003: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 00515007: FXCH ST2
// 00515009: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (WRITE)
// 0051500d: FDIV float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 00515011: FXCH
// 00515013: FMUL ST1
// 00515015: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 00515019: FMUL ST2
// 0051501b: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0051501f: FMULP ST3
// 00515021: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00515024: FXCH
// 00515026: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (WRITE)
// 0051502a: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0051502e: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (WRITE)
// 00515032: FLD float ptr [EDX + 0x4]
// 00515035: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 00515039: FLD float ptr [EAX + 0x4]
// 0051503c: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 00515040: FLD float ptr [EDX]
// 00515042: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 00515046: FLD float ptr [EAX]
// 00515048: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 0051504c: FXCH
// 0051504e: FADDP ST3,ST0
// 00515050: FADDP
// 00515052: FLD float ptr [EDX + 0x8]
// 00515055: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 00515059: FLD float ptr [EAX + 0x8]
// 0051505c: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 00515060: FXCH
// 00515062: FADDP ST3,ST0
// 00515064: FADDP
// 00515066: FSUBRP
// 00515068: FLDZ
// 0051506a: FXCH
// 0051506c: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 00515070: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 00515074: FNSTSW AX
// 00515076: SAHF
// 00515077: JNC 0x005150a0
//   XREF to: 005150a0 (CONDITIONAL_JUMP)
// 00515079: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0051507d: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00515080: FNSTSW AX
// 00515082: SAHF
// 00515083: JC 0x005150b2
//   XREF to: 005150b2 (CONDITIONAL_JUMP)
// 00515085: MOV EDX,dword ptr [EBX]
// 00515087: MOV dword ptr [ECX],EDX
// 00515089: LEA EDX,[EBX + 0x4]
// 0051508c: MOV EDX,dword ptr [EDX]
// 0051508e: MOV dword ptr [ESI],EDX
// 00515090: LEA EDX,[EBX + 0x8]
// 00515093: MOV EDX,dword ptr [EDX]
//   Label: LAB_00515093
// 00515095: MOV dword ptr [EDI],EDX
// 00515097: MOV EAX,ECX
// 00515099: MOV ESP,EBP
// 0051509b: POP EBP
// 0051509c: POP EDI
// 0051509d: POP ESI
// 0051509e: POP EBX
// 0051509f: RET
// 005150a0: MOV EDX,dword ptr [EDX]
//   Label: LAB_005150a0
// 005150a2: MOV dword ptr [ECX],EDX
// 005150a4: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 005150a8: MOV EDX,dword ptr [EDX]
// 005150aa: MOV dword ptr [ESI],EDX
// 005150ac: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 005150b0: JMP 0x00515093
//   XREF to: 00515093 (UNCONDITIONAL_JUMP)
// 005150b2: FLD float ptr [ESP + 0x1c]
//   Label: LAB_005150b2
//   XREF to: Stack[-0x34] (READ)
// 005150b6: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005150ba: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (WRITE)
// 005150be: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 005150c2: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 005150c6: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 005150ca: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 005150ce: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 005150d2: FXCH ST2
// 005150d4: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (WRITE)
// 005150d8: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 005150dc: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (WRITE)
// 005150e0: FLD float ptr [EDX]
// 005150e2: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (READ)
// 005150e6: FSTP float ptr [ECX]
// 005150e8: FLD float ptr [EDX + 0x4]
// 005150eb: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 005150ef: FSTP float ptr [ECX + 0x4]
// 005150f2: FLD float ptr [EDX + 0x8]
// 005150f5: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 005150f9: FSTP float ptr [ECX + 0x8]
// 005150fc: MOV EAX,ECX
// 005150fe: MOV ESP,EBP
// 00515100: POP EBP
// 00515101: POP EDI
// 00515102: POP ESI
// 00515103: POP EBX
// 00515104: RET
