// Name: sound_sndmain.cpp_killSoundThread_FUN_00528780
// Address: 00528780
// Address Range: [[00528780, 005287fc]]
// Convention: __cdecl
// Signature: bool __cdecl sound_sndmain_cpp_killSoundThread_FUN_00528780(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl sound_sndmain_cpp_killSoundThread_FUN_00528780(void)

{
  int iVar1;
  
  iVar1 = 0;
  _DAT_02dc84b4 = 1;
  do {
    if (_DAT_02dc84b0 == 0) break;
    iVar1 = iVar1 + 1;
    wincore_winrun_cpp_sleep_FUN_00559cc0(0x47ae147b,0x3f847ae1);
  } while (iVar1 < 100);
  if (_DAT_02dc84b0 == 0) {
    return true;
  }
  FUN_00529980("Mb`?killSoundThread - failed!\n" + 4);
  return _DAT_02dc84b0 == 0;
}
