// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
// Address: 00525570
// Address Range: [[00525570, 005256ec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(CSfxSlot *slot)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(CSfxSlot *slot)

{
  int *piVar1;
  CSfxSample *this_ptr;
  char *pcVar2;
  
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0xb14;
    core_main_c_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  if (slot->stop_after_fade != 0.0) {
    pcVar2 = "[NULLsamplePtr]";
    if ((char *)slot->playback_state != (char *)0x0) {
      pcVar2 = (char *)slot->playback_state;
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"Killing sfx %s\n",pcVar2);
  }
  if ((slot->options).dead != 0) {
    if (_DAT_02dc8318 != (int *)0x0) {
      (**(code **)(*_DAT_02dc8318 + 0x4c))(_DAT_02dc8318,slot);
    }
    (slot->options).dead = 0;
  }
  slot->stop_after_fade = 0.0;
  slot->hardware_buffer_handle = 0;
  if (slot->playback_state != 0) {
    if (*(int *)(slot->playback_state + 300) < 1) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0xb33;
      core_main_c_FUN_004c8440("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(slot->playback_state + 300);
    *piVar1 = *piVar1 + -1;
    this_ptr = (CSfxSample *)slot->playback_state;
    slot->playback_state = 0;
    if (-1 < this_ptr->loop_endpoints[3]) {
      if (this_ptr->loop_endpoints[1] != 0) {
        PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        INT_01cc4804 = 0xb42;
        core_main_c_FUN_004c8440("refCount for streaming Sfx %s > 1",this_ptr);
      }
      if ((int)(slot[-0x278ef].channel_current_buffer_offsets + 1) / 0x120 !=
          this_ptr->loop_endpoints[3]) {
        PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        INT_01cc4804 = 0xb43;
        core_main_c_FUN_004c8440("streaming sample sfx index mismatch on %s",this_ptr);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(this_ptr);
    }
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(0);
  }
  return;
}
