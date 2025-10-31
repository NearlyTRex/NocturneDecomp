// Name: sound_sndmain.cpp_FUN_005a3c90
// Address: 005a3c90
// Address Range: [[005a3c90, 005a3fd0]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a3c90()
// Globals:
//   undefined4 DAT_0064f3a7
//   undefined4 DAT_0064f3af

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005a3fc6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_005a3c90(void)

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
  int iVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
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
  int local_30;
  int local_2c;
  int local_1c;
  
  for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < in_stack_00000008; local_2c = local_2c + 1) {
  }
  uVar16 = 0;
  if (0 < in_stack_00000008) {
    do {
      iVar10 = 0;
      uVar8 = 0;
      uVar13 = uVar16;
      if (0 < local_2c) {
        do {
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 * 2 | uVar13 & 1;
          uVar13 = (int)uVar13 >> 1;
        } while (iVar10 < local_2c);
      }
      *(undefined4 *)(in_stack_0000000c + uVar8 * 4) = *in_stack_00000004;
      *(undefined4 *)(uVar8 * 4 + in_stack_00000010) = 0;
      uVar16 = uVar16 + 1;
      in_stack_00000004 = in_stack_00000004 + 1;
    } while ((int)uVar16 < in_stack_00000008);
  }
  local_30 = 2;
  if (1 < in_stack_00000008) {
    do {
      iVar10 = local_30 / 2;
      fVar18 = (float10)_DAT_0064f3af / (float10)iVar10;
      fVar3 = (float10)fcos(fVar18);
      fVar19 = (float10)fsin(fVar18);
      fVar20 = (float10)_DAT_0064f3a7;
      fVar18 = fVar18 * fVar20;
      fVar21 = (float10)fsin(fVar18);
      fVar18 = (float10)fcos(fVar18);
      local_1c = 0;
      if (0 < in_stack_00000008) {
        do {
          iVar17 = 0;
          if (0 < iVar10) {
            fVar22 = (float10)(double)((float10)(double)fVar3 * fVar20);
            iVar11 = local_1c * 4;
            pfVar9 = (float *)(in_stack_00000010 + iVar11);
            pfVar12 = (float *)(in_stack_0000000c + iVar10 * 4 + iVar11);
            pfVar14 = (float *)(in_stack_0000000c + iVar11);
            pfVar15 = (float *)(in_stack_00000010 + iVar10 * 4 + iVar11);
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
              fVar24 = fVar23 * (float10)*pfVar12 - fVar24 * (float10)*pfVar15;
              fVar23 = (float10)dVar2 * (float10)*pfVar12 + (float10)dVar1 * (float10)*pfVar15;
              *pfVar12 = (float)((float10)*pfVar14 - fVar24);
              *pfVar15 = (float)((float10)*pfVar9 - fVar23);
              *pfVar14 = (float)((float10)*pfVar14 + fVar24);
              *pfVar9 = (float)(fVar23 + (float10)*pfVar9);
              pfVar9 = pfVar9 + 1;
              pfVar12 = pfVar12 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar15 = pfVar15 + 1;
              dVar5 = dVar4;
              dVar7 = dVar6;
            } while (iVar17 < iVar10);
          }
          local_1c = local_1c + local_30;
        } while (local_1c < in_stack_00000008);
      }
      local_30 = local_30 * 2;
    } while (local_30 <= in_stack_00000008);
  }
  return;
}


// Assembly code:
// 005a3c90: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a3c90
// 005a3c91: PUSH ESI
// 005a3c92: PUSH EDI
// 005a3c93: PUSH EBP
// 005a3c94: MOV EBP,ESP
// 005a3c96: SUB ESP,0x9c
// 005a3c9c: AND ESP,0xfffffff8
// 005a3c9f: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a3ca2: MOV ECX,0x1
// 005a3ca7: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a3caa: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a3cb1: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a3cb4: XOR EDX,EDX
// 005a3cb6: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a3cbd: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a3cc0: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005a3cc4: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005a3ccb: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a3cd2: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (READ)
// 005a3cd9: MOV CL,byte ptr [ESP + 0x84]
//   Label: LAB_005a3cd9
//   XREF to: Stack[-0x2c] (READ)
// 005a3ce0: MOV EAX,0x1
// 005a3ce5: SHL EAX,CL
// 005a3ce7: CMP EAX,EBX
// 005a3ce9: JL 0x005a3fba
//   XREF to: 005a3fba (CONDITIONAL_JUMP)
// 005a3cef: XOR ESI,ESI
// 005a3cf1: TEST EBX,EBX
// 005a3cf3: JLE 0x005a3d59
//   XREF to: 005a3d59 (CONDITIONAL_JUMP)
// 005a3cf5: MOV EBX,dword ptr [ESP + 0x84]
//   Label: LAB_005a3cf5
//   XREF to: Stack[-0x2c] (READ)
// 005a3cfc: MOV EDX,ESI
// 005a3cfe: XOR ECX,ECX
// 005a3d00: XOR EAX,EAX
// 005a3d02: TEST EBX,EBX
// 005a3d04: JLE 0x005a3d1d
//   XREF to: 005a3d1d (CONDITIONAL_JUMP)
// 005a3d06: MOV EBX,EDX
//   Label: LAB_005a3d06
// 005a3d08: ADD EAX,EAX
// 005a3d0a: AND EBX,0x1
// 005a3d0d: INC ECX
// 005a3d0e: OR EAX,EBX
// 005a3d10: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x2c] (READ)
// 005a3d17: SAR EDX,0x1
// 005a3d19: CMP ECX,EBX
// 005a3d1b: JL 0x005a3d06
//   XREF to: 005a3d06 (CONDITIONAL_JUMP)
// 005a3d1d: FLD float ptr [EDI]
//   Label: LAB_005a3d1d
// 005a3d1f: MOV EDX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 005a3d26: SHL EAX,0x2
// 005a3d29: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (READ)
// 005a3d2d: FSTP float ptr [EDX + EAX*0x1]
// 005a3d30: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x24] (READ)
// 005a3d37: LEA ECX,[ESI*0x4 + 0x0]
// 005a3d3e: ADD EAX,EDX
// 005a3d40: TEST EBX,EBX
// 005a3d42: JNZ 0x005a3fc6
//   XREF to: 005a3fc6 (CONDITIONAL_JUMP)
// 005a3d48: MOV dword ptr [EAX],EBX
// 005a3d4a: MOV ECX,dword ptr [ESP + 0x88]
//   Label: LAB_005a3d4a
//   XREF to: Stack[-0x28] (READ)
// 005a3d51: INC ESI
// 005a3d52: ADD EDI,0x4
// 005a3d55: CMP ESI,ECX
// 005a3d57: JL 0x005a3cf5
//   XREF to: 005a3cf5 (CONDITIONAL_JUMP)
// 005a3d59: MOV EBX,0x2
//   Label: LAB_005a3d59
// 005a3d5e: MOV ESI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (READ)
// 005a3d65: MOV dword ptr [ESP + 0x80],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005a3d6c: CMP ESI,EBX
// 005a3d6e: JL 0x005a3fb3
//   XREF to: 005a3fb3 (CONDITIONAL_JUMP)
// 005a3d74: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_005a3d74
//   XREF to: Stack[-0x30] (READ)
// 005a3d7b: MOV EDX,EAX
// 005a3d7d: SAR EDX,0x1f
// 005a3d80: SUB EAX,EDX
// 005a3d82: SAR EAX,0x1
// 005a3d84: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a3d8b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005a3d8f: FILD dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (READ)
// 005a3d96: FDIVR double ptr [0x0064f3af]
//   XREF to: 0064f3af (READ)
// 005a3d9c: FLD ST0
// 005a3d9e: FSINCOS
// 005a3da0: FXCH ST2
// 005a3da2: FLD double ptr [0x0064f3a7]
//   XREF to: 0064f3a7 (READ)
// 005a3da8: FXCH
// 005a3daa: FMUL ST1
// 005a3dac: FLD ST0
// 005a3dae: FSIN
// 005a3db0: FXCH
// 005a3db2: FCOS
// 005a3db4: FXCH ST4
// 005a3db6: FSTP double ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (WRITE)
// 005a3dba: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 005a3dbe: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005a3dc2: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 005a3dc6: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005a3dca: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x98] (READ)
// 005a3dce: FMULP ST2
// 005a3dd0: XOR ESI,ESI
// 005a3dd2: MOV EDI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (READ)
// 005a3dd9: MOV dword ptr [ESP + 0x94],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005a3de0: FXCH ST2
// 005a3de2: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x90] (WRITE)
// 005a3de6: FXCH ST2
// 005a3de8: FSTP double ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (WRITE)
// 005a3dec: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 005a3df0: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (WRITE)
// 005a3df4: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005a3df8: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 005a3dfc: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 005a3dff: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005a3e03: TEST EDI,EDI
// 005a3e05: JLE 0x005a3f94
//   XREF to: 005a3f94 (CONDITIONAL_JUMP)
// 005a3e0b: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005a3e0b
//   XREF to: Stack[-0x98] (READ)
// 005a3e0f: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005a3e13: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x94] (READ)
// 005a3e17: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005a3e1b: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xa0] (READ)
// 005a3e1f: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005a3e23: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x9c] (READ)
// 005a3e27: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005a3e2b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x90] (READ)
// 005a3e2f: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005a3e33: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x8c] (READ)
// 005a3e37: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005a3e3b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (READ)
// 005a3e3f: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x88] (READ)
// 005a3e43: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005a3e47: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xa4] (READ)
// 005a3e4b: XOR ESI,ESI
// 005a3e4d: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005a3e51: TEST EBX,EBX
// 005a3e53: JLE 0x005a3f6e
//   XREF to: 005a3f6e (CONDITIONAL_JUMP)
// 005a3e59: FLD double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 005a3e5c: MOV ECX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x1c] (READ)
// 005a3e63: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x24] (READ)
// 005a3e6a: SHL EBX,0x2
// 005a3e6d: MOV EDX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 005a3e74: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005a3e7b: MOV EBX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x24] (READ)
// 005a3e82: MOV EDI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (READ)
// 005a3e89: SHL ECX,0x2
// 005a3e8c: ADD EBX,EDI
// 005a3e8e: MOV EDI,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 005a3e95: ADD EAX,ECX
// 005a3e97: ADD EDI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (READ)
// 005a3e9e: ADD EDX,ECX
// 005a3ea0: ADD EDI,ECX
// 005a3ea2: ADD EBX,ECX
// 005a3ea4: MOV ECX,EDI
// 005a3ea6: FLD ST0
//   Label: LAB_005a3ea6
// 005a3ea8: FMUL double ptr [ESP + 0x4c]
//   XREF to: Stack[-0x64] (READ)
// 005a3eac: FLD ST1
// 005a3eae: FMUL double ptr [ESP + 0x34]
//   XREF to: Stack[-0x7c] (READ)
// 005a3eb2: FXCH
// 005a3eb4: FSUB double ptr [ESP + 0x54]
//   XREF to: Stack[-0x5c] (READ)
// 005a3eb8: FLD float ptr [ECX]
// 005a3eba: FXCH
// 005a3ebc: FST double ptr [ESP + 0x44]
//   XREF to: Stack[-0x6c] (WRITE)
// 005a3ec0: FMUL ST1
// 005a3ec2: FXCH ST2
// 005a3ec4: FSUB double ptr [ESP + 0x3c]
//   XREF to: Stack[-0x74] (READ)
// 005a3ec8: FLD float ptr [EBX]
// 005a3eca: FLD double ptr [ESP + 0x44]
//   XREF to: Stack[-0x6c] (READ)
// 005a3ece: FMUL ST1
// 005a3ed0: FXCH ST2
// 005a3ed2: FST double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x84] (WRITE)
// 005a3ed6: FMULP
// 005a3ed8: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x84] (READ)
// 005a3edc: FMULP ST3
// 005a3ede: FLD float ptr [EDX]
// 005a3ee0: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x64] (READ)
// 005a3ee4: ADD EAX,0x4
// 005a3ee7: ADD EDX,0x4
// 005a3eea: MOV dword ptr [ESP + 0x54],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 005a3eee: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (READ)
// 005a3ef2: ADD EBX,0x4
// 005a3ef5: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x58] (WRITE)
// 005a3ef9: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x6c] (READ)
// 005a3efd: ADD ECX,0x4
// 005a3f00: MOV dword ptr [ESP + 0x4c],EDI
//   XREF to: Stack[-0x64] (WRITE)
// 005a3f04: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x68] (READ)
// 005a3f08: INC ESI
// 005a3f09: MOV dword ptr [ESP + 0x50],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 005a3f0d: FXCH
// 005a3f0f: FSUBP ST4,ST0
// 005a3f11: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x7c] (READ)
// 005a3f15: FXCH ST2
// 005a3f17: FADDP
// 005a3f19: FXCH
// 005a3f1b: FSUB ST0,ST2
// 005a3f1d: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 005a3f21: FSTP float ptr [ECX + -0x4]
// 005a3f24: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x78] (READ)
// 005a3f28: FLD float ptr [EAX + -0x4]
// 005a3f2b: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 005a3f2f: FSUB ST0,ST1
// 005a3f31: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x84] (READ)
// 005a3f35: FSTP float ptr [EBX + -0x4]
// 005a3f38: FLD float ptr [EDX + -0x4]
// 005a3f3b: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 005a3f3f: FLD ST0
// 005a3f41: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x80] (READ)
// 005a3f45: FADDP ST3,ST0
// 005a3f47: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x78] (WRITE)
// 005a3f4b: FXCH ST2
// 005a3f4d: FSTP ST2
// 005a3f4f: FXCH
// 005a3f51: FSTP float ptr [EDX + -0x4]
// 005a3f54: FLD float ptr [EAX + -0x4]
// 005a3f57: FADD ST1,ST0
// 005a3f59: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x88] (READ)
// 005a3f5d: FXCH
// 005a3f5f: FSTP ST1
// 005a3f61: FSTP float ptr [EAX + -0x4]
// 005a3f64: CMP ESI,EDI
// 005a3f66: JL 0x005a3ea6
//   XREF to: 005a3ea6 (CONDITIONAL_JUMP)
// 005a3f6c: FSTP ST0
// 005a3f6e: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_005a3f6e
//   XREF to: Stack[-0x30] (READ)
// 005a3f75: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x1c] (READ)
// 005a3f7c: ADD EDX,EAX
// 005a3f7e: MOV ECX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (READ)
// 005a3f85: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a3f8c: CMP EDX,ECX
// 005a3f8e: JL 0x005a3e0b
//   XREF to: 005a3e0b (CONDITIONAL_JUMP)
// 005a3f94: MOV ECX,dword ptr [ESP + 0x80]
//   Label: LAB_005a3f94
//   XREF to: Stack[-0x30] (READ)
// 005a3f9b: ADD ECX,ECX
// 005a3f9d: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (READ)
// 005a3fa4: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005a3fab: CMP ECX,EBX
// 005a3fad: JLE 0x005a3d74
//   XREF to: 005a3d74 (CONDITIONAL_JUMP)
// 005a3fb3: MOV ESP,EBP
//   Label: LAB_005a3fb3
// 005a3fb5: POP EBP
// 005a3fb6: POP EDI
// 005a3fb7: POP ESI
// 005a3fb8: POP EBX
// 005a3fb9: RET
// 005a3fba: INC dword ptr [ESP + 0x84]
//   Label: LAB_005a3fba
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 005a3fc1: JMP 0x005a3cd9
//   XREF to: 005a3cd9 (UNCONDITIONAL_JUMP)
// 005a3fc6: ADD ECX,EBX
//   Label: LAB_005a3fc6
// 005a3fc8: MOV EDX,dword ptr [ECX]
// 005a3fca: MOV dword ptr [EAX],EDX
// 005a3fcc: JMP 0x005a3d4a
//   XREF to: 005a3d4a (UNCONDITIONAL_JUMP)
