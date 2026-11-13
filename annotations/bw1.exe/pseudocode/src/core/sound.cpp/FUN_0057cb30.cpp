// Name: core_sound.cpp_FUN_0057cb30
// Address: 0057cb30
// Address Range: [[0057cb30, 0057cb87]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0057cb30(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_FUN_0057cb30(CSound *this_ptr)

{
  uint uVar1;
  
  if (g_CStrListInstance.item_count == 0) {
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0
              (&g_CStrListInstance,"sound","*.wav");
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0
              (&g_CStrListInstance,"sound","*.mp3");
  }
  sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
  if ((int)uVar1 < 1) {
    return;
  }
  sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(0x10,2,0xac44);
  return;
}
