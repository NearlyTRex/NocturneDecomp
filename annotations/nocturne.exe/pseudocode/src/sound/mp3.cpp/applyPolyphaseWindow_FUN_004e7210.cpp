// Name: sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210
// Address: 004e7210
// Address Range: [[004e7210, 004e7715]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_004e7210(float *input_samples,float *output_samples,int mpeg_block_type)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_004e7210(float *input_samples,float *output_samples,int mpeg_block_type)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  int aiStack_9c [22];
  int local_44;
  float *local_40;
  int local_3c;
  double *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  int local_14;
  
  if (DAT_005bbc40 == 1) {
    iVar11 = 0;
    fVar13 = (float10)0.087266463000000002;
    fVar14 = (float10)0.5;
    iVar12 = 0;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1cd7028) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x24);
    iVar11 = 0;
    fVar13 = (float10)0.087266463000000002;
    fVar14 = (float10)0.5;
    iVar12 = 0;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1cd7148) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x12);
    iVar12 = 0x90;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1cd714c) = 0x3ff00000;
      *(uint *)(iVar12 + 0x1cd7148) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0xc0);
    iVar11 = 0x18;
    fVar13 = (float10)0.26179938800000002;
    fVar14 = (float10)-18;
    fVar15 = (float10)0.5;
    iVar12 = 0xc0;
    do {
      fVar16 = (float10)fsin(((float10)iVar11 + fVar15 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1cd7148) = (double)fVar16;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x1e);
    iVar12 = 0xf0;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1cd7148) = 0;
      *(uint *)(iVar12 + 0x1cd714c) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x120);
    iVar12 = 0;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1cd7388) = 0;
      *(uint *)(iVar12 + 0x1cd738c) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x30);
    iVar11 = 6;
    fVar13 = (float10)0.26179938800000002;
    fVar14 = (float10)-6;
    fVar15 = (float10)0.5;
    iVar12 = 0x30;
    do {
      fVar16 = (float10)fsin(((float10)iVar11 + fVar15 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1cd7388) = (double)fVar16;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0xc);
    iVar12 = 0x60;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1cd738c) = 0x3ff00000;
      *(uint *)(iVar12 + 0x1cd7388) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x90);
    iVar11 = 0x12;
    fVar13 = (float10)0.087266463000000002;
    fVar14 = (float10)0.5;
    iVar12 = 0x90;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1cd7388) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x24);
    iVar11 = 0;
    fVar13 = (float10)0.26179938800000002;
    fVar14 = (float10)0.5;
    iVar12 = 0;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1cd7268) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0xc);
    iVar12 = 0x60;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1cd7268) = 0;
      *(uint *)(iVar12 + 0x1cd726c) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x120);
    local_24 = 0;
    iVar12 = 1;
    local_30 = 0xc;
    do {
      iVar9 = 1;
      fVar13 = (float10)0.13089969389957501;
      iVar11 = local_24;
      do {
        fVar14 = (float10)fcos((float10)iVar9 * (float10)(iVar12 + 6) * fVar13);
        iVar9 = iVar9 + 2;
        *(double *)(iVar11 + 0x1cd74a8) = (double)fVar14;
        iVar11 = iVar11 + 8;
      } while (iVar9 < 0xd);
      iVar12 = iVar12 + 2;
      local_24 = local_24 + 0x30;
    } while (iVar12 != 0x19);
    local_2c = 0x90;
    local_28 = 0x26;
    local_20 = 0;
    do {
      iVar11 = local_20 * 2 + 0x13;
      fVar13 = (float10)0.043633231299858202;
      iVar12 = local_20 * 0x90;
      do {
        local_14 = iVar11 % 0x90;
        fVar14 = (float10)fcos((float10)(iVar11 % 0x90) * fVar13);
        iVar9 = iVar12 + 8;
        iVar11 = iVar11 + local_28;
        *(double *)(iVar12 + 0x1cd76e8) = (double)fVar14;
        iVar12 = iVar9;
      } while (iVar9 != local_2c);
      local_20 = local_20 + 1;
      local_28 = local_28 + 4;
      local_2c = local_2c + 0x90;
    } while (local_20 < 0x24);
    DAT_005bbc40 = 0;
  }
  if (mpeg_block_type != 2) {
    iVar12 = 0;
    local_44 = 0;
    do {
      iVar11 = local_44;
      if ((float)1.0000000000000001e-05 < ABS(input_samples[iVar12])) {
        local_44 = local_44 + 1;
        aiStack_9c[iVar11] = iVar12;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x12);
    local_34 = mpeg_block_type * 0x120 + 0x1cd7028;
    local_1c = 0;
    do {
      local_40 = output_samples + local_1c;
      local_3c = local_1c * 0x90 + 0x1cd76e8;
      local_18 = input_samples;
      local_38 = (double *)(local_34 + local_1c * 8);
      fVar8 = 0.0;
      iVar12 = local_44;
      if (0 < local_44) {
        do {
          iVar12 = iVar12 + -1;
          fVar8 = input_samples[aiStack_9c[iVar12]] *
                  (float)*(double *)(local_3c + aiStack_9c[iVar12] * 8) + fVar8;
        } while (0 < iVar12);
        fVar8 = fVar8 * (float)*local_38;
      }
      output_samples[local_1c] = fVar8;
      local_1c = local_1c + 1;
    } while (local_1c < 0x24);
    return;
  }
  memset(output_samples,0,0x90);
  iVar11 = 0;
  iVar12 = 0;
  pfVar10 = output_samples;
  do {
    pdVar1 = (double *)(iVar12 + 0x1cd74b0);
    pdVar2 = (double *)(iVar12 + 0x1cd74a8);
    pdVar3 = (double *)(iVar12 + 0x1cd74b8);
    pdVar4 = (double *)(iVar12 + 0x1cd74c0);
    pdVar5 = (double *)(iVar12 + 0x1cd74c8);
    pdVar6 = (double *)(iVar12 + 0x1cd74d0);
    pdVar7 = (double *)(iVar11 + 0x1cd7268);
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + 0x30;
    pfVar10[6] = (input_samples[0xf] * (float)*pdVar6 +
                 input_samples[0xc] * (float)*pdVar5 +
                 input_samples[9] * (float)*pdVar4 +
                 input_samples[6] * (float)*pdVar3 +
                 *input_samples * (float)*pdVar2 + input_samples[3] * (float)*pdVar1) *
                 (float)*pdVar7 + pfVar10[6];
    pfVar10 = pfVar10 + 1;
  } while (iVar11 != 0x60);
  iVar12 = 0;
  iVar11 = 0;
  pfVar10 = output_samples;
  do {
    pdVar1 = (double *)(iVar12 + 0x1cd74b0);
    pdVar2 = (double *)(iVar12 + 0x1cd74a8);
    pdVar3 = (double *)(iVar12 + 0x1cd74b8);
    pdVar4 = (double *)(iVar12 + 0x1cd74c0);
    pdVar5 = (double *)(iVar12 + 0x1cd74c8);
    pdVar6 = (double *)(iVar12 + 0x1cd74d0);
    pdVar7 = (double *)(iVar11 + 0x1cd7268);
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + 0x30;
    pfVar10[0xc] = (input_samples[0x10] * (float)*pdVar6 +
                   input_samples[0xd] * (float)*pdVar5 +
                   input_samples[10] * (float)*pdVar4 +
                   input_samples[7] * (float)*pdVar3 +
                   input_samples[1] * (float)*pdVar2 + input_samples[4] * (float)*pdVar1) *
                   (float)*pdVar7 + pfVar10[0xc];
    pfVar10 = pfVar10 + 1;
  } while (iVar11 != 0x60);
  iVar12 = 0;
  iVar11 = 0;
  do {
    pdVar1 = (double *)(iVar12 + 0x1cd74b0);
    pdVar2 = (double *)(iVar12 + 0x1cd74a8);
    pdVar3 = (double *)(iVar12 + 0x1cd74b8);
    pdVar4 = (double *)(iVar12 + 0x1cd74c0);
    pdVar5 = (double *)(iVar12 + 0x1cd74c8);
    pdVar6 = (double *)(iVar12 + 0x1cd74d0);
    pdVar7 = (double *)(iVar11 + 0x1cd7268);
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + 0x30;
    output_samples[0x12] =
         (input_samples[0x11] * (float)*pdVar6 +
         input_samples[0xe] * (float)*pdVar5 +
         input_samples[0xb] * (float)*pdVar4 +
         input_samples[8] * (float)*pdVar3 +
         input_samples[2] * (float)*pdVar2 + input_samples[5] * (float)*pdVar1) * (float)*pdVar7 +
         output_samples[0x12];
    output_samples = output_samples + 1;
  } while (iVar11 != 0x60);
  return;
}
