// Name: core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
// Address: 005b3cc0
// Address Range: [[005b3cc0, 005b3d18]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound * this_ptr, int index)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound *this_ptr,int index)

{
  if ((index < 0) || (0x1a < index)) {
    g_CurrentFilename = "..\\core\\sound.cpp";
    g_CurrentLineNumber = 0x402;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSound::setReverbPreset - invalid index");
  }
  core_sound_cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
            ((CSound *)index,g_SoundModeTable[index].listener_orient.x,
             g_SoundModeTable[index].listener_orient.y,g_SoundModeTable[index].listener_orient.z);
  return;
}
