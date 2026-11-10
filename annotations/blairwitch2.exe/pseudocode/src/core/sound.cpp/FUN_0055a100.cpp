// Name: core_sound.cpp_FUN_0055a100
// Address: 0055a100
// Address Range: [[0055a100, 0055a157]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0055a100(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_FUN_0055a100(CSound *this_ptr)

{
  int extraout_EAX;
  int unaff_retaddr;
  
  if (g_CStrListInstance.item_count == 0) {
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70
              (&g_CStrListInstance,"sound","*.wav");
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70
              (&g_CStrListInstance,"sound","*.mp3");
  }
  sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90();
  sound_sndmain_cpp_FUN_00552b30(unaff_retaddr);
  if (extraout_EAX < 1) {
    return;
  }
  sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(0x10,2,0xac44);
  return;
}
