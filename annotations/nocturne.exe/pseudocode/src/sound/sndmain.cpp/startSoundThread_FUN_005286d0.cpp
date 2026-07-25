// Name: sound_sndmain.cpp_startSoundThread_FUN_005286d0
// Address: 005286d0
// Address Range: [[005286d0, 0052877b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005286d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005286d0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_killSoundThread_FUN_00528780();
  if (iVar1 != 0) {
    _DAT_02dc84a8 = param_1;
    _DAT_02dc84ac = param_2;
    if (__BITCAST_DOUBLE(CONCAT44(param_2,param_1)) < 0.002) {
      _DAT_02dc84a8 = 0xd2f1a9fc;
      _DAT_02dc84ac = 0x3f60624d;
    }
    iVar1 = 0;
    _DAT_02dc84b0 = 0;
    _DAT_02dc84b4 = 0;
    iVar2 = wincore_winrun_cpp_createThread_FUN_00559c50(FUN_00528670,0);
    if ((iVar2 != 0) &&
       (iVar2 = wincore_winrun_cpp_setThreadPriority_FUN_00559c80(iVar2,3), iVar2 != 0)) {
      do {
        if (_DAT_02dc84b0 != 0) {
          return _DAT_02dc84b0;
        }
        iVar1 = iVar1 + 1;
        wincore_winrun_cpp_sleep_FUN_00559cc0(0x47ae147b,0x3f847ae1);
      } while (iVar1 < 100);
      return _DAT_02dc84b0;
    }
  }
  return 0;
}
