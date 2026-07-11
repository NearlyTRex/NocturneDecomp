// Name: FUN_00524830
// Address: 00524830
// Address Range: [[00524830, 00524d0d]]
// Convention: unknown
// Signature: undefined4 FUN_00524830(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00524830(int param_1,float param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong local_60;
  int local_18;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x95d;
    FUN_004c8440();
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    return 0;
  }
  local_18 = 0;
  if (*(int *)(param_1 + 0x114) == 1) {
    FUN_0043ac60(PTR_DAT_005ad350,"SFXDBG: sample = %s\n",*(int *)(param_1 + 0x74));
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (0.0 <= *(double *)(param_1 + 0x60))) {
    if ((0.0 < param_2) && (0.0 <= *(float *)(param_1 + 0x10c))) {
      if (*(float *)(param_1 + 0x10c) <= param_2) {
        if ((*(uint *)(param_1 + 0x110) & 0x7fffffff) != 0) goto LAB_00524b03;
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x108);
      }
      else {
        fVar1 = *(float *)(param_1 + 0x10c);
        *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) - param_2;
        *(float *)(param_1 + 0x44) =
             (param_2 / fVar1) * (*(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x44)) +
             *(float *)(param_1 + 0x44);
      }
      local_18 = 8;
    }
    FUN_00524410();
    if (*(double *)(param_1 + 0x4c) == _DAT_005a2148) {
      if (*(int *)(param_1 + 0x114) == 1) {
        FUN_0043ac60(PTR_DAT_005ad350,"  auto computing delay...\n");
      }
      FUN_005247a0();
    }
    if (*(int *)(param_1 + 0x114) == 1) {
      FUN_0043ac60(PTR_DAT_005ad350,"  delayRemaining = %7.2fs\n",
                   *(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x50));
    }
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x114) == 1) {
      FUN_0043ac60(PTR_DAT_005ad350,"  freq = %5.2f\n",(double)*(float *)(param_1 + 0x78));
    }
    if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
      dVar5 = *(double *)(param_1 + 4) - _DAT_02dc78e0;
      dVar3 = *(double *)(param_1 + 0xc) - _DAT_02dc78e8;
      dVar4 = *(double *)(param_1 + 0x14) - _DAT_02dc78f0;
      dVar2 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5);
      if (*(int *)(param_1 + 0x114) == 1) {
        FUN_0043ac60(PTR_DAT_005ad350,"  distToEar = %7.2fs\n",dVar2);
      }
      dVar6 = _DAT_02dc78f8 - *(double *)(param_1 + 0x24);
      dVar7 = _DAT_02dc7900 - *(double *)(param_1 + 0x2c);
      dVar8 = _DAT_02dc7908 - *(double *)(param_1 + 0x34);
      if (dVar2 <= 0.0) {
        dVar2 = SQRT(dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6);
      }
      else {
        dVar2 = (dVar4 * dVar8 + dVar3 * dVar7 + dVar5 * dVar6) / dVar2;
      }
      local_60 = (dVar2 * _DAT_005bea80 + _DAT_005a2150) / _DAT_005a2150;
      if (*(int *)(param_1 + 0x114) == 1) {
        FUN_0043ac60(PTR_DAT_005ad350,"  doppler = %5.2f\n",local_60);
      }
      dVar2 = 1.0 / __BITCAST_DOUBLE(CONCAT44(0x40100000,DAT_005a2158));
      if (local_60 < dVar2) {
        local_60 = dVar2;
      }
      if (__BITCAST_DOUBLE(CONCAT44(0x40100000,DAT_005a2158)) < local_60) {
        local_60 = __BITCAST_DOUBLE(CONCAT44(0x40100000,DAT_005a2158));
      }
      if (*(int *)(param_1 + 0x114) == 1) {
        FUN_0043ac60(PTR_DAT_005ad350,"  doppler (clamped) = %5.2f\n",(uint)local_60,
                     (int)((ulonglong)local_60 >> 0x20));
      }
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) * (float)local_60;
    }
    else if (*(int *)(param_1 + 0x114) == 1) {
      FUN_0043ac60(PTR_DAT_005ad350,"  non spatialized\n");
    }
    FUN_005244b0();
    FUN_00524520();
    if (*(int *)(param_1 + 0x114) == 1) {
      FUN_0043ac60(PTR_DAT_005ad350,"  vol = %5.2f\n",(double)*(float *)(param_1 + 0x44));
    }
    FUN_00524630();
    if ((*(int *)(param_1 + 0x114) == 1) && (iVar9 = 0, iVar11 = param_1, 0 < DAT_005bea68)) {
      do {
        iVar10 = iVar9 + 1;
        FUN_0043ac60(PTR_DAT_005ad350,"  channelVol[%d] = %5.2f\n",iVar9,
                     (double)((float)(1 << ((char)*(uint *)(*(int *)(param_1 + 0x74) + 0x104)
                                            - 1U & 0x1f)) * *(float *)(iVar11 + 0x9c)));
        iVar9 = iVar10;
        iVar11 = iVar11 + 4;
      } while (iVar10 < DAT_005bea68);
    }
    if (*(float *)(param_1 + 0x78) < (float)(1.0 / _DAT_005a2160)) {
      *(float *)(param_1 + 0x78) = (float)(1.0 / _DAT_005a2160);
    }
    if ((float)_DAT_005a2160 < *(float *)(param_1 + 0x78)) {
      *(float *)(param_1 + 0x78) = (float)_DAT_005a2160;
    }
    if (*(int *)(param_1 + 0x114) == 1) {
      FUN_0043ac60(PTR_DAT_005ad350,"  effFreq = %5.2f\n",(double)*(float *)(param_1 + 0x78));
    }
    if (((local_18 != 0) && (_DAT_02dc8318 != (int *)0x0)) && (*(int *)(param_1 + 0x6c) != 0)) {
      (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,param_1,local_18);
    }
    return 1;
  }
  FUN_0043ac60(PTR_DAT_005ad350,"Killing %s in compute()\n",*(uint *)(param_1 + 0x74));
LAB_00524b03:
  FUN_00525570();
  return 0;
}
