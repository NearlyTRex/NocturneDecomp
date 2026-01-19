// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070
// Address: 005a7070
// Address Range: [[005a7070, 005a70fd]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(CSfxSlot * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(CSfxSlot *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x942;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).flags & 1) != 0) {
    *(uint *)&(this_ptr->options).delay_remaining = 0;
    *(uint *)((int)&(this_ptr->options).delay_remaining + 4) = 0;
    return;
  }
  dVar1 = (this_ptr->options).position.x - g_Cached3DListenerPos.x;
  dVar3 = (this_ptr->options).position.y - g_Cached3DListenerPos.y;
  dVar2 = (this_ptr->options).position.z - g_Cached3DListenerPos.z;
  (this_ptr->options).delay_remaining =
       (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) * DOUBLE_00681b30) / 1116.4000000000001;
  return;
}
