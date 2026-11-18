// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0
// Address: 0054fbe0
// Address Range: [[0054fbe0, 0054fcc4]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

{
  CSfxSample *this_ptr_00;
  double dVar1;
  int dest_buffer_offset;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0xd75;
    core_main_c_displayErrorAndQuit_FUN_004e4500("SfxSlot::seek - no sample?!");
  }
  dVar1 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
                    (&this_ptr->sample->sample_info,(this_ptr->options).playback_position,
                     (this_ptr->options).playback_position_type,0);
  (this_ptr->options).playback_position_type = 0;
  (this_ptr->options).playback_position = dVar1;
  dVar1 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30
                    (this_ptr->sample,(this_ptr->options).playback_position,
                     (this_ptr->options).playback_position_type);
  this_ptr_00 = this_ptr->sample;
  (this_ptr->options).playback_position = dVar1;
  if (this_ptr_00->streaming_slot_index < 0) {
    *(uint *)&this_ptr->prev_hardware_playback_pos =
         *(uint *)&(this_ptr->options).playback_position;
    *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4) =
         *(uint *)((int)&(this_ptr->options).playback_position + 4);
    return;
  }
  dest_buffer_offset = 0x54fc9c;
  dVar1 = round((this_ptr->options).playback_position);
  sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(this_ptr_00,(int)ROUND(dVar1),dest_buffer_offset);
  this_ptr->prev_hardware_playback_pos = (double)this_ptr->sample->stream_write_position;
  return;
}
