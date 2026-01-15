// Name: sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690
// Address: 00533690
// Address Range: [[00533690, 00533b95]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690(float * input_samples, float * output_samples, int mpeg_block_type)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690
          (float *input_samples,float *output_samples,int mpeg_block_type)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int aiStack_9c [22];
  int local_44;
  float *local_40;
  double (*local_3c) [18];
  double *local_38;
  double (*local_34) [36];
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  int local_14;
  
  if (g_Mp3SynthesisTablesInitialized == 1) {
    iVar10 = 0;
    fVar12 = (float10)0.087266463000000002;
    fVar13 = (float10)0.5;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[0] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x24);
    iVar10 = 0;
    fVar12 = (float10)0.087266463000000002;
    fVar13 = (float10)0.5;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[1] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x12);
    iVar11 = 0x90;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar11 + 4) = 0x3ff00000;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar11) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0xc0);
    iVar10 = 0x18;
    fVar12 = (float10)0.26179938800000002;
    fVar13 = (float10)-18;
    fVar14 = (float10)0.5;
    iVar11 = 0xc0;
    do {
      fVar15 = (float10)fsin(((float10)iVar10 + fVar14 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[1] + iVar11) = (double)fVar15;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x1e);
    iVar11 = 0xf0;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar11) = 0;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar11 + 4) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x120);
    iVar11 = 0;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar11) = 0;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar11 + 4) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x30);
    iVar10 = 6;
    fVar12 = (float10)0.26179938800000002;
    fVar13 = (float10)-6;
    fVar14 = (float10)0.5;
    iVar11 = 0x30;
    do {
      fVar15 = (float10)fsin(((float10)iVar10 + fVar14 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[3] + iVar11) = (double)fVar15;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0xc);
    iVar11 = 0x60;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar11 + 4) = 0x3ff00000;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar11) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x90);
    iVar10 = 0x12;
    fVar12 = (float10)0.087266463000000002;
    fVar13 = (float10)0.5;
    iVar11 = 0x90;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[3] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x24);
    iVar10 = 0;
    fVar12 = (float10)0.26179938800000002;
    fVar13 = (float10)0.5;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[2] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0xc);
    iVar11 = 0x60;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)((int)g_Mp3WindowTables[2] + iVar11) = 0;
      *(uint *)((int)g_Mp3WindowTables[2] + iVar11 + 4) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x120);
    local_24 = 0;
    iVar11 = 1;
    local_30 = 0xc;
    do {
      iVar8 = 1;
      fVar12 = (float10)0.13089969389957501;
      iVar10 = local_24;
      do {
        fVar13 = (float10)fcos((float10)iVar8 * (float10)(iVar11 + 6) * fVar12);
        iVar8 = iVar8 + 2;
        *(double *)((int)g_Mp3DctMatrix[0] + iVar10) = (double)fVar13;
        iVar10 = iVar10 + 8;
      } while (iVar8 < 0xd);
      iVar11 = iVar11 + 2;
      local_24 = local_24 + 0x30;
    } while (iVar11 != 0x19);
    local_2c = 0x90;
    local_28 = 0x26;
    local_20 = 0;
    do {
      iVar10 = local_20 * 2 + 0x13;
      fVar12 = (float10)0.043633231299858202;
      iVar11 = local_20 * 0x90;
      do {
        local_14 = iVar10 % 0x90;
        fVar13 = (float10)fcos((float10)(iVar10 % 0x90) * fVar12);
        iVar8 = iVar11 + 8;
        iVar10 = iVar10 + local_28;
        *(double *)((int)g_Mp3PolyCoefficients[0] + iVar11) = (double)fVar13;
        iVar11 = iVar8;
      } while (iVar8 != local_2c);
      local_20 = local_20 + 1;
      local_28 = local_28 + 4;
      local_2c = local_2c + 0x90;
    } while (local_20 < 0x24);
    g_Mp3SynthesisTablesInitialized = 0;
  }
  if (mpeg_block_type != 2) {
    iVar11 = 0;
    local_44 = 0;
    do {
      iVar10 = local_44;
      if ((float)1.0000000000000001e-05 < ABS(input_samples[iVar11])) {
        local_44 = local_44 + 1;
        aiStack_9c[iVar10] = iVar11;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x12);
    local_1c = 0;
    local_34 = g_Mp3WindowTables + mpeg_block_type;
    do {
      local_40 = output_samples + local_1c;
      local_3c = g_Mp3PolyCoefficients + local_1c;
      local_18 = input_samples;
      local_38 = g_Mp3WindowTables[mpeg_block_type] + local_1c;
      fVar3 = 0.0;
      iVar11 = local_44;
      if (0 < local_44) {
        do {
          iVar11 = iVar11 + -1;
          fVar3 = input_samples[aiStack_9c[iVar11]] *
                  (float)g_Mp3PolyCoefficients[local_1c][aiStack_9c[iVar11]] + fVar3;
        } while (0 < iVar11);
        fVar3 = fVar3 * (float)*local_38;
      }
      output_samples[local_1c] = fVar3;
      local_1c = local_1c + 1;
    } while (local_1c < 0x24);
    return;
  }
  crt_memory_c_memset_FUN_005fde40(output_samples,0,0x90);
  iVar10 = 0;
  iVar11 = 0;
  pfVar9 = output_samples;
  do {
    iVar8 = iVar11 + 8;
    pdVar1 = (double *)((int)g_Mp3DctMatrix[0] + iVar11);
    iVar4 = iVar11 + 0x10;
    iVar5 = iVar11 + 0x18;
    iVar6 = iVar11 + 0x20;
    iVar7 = iVar11 + 0x28;
    pdVar2 = (double *)((int)g_Mp3WindowTables[2] + iVar10);
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 0x30;
    pfVar9[6] = (input_samples[0xf] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar7) +
                input_samples[0xc] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar6) +
                input_samples[9] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar5) +
                input_samples[6] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar4) +
                *input_samples * (float)*pdVar1 +
                input_samples[3] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar8)) *
                (float)*pdVar2 + pfVar9[6];
    pfVar9 = pfVar9 + 1;
  } while (iVar10 != 0x60);
  iVar11 = 0;
  iVar10 = 0;
  pfVar9 = output_samples;
  do {
    iVar8 = iVar11 + 8;
    pdVar1 = (double *)((int)g_Mp3DctMatrix[0] + iVar11);
    iVar4 = iVar11 + 0x10;
    iVar5 = iVar11 + 0x18;
    iVar6 = iVar11 + 0x20;
    iVar7 = iVar11 + 0x28;
    pdVar2 = (double *)((int)g_Mp3WindowTables[2] + iVar10);
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 0x30;
    pfVar9[0xc] = (input_samples[0x10] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar7) +
                  input_samples[0xd] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar6) +
                  input_samples[10] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar5) +
                  input_samples[7] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar4) +
                  input_samples[1] * (float)*pdVar1 +
                  input_samples[4] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar8)) *
                  (float)*pdVar2 + pfVar9[0xc];
    pfVar9 = pfVar9 + 1;
  } while (iVar10 != 0x60);
  iVar11 = 0;
  iVar10 = 0;
  do {
    iVar8 = iVar11 + 8;
    pdVar1 = (double *)((int)g_Mp3DctMatrix[0] + iVar11);
    iVar4 = iVar11 + 0x10;
    iVar5 = iVar11 + 0x18;
    iVar6 = iVar11 + 0x20;
    iVar7 = iVar11 + 0x28;
    pdVar2 = (double *)((int)g_Mp3WindowTables[2] + iVar10);
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 0x30;
    output_samples[0x12] =
         (input_samples[0x11] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar7) +
         input_samples[0xe] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar6) +
         input_samples[0xb] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar5) +
         input_samples[8] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar4) +
         input_samples[2] * (float)*pdVar1 +
         input_samples[5] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar8)) * (float)*pdVar2 +
         output_samples[0x12];
    output_samples = output_samples + 1;
  } while (iVar10 != 0x60);
  return;
}
