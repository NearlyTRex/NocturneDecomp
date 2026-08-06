// Name: core_sound.cpp_CSound_setReverbPreset_FUN_0052ece0
// Address: 0052ece0
// Address Range: [[0052ece0, 0052ed38]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(CSound *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(CSound *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (0x1a < index)) {
    g_CurrentFilename = "..\\core\\sound.cpp";
    g_CurrentLineNumber = 1026;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CSound::setReverbPreset - invalid index");
  }
  iVar1 = index * 0x10;
  core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
            (this_ptr,*(float *)(&DAT_005bed70 + iVar1),*(float *)(&DAT_005bed74 + iVar1),
             *(float *)(&DAT_005bed78 + iVar1));
  return;
}
