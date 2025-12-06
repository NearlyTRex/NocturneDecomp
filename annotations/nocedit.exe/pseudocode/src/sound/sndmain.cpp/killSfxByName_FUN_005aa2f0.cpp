// Name: sound_sndmain.cpp_killSfxByName_FUN_005aa2f0
// Address: 005aa2f0
// Address Range: [[005aa2f0, 005aa33c]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_killSfxByName_FUN_005aa2f0(char * sample_name)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005aa2f0(char *sample_name)

{
  char *str1;
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar2 = 0;
  do {
    str1 = *(char **)((int)g_SfxSlots[0].distance_to_speakers + iVar2 + -8);
    if (str1 != (char *)0x0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60
                  ((CSfxSlot *)((int)g_SfxSlots[0].options.userdata + iVar2 + -0x54));
      }
    }
    iVar2 = iVar2 + 0x128;
  } while (iVar2 != 0x4a00);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}
