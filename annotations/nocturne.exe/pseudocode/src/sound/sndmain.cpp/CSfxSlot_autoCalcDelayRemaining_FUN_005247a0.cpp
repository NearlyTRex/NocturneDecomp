// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0
// Address: 005247a0
// Address Range: [[005247a0, 0052482d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(CSfxSlot *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2357;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).flags & 1) != 0) {
    *(uint *)&(this_ptr->options).delay_remaining = 0;
    *(uint *)((int)&(this_ptr->options).delay_remaining + 4) = 0;
    return;
  }
  dVar1 = (this_ptr->options).position.x - g_DOUBLE_02dc78e0;
  dVar3 = (this_ptr->options).position.y - g_DOUBLE_02dc78e8;
  dVar2 = (this_ptr->options).position.z - g_DOUBLE_02dc78f0;
  (this_ptr->options).delay_remaining =
       (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) * g_Cached3DDistanceFactor) /
       1116.4000000000001;
  return;
}
