// Name: core_sound.cpp_FUN_0055fc60
// Address: 0055fc60
// Address Range: [[0055fc60, 0055fcb7]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0055fc60(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_FUN_0055fc60(CSound *this_ptr)

{
  uint uVar1;
  
  if (g_CStrListInstance.item_count == 0) {
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70
              (&g_CStrListInstance,"sound","*.wav");
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70
              (&g_CStrListInstance,"sound","*.mp3");
  }
  sound_sndmain_cpp_initializeSoundDevice_FUN_00558730();
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
  if ((int)uVar1 < 1) {
    return;
  }
  sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(0x10,2,0xac44);
  return;
}
