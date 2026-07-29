// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80
// Address: 00525a80
// Address Range: [[00525a80, 00525b64]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(CSfxSlot *this_ptr)

{
  CSfxSample *this_ptr_00;
  double dVar1;
  int dest_buffer_offset;
  double local_1c;
  
  if (this_ptr->playback_state == 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0xbf0;
    core_main_c_FUN_004c8440("SfxSlot::seek - no sample?!");
  }
  dVar1 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                    ((CSampleInfo *)this_ptr->playback_state,(this_ptr->options).trigger_time,
                     (this_ptr->options).trigger_id,0);
  (this_ptr->options).trigger_id = 0;
  (this_ptr->options).trigger_time = dVar1;
  local_1c = (double)sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
                               (this_ptr->playback_state,
                                *(uint *)&(this_ptr->options).trigger_time,
                                *(uint *)((int)&(this_ptr->options).trigger_time + 4),
                                (this_ptr->options).trigger_id);
  this_ptr_00 = (CSfxSample *)this_ptr->playback_state;
  (this_ptr->options).trigger_time = local_1c;
  if (this_ptr_00->loop_endpoints[3] < 0) {
    this_ptr->is_active = *(int *)&(this_ptr->options).trigger_time;
    *(uint *)&this_ptr->prev_hardware_playback_pos =
         *(uint *)((int)&(this_ptr->options).trigger_time + 4);
    return;
  }
  dest_buffer_offset = 0x525b3c;
  dVar1 = round((this_ptr->options).trigger_time);
  sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(this_ptr_00,(int)ROUND(dVar1),dest_buffer_offset);
  *(double *)&this_ptr->is_active = (double)*(int *)(this_ptr->playback_state + 0x140);
  return;
}
