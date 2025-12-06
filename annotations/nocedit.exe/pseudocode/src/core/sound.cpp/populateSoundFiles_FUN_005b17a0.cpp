// Name: core_sound.cpp_populateSoundFiles_FUN_005b17a0
// Address: 005b17a0
// Address Range: [[005b17a0, 005b17ce]]
// Convention: __cdecl
// Signature: void core_sound.cpp_populateSoundFiles_FUN_005b17a0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_populateSoundFiles_FUN_005b17a0(void)

{
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            (&g_SoundFileList,"sound","*.wav");
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            (&g_SoundFileList,"sound","*.mp3");
  return;
}
