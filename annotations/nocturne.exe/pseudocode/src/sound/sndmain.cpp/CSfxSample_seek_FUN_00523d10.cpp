// Name: sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
// Address: 00523d10
// Address Range: [[00523d10, 00523e93]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

{
  int iVar1;
  double dVar2;
  CMP3Decoder *this_ptr_00;
  
  if (this_ptr->loop_endpoints[3] < 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x791;
    core_main_c_FUN_004c8440();
  }
  dVar2 = (double)sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
                            (this_ptr,(double)playback_position,0);
  dVar2 = round(dVar2);
  this_ptr->loop_destinations[0] = (int)ROUND(dVar2);
  if (this_ptr->loop_destinations[0] < 0) {
    this_ptr->loop_destinations[0] = 0;
  }
  if ((dest_buffer_offset < 0) || (this_ptr->loop_endpoints[4] <= dest_buffer_offset)) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x79c;
    core_main_c_FUN_004c8440();
  }
  this_ptr->loop_destinations[1] = dest_buffer_offset;
  this_ptr_00 = (CMP3Decoder *)this_ptr->loop_destinations[2];
  if (this_ptr_00 == (CMP3Decoder *)0x0) {
    if (this_ptr->loop_destinations[4] == 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x7b0;
      core_main_c_FUN_004c8440("SfxSample::seek - no MP3 and no wavFile for sample '%s'",this_ptr);
      return;
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
    _fseek((_FILE *)this_ptr->loop_destinations[4],
               iVar1 * this_ptr->loop_destinations[0] + this_ptr->loop_destinations[3],
               (int)this_ptr_00);
  }
  else {
    iVar1 = sound_mp3_cpp_CMP3Decoder_seek_FUN_004e8410(this_ptr_00,this_ptr->loop_destinations[0]);
    if (iVar1 == 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x7a5;
      core_main_c_FUN_004c8440
                ("Error seeking %s to %d",this_ptr,this_ptr->loop_destinations[0]);
      return;
    }
  }
  return;
}
