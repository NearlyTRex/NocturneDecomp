// Name: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005256f0
// Address: 005256f0
// Address Range: [[005256f0, 005257d9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005256f0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005256f0(CSfxSlot *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  if (this_ptr->hardware_buffer_handle == 0) {
    return;
  }
  if (_DAT_02dc8318 == (int *)0x0) {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr);
    return;
  }
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2915;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::pollHwHandle - no sample?");
  }
  iVar1 = (**(code **)(*_DAT_02dc8318 + 0x50))(_DAT_02dc8318,this_ptr);
  if (iVar1 == 0) {
    if (this_ptr->sample->loop_marker_count != 0) {
      sound_sndmain_cpp_logSoundError_FUN_00529980
                ("Killing looped sfx %s, which died??\n",this_ptr->sample);
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr);
    return;
  }
  uVar2 = 0;
  if (((this_ptr->options).flags & 1) == 0) {
    if ((this_ptr->options).position_format != 0) {
      uVar2 = 2;
    }
    if ((this_ptr->options).velocity_format != 0) {
      uVar2 = uVar2 | 4;
      if (uVar2 == 0) {
        return;
      }
      goto LAB_005257a3;
    }
  }
  if (uVar2 == 0) {
    return;
  }
LAB_005257a3:
  iVar1 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,this_ptr,uVar2);
  if (iVar1 != 0) {
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_00529980
            ("Error setting hw sfx %d options (sample %s), killing.\n",this_ptr->hardware_buffer_handle,this_ptr->sample);
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr);
  return;
}
