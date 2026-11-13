// Name: sound_sndmain.cpp_FUN_0056d7d0
// Address: 0056d7d0
// Address Range: [[0056d7d0, 0056db0a]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_0056d7d0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056db00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_sndmain_cpp_FUN_0056d7d0(void)

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
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
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
  uint *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int iStack_34;
  int iStack_30;
  int iStack_20;
  
  for (iStack_34 = 1; 1 << ((byte)iStack_34 & 0x1f) < in_stack_00000008; iStack_34 = iStack_34 + 1)
  {
  }
  uVar16 = 0;
  if (0 < in_stack_00000008) {
    do {
      iVar13 = 0;
      uVar8 = 0;
      uVar10 = uVar16;
      if (0 < iStack_34) {
        do {
          iVar13 = iVar13 + 1;
          uVar8 = uVar8 * 2 | uVar10 & 1;
          uVar10 = (int)uVar10 >> 1;
        } while (iVar13 < iStack_34);
      }
      *(uint *)(in_stack_0000000c + uVar8 * 4) = *in_stack_00000004;
      *(uint *)(uVar8 * 4 + in_stack_00000010) = 0;
      uVar16 = uVar16 + 1;
      in_stack_00000004 = in_stack_00000004 + 1;
    } while ((int)uVar16 < in_stack_00000008);
  }
  iStack_30 = 2;
  if (1 < in_stack_00000008) {
    do {
      iVar13 = iStack_30 / 2;
      fVar18 = (float10)_DAT_005f2a80 / (float10)iVar13;
      fVar3 = (float10)fcos(fVar18);
      fVar19 = (float10)fsin(fVar18);
      fVar20 = (float10)_DAT_005f2a78;
      fVar18 = fVar18 * fVar20;
      fVar21 = (float10)fsin(fVar18);
      fVar18 = (float10)fcos(fVar18);
      iStack_20 = 0;
      if (0 < in_stack_00000008) {
        do {
          iVar17 = 0;
          if (0 < iVar13) {
            fVar22 = (float10)(double)((float10)(double)fVar3 * fVar20);
            iVar11 = iStack_20 * 4;
            pfVar9 = (float *)(in_stack_00000010 + iVar11);
            pfVar12 = (float *)(in_stack_0000000c + iVar13 * 4 + iVar11);
            pfVar14 = (float *)(in_stack_0000000c + iVar11);
            pfVar15 = (float *)(in_stack_00000010 + iVar13 * 4 + iVar11);
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
            } while (iVar17 < iVar13);
          }
          iStack_20 = iStack_20 + iStack_30;
        } while (iStack_20 < in_stack_00000008);
      }
      iStack_30 = iStack_30 * 2;
    } while (iStack_30 <= in_stack_00000008);
  }
  return;
}
