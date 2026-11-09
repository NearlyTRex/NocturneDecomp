// Name: core_sound.cpp_CSound_setReverbPreset_FUN_0057db00
// Address: 0057db00
// Address Range: [[0057db00, 0057db58]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0057db00(CSound *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0057db00(CSound *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (0x1a < index)) {
    _DAT_01d1d400 = "..\\core\\sound.cpp";
    _DAT_01d1d404 = 0x402;
    core_main_c_FUN_005030e0("CSound::setReverbPreset - invalid index");
  }
  iVar1 = index * 0x10;
  core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0057dad0
            (this_ptr,*(float *)(&DAT_006236c0 + iVar1),*(float *)(&DAT_006236c4 + iVar1),
             *(float *)(&DAT_006236c8 + iVar1));
  return;
}
