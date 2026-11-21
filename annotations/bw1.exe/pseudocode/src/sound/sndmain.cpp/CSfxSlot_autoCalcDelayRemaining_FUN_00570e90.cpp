// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90
// Address: 00570e90
// Address Range: [[00570e90, 00570f22]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90(CSfxSlot *this_ptr)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2742;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).flags & 1) != 0) {
    (this_ptr->options).delay_remaining = 0.0;
    return;
  }
  fVar1 = (float10)(this_ptr->options).position.x - (float10)(&g_DOUBLE_02c7fbf8)[g_INT_02c7fc88];
  fVar2 = (float10)(this_ptr->options).position.y - (float10)(&g_DOUBLE_02c7fc08)[g_INT_02c7fc88];
  fVar3 = (float10)(this_ptr->options).position.z - (float10)(&g_DOUBLE_02c7fc18)[g_INT_02c7fc88];
  (this_ptr->options).delay_remaining =
       (float)(((float10)1 / (float10)1116.4f) *
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * (float10)g_FLOAT_00623304);
  return;
}
