// Name: core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00
// Address: 005b2d00
// Address Range: [[005b2d00, 005b2d57]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00(CSound * this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_005b2d00(CSound *this_ptr)

{
  uint uVar1;
  
  if (g_SoundFileList.item_count == 0) {
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&g_SoundFileList,"sound","*.wav");
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&g_SoundFileList,"sound","*.mp3");
  }
  sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
  if (uVar1 == 0) {
    return;
  }
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
  return;
}
