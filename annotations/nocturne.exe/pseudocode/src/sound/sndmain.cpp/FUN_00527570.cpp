// Name: sound_sndmain.cpp_FUN_00527570
// Address: 00527570
// Address Range: [[00527570, 005275dc]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00527570(undefined1 *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00527570(byte *param_1)

{
  int iVar1;
  CSfxSlot *this_ptr;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  this_ptr = (CSfxSlot *)0x2dbd374;
  iVar2 = 0;
  do {
    if ((this_ptr->playback_state != 0) && (this_ptr->hardware_buffer_handle != 0)) {
      sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(this_ptr);
      iVar1 = _sprintf(param_1,"sfx slot %d: %s, pos %7.1f/%7.1f\n",iVar2,this_ptr->playback_state,
                         *(uint *)&(this_ptr->options).trigger_time,
                         *(uint *)((int)&(this_ptr->options).trigger_time + 4),
                         (double)*(int *)(this_ptr->playback_state + 0x110));
      param_1 = param_1 + iVar1;
    }
    iVar2 = iVar2 + 1;
    this_ptr = (CSfxSlot *)((int)&this_ptr->prev_hardware_playback_pos + 4);
  } while (iVar2 < 0x40);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  *param_1 = 0;
  return;
}
