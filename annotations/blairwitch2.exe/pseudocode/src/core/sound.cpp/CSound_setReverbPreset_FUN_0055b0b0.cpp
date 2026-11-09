// Name: core_sound.cpp_CSound_setReverbPreset_FUN_0055b0b0
// Address: 0055b0b0
// Address Range: [[0055b0b0, 0055b108]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0055b0b0(CSound *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0055b0b0(CSound *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (0x1a < index)) {
    _DAT_01d046a0 = "..\\core\\sound.cpp";
    _DAT_01d046a4 = 0x404;
    core_main_c_FUN_004e4500("CSound::setReverbPreset - invalid index");
  }
  iVar1 = index * 0x10;
  core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0055b080
            (this_ptr,*(float *)(&DAT_0061c070 + iVar1),*(float *)(&DAT_0061c074 + iVar1),
             *(float *)(&DAT_0061c078 + iVar1));
  return;
}
