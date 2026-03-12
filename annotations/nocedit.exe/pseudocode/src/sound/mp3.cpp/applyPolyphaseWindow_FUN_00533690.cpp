// Name: sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690
// Address: 00533690
// Address Range: [[00533690, 00533b95]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(float *input_samples,float *output_samples,int mpeg_block_type)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(float *input_samples,float *output_samples,int mpeg_block_type)

{
  double *pdVar3;
  double *pdVar4;
  int iVar9;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar15;
  float10 fVar22;
  int aiStack_9c [22];
  int local_44;
  float *local_40;
  double (*local_3c) [18];
  double *local_38;
  double (*local_34) [36];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  int local_14;
  float fVar3;
  double *pdVar2;
  double *pdVar1;
  int iVar7;
  int iVar6;
  int iVar5;
  int iVar4;
  
  if (g_Mp3SynthesisTablesInitialized == 1) {
    iVar10 = 0;
    fVar12 = (float10)0.087266463000000002;
    fVar13 = (float10)0.5;
    iVar16 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[0] + iVar16) = (double)fVar14;
      iVar16 = iVar16 + 8;
    } while (iVar10 < 0x24);
    iVar15 = 0;
    fVar19 = (float10)0.087266463000000002;
    fVar20 = (float10)0.5;
    iVar16 = 0;
    do {
      fVar21 = (float10)fsin(((float10)iVar15 + fVar20) * fVar19);
      iVar15 = iVar15 + 1;
      *(double *)((int)g_Mp3WindowTables[1] + iVar16) = (double)fVar21;
      iVar16 = iVar16 + 8;
    } while (iVar15 < 0x12);
    iVar16 = 0x90;
    do {
      iVar15 = iVar16 + 8;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar16 + 4) = 0x3ff00000;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar16) = 0;
      iVar16 = iVar15;
    } while (iVar15 != 0xc0);
    iVar15 = 0x18;
    fVar19 = (float10)0.26179938800000002;
    fVar20 = (float10)-18;
    fVar21 = (float10)0.5;
    iVar16 = 0xc0;
    do {
      fVar15 = (float10)fsin(((float10)iVar15 + fVar21 + fVar20) * fVar19);
      iVar15 = iVar15 + 1;
      *(double *)((int)g_Mp3WindowTables[1] + iVar16) = (double)fVar15;
      iVar16 = iVar16 + 8;
    } while (iVar15 < 0x1e);
    iVar16 = 0xf0;
    do {
      iVar15 = iVar16 + 8;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar16) = 0;
      *(uint *)((int)g_Mp3WindowTables[1] + iVar16 + 4) = 0;
      iVar16 = iVar15;
    } while (iVar15 != 0x120);
    iVar16 = 0;
    do {
      iVar15 = iVar16 + 8;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar16) = 0;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar16 + 4) = 0;
      iVar16 = iVar15;
    } while (iVar15 != 0x30);
    iVar15 = 6;
    fVar19 = (float10)0.26179938800000002;
    fVar20 = (float10)-6;
    fVar21 = (float10)0.5;
    iVar16 = 0x30;
    do {
      fVar22 = (float10)fsin(((float10)iVar15 + fVar21 + fVar20) * fVar19);
      iVar15 = iVar15 + 1;
      *(double *)((int)g_Mp3WindowTables[3] + iVar16) = (double)fVar22;
      iVar16 = iVar16 + 8;
    } while (iVar15 < 0xc);
    iVar16 = 0x60;
    do {
      iVar15 = iVar16 + 8;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar16 + 4) = 0x3ff00000;
      *(uint *)((int)g_Mp3WindowTables[3] + iVar16) = 0;
      iVar16 = iVar15;
    } while (iVar15 != 0x90);
    iVar15 = 0x12;
    fVar19 = (float10)0.087266463000000002;
    fVar20 = (float10)0.5;
    iVar16 = 0x90;
    do {
      fVar21 = (float10)fsin(((float10)iVar15 + fVar20) * fVar19);
      iVar15 = iVar15 + 1;
      *(double *)((int)g_Mp3WindowTables[3] + iVar16) = (double)fVar21;
      iVar16 = iVar16 + 8;
    } while (iVar15 < 0x24);
    iVar15 = 0;
    fVar19 = (float10)0.26179938800000002;
    fVar20 = (float10)0.5;
    iVar16 = 0;
    do {
      fVar21 = (float10)fsin(((float10)iVar15 + fVar20) * fVar19);
      iVar15 = iVar15 + 1;
      *(double *)((int)g_Mp3WindowTables[2] + iVar16) = (double)fVar21;
      iVar16 = iVar16 + 8;
    } while (iVar15 < 0xc);
    iVar16 = 0x60;
    do {
      iVar15 = iVar16 + 8;
      *(uint *)((int)g_Mp3WindowTables[2] + iVar16) = 0;
      *(uint *)((int)g_Mp3WindowTables[2] + iVar16 + 4) = 0;
      iVar16 = iVar15;
    } while (iVar15 != 0x120);
    local_24 = 0;
    iVar11 = 1;
    do {
      iVar8 = 1;
      fVar19 = (float10)0.13089969389957501;
      iVar16 = local_24;
      do {
        fVar20 = (float10)fcos((float10)iVar8 * (float10)(iVar11 + 6) * fVar19);
        iVar8 = iVar8 + 2;
        *(double *)((int)g_Mp3DctMatrix[0] + iVar16) = (double)fVar20;
        iVar16 = iVar16 + 8;
      } while (iVar8 < 0xd);
      local_24 = local_24 + 0x30;
      iVar11 = iVar11 + 2;
    } while (iVar11 != 0x19);
    local_2c = 0x90;
    local_28 = 0x26;
    local_20 = 0;
    do {
      iVar15 = local_20 * 2 + 0x13;
      fVar19 = (float10)0.043633231299858202;
      iVar16 = local_20 * 0x90;
      do {
        fVar20 = (float10)fcos((float10)(iVar15 % 0x90) * fVar19);
        iVar18 = iVar16 + 8;
        iVar15 = iVar15 + local_28;
        *(double *)((int)g_Mp3PolyCoefficients[0] + iVar16) = (double)fVar20;
        iVar16 = iVar18;
      } while (iVar18 != local_2c);
      local_28 = local_28 + 4;
      local_20 = local_20 + 1;
      local_2c = local_2c + 0x90;
    } while (local_20 < 0x24);
    g_Mp3SynthesisTablesInitialized = 0;
  }
  if (mpeg_block_type != 2) {
    iVar16 = 0;
    local_44 = 0;
    do {
      if ((float)1.0000000000000001e-05 < ABS(input_samples[iVar16])) {
        aiStack_9c[local_44] = iVar16;
        local_44 = local_44 + 1;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0x12);
    local_1c = 0;
    do {
      fVar3 = 0.0;
      iVar16 = local_44;
      if (0 < local_44) {
        do {
          iVar16 = iVar16 + -1;
          fVar3 = input_samples[aiStack_9c[iVar16]] *
                  (float)g_Mp3PolyCoefficients[local_1c][aiStack_9c[iVar16]] + fVar3;
        } while (0 < iVar16);
        fVar3 = fVar3 * (float)g_Mp3WindowTables[mpeg_block_type][local_1c];
      }
      output_samples[local_1c] = fVar3;
      local_1c = local_1c + 1;
    } while (local_1c < 0x24);
    return;
  }
  memset(output_samples,0,0x90);
  iVar15 = 0;
  iVar16 = 0;
  pfVar17 = output_samples;
  do {
    iVar18 = iVar16 + 8;
    pdVar1 = (double *)((int)g_Mp3DctMatrix[0] + iVar16);
    iVar4 = iVar16 + 0x10;
    iVar5 = iVar16 + 0x18;
    iVar6 = iVar16 + 0x20;
    iVar7 = iVar16 + 0x28;
    pdVar2 = (double *)((int)g_Mp3WindowTables[2] + iVar15);
    iVar15 = iVar15 + 8;
    iVar16 = iVar16 + 0x30;
    pfVar17[6] = (input_samples[0xf] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar7) +
                 input_samples[0xc] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar6) +
                 input_samples[9] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar5) +
                 input_samples[6] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar4) +
                 *input_samples * (float)*pdVar1 +
                 input_samples[3] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar18)) *
                 (float)*pdVar2 + pfVar17[6];
    pfVar17 = pfVar17 + 1;
  } while (iVar15 != 0x60);
  iVar16 = 0;
  iVar15 = 0;
  pfVar9 = output_samples;
  do {
    iVar18 = iVar16 + 8;
    pdVar3 = (double *)((int)g_Mp3DctMatrix[0] + iVar16);
    iVar9 = iVar16 + 0x10;
    iVar12 = iVar16 + 0x18;
    iVar13 = iVar16 + 0x20;
    iVar14 = iVar16 + 0x28;
    pdVar4 = (double *)((int)g_Mp3WindowTables[2] + iVar15);
    iVar15 = iVar15 + 8;
    iVar16 = iVar16 + 0x30;
    pfVar9[0xc] = (input_samples[0x10] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar14) +
                  input_samples[0xd] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar13) +
                  input_samples[10] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar12) +
                  input_samples[7] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar9) +
                  input_samples[1] * (float)*pdVar3 +
                  input_samples[4] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar18)) *
                  (float)*pdVar4 + pfVar9[0xc];
    pfVar9 = pfVar9 + 1;
  } while (iVar15 != 0x60);
  iVar16 = 0;
  iVar15 = 0;
  do {
    iVar18 = iVar16 + 8;
    pdVar3 = (double *)((int)g_Mp3DctMatrix[0] + iVar16);
    iVar9 = iVar16 + 0x10;
    iVar12 = iVar16 + 0x18;
    iVar13 = iVar16 + 0x20;
    iVar14 = iVar16 + 0x28;
    pdVar4 = (double *)((int)g_Mp3WindowTables[2] + iVar15);
    iVar15 = iVar15 + 8;
    iVar16 = iVar16 + 0x30;
    output_samples[0x12] =
         (input_samples[0x11] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar14) +
         input_samples[0xe] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar13) +
         input_samples[0xb] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar12) +
         input_samples[8] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar9) +
         input_samples[2] * (float)*pdVar3 +
         input_samples[5] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar18)) * (float)*pdVar4 +
         output_samples[0x12];
    output_samples = output_samples + 1;
  } while (iVar15 != 0x60);
  return;
}
