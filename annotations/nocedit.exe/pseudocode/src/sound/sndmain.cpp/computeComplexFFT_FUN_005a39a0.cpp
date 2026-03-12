// Name: sound_sndmain.cpp_computeComplexFFT_FUN_005a39a0
// Address: 005a39a0
// Address Range: [[005a39a0, 005a3c80]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_computeComplexFFT_FUN_005a39a0(float *input_real,float *input_imag,float *output_real,float *output_imag,int size)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_computeComplexFFT_FUN_005a39a0(float *input_real,float *input_imag,float *output_real,float *output_imag,int size)

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
  float fVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar10;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar11;
  float10 fVar12;
  int local_24;
  int local_20;
  int local_1c;
  double dVar5;
  double dVar6;
  float10 fVar3;
  double dVar4;
  double dVar1;
  double dVar2;
  double dVar7;
  
  for (local_20 = 1; 1 << ((byte)local_20 & 0x1f) < size; local_20 = local_20 + 1) {
  }
  uVar16 = 0;
  if (0 < size) {
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
      output_real[uVar8] = *input_real;
      fVar14 = 0.0;
      if (input_imag != (float *)0x0) {
        fVar14 = input_imag[uVar16];
      }
      output_imag[uVar8] = fVar14;
      uVar16 = uVar16 + 1;
      input_real = input_real + 1;
    } while ((int)uVar16 < size);
  }
  local_24 = 2;
  if (1 < size) {
    do {
      iVar9 = local_24 / 2;
      fVar18 = (float10)3.1415926535000001 / (float10)iVar9;
      fVar3 = (float10)fcos(fVar18);
      fVar19 = (float10)fsin(fVar18);
      fVar20 = (float10)2;
      fVar21 = (float10)fsin(fVar18 * fVar20);
      fVar10 = (float10)fcos(fVar18 * fVar20);
      local_1c = 0;
      if (0 < size) {
        do {
          iVar17 = 0;
          if (0 < iVar9) {
            fVar22 = (float10)(double)((float10)(double)fVar3 * fVar20);
            pfVar9 = output_real + local_1c;
            pfVar11 = output_imag + iVar9 + local_1c;
            pfVar13 = output_imag + local_1c;
            pfVar15 = output_real + iVar9 + local_1c;
            dVar3 = (double)fVar3;
            dVar5 = (double)fVar10;
            dVar8 = (double)fVar19;
            dVar7 = (double)fVar21;
            do {
              dVar6 = dVar8;
              dVar4 = dVar3;
              fVar23 = fVar22 * (float10)dVar4 - (float10)dVar5;
              fVar24 = fVar22 * (float10)dVar6 - (float10)dVar7;
              iVar17 = iVar17 + 1;
              fVar12 = fVar23 * (float10)*pfVar15 - fVar24 * (float10)*pfVar11;
              fVar11 = (float10)(double)fVar24 * (float10)*pfVar15 +
                       (float10)(double)fVar23 * (float10)*pfVar11;
              *pfVar15 = (float)((float10)*pfVar9 - fVar12);
              *pfVar11 = (float)((float10)*pfVar13 - fVar11);
              *pfVar9 = (float)((float10)*pfVar9 + fVar12);
              *pfVar13 = (float)(fVar11 + (float10)*pfVar13);
              pfVar9 = pfVar9 + 1;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar15 = pfVar15 + 1;
              dVar3 = (double)fVar23;
              dVar5 = dVar4;
              dVar8 = (double)fVar24;
              dVar7 = dVar6;
            } while (iVar17 < iVar9);
          }
          local_1c = local_1c + local_24;
        } while (local_1c < size);
      }
      local_24 = local_24 * 2;
    } while (local_24 <= size);
  }
  return;
}
