// Name: sound_sndmain.cpp_killSfxByName_FUN_00557470
// Address: 00557470
// Address Range: [[00557470, 005574bc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00557470(char *sample_name)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00557470(char *sample_name)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar2 = 0;
  do {
    if (*(char **)(&DAT_02ce7284 + iVar2) != (char *)0x0) {
      iVar1 = _stricmp(*(char **)(&DAT_02ce7284 + iVar2),sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270((CSfxSlot *)(iVar2 + 0x2ce721c));
      }
    }
    iVar2 = iVar2 + 0x11c;
  } while (iVar2 != 0x4700);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
