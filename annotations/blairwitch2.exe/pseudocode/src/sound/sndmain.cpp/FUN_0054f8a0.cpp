// Name: sound_sndmain.cpp_FUN_0054f8a0
// Address: 0054f8a0
// Address Range: [[0054f8a0, 0054f923]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_0054f8a0(CSfxSlot *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_0054f8a0(CSfxSlot *param_1)

{
  int iVar1;
  
  if (*(int *)&param_1->field_0x60 != 0) {
    if (_DAT_02648e80 != (int *)0x0) {
      if (*(int *)&param_1->field_0x68 == 0) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcf9;
        core_main_c_FUN_004e4500("SfxSlot::pollHwHandle - no sample?");
      }
      iVar1 = (**(code **)(*_DAT_02648e80 + 0x54))(_DAT_02648e80,param_1);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010
                        (*(CSfxSample **)&param_1->field_0x68);
      if (iVar1 != 0) {
        sound_sndmain_cpp_FUN_005549c0
                  ("Killing looped sfx %s, which died??\n",*(uint *)&param_1->field_0x68);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(param_1);
  }
  return;
}
