// Name: sound_sndmain.cpp_FUN_00570d50
// Address: 00570d50
// Address Range: [[00570d50, 00570e86]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00570d50(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00570d50(CSfxSlot *this_ptr)

{
  float fVar1;
  int iVar2;
  CSfxSlot *pCVar3;
  float local_20;
  float local_14;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xa98;
    core_main_c_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(*(uint *)this_ptr);
  fVar1 = fVar1 * *(float *)&this_ptr->field_0x38;
  if ((this_ptr->field_0x4c & 1) == 0) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < DAT_006232ec) {
      do {
        local_14 = *(float *)&pCVar3->field_0x70;
        if (*(float *)&pCVar3->field_0x70 < *(float *)&this_ptr->field_0xf4) {
          local_14 = *(float *)&this_ptr->field_0xf4;
        }
        if (*(float *)&this_ptr->field_0xf8 < local_14) {
          local_14 = *(float *)&this_ptr->field_0xf8;
        }
        if (*(float *)&this_ptr->field_0xf0 * _DAT_005f379c < local_14) {
          local_20 = *(float *)&this_ptr->field_0xf0 / local_14;
        }
        else {
          local_20 = 20.0;
        }
        iVar2 = iVar2 + 1;
        *(float *)&pCVar3->field_0x90 = fVar1 * local_20;
        pCVar3 = (CSfxSlot *)&pCVar3->field_0x4;
      } while (iVar2 < DAT_006232ec);
    }
  }
  else {
    iVar2 = 0;
    if (0 < DAT_006232ec) {
      do {
        iVar2 = iVar2 + 1;
        *(float *)&this_ptr->field_0x90 = fVar1;
        this_ptr = (CSfxSlot *)&this_ptr->field_0x4;
      } while (iVar2 < DAT_006232ec);
    }
  }
  return;
}
