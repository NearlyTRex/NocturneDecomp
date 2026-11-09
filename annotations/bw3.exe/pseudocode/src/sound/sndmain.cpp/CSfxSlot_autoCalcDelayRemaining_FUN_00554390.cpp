// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390
// Address: 00554390
// Address Range: [[00554390, 00554422]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390(CSfxSlot *this_ptr)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xab8;
    core_main_c_FUN_004e4330("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if ((this_ptr->field_0x4c & 1) != 0) {
    *(uint *)&this_ptr->field_0x40 = 0;
    return;
  }
  fVar1 = (float10)*(double *)&this_ptr->field_0x4 -
          (float10)*(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8);
  fVar2 = (float10)*(double *)&this_ptr->field_0xc -
          (float10)*(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8);
  fVar3 = (float10)*(double *)&this_ptr->field_0x14 -
          (float10)*(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8);
  *(float *)&this_ptr->field_0x40 =
       (float)(((float10)1 / (float10)_DAT_005e4844) *
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * (float10)DAT_00604240);
  return;
}
