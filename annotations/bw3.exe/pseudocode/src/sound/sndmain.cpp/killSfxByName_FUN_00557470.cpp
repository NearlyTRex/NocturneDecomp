// Name: sound_sndmain.cpp_killSfxByName_FUN_00557470
// Address: 00557470
// Address Range: [[00557470, 005574bc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00557470(char *sample_name)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00557470(char *sample_name)

{
  char *str1;
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar2 = 0;
  do {
    str1 = *(char **)((int)g_CSfxSlot_ARRAY_02ce721c[0].distance_to_speakers + iVar2 + -8);
    if (str1 != (char *)0x0) {
      iVar1 = _stricmp(str1,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270
                  ((CSfxSlot *)((int)g_CSfxSlot_ARRAY_02ce721c[0].options.userdata + iVar2 + -0x44))
        ;
      }
    }
    iVar2 = iVar2 + 0x11c;
  } while (iVar2 != 0x4700);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
