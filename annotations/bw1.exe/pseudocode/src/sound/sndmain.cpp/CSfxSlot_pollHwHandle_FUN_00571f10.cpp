// Name: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_00571f10
// Address: 00571f10
// Address Range: [[00571f10, 00571f93]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00571f10(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00571f10(CSfxSlot *this_ptr)

{
  int iVar1;
  
  if (this_ptr->hardware_buffer_handle != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      if (this_ptr->sample == (CSfxSample *)0x0) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcf9;
        core_main_c_FUN_005030e0("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (**(code **)(*_DAT_02c80650 + 0x54))(_DAT_02c80650,this_ptr);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(this_ptr->sample);
      if (iVar1 != 0) {
        sound_sndmain_cpp_logSoundError_FUN_005773f0
                  ("Killing looped sfx %s, which died??\n",this_ptr->sample);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
  }
  return;
}
