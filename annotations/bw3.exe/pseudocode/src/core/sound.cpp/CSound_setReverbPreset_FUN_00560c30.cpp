// Name: core_sound.cpp_CSound_setReverbPreset_FUN_00560c30
// Address: 00560c30
// Address Range: [[00560c30, 00560c88]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_00560c30(CSound *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_00560c30(CSound *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (0x1a < index)) {
    _DAT_01d71de0 = "..\\core\\sound.cpp";
    _DAT_01d71de4 = 0x3fd;
    core_main_c_FUN_004e4330("CSound::setReverbPreset - invalid index");
  }
  iVar1 = index * 0x10;
  core_sound_cpp_CSound_set3DListenerOrientRight_FUN_00560c00
            (this_ptr,*(float *)(&DAT_00604600 + iVar1),*(float *)(&DAT_00604604 + iVar1),
             *(float *)(&DAT_00604608 + iVar1));
  return;
}
