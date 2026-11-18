// Name: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_00555410
// Address: 00555410
// Address Range: [[00555410, 00555493]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00555410(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00555410(CSfxSlot *this_ptr)

{
  int iVar1;
  
  if (this_ptr->hardware_buffer_handle != 0) {
    if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
      if (this_ptr->sample == (CSfxSample *)0x0) {
        g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
        g_INT_01d71de4 = 0xcfb;
        core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (*g_CSoundDevicePtr->vtable->isSfxPlaying)(g_CSoundDevicePtr,this_ptr);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00555b80(this_ptr->sample);
      if (iVar1 != 0) {
        sound_sndmain_cpp_logSoundError_FUN_0055a560
                  ("Killing looped sfx %s, which died??\n",this_ptr->sample);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
  }
  return;
}
