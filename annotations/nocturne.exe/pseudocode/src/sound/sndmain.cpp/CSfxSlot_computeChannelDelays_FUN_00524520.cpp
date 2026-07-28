// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520
// Address: 00524520
// Address Range: [[00524520, 00524627]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(CSfxSlot *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  float fVar5;
  double dVar6;
  ulonglong local_20;
  
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x8e8;
    core_main_c_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar2 = DAT_005bea68;
  if (DAT_005bea68 < 2) {
    this_ptr->channel_volumes[7] = 0.0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    local_20 = (double)DAT_005bea6c * (_DAT_005bea80 / _DAT_005a2150);
    fVar5 = 1.40128e-40;
    iVar3 = 0;
    pCVar4 = this_ptr;
    if (0 < DAT_005bea68) {
      do {
        dVar6 = round
                          ((double)(pCVar4->effective_frequency * (float)local_20));
        fVar1 = (float)(int)ROUND(dVar6);
        local_20 = __BITCAST_DOUBLE(CONCAT44(fVar1,0x5245dd));
        pCVar4->channel_volumes[7] = fVar1;
        if ((int)fVar1 < (int)fVar5) {
          fVar5 = fVar1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CSfxSlot *)&(pCVar4->options).position;
      } while (iVar3 < iVar2);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = iVar3 + 1;
        this_ptr->channel_volumes[7] = (float)((int)this_ptr->channel_volumes[7] - (int)fVar5);
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar3 < iVar2);
      DAT_005bea68 = iVar2;
      return;
    }
  }
  else {
    iVar3 = 0;
    if (0 < DAT_005bea68) {
      do {
        iVar3 = iVar3 + 1;
        this_ptr->channel_volumes[7] = 0.0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar3 < DAT_005bea68);
    }
  }
  DAT_005bea68 = iVar2;
  return;
}
