// Name: sound_sndmain.cpp_FUN_00555410
// Address: 00555410
// Address Range: [[00555410, 00555493]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00555410(CSfxSlot *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00555410(CSfxSlot *param_1)

{
  int iVar1;
  
  if (param_1->hardware_buffer_handle != 0) {
    if (_DAT_02cf3280 != (int *)0x0) {
      if (param_1->sample == (CSfxSample *)0x0) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcfb;
        core_main_c_FUN_004e4330("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (**(code **)(*_DAT_02cf3280 + 0x54))(_DAT_02cf3280,param_1);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = sound_sndmain_cpp_FUN_00555b80(param_1->sample);
      if (iVar1 != 0) {
        sound_sndmain_cpp_FUN_0055a560("Killing looped sfx %s, which died??\n",param_1->sample);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(param_1);
  }
  return;
}
