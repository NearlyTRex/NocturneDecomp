// Name: sound_sndmain.cpp_FUN_005518e0
// Address: 005518e0
// Address Range: [[005518e0, 0055192c]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005518e0(char *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005518e0(char *param_1)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar2 = 0;
  do {
    if (*(char **)(&DAT_0263cf84 + iVar2) != (char *)0x0) {
      iVar1 = _stricmp(*(char **)(&DAT_0263cf84 + iVar2),param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700((CSfxSlot *)(iVar2 + 0x263cf1c));
      }
    }
    iVar2 = iVar2 + 0x11c;
  } while (iVar2 != 0x4700);
  sound_sndmain_cpp_FUN_00551440();
  return;
}
