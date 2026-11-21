// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390
// Address: 00554390
// Address Range: [[00554390, 00554422]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390(CSfxSlot *this_ptr)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2744;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).flags & 1) != 0) {
    (this_ptr->options).delay_remaining = 0.0;
    return;
  }
  fVar1 = (float10)(this_ptr->options).position.x - (float10)(&g_DOUBLE_02cf2828)[g_INT_02cf28b8];
  fVar2 = (float10)(this_ptr->options).position.y - (float10)(&g_DOUBLE_02cf2838)[g_INT_02cf28b8];
  fVar3 = (float10)(this_ptr->options).position.z - (float10)(&g_DOUBLE_02cf2848)[g_INT_02cf28b8];
  (this_ptr->options).delay_remaining =
       (float)(((float10)1 / (float10)1116.4f) *
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * (float10)g_FLOAT_00604240);
  return;
}
