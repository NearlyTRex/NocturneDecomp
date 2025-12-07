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
  CSfxSample *pCVar1;
  double dVar2;
  int iVar3;
  uint extraout_EDX;
  float10 in_ST0;
  uint uStack_24;
  uint local_20;
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
  dVar2 = hardware_playback_pos - this_ptr->prev_hardware_playback_pos;
  if (dVar2 < 0.0) {
    dVar2 = (double)this_ptr->sample->streaming_buffer_size + dVar2;
  }
  local_20 = (uint)((ulonglong)dVar2 >> 0x20);
  uStack_24 = SUB84 /* extract 2-byte value */(dVar2,0);
  if ((dVar2 < 0.0) || ((double)this_ptr->sample->streaming_buffer_size + 0.001 < dVar2))
  {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbd0;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)",hardware_playback_pos._0_4_,
               hardware_playback_pos._4_4_,*(uint *)&this_ptr->prev_hardware_playback_pos,
               *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4),uStack_24,local_20,
               this_ptr->sample->streaming_buffer_size,this_ptr->sample);
  }
  if (((this_ptr->options).trigger_time != this_ptr->prev_hardware_playback_pos) ||
     (hardware_playback_pos < (this_ptr->options).trigger_time)) {
    (this_ptr->options).trigger_time = (this_ptr->options).trigger_time + dVar2;
  }
  else {
    (this_ptr->options).trigger_time = hardware_playback_pos;
  }
  if ((this_ptr->options).trigger_time < 0.0) {
    *(uint *)&(this_ptr->options).trigger_time = 0;
    *(uint *)((int)&(this_ptr->options).trigger_time + 4) = 0;
  }
  pCVar1 = this_ptr->sample;
  if ((-1 < (pCVar1->sample_info).sample_count) &&
     ((double)(pCVar1->sample_info).sample_count <= (this_ptr->options).trigger_time)) {
    iVar3 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(pCVar1);
    if (iVar3 == 0) {
      (this_ptr->options).trigger_time = (double)(this_ptr->sample->sample_info).sample_count;
    }
    else {
      pCVar1 = this_ptr->sample;
      iVar3 = (pCVar1->sample_info).sample_count;
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      (this_ptr->options).trigger_time =
           (this_ptr->options).trigger_time -
           (double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar1) *
           (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */((double)iVar3,0),uStack_14);
    }
  }
  this_ptr->prev_hardware_playback_pos = hardware_playback_pos;
  return;
}
