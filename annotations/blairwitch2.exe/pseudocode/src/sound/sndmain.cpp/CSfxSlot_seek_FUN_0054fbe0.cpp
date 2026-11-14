// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0
// Address: 0054fbe0
// Address Range: [[0054fbe0, 0054fcc4]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

{
  CSfxSample *pCVar1;
  float10 fVar2;
  double dVar3;
  int dest_buffer_offset;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xd75;
    core_main_c_FUN_004e4500("SfxSlot::seek - no sample?!");
  }
  dVar3 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
                    (&this_ptr->sample->sample_info,(this_ptr->options).playback_position,
                     (this_ptr->options).playback_position_type,0);
  (this_ptr->options).playback_position_type = 0;
  (this_ptr->options).playback_position = dVar3;
  dVar3 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30
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
  sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(pCVar1,(int)ROUND(fVar2),dest_buffer_offset);
  this_ptr->prev_hardware_playback_pos = (double)this_ptr->sample->stream_write_position;
  return;
}
