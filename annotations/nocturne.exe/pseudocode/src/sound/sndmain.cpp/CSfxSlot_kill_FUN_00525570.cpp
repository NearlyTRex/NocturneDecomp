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
  CSfxSample *pCVar2;
  
  if (_DAT_02dc84bc < 1) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0xb14;
    core_main_c_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  if (slot->is_active != 0) {
    pCVar2 = (CSfxSample *)"[NULLsamplePtr]";
    if (slot->sample != (CSfxSample *)0x0) {
      pCVar2 = slot->sample;
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"Killing sfx %s\n",pCVar2);
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
      g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      g_INT_01cc4804 = 0xb33;
      core_main_c_FUN_004c8440("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &slot->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    pCVar2 = slot->sample;
    slot->sample = (CSfxSample *)0x0;
    if (-1 < pCVar2->streaming_slot_index) {
      if (pCVar2->ref_count != 0) {
        g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        g_INT_01cc4804 = 0xb42;
        core_main_c_FUN_004c8440("refCount for streaming Sfx %s > 1",pCVar2);
      }
      if ((int)&slot[-0x28a84].fade_time_remaining / 0x120 != pCVar2->streaming_slot_index) {
        g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        g_INT_01cc4804 = 0xb43;
        core_main_c_FUN_004c8440("streaming sample sfx index mismatch on %s",pCVar2);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(pCVar2);
    }
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(0);
  }
  return;
}
