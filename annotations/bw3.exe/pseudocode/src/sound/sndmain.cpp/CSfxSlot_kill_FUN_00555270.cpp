// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
// Address: 00555270
// Address Range: [[00555270, 00555400]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot *this_ptr)

{
  int *piVar1;
  CSfxSample *pCVar2;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xca5;
    core_main_c_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  if (this_ptr->is_active != 0) {
    pCVar2 = (CSfxSample *)"[NULLsamplePtr]";
    if (this_ptr->sample != (CSfxSample *)0x0) {
      pCVar2 = this_ptr->sample;
    }
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Killing sfx %s\n",pCVar2);
  }
  if (this_ptr->hardware_buffer_handle != 0) {
    if (_DAT_02cf3280 != (int *)0x0) {
      (**(code **)(*_DAT_02cf3280 + 0x50))(_DAT_02cf3280,this_ptr);
    }
    this_ptr->hardware_buffer_handle = 0;
  }
  this_ptr->is_active = 0;
  this_ptr->playback_state = 0;
  if (this_ptr->sample != (CSfxSample *)0x0) {
    if (this_ptr->sample->ref_count < 1) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0xcc4;
      core_main_c_FUN_004e4330("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &this_ptr->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    pCVar2 = this_ptr->sample;
    this_ptr->sample = (CSfxSample *)0x0;
    if (-1 < pCVar2->streaming_slot_index) {
      if (pCVar2->ref_count != 0) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcd3;
        core_main_c_FUN_004e4330("refCount for streaming Sfx %s > 1",pCVar2);
      }
      if ((int)((int)&this_ptr[-0x2879d].options.position.y + 4) / 0x11c !=
          pCVar2->streaming_slot_index) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcd4;
        core_main_c_FUN_004e4330("streaming sample sfx index mismatch on %s",pCVar2);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(pCVar2);
    }
    sound_sndmain_cpp_FUN_005514c0(0);
    pCVar2->streaming_slot_index = -1;
  }
  this_ptr->changed_flags = 0;
  return;
}
