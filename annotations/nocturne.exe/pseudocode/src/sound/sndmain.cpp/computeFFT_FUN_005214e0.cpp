// Name: sound_sndmain.cpp_computeFFT_FUN_005214e0
// Address: 005214e0
// Address Range: [[005214e0, 00521820]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_computeFFT_FUN_005214e0(float *input,int size,float *output_real,float *output_imag)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00521816) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_computeFFT_FUN_005214e0(float *input,int size,float *output_real,float *output_imag)

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
  float *pfVar14;
  uint uVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  int local_30;
  int local_2c;
  int local_1c;
  
  for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < size; local_2c = local_2c + 1) {
  }
  uVar15 = 0;
  if (0 < size) {
    do {
      iVar10 = 0;
      uVar8 = 0;
      uVar12 = uVar15;
      if (0 < local_2c) {
        do {
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 * 2 | uVar12 & 1;
          uVar12 = (int)uVar12 >> 1;
        } while (iVar10 < local_2c);
      }
      output_real[uVar8] = *input;
      output_imag[uVar8] = 0.0;
      uVar15 = uVar15 + 1;
      input = input + 1;
    } while ((int)uVar15 < size);
  }
  local_30 = 2;
  if (1 < size) {
    do {
      iVar10 = local_30 / 2;
      fVar17 = (float10)_DAT_00592126 / (float10)iVar10;
      fVar3 = (float10)fcos(fVar17);
      fVar18 = (float10)fsin(fVar17);
      fVar19 = (float10)_DAT_0059211e;
      fVar17 = fVar17 * fVar19;
      fVar20 = (float10)fsin(fVar17);
      fVar17 = (float10)fcos(fVar17);
      local_1c = 0;
      if (0 < size) {
        do {
          iVar16 = 0;
          if (0 < iVar10) {
            fVar21 = (float10)(double)((float10)(double)fVar3 * fVar19);
            pfVar9 = output_imag + local_1c;
            pfVar11 = output_real + iVar10 + local_1c;
            pfVar13 = output_real + local_1c;
            pfVar14 = output_imag + iVar10 + local_1c;
            dVar1 = (double)fVar3;
            dVar5 = (double)fVar17;
            dVar2 = (double)fVar18;
            dVar7 = (double)fVar20;
            do {
              dVar6 = dVar2;
              dVar4 = dVar1;
              fVar22 = fVar21 * (float10)dVar4 - (float10)dVar5;
              dVar1 = (double)fVar22;
              fVar23 = fVar21 * (float10)dVar6 - (float10)dVar7;
              dVar2 = (double)fVar23;
              iVar16 = iVar16 + 1;
              fVar23 = fVar22 * (float10)*pfVar11 - fVar23 * (float10)*pfVar14;
              fVar22 = (float10)dVar2 * (float10)*pfVar11 + (float10)dVar1 * (float10)*pfVar14;
              *pfVar11 = (float)((float10)*pfVar13 - fVar23);
              *pfVar14 = (float)((float10)*pfVar9 - fVar22);
              *pfVar13 = (float)((float10)*pfVar13 + fVar23);
              *pfVar9 = (float)(fVar22 + (float10)*pfVar9);
              pfVar9 = pfVar9 + 1;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              dVar5 = dVar4;
              dVar7 = dVar6;
            } while (iVar16 < iVar10);
          }
          local_1c = local_1c + local_30;
        } while (local_1c < size);
      }
      local_30 = local_30 * 2;
    } while (local_30 <= size);
  }
  return;
}
