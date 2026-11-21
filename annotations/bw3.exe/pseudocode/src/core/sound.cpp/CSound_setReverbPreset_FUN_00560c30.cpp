// Name: core_sound.cpp_CSound_setReverbPreset_FUN_00560c30
// Address: 00560c30
// Address Range: [[00560c30, 00560c88]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_00560c30(CSound *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_00560c30(CSound *this_ptr,int index)

{
  if ((index < 0) || (0x1a < index)) {
    g_CurrentFilename = "..\\core\\sound.cpp";
    g_CurrentLineNumber = 1021;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CSound::setReverbPreset - invalid index");
  }
  core_sound_cpp_CSound_setReverb_FUN_00560c00
            (this_ptr,g_ReverbPresetTable[index].reverb.volume,
             g_ReverbPresetTable[index].reverb.decay_time,g_ReverbPresetTable[index].reverb.damping)
  ;
  return;
}
