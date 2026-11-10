// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_0054e5d0
// Address: 0054e5d0
// Address Range: [[0054e5d0, 0054e6d9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_0054e5d0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_0054e5d0(CSfxSlot *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  CSfxSlot *pCVar5;
  int extraout_EDX;
  int iVar6;
  float10 fVar7;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xa69;
    core_main_c_FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  iVar3 = DAT_0061bc9c;
  if (DAT_0061bc9c < 2) {
    *(uint *)&this_ptr->field_0xb0 = 0;
  }
  else if (((this_ptr->options).field_0x4c & 1) == 0) {
    fVar1 = (1.0 / _DAT_005fbc18) * DAT_0061bcb4;
    fVar2 = (float)DAT_0061bca0;
    iVar4 = 99999;
    pCVar5 = this_ptr;
    if (0 < DAT_0061bc9c) {
      do {
        fVar7 = (float10)*(float *)&pCVar5->field_0x70 * (float10)(fVar2 * fVar1);
        round();
        iVar6 = (int)ROUND(fVar7);
        *(int *)(extraout_EDX + 0xb0) = iVar6;
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
        pCVar5 = (CSfxSlot *)(extraout_EDX + 4);
      } while (extraout_ECX + 1 < iVar3);
    }
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
        *(int *)&this_ptr->field_0xb0 = *(int *)&this_ptr->field_0xb0 - iVar4;
        this_ptr = (CSfxSlot *)&(this_ptr->options).field_0x4;
      } while (iVar6 < iVar3);
      DAT_0061bc9c = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_0061bc9c) {
      do {
        iVar4 = iVar4 + 1;
        *(uint *)&this_ptr->field_0xb0 = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).field_0x4;
      } while (iVar4 < DAT_0061bc9c);
    }
  }
  DAT_0061bc9c = iVar3;
  return;
}
