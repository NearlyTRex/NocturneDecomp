// Name: sound_sndmain.cpp_FUN_00557470
// Address: 00557470
// Address Range: [[00557470, 005574bc]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00557470(char *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00557470(char *param_1)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_FUN_00558e90();
  iVar2 = 0;
  do {
    if (*(char **)(&DAT_02ce7284 + iVar2) != (char *)0x0) {
      iVar1 = _stricmp(*(char **)(&DAT_02ce7284 + iVar2),param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270((CSfxSlot *)(iVar2 + 0x2ce721c));
      }
    }
    iVar2 = iVar2 + 0x11c;
  } while (iVar2 != 0x4700);
  sound_sndmain_cpp_FUN_00556fd0();
  return;
}
