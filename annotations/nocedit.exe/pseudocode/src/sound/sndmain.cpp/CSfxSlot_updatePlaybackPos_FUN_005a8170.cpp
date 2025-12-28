// Name: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
// Address: 005a8170
// Address Range: [[005a8170, 005a8382]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(CSfxSlot * this_ptr, double hardware_playback_pos)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
          (CSfxSlot *this_ptr,double hardware_playback_pos)

{
  CSfxSample *this_ptr_00;
  double dVar1;
  int iVar2;
  CSfxSlot *extraout_EBX;
  double dVar3;
  uint uStack_24;
  uint local_18;
  uint uStack_14;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbbc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::updatePlaybackPos - no samplePtr");
  }
  if ((hardware_playback_pos < 0.0) ||
     ((double)this_ptr->sample->streaming_buffer_size < hardware_playback_pos)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbc2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::updatePlaybackPos - invalid buffer position");
  }
  dVar3 = hardware_playback_pos - this_ptr->prev_hardware_playback_pos;
  if (dVar3 < 0.0) {
    dVar3 = (double)this_ptr->sample->streaming_buffer_size + dVar3;
  }
  uStack_24 = (uint)((ulonglong)dVar3 >> 0x20);
  dVar1 = (double)((ulonglong)dVar3 & 0xffffffff);
  if ((dVar3 < 0.0) || ((double)this_ptr->sample->streaming_buffer_size + 0.001 < dVar3))
  {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbd0;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)",hardware_playback_pos._0_4_,
               hardware_playback_pos._4_4_,*(uint *)&this_ptr->prev_hardware_playback_pos,
               *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4),SUB84 /* extract 2-byte value */(dVar3,0),
               uStack_24,this_ptr->sample->streaming_buffer_size,this_ptr->sample);
    dVar1 = dVar3;
  }
  if (((this_ptr->options).trigger_time != this_ptr->prev_hardware_playback_pos) ||
     (hardware_playback_pos < (this_ptr->options).trigger_time)) {
    (this_ptr->options).trigger_time =
         (this_ptr->options).trigger_time + (double)CONCAT44 /* combine 2-byte values */(uStack_24,SUB84 /* extract 2-byte value */(dVar1,0));
  }
  else {
    (this_ptr->options).trigger_time = hardware_playback_pos;
  }
  if ((this_ptr->options).trigger_time < 0.0) {
    *(uint *)&(this_ptr->options).trigger_time = 0;
    *(uint *)((int)&(this_ptr->options).trigger_time + 4) = 0;
  }
  this_ptr_00 = this_ptr->sample;
  if ((-1 < (this_ptr_00->sample_info).sample_count) &&
     ((double)(this_ptr_00->sample_info).sample_count <= (this_ptr->options).trigger_time)) {
    iVar2 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr_00);
    if (iVar2 == 0) {
      (this_ptr->options).trigger_time = (double)(this_ptr->sample->sample_info).sample_count;
    }
    else {
      dVar3 = (double)(this_ptr->sample->sample_info).sample_count;
      uStack_14 = SUB84 /* extract 2-byte value */(dVar3,0);
      dVar3 = crt_math_c_floor_FUN_005feb90((this_ptr->options).trigger_time / dVar3);
      (extraout_EBX->options).trigger_time =
           (extraout_EBX->options).trigger_time - dVar3 * (double)CONCAT44 /* combine 2-byte values */(uStack_14,local_18);
      this_ptr = extraout_EBX;
    }
  }
  this_ptr->prev_hardware_playback_pos = hardware_playback_pos;
  return;
}
