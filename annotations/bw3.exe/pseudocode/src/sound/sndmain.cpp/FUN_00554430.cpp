// Name: FUN_00554430
// Address: 00554430
// Address Range: [[00554430, 0055491a]]
// Convention: unknown
// Signature: undefined4 FUN_00554430(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00554430(int param_1,float param_2)

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
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xae0;
    FUN_004e4330();
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x108) == 1) {
    FUN_00441ff0(PTR_DAT_005f1690,"SFXDBG: sample = %s\n",*(int *)(param_1 + 0x68));
  }
  if ((*(int *)(param_1 + 100) != 0) && (0.0 <= *(double *)(param_1 + 0x50))) {
    if ((0.0 < param_2) && (0.0 <= *(float *)(param_1 + 0x100))) {
      if (*(float *)(param_1 + 0x100) <= param_2) {
        if ((*(uint *)(param_1 + 0x104) & 0x7fffffff) != 0) goto LAB_00554712;
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
    FUN_00553f40();
    _DAT_02cf28b8 =
         FUN_005571e0(*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                      *(uint *)(param_1 + 0xc),*(uint *)(param_1 + 0x10),
                      *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    if (_DAT_02cf28bc != 0) {
      FUN_005526d0();
    }
    if (*(float *)(param_1 + 0x40) == _DAT_005e4824) {
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00441ff0(PTR_DAT_005f1690,"  auto computing delay...\n");
      }
      FUN_00554390();
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00441ff0(PTR_DAT_005f1690,"  delayRemaining = %7.2fs\n",
                   (double)*(float *)(param_1 + 0x40));
    }
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00441ff0(PTR_DAT_005f1690,"  freq = %5.2f\n",(double)*(float *)(param_1 + 0x6c));
    }
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
      fVar8 = (float10)*(double *)(param_1 + 4) -
              (float10)*(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8);
      fVar9 = (float10)*(double *)(param_1 + 0xc) -
              (float10)*(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8);
      fVar10 = (float10)*(double *)(param_1 + 0x14) -
               (float10)*(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8);
      fVar1 = (float)SQRT(fVar10 * (float10)(double)fVar10 +
                          fVar9 * (float10)(double)fVar9 + fVar8 * (float10)(double)fVar8);
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00441ff0(PTR_DAT_005f1690,"  distToEar = %7.2fs\n",(double)fVar1);
      }
      fVar2 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2858) - *(float *)(param_1 + 0x24);
      fVar3 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2860) - *(float *)(param_1 + 0x28);
      fVar4 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2868) - *(float *)(param_1 + 0x2c);
      if (fVar1 <= 0.0) {
        fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else {
        fVar1 = (fVar4 * (float)fVar10 + fVar3 * (float)fVar9 + fVar2 * (float)fVar8) / fVar1;
      }
      local_28 = (fVar1 * DAT_00604240 + _DAT_005e4844) / _DAT_005e4844;
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00441ff0(PTR_DAT_005f1690,"  doppler = %5.2f\n",(double)local_28);
      }
      if (local_28 < 1.0 / 0x40800000) {
        local_28 = 1.0 / 0x40800000;
      }
      if (0x40800000 < local_28) {
        local_28 = 0x40800000;
      }
      if (*(int *)(param_1 + 0x108) == 1) {
        FUN_00441ff0(PTR_DAT_005f1690,"  doppler (clamped) = %5.2f\n",(double)local_28);
      }
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * local_28;
    }
    else if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00441ff0(PTR_DAT_005f1690,"  non spatialized\n");
    }
    FUN_005540d0();
    FUN_00554140();
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00441ff0(PTR_DAT_005f1690,"  vol = %5.2f\n",(double)*(float *)(param_1 + 0x38));
    }
    FUN_00554250();
    if ((*(int *)(param_1 + 0x108) == 1) && (iVar5 = 0, iVar7 = param_1, 0 < DAT_0060422c)) {
      do {
        iVar6 = iVar5 + 1;
        FUN_00441ff0(PTR_DAT_005f1690,"  channelVol[%d] = %5.2f\n",iVar5,
                     (double)((float)(1 << ((char)*(uint *)(*(int *)(param_1 + 0x68) + 0x104)
                                            - 1U & 0x1f)) * *(float *)(iVar7 + 0x90)));
        iVar5 = iVar6;
        iVar7 = iVar7 + 4;
      } while (iVar6 < DAT_0060422c);
    }
    if (*(float *)(param_1 + 0x6c) < 1.0 / 0x41A00000) {
      *(float *)(param_1 + 0x6c) = 1.0 / 0x41A00000;
    }
    if (0x41A00000 < *(float *)(param_1 + 0x6c)) {
      *(float *)(param_1 + 0x6c) = 0x41A00000;
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      FUN_00441ff0(PTR_DAT_005f1690,"  effFreq = %5.2f\n",(double)*(float *)(param_1 + 0x6c));
    }
    return 1;
  }
  FUN_00441ff0(PTR_DAT_005f1690,"Killing %s in compute()\n",*(uint *)(param_1 + 0x68));
LAB_00554712:
  FUN_00555270();
  return 0;
}
