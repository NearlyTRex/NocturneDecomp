// Name: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
// Address: 005a7fe0
// MANUAL RECONSTRUCTION
// Address Range: [[005a7fe0, 005a80d0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(CSfxSlot *this_ptr)

{
  int iVar1;
  uint update_flags;
  
  if (this_ptr->hardware_buffer_handle == 0) {
    return;
  }
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
    return;
  }
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2929;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::pollHwHandle - no sample?");
  }
  iVar1 = (*g_CSoundDevicePtr->vtable->isSfxPlaying)(g_CSoundDevicePtr,this_ptr);
  if (iVar1 == 0) {
    iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr->sample);
    if (iVar1 != 0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0
                ("Killing looped sfx %s, which died??\n",(this_ptr->sample->sample_info).name);
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
    return;
  }
  update_flags = 0;
  if (((this_ptr->options).flags & 1) == 0) {
    if ((this_ptr->options).position_format != 0) {
      update_flags = 2;
    }
    if ((this_ptr->options).velocity_format != 0) {
      update_flags = update_flags | 4;
      if (update_flags == 0) {
        return;
      }
      goto LAB_005a809a;
    }
  }
  if (update_flags == 0) {
    return;
  }
LAB_005a809a:
  iVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,update_flags);
  if (iVar1 != 0) {
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0
            ("Error setting hw sfx %d options (sample %s), killing.\n",this_ptr->hardware_buffer_handle,(this_ptr->sample->sample_info).name);
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
  return;
}
