// Name: sound_sndmain.cpp_computeFFT_FUN_005a3c90
// Address: 005a3c90
// MANUAL RECONSTRUCTION
// Address Range: [[005a3c90, 005a3fd0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_computeFFT_FUN_005a3c90(float *input,int size,float *output_real,float *output_imag)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_computeFFT_FUN_005a3c90(float *input,int size,float *output_real,float *output_imag)

{
  double dVar3;
  double dVar8;
  uint uVar8;
  int iVar9;
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
  float10 fVar10;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar11;
  float10 fVar12;
  int local_30;
  int local_2c;
  int local_1c;
  double dVar4;
  double dVar5;
  float10 fVar3;
  double dVar6;
  double dVar7;
  
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
      iVar9 = local_30 / 2;
      fVar17 = (float10)3.1415926535000001 / (float10)iVar9;
      fVar3 = (float10)fcos(fVar17);
      fVar18 = (float10)fsin(fVar17);
      fVar19 = (float10)2;
      fVar20 = (float10)fsin(fVar17 * fVar19);
      fVar10 = (float10)fcos(fVar17 * fVar19);
      local_1c = 0;
      if (0 < size) {
        do {
          iVar16 = 0;
          if (0 < iVar9) {
            fVar21 = (float10)(double)((float10)(double)fVar3 * fVar19);
            pfVar9 = output_imag + local_1c;
            pfVar11 = output_real + iVar9 + local_1c;
            pfVar13 = output_real + local_1c;
            pfVar14 = output_imag + iVar9 + local_1c;
            dVar3 = (double)fVar3;
            dVar5 = (double)fVar10;
            dVar8 = (double)fVar18;
            dVar7 = (double)fVar20;
            do {
              dVar6 = dVar8;
              dVar4 = dVar3;
              fVar22 = fVar21 * (float10)dVar4 - (float10)dVar5;
              fVar23 = fVar21 * (float10)dVar6 - (float10)dVar7;
              iVar16 = iVar16 + 1;
              fVar12 = fVar22 * (float10)*pfVar11 - fVar23 * (float10)*pfVar14;
              fVar11 = (float10)(double)fVar23 * (float10)*pfVar11 +
                       (float10)(double)fVar22 * (float10)*pfVar14;
              *pfVar11 = (float)((float10)*pfVar13 - fVar12);
              *pfVar14 = (float)((float10)*pfVar9 - fVar11);
              *pfVar13 = (float)((float10)*pfVar13 + fVar12);
              *pfVar9 = (float)(fVar11 + (float10)*pfVar9);
              pfVar9 = pfVar9 + 1;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              dVar3 = (double)fVar22;
              dVar5 = dVar4;
              dVar8 = (double)fVar23;
              dVar7 = dVar6;
            } while (iVar16 < iVar9);
          }
          local_1c = local_1c + local_30;
        } while (local_1c < size);
      }
      local_30 = local_30 * 2;
    } while (local_30 <= size);
  }
  return;
}
