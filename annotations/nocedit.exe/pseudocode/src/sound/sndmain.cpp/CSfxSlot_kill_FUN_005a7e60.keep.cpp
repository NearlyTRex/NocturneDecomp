// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
// Address: 005a7e60
// MANUAL RECONSTRUCTION
// Address Range: [[005a7e60, 005a7fdc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot *slot)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot *slot)

{
  int *piVar1;
  CSfxSample *pCVar2;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2850;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  if (slot->is_active != 0) {
    pCVar2 = (CSfxSample *)"[NULLsamplePtr]";
    if (slot->sample != (CSfxSample *)0x0) {
      pCVar2 = slot->sample;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Killing sfx %s\n",(char *)pCVar2);
  }
  if (slot->hardware_buffer_handle != 0) {
    if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
      (*g_CSoundDevicePtr->vtable->killSfx)(g_CSoundDevicePtr,slot);
    }
    slot->hardware_buffer_handle = 0;
  }
  slot->is_active = 0;
  slot->playback_state = 0;
  if (slot->sample != (CSfxSample *)0x0) {
    if (slot->sample->ref_count < 1) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 2881;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &slot->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    pCVar2 = slot->sample;
    slot->sample = (CSfxSample *)0x0;
    if (-1 < pCVar2->streaming_slot_index) {
      if (pCVar2->ref_count != 0) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 2896;
        core_main_c_displayErrorAndQuit_FUN_00506f10("refCount for streaming Sfx %s > 1",(pCVar2->sample_info).name);
      }
      if (slot - g_SfxSlots != pCVar2->streaming_slot_index) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 2897;
        core_main_c_displayErrorAndQuit_FUN_00506f10("streaming sample sfx index mismatch on %s",(pCVar2->sample_info).name);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar2);
    }
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450(0);
  }
  return;
}
