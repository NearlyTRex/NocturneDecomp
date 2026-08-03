// Name: core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20
// Address: 0052dd20
// Address Range: [[0052dd20, 0052dd77]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_0052dd20(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_0052dd20(CSound *this_ptr)

{
  uint uVar1;
  
  if (g_CStrList_02dc9610.item_count == 0) {
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
              (&g_CStrList_02dc9610,"sound","*.wav");
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
              (&g_CStrList_02dc9610,"sound","*.mp3");
  }
  sound_sndmain_cpp_initializeSoundDevice_FUN_00528500();
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (uVar1 == 0) {
    return;
  }
  sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(0x10,2,0xac44);
  return;
}
