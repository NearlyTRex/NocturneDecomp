// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
// Address: 005a8390
// Address Range: [[005a8390, 005a8474]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot *this_ptr)

{
  CSfxSample *this_ptr_00;
  double dVar1;
  int dest_buffer_offset;
  uint in_stack_ffffffe4;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbfd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::seek - no sample?!");
  }
  dVar1 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (*(CSampleInfo **)&(this_ptr->options).trigger_time,
                     *(double *)((int)&(this_ptr->options).trigger_time + 4),0,in_stack_ffffffe4);
  (this_ptr->options).trigger_id = 0;
  (this_ptr->options).trigger_time = dVar1;
  dVar1 = sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
                    (*(CSampleInfo **)&(this_ptr->options).trigger_time,
                     (double)CONCAT44((this_ptr->options).trigger_id,
                                      *(uint *)((int)&(this_ptr->options).trigger_time + 4)),
                     SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  this_ptr_00 = this_ptr->sample;
  (this_ptr->options).trigger_time = dVar1;
  if (this_ptr_00->streaming_slot_index < 0) {
    *(uint *)&this_ptr->prev_hardware_playback_pos =
         *(uint *)&(this_ptr->options).trigger_time;
    *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4) =
         *(uint *)((int)&(this_ptr->options).trigger_time + 4);
    return;
  }
  dest_buffer_offset = 0x5a844c;
  dVar1 = crt_math_c_round_FUN_005fe6b0((this_ptr->options).trigger_time);
  sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(this_ptr_00,(int)ROUND(dVar1),dest_buffer_offset);
  this_ptr->prev_hardware_playback_pos = (double)this_ptr->sample->stream_write_position;
  return;
}
