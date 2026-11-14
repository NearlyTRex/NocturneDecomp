// Name: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0
// Address: 0054f9c0
// Address Range: [[0054f9c0, 0054fbd2]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0(CSfxSlot *this_ptr,double hardware_playback_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0(CSfxSlot *this_ptr,double hardware_playback_pos)

{
  CSfxSample *this_ptr_00;
  double dVar1;
  int iVar2;
  double dVar3;
  ulonglong local_28;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xd34;
    core_main_c_FUN_004e4500();
  }
  if ((hardware_playback_pos < 0.0) ||
     ((double)this_ptr->sample->streaming_buffer_size < hardware_playback_pos)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xd3a;
    core_main_c_FUN_004e4500();
  }
  local_28 = hardware_playback_pos - this_ptr->prev_hardware_playback_pos;
  if (local_28 < 0.0) {
    local_28 = (double)this_ptr->sample->streaming_buffer_size + local_28;
  }
  if ((local_28 < 0.0) ||
     ((double)this_ptr->sample->streaming_buffer_size + _DAT_005e89d6 < local_28)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xd48;
    core_main_c_FUN_004e4500
              ("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)",hardware_playback_pos,
               *(uint *)&this_ptr->prev_hardware_playback_pos,
               *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4),(uint)local_28,
               local_28._4_4_,this_ptr->sample->streaming_buffer_size);
  }
  if (((this_ptr->options).playback_position != this_ptr->prev_hardware_playback_pos) ||
     (hardware_playback_pos < (this_ptr->options).playback_position)) {
    (this_ptr->options).playback_position = (this_ptr->options).playback_position + local_28;
  }
  else {
    (this_ptr->options).playback_position = hardware_playback_pos;
  }
  if ((this_ptr->options).playback_position < 0.0) {
    *(uint *)&(this_ptr->options).playback_position = 0;
    *(uint *)((int)&(this_ptr->options).playback_position + 4) = 0;
  }
  this_ptr_00 = this_ptr->sample;
  if ((-1 < (this_ptr_00->sample_info).sample_count) &&
     ((double)(this_ptr_00->sample_info).sample_count <= (this_ptr->options).playback_position)) {
    iVar2 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010(this_ptr_00);
    if (iVar2 == 0) {
      (this_ptr->options).playback_position = (double)(this_ptr->sample->sample_info).sample_count;
    }
    else {
      dVar1 = (double)(this_ptr->sample->sample_info).sample_count;
      dVar3 = floor((this_ptr->options).playback_position / dVar1);
      (this_ptr->options).playback_position = (this_ptr->options).playback_position - dVar3 * dVar1;
    }
  }
  this_ptr->prev_hardware_playback_pos = hardware_playback_pos;
  return;
}
