// Name: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870
// Address: 00525870
// Address Range: [[00525870, 00525a76]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(CSfxSlot *this_ptr,double hardware_playback_pos)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(CSfxSlot *this_ptr,double hardware_playback_pos)

{
  CSfxSample *pCVar1;
  double dVar2;
  double dVar3;
  double local_28;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2991;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::updatePlaybackPos - no samplePtr");
  }
  if ((hardware_playback_pos < 0.0) ||
     ((double)this_ptr->sample->streaming_buffer_size < hardware_playback_pos)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2997;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::updatePlaybackPos - invalid buffer position");
  }
  local_28 = hardware_playback_pos - this_ptr->prev_hardware_playback_pos;
  if (local_28 < 0.0) {
    local_28 = (double)this_ptr->sample->streaming_buffer_size + local_28;
  }
  if ((local_28 < 0.0) ||
     ((double)this_ptr->sample->streaming_buffer_size + 0.001 < local_28)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3011;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)");
  }
  if (((this_ptr->options).trigger_time != this_ptr->prev_hardware_playback_pos) ||
     (hardware_playback_pos < (this_ptr->options).trigger_time)) {
    (this_ptr->options).trigger_time = (this_ptr->options).trigger_time + local_28;
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
     (dVar2 = (double)(pCVar1->sample_info).sample_count, dVar2 <= (this_ptr->options).trigger_time)
     ) {
    if (pCVar1->loop_marker_count == 0) {
      (this_ptr->options).trigger_time = dVar2;
    }
    else {
      dVar3 = floor((this_ptr->options).trigger_time / dVar2);
      (this_ptr->options).trigger_time = (this_ptr->options).trigger_time - dVar3 * dVar2;
    }
  }
  this_ptr->prev_hardware_playback_pos = hardware_playback_pos;
  return;
}
