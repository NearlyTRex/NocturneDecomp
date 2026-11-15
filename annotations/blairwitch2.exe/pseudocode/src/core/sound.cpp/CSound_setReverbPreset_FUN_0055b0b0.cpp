// Name: core_sound.cpp_CSound_setReverbPreset_FUN_0055b0b0
// Address: 0055b0b0
// Address Range: [[0055b0b0, 0055b108]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0055b0b0(CSound *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0055b0b0(CSound *this_ptr,int index)

{
  if ((index < 0) || (0x1a < index)) {
    _DAT_01d046a0 = "..\\core\\sound.cpp";
    _DAT_01d046a4 = 0x404;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CSound::setReverbPreset - invalid index");
  }
  core_sound_cpp_CSound_setReverb_FUN_0055b080
            (this_ptr,g_ReverbPresetTable[index].reverb.volume,
             g_ReverbPresetTable[index].reverb.decay_time,g_ReverbPresetTable[index].reverb.damping)
  ;
  return;
}
