// Name: sound_sndmain.cpp_FUN_005257e0
// Address: 005257e0
// Address Range: [[005257e0, 00525867]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005257e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_005257e0(int param_1)

{
  double dVar1;
  
  if (((*(int *)(param_1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) &&
     (*(int *)(param_1 + 0x74) != 0)) {
    dVar1 = (double)(**(code **)(*_DAT_02dc8318 + 0x44))(_DAT_02dc8318,param_1);
    if (dVar1 < 0.0) {
      sound_sndmain_cpp_FUN_00529980
                ("Error polling hw playback pos %s\n",*(uint *)(param_1 + 0x74));
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(param_1,dVar1);
    return 1;
  }
  return 0;
}
