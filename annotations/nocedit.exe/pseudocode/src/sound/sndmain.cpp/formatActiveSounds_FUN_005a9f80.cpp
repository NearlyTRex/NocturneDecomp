// Name: sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80
// Address: 005a9f80
// Address Range: [[005a9f80, 005a9fec]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80(char * output_buffer)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_formatActiveSounds_FUN_005a9f80(char *output_buffer)

{
  int iVar1;
  CSfxSlot *this_ptr;
  int iVar2;
  char *in_stack_00000008;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  this_ptr = g_SfxSlots;
  iVar2 = 0;
  do {
    if ((this_ptr->sample != (CSfxSample *)0x0) && (this_ptr->playback_state != 0)) {
      sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(this_ptr);
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                        (in_stack_00000008,"sfx slot %d: %s, pos %7.1f/%7.1f\n",iVar2,
                         this_ptr->sample,*(uint *)&(this_ptr->options).trigger_time,
                         *(uint *)((int)&(this_ptr->options).trigger_time + 4),
                         (double)(this_ptr->sample->sample_info).sample_count);
      in_stack_00000008 = in_stack_00000008 + iVar1;
    }
    iVar2 = iVar2 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar2 < 0x40);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  *in_stack_00000008 = '\0';
  return;
}
