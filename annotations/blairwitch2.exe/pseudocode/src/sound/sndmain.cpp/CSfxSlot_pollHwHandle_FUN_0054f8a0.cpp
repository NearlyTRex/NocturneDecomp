// Name: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_0054f8a0
// Address: 0054f8a0
// Address Range: [[0054f8a0, 0054f923]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_0054f8a0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_0054f8a0(CSfxSlot *this_ptr)

{
  int iVar1;
  
  if (this_ptr->hardware_buffer_handle != 0) {
    if (_DAT_02648e80 != (int *)0x0) {
      if (this_ptr->sample == (CSfxSample *)0x0) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcf9;
        core_main_c_FUN_004e4500("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (**(code **)(*_DAT_02648e80 + 0x54))(_DAT_02648e80,this_ptr);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010(this_ptr->sample);
      if (iVar1 != 0) {
        sound_sndmain_cpp_logSoundError_FUN_005549c0
                  ("Killing looped sfx %s, which died??\n",this_ptr->sample);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
  }
  return;
}
