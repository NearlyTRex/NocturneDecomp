// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
// Address: 0054f700
// Address Range: [[0054f700, 0054f890]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot *this_ptr)

{
  int *piVar1;
  CSfxSample *pCVar2;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xca3;
    core_main_c_FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  if (this_ptr->is_active != 0) {
    pCVar2 = (CSfxSample *)"[NULLsamplePtr]";
    if (this_ptr->sample != (CSfxSample *)0x0) {
      pCVar2 = this_ptr->sample;
    }
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"Killing sfx %s\n",pCVar2);
  }
  if (this_ptr->hardware_buffer_handle != 0) {
    if (_DAT_02648e80 != (int *)0x0) {
      (**(code **)(*_DAT_02648e80 + 0x50))(_DAT_02648e80,this_ptr);
    }
    this_ptr->hardware_buffer_handle = 0;
  }
  this_ptr->is_active = 0;
  this_ptr->playback_state = 0;
  if (this_ptr->sample != (CSfxSample *)0x0) {
    if (this_ptr->sample->ref_count < 1) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0xcc2;
      core_main_c_FUN_004e4500("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &this_ptr->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    pCVar2 = this_ptr->sample;
    this_ptr->sample = (CSfxSample *)0x0;
    if (-1 < pCVar2->streaming_slot_index) {
      if (pCVar2->ref_count != 0) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcd1;
        core_main_c_FUN_004e4500("refCount for streaming Sfx %s > 1",pCVar2);
      }
      if ((int)(this_ptr[-0x2277e].channel_volumes + 7) / 0x11c != pCVar2->streaming_slot_index) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcd2;
        core_main_c_FUN_004e4500("streaming sample sfx index mismatch on %s",pCVar2);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(pCVar2);
    }
    sound_sndmain_cpp_FUN_0054b960(0);
    pCVar2->streaming_slot_index = -1;
  }
  this_ptr->changed_flags = 0;
  return;
}
