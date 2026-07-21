// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520
// Address: 00524520
// Address Range: [[00524520, 00524627]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  ulonglong local_20;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x8e8;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar2 = DAT_005bea68;
  if (DAT_005bea68 < 2) {
    *(uint *)(param_1 + 0xbc) = 0;
  }
  else if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    local_20 = (double)DAT_005bea6c * (_DAT_005bea80 / _DAT_005a2150);
    iVar5 = 99999;
    iVar3 = 0;
    iVar4 = param_1;
    if (0 < DAT_005bea68) {
      do {
        fVar6 = (float10)round
                                   ((float10)*(float *)(iVar4 + 0x7c) * (float10)local_20);
        iVar1 = (int)ROUND(fVar6);
        local_20 = __BITCAST_DOUBLE(CONCAT44(iVar1,0x5245dd));
        *(int *)(iVar4 + 0xbc) = iVar1;
        if (iVar1 < iVar5) {
          iVar5 = iVar1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < iVar2);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) - iVar5;
        param_1 = param_1 + 4;
      } while (iVar4 < iVar2);
      DAT_005bea68 = iVar2;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_005bea68) {
      do {
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + 0xbc) = 0;
        param_1 = param_1 + 4;
      } while (iVar4 < DAT_005bea68);
    }
  }
  DAT_005bea68 = iVar2;
  return;
}
