// Name: sound_sndmain.cpp_FUN_005211f0
// Address: 005211f0
// Address Range: [[005211f0, 005214d0]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005211f0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_005211f0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

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
  uint uVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_20 = 1; 1 << ((byte)local_20 & 0x1f) < param_5; local_20 = local_20 + 1) {
  }
  uVar17 = 0;
  if (0 < param_5) {
    do {
      iVar10 = 0;
      uVar8 = 0;
      uVar12 = uVar17;
      if (0 < local_20) {
        do {
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 * 2 | uVar12 & 1;
          uVar12 = (int)uVar12 >> 1;
        } while (iVar10 < local_20);
      }
      *(uint *)(param_3 + uVar8 * 4) = *param_1;
      uVar14 = 0;
      if (param_2 != 0) {
        uVar14 = *(uint *)(uVar17 * 4 + param_2);
      }
      *(uint *)(uVar8 * 4 + param_4) = uVar14;
      uVar17 = uVar17 + 1;
      param_1 = param_1 + 1;
    } while ((int)uVar17 < param_5);
  }
  local_24 = 2;
  if (1 < param_5) {
    do {
      iVar10 = local_24 / 2;
      fVar19 = (float10)_DAT_00592116 / (float10)iVar10;
      fVar3 = (float10)fcos(fVar19);
      fVar20 = (float10)fsin(fVar19);
      fVar21 = (float10)_DAT_0059210e;
      fVar19 = fVar19 * fVar21;
      fVar22 = (float10)fsin(fVar19);
      fVar19 = (float10)fcos(fVar19);
      local_1c = 0;
      if (0 < param_5) {
        do {
          iVar18 = 0;
          if (0 < iVar10) {
            fVar23 = (float10)(double)((float10)(double)fVar3 * fVar21);
            iVar15 = local_1c * 4;
            pfVar9 = (float *)(param_3 + iVar15);
            pfVar11 = (float *)(param_4 + iVar10 * 4 + iVar15);
            pfVar13 = (float *)(param_4 + iVar15);
            pfVar16 = (float *)(param_3 + iVar10 * 4 + iVar15);
            dVar1 = (double)fVar3;
            dVar5 = (double)fVar19;
            dVar2 = (double)fVar20;
            dVar7 = (double)fVar22;
            do {
              dVar6 = dVar2;
              dVar4 = dVar1;
              fVar24 = fVar23 * (float10)dVar4 - (float10)dVar5;
              dVar1 = (double)fVar24;
              fVar25 = fVar23 * (float10)dVar6 - (float10)dVar7;
              dVar2 = (double)fVar25;
              iVar18 = iVar18 + 1;
              fVar25 = fVar24 * (float10)*pfVar16 - fVar25 * (float10)*pfVar11;
              fVar24 = (float10)dVar2 * (float10)*pfVar16 + (float10)dVar1 * (float10)*pfVar11;
              *pfVar16 = (float)((float10)*pfVar9 - fVar25);
              *pfVar11 = (float)((float10)*pfVar13 - fVar24);
              *pfVar9 = (float)((float10)*pfVar9 + fVar25);
              *pfVar13 = (float)(fVar24 + (float10)*pfVar13);
              pfVar9 = pfVar9 + 1;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar16 = pfVar16 + 1;
              dVar5 = dVar4;
              dVar7 = dVar6;
            } while (iVar18 < iVar10);
          }
          local_1c = local_1c + local_24;
        } while (local_1c < param_5);
      }
      local_24 = local_24 * 2;
    } while (local_24 <= param_5);
  }
  return;
}
