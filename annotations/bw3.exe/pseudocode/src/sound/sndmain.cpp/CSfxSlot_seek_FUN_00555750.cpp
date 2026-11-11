// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_00555750
// Address: 00555750
// Address Range: [[00555750, 00555834]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_00555750(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_00555750(CSfxSlot *this_ptr)

{
  CSfxSample *pCVar1;
  float10 fVar2;
  double dVar3;
  int dest_buffer_offset;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xd77;
    core_main_c_FUN_004e4330("SfxSlot::seek - no sample?!");
  }
  dVar3 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930
                    (&this_ptr->sample->sample_info,(this_ptr->options).playback_position,
                     (this_ptr->options).playback_position_type,0);
  (this_ptr->options).playback_position_type = 0;
  (this_ptr->options).playback_position = dVar3;
  dVar3 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0
                    (this_ptr->sample,(this_ptr->options).playback_position,
                     (this_ptr->options).playback_position_type);
  pCVar1 = this_ptr->sample;
  (this_ptr->options).playback_position = dVar3;
  if (pCVar1->streaming_slot_index < 0) {
    *(uint *)&this_ptr->prev_hardware_playback_pos =
         *(uint *)&(this_ptr->options).playback_position;
    *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4) =
         *(uint *)((int)&(this_ptr->options).playback_position + 4);
    return;
  }
  fVar2 = (float10)(this_ptr->options).playback_position;
  dest_buffer_offset = 0;
  pCVar1 = (CSfxSample *)round();
  sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0(pCVar1,(int)ROUND(fVar2),dest_buffer_offset);
  this_ptr->prev_hardware_playback_pos = (double)this_ptr->sample->stream_write_position;
  return;
}
