// Name: sound_sndmain.cpp_computeComplexFFT_FUN_005a39a0
// Address: 005a39a0
// Address Range: [[005a39a0, 005a3c80]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_computeComplexFFT_FUN_005a39a0(float * input_real, float * input_imag, float * output_real, float * output_imag, int size)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_computeComplexFFT_FUN_005a39a0
          (float *input_real,float *input_imag,float *output_real,float *output_imag,int size)

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
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_20 = 1; 1 << ((byte)local_20 & 0x1f) < size; local_20 = local_20 + 1) {
  }
  uVar15 = 0;
  if (0 < size) {
    do {
      iVar10 = 0;
      uVar8 = 0;
      uVar12 = uVar15;
      if (0 < local_20) {
        do {
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 * 2 | uVar12 & 1;
          uVar12 = (int)uVar12 >> 1;
        } while (iVar10 < local_20);
      }
      output_real[uVar8] = *input_real;
      pfVar9 = input_imag;
      if (input_imag != (float *)0x0) {
        pfVar9 = (float *)input_imag[uVar15];
      }
      output_imag[uVar8] = (float)pfVar9;
      uVar15 = uVar15 + 1;
      input_real = input_real + 1;
    } while ((int)uVar15 < size);
  }
  local_24 = 2;
  if (1 < size) {
    do {
      iVar10 = local_24 / 2;
      fVar17 = (float10)3.1415926535000001 / (float10)iVar10;
      fVar3 = (float10)fcos(fVar17);
      fVar18 = (float10)fsin(fVar17);
      fVar19 = (float10)2;
      fVar17 = fVar17 * fVar19;
      fVar20 = (float10)fsin(fVar17);
      fVar17 = (float10)fcos(fVar17);
      local_1c = 0;
      if (0 < size) {
        do {
          iVar16 = 0;
          if (0 < iVar10) {
            fVar21 = (float10)(double)((float10)(double)fVar3 * fVar19);
            pfVar9 = output_real + local_1c;
            pfVar11 = output_imag + iVar10 + local_1c;
            pfVar13 = output_imag + local_1c;
            pfVar14 = output_real + iVar10 + local_1c;
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
              fVar23 = fVar22 * (float10)*pfVar14 - fVar23 * (float10)*pfVar11;
              fVar22 = (float10)dVar2 * (float10)*pfVar14 + (float10)dVar1 * (float10)*pfVar11;
              *pfVar14 = (float)((float10)*pfVar9 - fVar23);
              *pfVar11 = (float)((float10)*pfVar13 - fVar22);
              *pfVar9 = (float)((float10)*pfVar9 + fVar23);
              *pfVar13 = (float)(fVar22 + (float10)*pfVar13);
              pfVar9 = pfVar9 + 1;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              dVar5 = dVar4;
              dVar7 = dVar6;
            } while (iVar16 < iVar10);
          }
          local_1c = local_1c + local_24;
        } while (local_1c < size);
      }
      local_24 = local_24 * 2;
    } while (local_24 <= size);
  }
  return;
}
