// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
// Address: 005a8390
// MANUAL RECONSTRUCTION
// Address Range: [[005a8390, 005a8474]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot *this_ptr)

{
  double dVar1;
  double dVar2;
  CSfxSample *this_ptr_00;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbfd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::seek - no sample?!");
  }
  dVar1 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (&this_ptr->sample->sample_info,(this_ptr->options).trigger_time,
                     (this_ptr->options).trigger_id,0);
  (this_ptr->options).trigger_id = 0;
  (this_ptr->options).trigger_time = dVar1;
  dVar2 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_005a86f0
                    (this_ptr->sample,(this_ptr->options).trigger_time,
                     (this_ptr->options).trigger_id);
  this_ptr_00 = this_ptr->sample;
  (this_ptr->options).trigger_time = dVar2;
  if (this_ptr_00->streaming_slot_index < 0) {
    this_ptr->prev_hardware_playback_pos = (this_ptr->options).trigger_time;
    return;
  }
  sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0
            (this_ptr_00,(int)ROUND(ROUND((this_ptr->options).trigger_time)),0);
  this_ptr->prev_hardware_playback_pos = (double)this_ptr->sample->stream_write_position;
  return;
}
