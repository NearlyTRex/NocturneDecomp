// Name: FUN_0054e8c0
// Address: 0054e8c0
// Address Range: [[0054e8c0, 0054edaa]]
// Convention: unknown
// Signature: undefined4 FUN_0054e8c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054e8c0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_28;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xade;
    FUN_004e4500();
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x108) == 1) {
    FUN_00436710(PTR_DAT_00609ed0,"SFXDBG: sample = %s\n",*(int *)(param_1 + 0x68));
  }
  if ((*(int *)(param_1 + 100) != 0) && (0.0 <= *(double *)(param_1 + 0x50))) {
    if ((0.0 < param_2) && (0.0 <= *(float *)(param_1 + 0x100))) {
      if (*(float *)(param_1 + 0x100) <= param_2) {
        if ((*(uint *)(param_1 + 0x104) & 0x7fffffff) != 0) goto LAB_0054eba2;
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0xfc);
      }
      else {
        fVar1 = *(float *)(param_1 + 0x100);
        *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) - param_2;
        *(float *)(param_1 + 0x38) =
             (param_2 / fVar1) * (*(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0x38)) +
             *(float *)(param_1 + 0x38);
      }
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 8;
    }
    FUN_0054e3d0();
    _DAT_026484b8 =
         FUN_00551650(*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                      *(uint *)(param_1 + 0xc),*(uint *)(param_1 + 0x10),
                      *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    if (_DAT_026484bc != 0) {
      FUN_0054cb70();
    }
    if (*(float *)(param_1 + 0x40) == _DAT_005fbc14) {
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00436710(PTR_DAT_00609ed0,"  auto computing delay...\n");
      }
      FUN_0054e820();
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00436710(PTR_DAT_00609ed0,"  delayRemaining = %7.2fs\n",
                   (double)*(float *)(param_1 + 0x40));
    }
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00436710(PTR_DAT_00609ed0,"  freq = %5.2f\n",(double)*(float *)(param_1 + 0x6c));
    }
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
      fVar8 = (float10)*(double *)(param_1 + 4) -
              (float10)*(double *)(&DAT_02648428 + _DAT_026484b8 * 8);
      fVar9 = (float10)*(double *)(param_1 + 0xc) -
              (float10)*(double *)(&DAT_02648438 + _DAT_026484b8 * 8);
      fVar10 = (float10)*(double *)(param_1 + 0x14) -
               (float10)*(double *)(&DAT_02648448 + _DAT_026484b8 * 8);
      fVar1 = (float)SQRT(fVar10 * (float10)(double)fVar10 +
                          fVar9 * (float10)(double)fVar9 + fVar8 * (float10)(double)fVar8);
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00436710(PTR_DAT_00609ed0,"  distToEar = %7.2fs\n",(double)fVar1);
      }
      fVar2 = *(float *)(_DAT_026484b8 * 4 + 0x2648458) - *(float *)(param_1 + 0x24);
      fVar3 = *(float *)(_DAT_026484b8 * 4 + 0x2648460) - *(float *)(param_1 + 0x28);
      fVar4 = *(float *)(_DAT_026484b8 * 4 + 0x2648468) - *(float *)(param_1 + 0x2c);
      if (fVar1 <= 0.0) {
        fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else {
        fVar1 = (fVar4 * (float)fVar10 + fVar3 * (float)fVar9 + fVar2 * (float)fVar8) / fVar1;
      }
      local_28 = (fVar1 * DAT_0061bcb4 + _DAT_005fbc18) / _DAT_005fbc18;
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00436710(PTR_DAT_00609ed0,"  doppler = %5.2f\n",(double)local_28);
      }
      if (local_28 < 1.0 / 0x40800000) {
        local_28 = 1.0 / 0x40800000;
      }
      if (0x40800000 < local_28) {
        local_28 = 0x40800000;
      }
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00436710(PTR_DAT_00609ed0,"  doppler (clamped) = %5.2f\n",(double)local_28);
      }
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * local_28;
    }
    else if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00436710(PTR_DAT_00609ed0,"  non spatialized\n");
    }
    FUN_0054e560();
    FUN_0054e5d0();
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00436710(PTR_DAT_00609ed0,"  vol = %5.2f\n",(double)*(float *)(param_1 + 0x38));
    }
    FUN_0054e6e0();
    if ((*(int *)(param_1 + 0x108) == 1) && (iVar5 = 0, iVar7 = param_1, 0 < DAT_0061bc9c)) {
      do {
        iVar6 = iVar5 + 1;
        FUN_00436710(PTR_DAT_00609ed0,"  channelVol[%d] = %5.2f\n",iVar5,
                     (double)((float)(1 << ((char)*(uint *)(*(int *)(param_1 + 0x68) + 0x104)
                                            - 1U & 0x1f)) * *(float *)(iVar7 + 0x90)));
        iVar5 = iVar6;
        iVar7 = iVar7 + 4;
      } while (iVar6 < DAT_0061bc9c);
    }
    if (*(float *)(param_1 + 0x6c) < 1.0 / 0x41A00000) {
      *(float *)(param_1 + 0x6c) = 1.0 / 0x41A00000;
    }
    if (0x41A00000 < *(float *)(param_1 + 0x6c)) {
      *(float *)(param_1 + 0x6c) = 0x41A00000;
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00436710(PTR_DAT_00609ed0,"  effFreq = %5.2f\n",(double)*(float *)(param_1 + 0x6c));
    }
    return 1;
  }
  FUN_00436710(PTR_DAT_00609ed0,"Killing %s in compute()\n",*(uint *)(param_1 + 0x68));
LAB_0054eba2:
  FUN_0054f700();
  return 0;
}
