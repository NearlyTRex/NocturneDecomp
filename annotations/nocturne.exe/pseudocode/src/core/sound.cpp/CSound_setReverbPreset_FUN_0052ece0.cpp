// Name: core_sound.cpp_CSound_setReverbPreset_FUN_0052ece0
// Address: 0052ece0
// Address Range: [[0052ece0, 0052ed38]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(uint param_1,int param_2)

{
  if ((param_2 < 0) || (0x1a < param_2)) {
    _DAT_01cc4800 = "..\\core\\sound.cpp";
    _DAT_01cc4804 = 0x402;
    FUN_004c8440("CSound::setReverbPreset - invalid index");
  }
  param_2 = param_2 * 0x10;
  core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
            (param_1,*(uint *)(&DAT_005bed70 + param_2),
             *(uint *)(&DAT_005bed74 + param_2),*(uint *)(&DAT_005bed78 + param_2));
  return;
}
