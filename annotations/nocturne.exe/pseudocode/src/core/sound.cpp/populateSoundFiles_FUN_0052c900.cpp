// Name: core_sound.cpp_populateSoundFiles_FUN_0052c900
// Address: 0052c900
// Address Range: [[0052c900, 0052c92e]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_populateSoundFiles_FUN_0052c900(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_populateSoundFiles_FUN_0052c900(void)

{
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
            ((CStrList *)&DAT_02dc9610,"sound","*.wav");
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
            ((CStrList *)&DAT_02dc9610,"sound","*.mp3");
  return;
}
