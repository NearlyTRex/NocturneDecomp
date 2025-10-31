// Name: core_skeleton.cpp_FUN_005996e0
// Address: 005996e0
// Address Range: [[005996e0, 0059987d]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005996e0()

#include "nocturne.h"

float core_skeleton_cpp_FUN_005996e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  fVar1 = *in_stack_00000008 - *in_stack_00000004;
  fVar2 = in_stack_00000008[1] - in_stack_00000004[1];
  fVar4 = in_stack_00000008[2] - in_stack_00000004[2];
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  if (0.0 < fVar3) {
    fVar5 = 1.0 / fVar3;
    fVar1 = fVar1 * fVar5;
    fVar2 = fVar2 * fVar5;
    fVar4 = fVar4 * fVar5;
    fVar5 = (in_stack_0000000c[2] * fVar4 +
            *in_stack_0000000c * fVar1 + in_stack_0000000c[1] * fVar2) -
            (in_stack_00000004[2] * fVar4 +
            *in_stack_00000004 * fVar1 + in_stack_00000004[1] * fVar2);
    if (0.0 < fVar5) {
      if (fVar5 < fVar3) {
        fVar1 = *in_stack_0000000c - (*in_stack_00000004 + fVar1 * fVar5);
        fVar3 = in_stack_0000000c[1] - (in_stack_00000004[1] + fVar2 * fVar5);
        fVar2 = in_stack_0000000c[2] - (in_stack_00000004[2] + fVar4 * fVar5);
        return SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      }
      fVar1 = (in_stack_0000000c[1] - in_stack_00000008[1]) *
              (in_stack_0000000c[1] - in_stack_00000008[1]) +
              (*in_stack_0000000c - *in_stack_00000008) * (*in_stack_0000000c - *in_stack_00000008);
      fVar2 = in_stack_0000000c[2] - in_stack_00000008[2];
      goto LAB_005997d5;
    }
  }
  fVar1 = (in_stack_0000000c[1] - in_stack_00000004[1]) *
          (in_stack_0000000c[1] - in_stack_00000004[1]) +
          (*in_stack_0000000c - *in_stack_00000004) * (*in_stack_0000000c - *in_stack_00000004);
  fVar2 = in_stack_0000000c[2] - in_stack_00000004[2];
LAB_005997d5:
  return SQRT(fVar2 * fVar2 + fVar1);
}


// Assembly code:
// 005996e0: PUSH EBX
//   Label: core_skeleton.cpp_FUN_005996e0
// 005996e1: PUSH EBP
// 005996e2: MOV EBP,ESP
// 005996e4: SUB ESP,0x78
// 005996e7: AND ESP,0xfffffff8
// 005996ea: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005996ed: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005996f0: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005996f3: FLD float ptr [EBX]
// 005996f5: FSUB float ptr [ECX]
// 005996f7: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (WRITE)
// 005996fb: FLD float ptr [EBX + 0x4]
// 005996fe: FSUB float ptr [ECX + 0x4]
// 00599701: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (WRITE)
// 00599705: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (READ)
// 00599709: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (READ)
// 0059970d: FMUL ST0
// 0059970f: FLD float ptr [EBX + 0x8]
// 00599712: FSUB float ptr [ECX + 0x8]
// 00599715: FXCH
// 00599717: FADDP ST2,ST0
// 00599719: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (WRITE)
// 0059971d: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (READ)
// 00599721: FADDP
// 00599723: FSQRT
// 00599725: FLDZ
// 00599727: FXCH
// 00599729: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (WRITE)
// 0059972d: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 00599731: FNSTSW AX
// 00599733: SAHF
// 00599734: JNC 0x005997e8
//   XREF to: 005997e8 (CONDITIONAL_JUMP)
// 0059973a: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 0059973e: FLD1
// 00599740: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (READ)
// 00599744: FXCH ST2
// 00599746: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (WRITE)
// 0059974a: FDIV float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 0059974e: FXCH
// 00599750: FMUL ST1
// 00599752: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (READ)
// 00599756: FMUL ST2
// 00599758: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (READ)
// 0059975c: FMULP ST3
// 0059975e: FXCH
// 00599760: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (WRITE)
// 00599764: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (WRITE)
// 00599768: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (WRITE)
// 0059976c: FLD float ptr [ECX + 0x4]
// 0059976f: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (READ)
// 00599773: FLD float ptr [EDX + 0x4]
// 00599776: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (READ)
// 0059977a: FLD float ptr [ECX]
// 0059977c: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (READ)
// 00599780: FLD float ptr [EDX]
// 00599782: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (READ)
// 00599786: FXCH
// 00599788: FADDP ST3,ST0
// 0059978a: FADDP
// 0059978c: FLD float ptr [ECX + 0x8]
// 0059978f: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (READ)
// 00599793: FLD float ptr [EDX + 0x8]
// 00599796: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (READ)
// 0059979a: FXCH
// 0059979c: FADDP ST3,ST0
// 0059979e: FADDP
// 005997a0: FSUBRP
// 005997a2: FLDZ
// 005997a4: FXCH
// 005997a6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005997a9: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005997ac: FNSTSW AX
// 005997ae: SAHF
// 005997af: JNC 0x005997e8
//   XREF to: 005997e8 (CONDITIONAL_JUMP)
// 005997b1: FLD double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005997b4: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 005997b8: FNSTSW AX
// 005997ba: SAHF
// 005997bb: JC 0x00599802
//   XREF to: 00599802 (CONDITIONAL_JUMP)
// 005997bd: FLD float ptr [EDX]
// 005997bf: FSUB float ptr [EBX]
// 005997c1: FMUL ST0
// 005997c3: FLD float ptr [EDX + 0x4]
// 005997c6: FSUB float ptr [EBX + 0x4]
// 005997c9: FMUL ST0
// 005997cb: FLD float ptr [EDX + 0x8]
// 005997ce: FXCH
// 005997d0: FADDP ST2,ST0
// 005997d2: FSUB float ptr [EBX + 0x8]
// 005997d5: FMUL ST0
//   Label: LAB_005997d5
// 005997d7: FADDP
// 005997d9: FSQRT
// 005997db: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (WRITE)
// 005997df: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (READ)
// 005997e3: MOV ESP,EBP
// 005997e5: POP EBP
// 005997e6: POP EBX
// 005997e7: RET
// 005997e8: FLD float ptr [EDX]
//   Label: LAB_005997e8
// 005997ea: FSUB float ptr [ECX]
// 005997ec: FMUL ST0
// 005997ee: FLD float ptr [EDX + 0x4]
// 005997f1: FSUB float ptr [ECX + 0x4]
// 005997f4: FMUL ST0
// 005997f6: FLD float ptr [EDX + 0x8]
// 005997f9: FXCH
// 005997fb: FADDP ST2,ST0
// 005997fd: FSUB float ptr [ECX + 0x8]
// 00599800: JMP 0x005997d5
//   XREF to: 005997d5 (UNCONDITIONAL_JUMP)
// 00599802: FLD float ptr [ESP + 0x10]
//   Label: LAB_00599802
//   XREF to: Stack[-0x70] (READ)
// 00599806: FLD double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 00599809: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0xc] (WRITE)
// 0059980d: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0xc] (READ)
// 00599811: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (READ)
// 00599815: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0xc] (READ)
// 00599819: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (READ)
// 0059981d: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0xc] (READ)
// 00599821: FXCH ST2
// 00599823: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x64] (WRITE)
// 00599827: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x60] (WRITE)
// 0059982b: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x5c] (WRITE)
// 0059982f: FLD float ptr [ECX]
// 00599831: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x64] (READ)
// 00599835: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x58] (WRITE)
// 00599839: FLD float ptr [ECX + 0x4]
// 0059983c: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x60] (READ)
// 00599840: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x54] (WRITE)
// 00599844: FLD float ptr [ECX + 0x8]
// 00599847: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x5c] (READ)
// 0059984b: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x50] (WRITE)
// 0059984f: FLD float ptr [EDX]
// 00599851: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x58] (READ)
// 00599855: FMUL ST0
// 00599857: FLD float ptr [EDX + 0x4]
// 0059985a: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x54] (READ)
// 0059985e: FMUL ST0
// 00599860: FLD float ptr [EDX + 0x8]
// 00599863: FXCH
// 00599865: FADDP ST2,ST0
// 00599867: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x50] (READ)
// 0059986b: FMUL ST0
// 0059986d: FADDP
// 0059986f: FSQRT
// 00599871: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (WRITE)
// 00599875: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (READ)
// 00599879: MOV ESP,EBP
// 0059987b: POP EBP
// 0059987c: POP EBX
// 0059987d: RET
