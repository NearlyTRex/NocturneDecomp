// Name: sound_sndmain.cpp_killSfxByName_FUN_005278e0
// Address: 005278e0
// Address Range: [[005278e0, 0052792c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005278e0(char *sample_name)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005278e0(char *sample_name)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar2 = 0;
  do {
    if (*(char **)(&DAT_02dbd3e8 + iVar2) != (char *)0x0) {
      iVar1 = _stricmp(*(char **)(&DAT_02dbd3e8 + iVar2),sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570((CSfxSlot *)(iVar2 + 0x2dbd374));
      }
    }
    iVar2 = iVar2 + 0x120;
  } while (iVar2 != 0x4800);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
