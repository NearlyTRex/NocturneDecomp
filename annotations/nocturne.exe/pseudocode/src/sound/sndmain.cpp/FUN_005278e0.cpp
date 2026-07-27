// Name: sound_sndmain.cpp_FUN_005278e0
// Address: 005278e0
// Address Range: [[005278e0, 0052792c]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005278e0(undefined4 param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005278e0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar2 = 0;
  do {
    if (*(int *)(&DAT_02dbd3e8 + iVar2) != 0) {
      iVar1 = _stricmp(*(int *)(&DAT_02dbd3e8 + iVar2),param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(iVar2 + 0x2dbd374);
      }
    }
    iVar2 = iVar2 + 0x120;
  } while (iVar2 != 0x4800);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
