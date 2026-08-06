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
  
  if (_DAT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2836;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  if (slot->is_active != 0) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"Killing sfx %s\n");
  }
  if (slot->hardware_buffer_handle != 0) {
    if (_DAT_02dc8318 != (int *)0x0) {
      (**(code **)(*_DAT_02dc8318 + 0x4c))(_DAT_02dc8318,slot);
    }
    slot->hardware_buffer_handle = 0;
  }
  slot->is_active = 0;
  slot->playback_state = 0;
  if (slot->sample != (CSfxSample *)0x0) {
    if (slot->sample->ref_count < 1) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 2867;
      core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &slot->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    this_ptr = slot->sample;
    slot->sample = (CSfxSample *)0x0;
    if (-1 < this_ptr->streaming_slot_index) {
      if (this_ptr->ref_count != 0) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 2882;
        core_main_c_displayErrorAndQuit_FUN_004c8440("refCount for streaming Sfx %s > 1");
      }
      if ((int)&slot[-0x28a84].fade_time_remaining / 0x120 != this_ptr->streaming_slot_index) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 2883;
        core_main_c_displayErrorAndQuit_FUN_004c8440("streaming sample sfx index mismatch on %s");
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(this_ptr);
    }
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(0);
  }
  return;
}
