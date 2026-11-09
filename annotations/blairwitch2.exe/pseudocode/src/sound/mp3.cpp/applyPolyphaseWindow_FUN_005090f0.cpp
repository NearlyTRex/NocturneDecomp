// Name: sound_mp3.cpp_applyPolyphaseWindow_FUN_005090f0
// Address: 005090f0
// Address Range: [[005090f0, 005095f5]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_005090f0(float *param_1,void *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_005090f0(float *param_1,void *param_2,int param_3)

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
  void *pvVar10;
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
  
  if (DAT_00618e80 == 1) {
    iVar11 = 0;
    fVar13 = (float10)_DAT_005e0273;
    fVar14 = (float10)_DAT_005e0293;
    iVar12 = 0;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1d21a58) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x24);
    iVar11 = 0;
    fVar13 = (float10)_DAT_005e0273;
    fVar14 = (float10)_DAT_005e0293;
    iVar12 = 0;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1d21b78) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x12);
    iVar12 = 0x90;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1d21b7c) = 0x3ff00000;
      *(uint *)(iVar12 + 0x1d21b78) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0xc0);
    iVar11 = 0x18;
    fVar13 = (float10)_DAT_005e027b;
    fVar14 = (float10)_DAT_005e029b;
    fVar15 = (float10)_DAT_005e0293;
    iVar12 = 0xc0;
    do {
      fVar16 = (float10)fsin(((float10)iVar11 + fVar15 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1d21b78) = (double)fVar16;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x1e);
    iVar12 = 0xf0;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1d21b78) = 0;
      *(uint *)(iVar12 + 0x1d21b7c) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x120);
    iVar12 = 0;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1d21db8) = 0;
      *(uint *)(iVar12 + 0x1d21dbc) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x30);
    iVar11 = 6;
    fVar13 = (float10)_DAT_005e027b;
    fVar14 = (float10)_DAT_005e02a3;
    fVar15 = (float10)_DAT_005e0293;
    iVar12 = 0x30;
    do {
      fVar16 = (float10)fsin(((float10)iVar11 + fVar15 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1d21db8) = (double)fVar16;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0xc);
    iVar12 = 0x60;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1d21dbc) = 0x3ff00000;
      *(uint *)(iVar12 + 0x1d21db8) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x90);
    iVar11 = 0x12;
    fVar13 = (float10)_DAT_005e0273;
    fVar14 = (float10)_DAT_005e0293;
    iVar12 = 0x90;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1d21db8) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0x24);
    iVar11 = 0;
    fVar13 = (float10)_DAT_005e027b;
    fVar14 = (float10)_DAT_005e0293;
    iVar12 = 0;
    do {
      fVar15 = (float10)fsin(((float10)iVar11 + fVar14) * fVar13);
      iVar11 = iVar11 + 1;
      *(double *)(iVar12 + 0x1d21c98) = (double)fVar15;
      iVar12 = iVar12 + 8;
    } while (iVar11 < 0xc);
    iVar12 = 0x60;
    do {
      iVar11 = iVar12 + 8;
      *(uint *)(iVar12 + 0x1d21c98) = 0;
      *(uint *)(iVar12 + 0x1d21c9c) = 0;
      iVar12 = iVar11;
    } while (iVar11 != 0x120);
    local_24 = 0;
    iVar12 = 1;
    local_30 = 0xc;
    do {
      iVar9 = 1;
      fVar13 = (float10)_DAT_005e0283;
      iVar11 = local_24;
      do {
        fVar14 = (float10)fcos((float10)iVar9 * (float10)(iVar12 + 6) * fVar13);
        iVar9 = iVar9 + 2;
        *(double *)(iVar11 + 0x1d21ed8) = (double)fVar14;
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
      fVar13 = (float10)_DAT_005e028b;
      iVar12 = local_20 * 0x90;
      do {
        local_14 = iVar11 % 0x90;
        fVar14 = (float10)fcos((float10)(iVar11 % 0x90) * fVar13);
        iVar9 = iVar12 + 8;
        iVar11 = iVar11 + local_28;
        *(double *)(iVar12 + 0x1d22118) = (double)fVar14;
        iVar12 = iVar9;
      } while (iVar9 != local_2c);
      local_20 = local_20 + 1;
      local_28 = local_28 + 4;
      local_2c = local_2c + 0x90;
    } while (local_20 < 0x24);
    DAT_00618e80 = 0;
  }
  if (param_3 != 2) {
    iVar12 = 0;
    local_44 = 0;
    do {
      iVar11 = local_44;
      if ((float)_DAT_005e02ab < ABS(param_1[iVar12])) {
        local_44 = local_44 + 1;
        aiStack_9c[iVar11] = iVar12;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x12);
    local_34 = param_3 * 0x120 + 0x1d21a58;
    local_1c = 0;
    do {
      local_40 = (float *)((int)param_2 + local_1c * 4);
      local_3c = local_1c * 0x90 + 0x1d22118;
      local_18 = param_1;
      local_38 = (double *)(local_34 + local_1c * 8);
      fVar8 = 0.0;
      iVar12 = local_44;
      if (0 < local_44) {
        do {
          iVar12 = iVar12 + -1;
          fVar8 = param_1[aiStack_9c[iVar12]] *
                  (float)*(double *)(local_3c + aiStack_9c[iVar12] * 8) + fVar8;
        } while (0 < iVar12);
        fVar8 = fVar8 * (float)*local_38;
      }
      *local_40 = fVar8;
      local_1c = local_1c + 1;
    } while (local_1c < 0x24);
    return;
  }
  memset(param_2,0,0x90);
  iVar11 = 0;
  iVar12 = 0;
  pvVar10 = param_2;
  do {
    pdVar1 = (double *)(iVar12 + 0x1d21ee0);
    pdVar2 = (double *)(iVar12 + 0x1d21ed8);
    pdVar3 = (double *)(iVar12 + 0x1d21ee8);
    pdVar4 = (double *)(iVar12 + 0x1d21ef0);
    pdVar5 = (double *)(iVar12 + 0x1d21ef8);
    pdVar6 = (double *)(iVar12 + 0x1d21f00);
    pdVar7 = (double *)(iVar11 + 0x1d21c98);
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + 0x30;
    *(float *)((int)pvVar10 + 0x18) =
         (param_1[0xf] * (float)*pdVar6 +
         param_1[0xc] * (float)*pdVar5 +
         param_1[9] * (float)*pdVar4 +
         param_1[6] * (float)*pdVar3 + *param_1 * (float)*pdVar2 + param_1[3] * (float)*pdVar1) *
         (float)*pdVar7 + *(float *)((int)pvVar10 + 0x18);
    pvVar10 = (void *)((int)pvVar10 + 4);
  } while (iVar11 != 0x60);
  iVar12 = 0;
  iVar11 = 0;
  pvVar10 = param_2;
  do {
    pdVar1 = (double *)(iVar12 + 0x1d21ee0);
    pdVar2 = (double *)(iVar12 + 0x1d21ed8);
    pdVar3 = (double *)(iVar12 + 0x1d21ee8);
    pdVar4 = (double *)(iVar12 + 0x1d21ef0);
    pdVar5 = (double *)(iVar12 + 0x1d21ef8);
    pdVar6 = (double *)(iVar12 + 0x1d21f00);
    pdVar7 = (double *)(iVar11 + 0x1d21c98);
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + 0x30;
    *(float *)((int)pvVar10 + 0x30) =
         (param_1[0x10] * (float)*pdVar6 +
         param_1[0xd] * (float)*pdVar5 +
         param_1[10] * (float)*pdVar4 +
         param_1[7] * (float)*pdVar3 + param_1[1] * (float)*pdVar2 + param_1[4] * (float)*pdVar1) *
         (float)*pdVar7 + *(float *)((int)pvVar10 + 0x30);
    pvVar10 = (void *)((int)pvVar10 + 4);
  } while (iVar11 != 0x60);
  iVar12 = 0;
  iVar11 = 0;
  do {
    pdVar1 = (double *)(iVar12 + 0x1d21ee0);
    pdVar2 = (double *)(iVar12 + 0x1d21ed8);
    pdVar3 = (double *)(iVar12 + 0x1d21ee8);
    pdVar4 = (double *)(iVar12 + 0x1d21ef0);
    pdVar5 = (double *)(iVar12 + 0x1d21ef8);
    pdVar6 = (double *)(iVar12 + 0x1d21f00);
    pdVar7 = (double *)(iVar11 + 0x1d21c98);
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + 0x30;
    *(float *)((int)param_2 + 0x48) =
         (param_1[0x11] * (float)*pdVar6 +
         param_1[0xe] * (float)*pdVar5 +
         param_1[0xb] * (float)*pdVar4 +
         param_1[8] * (float)*pdVar3 + param_1[2] * (float)*pdVar2 + param_1[5] * (float)*pdVar1) *
         (float)*pdVar7 + *(float *)((int)param_2 + 0x48);
    param_2 = (void *)((int)param_2 + 4);
  } while (iVar11 != 0x60);
  return;
}
