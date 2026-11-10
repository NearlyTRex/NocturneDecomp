// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90
// Address: 00570e90
// Address Range: [[00570e90, 00570f22]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90(CSfxSlot *this_ptr)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xab6;
    core_main_c_FUN_005030e0("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).field_0x4c & 1) != 0) {
    *(uint *)&(this_ptr->options).field_0x40 = 0;
    return;
  }
  fVar1 = (float10)*(double *)&(this_ptr->options).field_0x4 -
          (float10)*(double *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8);
  fVar2 = (float10)*(double *)&(this_ptr->options).field_0xc -
          (float10)*(double *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8);
  fVar3 = (float10)*(double *)&(this_ptr->options).field_0x14 -
          (float10)*(double *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8);
  *(float *)&(this_ptr->options).field_0x40 =
       (float)(((float10)1 / (float10)_DAT_00605af8) *
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * (float10)DAT_00623304);
  return;
}
