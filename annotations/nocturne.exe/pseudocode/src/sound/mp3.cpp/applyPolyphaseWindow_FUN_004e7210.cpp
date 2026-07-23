// Name: sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210
// Address: 004e7210
// Address Range: [[004e7210, 004e7715]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_004e7210(float *param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_004e7210(float *param_1,int param_2,int param_3)

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
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
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
    iVar10 = 0;
    fVar12 = (float10)0.087266463000000002;
    fVar13 = (float10)0.5;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)(iVar11 + 0x1cd7028) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x24);
    iVar10 = 0;
    fVar12 = (float10)0.087266463000000002;
    fVar13 = (float10)0.5;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)(iVar11 + 0x1cd7148) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x12);
    iVar11 = 0x90;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)(iVar11 + 0x1cd714c) = 0x3ff00000;
      *(uint *)(iVar11 + 0x1cd7148) = 0;
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
      *(double *)(iVar11 + 0x1cd7148) = (double)fVar15;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x1e);
    iVar11 = 0xf0;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)(iVar11 + 0x1cd7148) = 0;
      *(uint *)(iVar11 + 0x1cd714c) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x120);
    iVar11 = 0;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)(iVar11 + 0x1cd7388) = 0;
      *(uint *)(iVar11 + 0x1cd738c) = 0;
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
      *(double *)(iVar11 + 0x1cd7388) = (double)fVar15;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0xc);
    iVar11 = 0x60;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)(iVar11 + 0x1cd738c) = 0x3ff00000;
      *(uint *)(iVar11 + 0x1cd7388) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x90);
    iVar10 = 0x12;
    fVar12 = (float10)0.087266463000000002;
    fVar13 = (float10)0.5;
    iVar11 = 0x90;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)(iVar11 + 0x1cd7388) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x24);
    iVar10 = 0;
    fVar12 = (float10)0.26179938800000002;
    fVar13 = (float10)0.5;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)(iVar11 + 0x1cd7268) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0xc);
    iVar11 = 0x60;
    do {
      iVar10 = iVar11 + 8;
      *(uint *)(iVar11 + 0x1cd7268) = 0;
      *(uint *)(iVar11 + 0x1cd726c) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x120);
    local_24 = 0;
    iVar11 = 1;
    local_30 = 0xc;
    do {
      iVar9 = 1;
      fVar12 = (float10)0.13089969389957501;
      iVar10 = local_24;
      do {
        fVar13 = (float10)fcos((float10)iVar9 * (float10)(iVar11 + 6) * fVar12);
        iVar9 = iVar9 + 2;
        *(double *)(iVar10 + 0x1cd74a8) = (double)fVar13;
        iVar10 = iVar10 + 8;
      } while (iVar9 < 0xd);
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
        iVar9 = iVar11 + 8;
        iVar10 = iVar10 + local_28;
        *(double *)(iVar11 + 0x1cd76e8) = (double)fVar13;
        iVar11 = iVar9;
      } while (iVar9 != local_2c);
      local_20 = local_20 + 1;
      local_28 = local_28 + 4;
      local_2c = local_2c + 0x90;
    } while (local_20 < 0x24);
    DAT_005bbc40 = 0;
  }
  if (param_3 != 2) {
    iVar11 = 0;
    local_44 = 0;
    do {
      iVar10 = local_44;
      if ((float)1.0000000000000001e-05 < ABS(param_1[iVar11])) {
        local_44 = local_44 + 1;
        aiStack_9c[iVar10] = iVar11;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x12);
    local_34 = param_3 * 0x120 + 0x1cd7028;
    local_1c = 0;
    do {
      local_40 = (float *)(param_2 + local_1c * 4);
      local_3c = local_1c * 0x90 + 0x1cd76e8;
      local_18 = param_1;
      local_38 = (double *)(local_34 + local_1c * 8);
      fVar8 = 0.0;
      iVar11 = local_44;
      if (0 < local_44) {
        do {
          iVar11 = iVar11 + -1;
          fVar8 = param_1[aiStack_9c[iVar11]] *
                  (float)*(double *)(local_3c + aiStack_9c[iVar11] * 8) + fVar8;
        } while (0 < iVar11);
        fVar8 = fVar8 * (float)*local_38;
      }
      *local_40 = fVar8;
      local_1c = local_1c + 1;
    } while (local_1c < 0x24);
    return;
  }
  memset(param_2,0,0x90);
  iVar9 = 0;
  iVar10 = 0;
  iVar11 = param_2;
  do {
    pdVar1 = (double *)(iVar10 + 0x1cd74b0);
    pdVar2 = (double *)(iVar10 + 0x1cd74a8);
    pdVar3 = (double *)(iVar10 + 0x1cd74b8);
    pdVar4 = (double *)(iVar10 + 0x1cd74c0);
    pdVar5 = (double *)(iVar10 + 0x1cd74c8);
    pdVar6 = (double *)(iVar10 + 0x1cd74d0);
    pdVar7 = (double *)(iVar9 + 0x1cd7268);
    iVar9 = iVar9 + 8;
    iVar10 = iVar10 + 0x30;
    *(float *)(iVar11 + 0x18) =
         (param_1[0xf] * (float)*pdVar6 +
         param_1[0xc] * (float)*pdVar5 +
         param_1[9] * (float)*pdVar4 +
         param_1[6] * (float)*pdVar3 + *param_1 * (float)*pdVar2 + param_1[3] * (float)*pdVar1) *
         (float)*pdVar7 + *(float *)(iVar11 + 0x18);
    iVar11 = iVar11 + 4;
  } while (iVar9 != 0x60);
  iVar10 = 0;
  iVar9 = 0;
  iVar11 = param_2;
  do {
    pdVar1 = (double *)(iVar10 + 0x1cd74b0);
    pdVar2 = (double *)(iVar10 + 0x1cd74a8);
    pdVar3 = (double *)(iVar10 + 0x1cd74b8);
    pdVar4 = (double *)(iVar10 + 0x1cd74c0);
    pdVar5 = (double *)(iVar10 + 0x1cd74c8);
    pdVar6 = (double *)(iVar10 + 0x1cd74d0);
    pdVar7 = (double *)(iVar9 + 0x1cd7268);
    iVar9 = iVar9 + 8;
    iVar10 = iVar10 + 0x30;
    *(float *)(iVar11 + 0x30) =
         (param_1[0x10] * (float)*pdVar6 +
         param_1[0xd] * (float)*pdVar5 +
         param_1[10] * (float)*pdVar4 +
         param_1[7] * (float)*pdVar3 + param_1[1] * (float)*pdVar2 + param_1[4] * (float)*pdVar1) *
         (float)*pdVar7 + *(float *)(iVar11 + 0x30);
    iVar11 = iVar11 + 4;
  } while (iVar9 != 0x60);
  iVar11 = 0;
  iVar10 = 0;
  do {
    pdVar1 = (double *)(iVar11 + 0x1cd74b0);
    pdVar2 = (double *)(iVar11 + 0x1cd74a8);
    pdVar3 = (double *)(iVar11 + 0x1cd74b8);
    pdVar4 = (double *)(iVar11 + 0x1cd74c0);
    pdVar5 = (double *)(iVar11 + 0x1cd74c8);
    pdVar6 = (double *)(iVar11 + 0x1cd74d0);
    pdVar7 = (double *)(iVar10 + 0x1cd7268);
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 0x30;
    *(float *)(param_2 + 0x48) =
         (param_1[0x11] * (float)*pdVar6 +
         param_1[0xe] * (float)*pdVar5 +
         param_1[0xb] * (float)*pdVar4 +
         param_1[8] * (float)*pdVar3 + param_1[2] * (float)*pdVar2 + param_1[5] * (float)*pdVar1) *
         (float)*pdVar7 + *(float *)(param_2 + 0x48);
    param_2 = param_2 + 4;
  } while (iVar10 != 0x60);
  return;
}
