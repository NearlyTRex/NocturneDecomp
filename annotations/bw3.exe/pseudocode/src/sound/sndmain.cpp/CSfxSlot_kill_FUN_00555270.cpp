// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
// Address: 00555270
// Address Range: [[00555270, 00555400]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot *this_ptr)

{
  int *piVar1;
  CSfxSample *this_ptr_00;
  
  if (g_SoundLockCount < 1) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0xca5;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  if (this_ptr->is_active != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"Killing sfx %s\n");
  }
  if (this_ptr->hardware_buffer_handle != 0) {
    if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
      (*g_CSoundDevicePtr->vtable->killSfx)(g_CSoundDevicePtr,this_ptr);
    }
    this_ptr->hardware_buffer_handle = 0;
  }
  this_ptr->is_active = 0;
  this_ptr->playback_state = 0;
  if (this_ptr->sample != (CSfxSample *)0x0) {
    if (this_ptr->sample->ref_count < 1) {
      g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
      g_INT_01d71de4 = 0xcc4;
      core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &this_ptr->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    this_ptr_00 = this_ptr->sample;
    this_ptr->sample = (CSfxSample *)0x0;
    if (-1 < this_ptr_00->streaming_slot_index) {
      if (this_ptr_00->ref_count != 0) {
        g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
        g_INT_01d71de4 = 0xcd3;
        core_main_c_displayErrorAndQuit_FUN_004e4330("refCount for streaming Sfx %s > 1");
      }
      if ((int)((int)&this_ptr[-0x2879d].options.position.y + 4) / 0x11c !=
          this_ptr_00->streaming_slot_index) {
        g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
        g_INT_01d71de4 = 0xcd4;
        core_main_c_displayErrorAndQuit_FUN_004e4330("streaming sample sfx index mismatch on %s");
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr_00);
    }
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005514c0(0);
    this_ptr_00->streaming_slot_index = -1;
  }
  this_ptr->changed_flags = 0;
  return;
}
