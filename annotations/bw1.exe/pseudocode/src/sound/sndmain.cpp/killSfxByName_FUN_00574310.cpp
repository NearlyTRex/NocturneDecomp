// Name: sound_sndmain.cpp_killSfxByName_FUN_00574310
// Address: 00574310
// Address Range: [[00574310, 0057435c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00574310(char *sample_name)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00574310(char *sample_name)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar2 = 0;
  do {
    if (*(char **)(&DAT_02c74654 + iVar2) != (char *)0x0) {
      iVar1 = _stricmp(*(char **)(&DAT_02c74654 + iVar2),sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70((CSfxSlot *)(iVar2 + 0x2c745ec));
      }
    }
    iVar2 = iVar2 + 0x11c;
  } while (iVar2 != 0x4700);
  sound_sndmain_cpp_FUN_00573e70();
  return;
}
