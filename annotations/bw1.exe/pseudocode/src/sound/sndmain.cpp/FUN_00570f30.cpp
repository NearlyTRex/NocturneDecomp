// Name: FUN_00570f30
// Address: 00570f30
// Address Range: [[00570f30, 0057141a]]
// Convention: unknown
// Signature: undefined4 FUN_00570f30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00570f30(int param_1,float param_2)

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
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xade;
    FUN_005030e0();
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x108) == 1) {
    FUN_00445430(PTR_DAT_00611100,"SFXDBG: sample = %s\n",*(int *)(param_1 + 0x68));
  }
  if ((*(int *)(param_1 + 100) != 0) && (0.0 <= *(double *)(param_1 + 0x50))) {
    if ((0.0 < param_2) && (0.0 <= *(float *)(param_1 + 0x100))) {
      if (*(float *)(param_1 + 0x100) <= param_2) {
        if ((*(uint *)(param_1 + 0x104) & 0x7fffffff) != 0) goto LAB_00571212;
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
    FUN_00570a40();
    _DAT_02c7fc88 =
         FUN_00574080(*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                      *(uint *)(param_1 + 0xc),*(uint *)(param_1 + 0x10),
                      *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    if (_DAT_02c7fc8c != 0) {
      FUN_0056f1e0();
    }
    if (*(float *)(param_1 + 0x40) == _DAT_00605af4) {
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00445430(PTR_DAT_00611100,"  auto computing delay...\n");
      }
      FUN_00570e90();
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00445430(PTR_DAT_00611100,"  delayRemaining = %7.2fs\n",
                   (double)*(float *)(param_1 + 0x40));
    }
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00445430(PTR_DAT_00611100,"  freq = %5.2f\n",(double)*(float *)(param_1 + 0x6c));
    }
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
      fVar8 = (float10)*(double *)(param_1 + 4) -
              (float10)*(double *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8);
      fVar9 = (float10)*(double *)(param_1 + 0xc) -
              (float10)*(double *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8);
      fVar10 = (float10)*(double *)(param_1 + 0x14) -
               (float10)*(double *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8);
      fVar1 = (float)SQRT(fVar10 * (float10)(double)fVar10 +
                          fVar9 * (float10)(double)fVar9 + fVar8 * (float10)(double)fVar8);
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00445430(PTR_DAT_00611100,"  distToEar = %7.2fs\n",(double)fVar1);
      }
      fVar2 = *(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc28) - *(float *)(param_1 + 0x24);
      fVar3 = *(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc30) - *(float *)(param_1 + 0x28);
      fVar4 = *(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc38) - *(float *)(param_1 + 0x2c);
      if (fVar1 <= 0.0) {
        fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else {
        fVar1 = (fVar4 * (float)fVar10 + fVar3 * (float)fVar9 + fVar2 * (float)fVar8) / fVar1;
      }
      local_28 = (fVar1 * DAT_00623304 + _DAT_00605af8) / _DAT_00605af8;
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00445430(PTR_DAT_00611100,"  doppler = %5.2f\n",(double)local_28);
      }
      if (local_28 < 1.0 / 0x40800000) {
        local_28 = 1.0 / 0x40800000;
      }
      if (0x40800000 < local_28) {
        local_28 = 0x40800000;
      }
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00445430(PTR_DAT_00611100,"  doppler (clamped) = %5.2f\n",(double)local_28);
      }
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * local_28;
    }
    else if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00445430(PTR_DAT_00611100,"  non spatialized\n");
    }
    FUN_00570bd0();
    FUN_00570c40();
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00445430(PTR_DAT_00611100,"  vol = %5.2f\n",(double)*(float *)(param_1 + 0x38));
    }
    FUN_00570d50();
    if ((*(int *)(param_1 + 0x108) == 1) && (iVar5 = 0, iVar7 = param_1, 0 < DAT_006232ec)) {
      do {
        iVar6 = iVar5 + 1;
        FUN_00445430(PTR_DAT_00611100,"  channelVol[%d] = %5.2f\n",iVar5,
                     (double)((float)(1 << ((char)*(uint *)(*(int *)(param_1 + 0x68) + 0x104)
                                            - 1U & 0x1f)) * *(float *)(iVar7 + 0x90)));
        iVar5 = iVar6;
        iVar7 = iVar7 + 4;
      } while (iVar6 < DAT_006232ec);
    }
    if (*(float *)(param_1 + 0x6c) < 1.0 / 0x41A00000) {
      *(float *)(param_1 + 0x6c) = 1.0 / 0x41A00000;
    }
    if (0x41A00000 < *(float *)(param_1 + 0x6c)) {
      *(float *)(param_1 + 0x6c) = 0x41A00000;
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00445430(PTR_DAT_00611100,"  effFreq = %5.2f\n",(double)*(float *)(param_1 + 0x6c));
    }
    return 1;
  }
  FUN_00445430(PTR_DAT_00611100,"Killing %s in compute()\n",*(uint *)(param_1 + 0x68));
LAB_00571212:
  FUN_00571d70();
  return 0;
}
