// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_0054e820
// Address: 0054e820
// Address Range: [[0054e820, 0054e8b2]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_0054e820(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_0054e820(CSfxSlot *this_ptr)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (g_SoundLockCount < 1) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0xab6;
    core_main_c_displayErrorAndQuit_FUN_004e4500("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).flags & 1) != 0) {
    (this_ptr->options).delay_remaining = 0.0;
    return;
  }
  fVar1 = (float10)(this_ptr->options).position.x - (float10)(&g_DOUBLE_02648428)[g_INT_026484b8];
  fVar2 = (float10)(this_ptr->options).position.y - (float10)(&g_DOUBLE_02648438)[g_INT_026484b8];
  fVar3 = (float10)(this_ptr->options).position.z - (float10)(&g_DOUBLE_02648448)[g_INT_026484b8];
  (this_ptr->options).delay_remaining =
       (float)(((float10)1 / (float10)1116.4f) *
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * (float10)g_FLOAT_0061bcb4);
  return;
}
