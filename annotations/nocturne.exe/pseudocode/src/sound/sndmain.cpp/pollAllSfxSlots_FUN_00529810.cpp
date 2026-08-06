// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810
// Address: 00529810
// Address Range: [[00529810, 005298e1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810(void)

{
  uint uVar1;
  int iVar2;
  CSfxSlot *this_ptr;
  float local_18;
  
  if (_DAT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 5260;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10();
  iVar2 = _DAT_02dc84c0;
  _DAT_02dc84c0 = wincore_winrun_cpp_getTime_FUN_00558a30();
  local_18 = 0.0;
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (uVar1 != 0) {
    local_18 = (float)(_DAT_02dc84c0 - iVar2) * (float)8.4771050347222196e-07;
    if (local_18 < 0.0) {
      local_18 = 0.0;
    }
    if ((float)0.25 < local_18) {
      local_18 = 0.25;
    }
  }
  this_ptr = g_CSfxSlot_ARRAY_02dbd374;
  do {
    iVar2 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,local_18);
    if (iVar2 != 0) {
      sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005256f0(this_ptr);
    }
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSlot *)&DAT_02dc1b74);
  return;
}
