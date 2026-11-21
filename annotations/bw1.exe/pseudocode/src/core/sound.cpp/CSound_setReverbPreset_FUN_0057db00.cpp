// Name: core_sound.cpp_CSound_setReverbPreset_FUN_0057db00
// Address: 0057db00
// Address Range: [[0057db00, 0057db58]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0057db00(CSound *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0057db00(CSound *this_ptr,int index)

{
  if ((index < 0) || (0x1a < index)) {
    g_CurrentFilename = "..\\core\\sound.cpp";
    g_CurrentLineNumber = 1026;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CSound::setReverbPreset - invalid index");
  }
  core_sound_cpp_CSound_setReverb_FUN_0057dad0
            (this_ptr,g_ReverbPresetTable[index].reverb.volume,
             g_ReverbPresetTable[index].reverb.decay_time,g_ReverbPresetTable[index].reverb.damping)
  ;
  return;
}
