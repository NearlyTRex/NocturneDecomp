// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
// Address: 005a7e60
// Address Range: [[005a7e60, 005a7fdc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot *this_ptr)

{
  int *piVar1;
  CSfxSample *pCVar2;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2850;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  if (this_ptr->is_active != 0) {
    pCVar2 = (CSfxSample *)"[NULLsamplePtr]";
    if (this_ptr->sample != (CSfxSample *)0x0) {
      pCVar2 = this_ptr->sample;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Killing sfx %s\n",pCVar2);
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
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 2881;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &this_ptr->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    pCVar2 = this_ptr->sample;
    this_ptr->sample = (CSfxSample *)0x0;
    if (-1 < pCVar2->streaming_slot_index) {
      if (pCVar2->ref_count != 0) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 2896;
        core_main_c_displayErrorAndQuit_FUN_00506f10("refCount for streaming Sfx %s > 1",pCVar2);
      }
      if ((int)&this_ptr[-0x36cd9].options.current_volume / 0x128 != pCVar2->streaming_slot_index) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 2897;
        core_main_c_displayErrorAndQuit_FUN_00506f10("streaming sample sfx index mismatch on %s",pCVar2);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar2);
    }
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450(0);
  }
  return;
}
