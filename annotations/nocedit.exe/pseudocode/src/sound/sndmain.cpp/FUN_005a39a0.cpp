// Name: sound_sndmain.cpp_FUN_005a39a0
// Address: 005a39a0
// Address Range: [[005a39a0, 005a3c80]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a39a0()
// Globals:
//   double DOUBLE_0064f397 = 2
//   double DOUBLE_0064f39f = 3.14159265350000

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a39a0(void)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_20 = 1; 1 << ((byte)local_20 & 0x1f) < in_stack_00000014; local_20 = local_20 + 1) {
  }
  uVar16 = 0;
  if (0 < in_stack_00000014) {
    do {
      iVar10 = 0;
      uVar8 = 0;
      uVar12 = uVar16;
      if (0 < local_20) {
        do {
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 * 2 | uVar12 & 1;
          uVar12 = (int)uVar12 >> 1;
        } while (iVar10 < local_20);
      }
      *(undefined4 *)(in_stack_0000000c + uVar8 * 4) = *in_stack_00000004;
      iVar10 = in_stack_00000008;
      if (in_stack_00000008 != 0) {
        iVar10 = *(int *)(uVar16 * 4 + in_stack_00000008);
      }
      *(int *)(uVar8 * 4 + in_stack_00000010) = iVar10;
      uVar16 = uVar16 + 1;
      in_stack_00000004 = in_stack_00000004 + 1;
    } while ((int)uVar16 < in_stack_00000014);
  }
  local_24 = 2;
  if (1 < in_stack_00000014) {
    do {
      iVar10 = local_24 / 2;
      fVar18 = (float10)DOUBLE_0064f39f / (float10)iVar10;
      fVar3 = (float10)fcos(fVar18);
      fVar19 = (float10)fsin(fVar18);
      fVar20 = (float10)DOUBLE_0064f397;
      fVar18 = fVar18 * fVar20;
      fVar21 = (float10)fsin(fVar18);
      fVar18 = (float10)fcos(fVar18);
      local_1c = 0;
      if (0 < in_stack_00000014) {
        do {
          iVar17 = 0;
          if (0 < iVar10) {
            fVar22 = (float10)(double)((float10)(double)fVar3 * fVar20);
            iVar14 = local_1c * 4;
            pfVar9 = (float *)(in_stack_0000000c + iVar14);
            pfVar11 = (float *)(in_stack_00000010 + iVar10 * 4 + iVar14);
            pfVar13 = (float *)(in_stack_00000010 + iVar14);
            pfVar15 = (float *)(in_stack_0000000c + iVar10 * 4 + iVar14);
            dVar1 = (double)fVar3;
            dVar5 = (double)fVar18;
            dVar2 = (double)fVar19;
            dVar7 = (double)fVar21;
            do {
              dVar6 = dVar2;
              dVar4 = dVar1;
              fVar23 = fVar22 * (float10)dVar4 - (float10)dVar5;
              dVar1 = (double)fVar23;
              fVar24 = fVar22 * (float10)dVar6 - (float10)dVar7;
              dVar2 = (double)fVar24;
              iVar17 = iVar17 + 1;
              fVar24 = fVar23 * (float10)*pfVar15 - fVar24 * (float10)*pfVar11;
              fVar23 = (float10)dVar2 * (float10)*pfVar15 + (float10)dVar1 * (float10)*pfVar11;
              *pfVar15 = (float)((float10)*pfVar9 - fVar24);
              *pfVar11 = (float)((float10)*pfVar13 - fVar23);
              *pfVar9 = (float)((float10)*pfVar9 + fVar24);
              *pfVar13 = (float)(fVar23 + (float10)*pfVar13);
              pfVar9 = pfVar9 + 1;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar15 = pfVar15 + 1;
              dVar5 = dVar4;
              dVar7 = dVar6;
            } while (iVar17 < iVar10);
          }
          local_1c = local_1c + local_24;
        } while (local_1c < in_stack_00000014);
      }
      local_24 = local_24 * 2;
    } while (local_24 <= in_stack_00000014);
  }
  return;
}


// Assembly code:
// 005a39a0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a39a0
// 005a39a1: PUSH ESI
// 005a39a2: PUSH EDI
// 005a39a3: PUSH EBP
// 005a39a4: MOV EBP,ESP
// 005a39a6: SUB ESP,0x8c
// 005a39ac: AND ESP,0xfffffff8
// 005a39af: MOV dword ptr [ESP + 0x80],0x1
//   XREF to: Stack[-0x20] (WRITE)
// 005a39ba: MOV CL,byte ptr [ESP + 0x80]
//   Label: LAB_005a39ba
//   XREF to: Stack[-0x20] (READ)
// 005a39c1: MOV EAX,0x1
// 005a39c6: SHL EAX,CL
// 005a39c8: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a39cb: CMP EAX,ECX
// 005a39cd: JL 0x005a3c6b
//   XREF to: 005a3c6b (CONDITIONAL_JUMP)
// 005a39d3: XOR ESI,ESI
// 005a39d5: TEST ECX,ECX
// 005a39d7: JLE 0x005a3a33
//   XREF to: 005a3a33 (CONDITIONAL_JUMP)
// 005a39d9: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a39dc: MOV EBX,dword ptr [ESP + 0x80]
//   Label: LAB_005a39dc
//   XREF to: Stack[-0x20] (READ)
// 005a39e3: MOV EDX,ESI
// 005a39e5: XOR ECX,ECX
// 005a39e7: XOR EAX,EAX
// 005a39e9: TEST EBX,EBX
// 005a39eb: JLE 0x005a3a04
//   XREF to: 005a3a04 (CONDITIONAL_JUMP)
// 005a39ed: MOV EBX,EDX
//   Label: LAB_005a39ed
// 005a39ef: ADD EAX,EAX
// 005a39f1: AND EBX,0x1
// 005a39f4: INC ECX
// 005a39f5: OR EAX,EBX
// 005a39f7: MOV EBX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 005a39fe: SAR EDX,0x1
// 005a3a00: CMP ECX,EBX
// 005a3a02: JL 0x005a39ed
//   XREF to: 005a39ed (CONDITIONAL_JUMP)
// 005a3a04: FLD float ptr [EDI]
//   Label: LAB_005a3a04
// 005a3a06: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a3a09: SHL EAX,0x2
// 005a3a0c: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a3a0f: FSTP float ptr [EDX + EAX*0x1]
// 005a3a12: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a3a15: LEA ECX,[ESI*0x4 + 0x0]
// 005a3a1c: ADD EAX,EDX
// 005a3a1e: TEST EBX,EBX
// 005a3a20: JNZ 0x005a3c77
//   XREF to: 005a3c77 (CONDITIONAL_JUMP)
// 005a3a26: MOV dword ptr [EAX],EBX
//   Label: LAB_005a3a26
// 005a3a28: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a3a2b: INC ESI
// 005a3a2c: ADD EDI,0x4
// 005a3a2f: CMP ESI,EAX
// 005a3a31: JL 0x005a39dc
//   XREF to: 005a39dc (CONDITIONAL_JUMP)
// 005a3a33: MOV EDX,0x2
//   Label: LAB_005a3a33
// 005a3a38: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a3a3b: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005a3a3f: CMP ECX,EDX
// 005a3a41: JL 0x005a3c64
//   XREF to: 005a3c64 (CONDITIONAL_JUMP)
// 005a3a47: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_005a3a47
//   XREF to: Stack[-0x24] (READ)
// 005a3a4b: MOV EDX,EAX
// 005a3a4d: SAR EDX,0x1f
// 005a3a50: SUB EAX,EDX
// 005a3a52: SAR EAX,0x1
// 005a3a54: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a3a5b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005a3a5f: FILD dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 005a3a66: FDIVR double ptr [0x0064f39f]
//   XREF to: 0064f39f (READ)
// 005a3a6c: FLD ST0
// 005a3a6e: FSINCOS
// 005a3a70: FXCH ST2
// 005a3a72: FLD double ptr [0x0064f397]
//   XREF to: 0064f397 (READ)
// 005a3a78: FXCH
// 005a3a7a: FMUL ST1
// 005a3a7c: FLD ST0
// 005a3a7e: FSIN
// 005a3a80: FXCH
// 005a3a82: FCOS
// 005a3a84: FXCH ST4
// 005a3a86: FSTP double ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (WRITE)
// 005a3a8a: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 005a3a8e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005a3a92: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 005a3a96: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005a3a9a: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (READ)
// 005a3a9e: FMULP ST2
// 005a3aa0: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a3aa3: FXCH ST3
// 005a3aa5: FSTP double ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (WRITE)
// 005a3aa9: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 005a3aad: FXCH
// 005a3aaf: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x88] (WRITE)
// 005a3ab3: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xa0] (DATA)
// 005a3ab6: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 005a3aba: FXCH
// 005a3abc: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (WRITE)
// 005a3ac0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005a3ac4: XOR EAX,EAX
// 005a3ac6: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x80] (WRITE)
// 005a3aca: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a3ad1: TEST EDX,EDX
// 005a3ad3: JLE 0x005a3c4f
//   XREF to: 005a3c4f (CONDITIONAL_JUMP)
// 005a3ad9: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005a3ad9
//   XREF to: Stack[-0x98] (READ)
// 005a3add: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005a3ae1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x94] (READ)
// 005a3ae5: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005a3ae9: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 005a3aec: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005a3af0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 005a3af4: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005a3af8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x88] (READ)
// 005a3afc: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005a3b00: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x84] (READ)
// 005a3b04: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005a3b08: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (READ)
// 005a3b0c: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x78] (READ)
// 005a3b10: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005a3b14: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (READ)
// 005a3b18: XOR ESI,ESI
// 005a3b1a: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005a3b1e: TEST EDI,EDI
// 005a3b20: JLE 0x005a3c30
//   XREF to: 005a3c30 (CONDITIONAL_JUMP)
// 005a3b26: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x80] (READ)
// 005a3b2a: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 005a3b31: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a3b34: LEA ECX,[EDI*0x4 + 0x0]
// 005a3b3b: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a3b3e: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005a3b45: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a3b48: MOV EDI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 005a3b4f: SHL EBX,0x2
// 005a3b52: ADD ECX,EDI
// 005a3b54: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a3b57: ADD EDX,EBX
// 005a3b59: ADD EDI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 005a3b60: ADD EAX,EBX
// 005a3b62: ADD EDI,EBX
// 005a3b64: ADD ECX,EBX
// 005a3b66: MOV EBX,EDI
// 005a3b68: FLD ST0
//   Label: LAB_005a3b68
// 005a3b6a: FMUL double ptr [ESP + 0x4c]
//   XREF to: Stack[-0x54] (READ)
// 005a3b6e: FLD ST1
// 005a3b70: FMUL double ptr [ESP + 0x34]
//   XREF to: Stack[-0x6c] (READ)
// 005a3b74: FXCH
// 005a3b76: FSUB double ptr [ESP + 0x54]
//   XREF to: Stack[-0x4c] (READ)
// 005a3b7a: FLD float ptr [EBX]
// 005a3b7c: FXCH
// 005a3b7e: FST double ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (WRITE)
// 005a3b82: FMUL ST1
// 005a3b84: FXCH ST2
// 005a3b86: FSUB double ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 005a3b8a: FLD float ptr [ECX]
// 005a3b8c: FLD double ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (READ)
// 005a3b90: FMUL ST1
// 005a3b92: FXCH ST2
// 005a3b94: FST double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x74] (WRITE)
// 005a3b98: FMULP
// 005a3b9a: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x74] (READ)
// 005a3b9e: FMULP ST3
// 005a3ba0: FLD float ptr [EAX]
// 005a3ba2: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x54] (READ)
// 005a3ba6: ADD EDX,0x4
// 005a3ba9: ADD EAX,0x4
// 005a3bac: MOV dword ptr [ESP + 0x54],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 005a3bb0: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (READ)
// 005a3bb4: ADD ECX,0x4
// 005a3bb7: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 005a3bbb: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (READ)
// 005a3bbf: ADD EBX,0x4
// 005a3bc2: MOV dword ptr [ESP + 0x4c],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 005a3bc6: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 005a3bca: INC ESI
// 005a3bcb: MOV dword ptr [ESP + 0x50],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 005a3bcf: FXCH
// 005a3bd1: FSUBP ST4,ST0
// 005a3bd3: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x6c] (READ)
// 005a3bd7: FXCH ST2
// 005a3bd9: FADDP
// 005a3bdb: FXCH
// 005a3bdd: FSUB ST0,ST2
// 005a3bdf: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x64] (WRITE)
// 005a3be3: FSTP float ptr [EBX + -0x4]
// 005a3be6: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 005a3bea: FLD float ptr [EDX + -0x4]
// 005a3bed: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 005a3bf1: FSUB ST0,ST1
// 005a3bf3: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x74] (READ)
// 005a3bf7: FSTP float ptr [ECX + -0x4]
// 005a3bfa: FLD float ptr [EAX + -0x4]
// 005a3bfd: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 005a3c01: FLD ST0
// 005a3c03: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x70] (READ)
// 005a3c07: FADDP ST3,ST0
// 005a3c09: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x68] (WRITE)
// 005a3c0d: FXCH ST2
// 005a3c0f: FSTP ST2
// 005a3c11: FXCH
// 005a3c13: FSTP float ptr [EAX + -0x4]
// 005a3c16: FLD float ptr [EDX + -0x4]
// 005a3c19: FADD ST1,ST0
// 005a3c1b: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x78] (READ)
// 005a3c1f: FXCH
// 005a3c21: FSTP ST1
// 005a3c23: FSTP float ptr [EDX + -0x4]
// 005a3c26: CMP ESI,EDI
// 005a3c28: JL 0x005a3b68
//   XREF to: 005a3b68 (CONDITIONAL_JUMP)
// 005a3c2e: FSTP ST0
// 005a3c30: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_005a3c30
//   XREF to: Stack[-0x24] (READ)
// 005a3c34: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 005a3c3b: ADD ECX,EAX
// 005a3c3d: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a3c40: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a3c47: CMP ECX,EBX
// 005a3c49: JL 0x005a3ad9
//   XREF to: 005a3ad9 (CONDITIONAL_JUMP)
// 005a3c4f: MOV ESI,dword ptr [ESP + 0x7c]
//   Label: LAB_005a3c4f
//   XREF to: Stack[-0x24] (READ)
// 005a3c53: ADD ESI,ESI
// 005a3c55: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a3c58: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005a3c5c: CMP ESI,EDI
// 005a3c5e: JLE 0x005a3a47
//   XREF to: 005a3a47 (CONDITIONAL_JUMP)
// 005a3c64: MOV ESP,EBP
//   Label: LAB_005a3c64
// 005a3c66: POP EBP
// 005a3c67: POP EDI
// 005a3c68: POP ESI
// 005a3c69: POP EBX
// 005a3c6a: RET
// 005a3c6b: INC dword ptr [ESP + 0x80]
//   Label: LAB_005a3c6b
//   XREF to: Stack[-0x20] (READ_WRITE)
// 005a3c72: JMP 0x005a39ba
//   XREF to: 005a39ba (UNCONDITIONAL_JUMP)
// 005a3c77: MOV EDX,EBX
//   Label: LAB_005a3c77
// 005a3c79: MOV EBX,dword ptr [ECX + EDX*0x1]
// 005a3c7c: JMP 0x005a3a26
//   XREF to: 005a3a26 (UNCONDITIONAL_JUMP)
