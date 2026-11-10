// Name: sound_sndmain.cpp_FUN_00571f10
// Address: 00571f10
// Address Range: [[00571f10, 00571f93]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00571f10(CSfxSlot *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00571f10(CSfxSlot *param_1)

{
  int iVar1;
  
  if (param_1->hardware_buffer_handle != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      if (param_1->sample == (CSfxSample *)0x0) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcf9;
        core_main_c_FUN_005030e0("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (**(code **)(*_DAT_02c80650 + 0x54))(_DAT_02c80650,param_1);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(param_1->sample);
      if (iVar1 != 0) {
        sound_sndmain_cpp_FUN_005773f0("Killing looped sfx %s, which died??\n",param_1->sample);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(param_1);
  }
  return;
}
