// Name: sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0
// Address: 005702c0
// Address Range: [[005702c0, 00570452]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  float10 fVar3;
  double dVar4;
  uint uVar5;
  
  if (this_ptr->streaming_slot_index < 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8de;
    core_main_c_FUN_005030e0();
  }
  dVar4 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0
                    (this_ptr,(double)playback_position,0);
  fVar3 = (float10)dVar4;
  round();
  this_ptr->stream_read_position = (int)ROUND(fVar3);
  if (this_ptr->stream_read_position < 0) {
    this_ptr->stream_read_position = 0;
  }
  if ((dest_buffer_offset < 0) || (this_ptr->streaming_buffer_size <= dest_buffer_offset)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8e9;
    core_main_c_FUN_005030e0("SfxSample::seek - invalid destPtr");
  }
  this_ptr->stream_write_position = dest_buffer_offset;
  if (this_ptr->mp3_data != (CMP3Decoder *)0x0) {
    iVar2 = sound_mp3_cpp_CMP3Decoder_seek_FUN_0052b2b0
                      (this_ptr->mp3_data,this_ptr->stream_read_position);
    if (iVar2 != 0) {
      return;
    }
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8f2;
    core_main_c_FUN_005030e0
              ("Error seeking %s to %d",this_ptr,this_ptr->stream_read_position);
    return;
  }
  bVar1 = unkaddr_0059f520_cpp_CInStreamFile_isOpen_FUN_005a0d70(&this_ptr->file_stream);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar5 = 0;
    iVar2 = sound_sndmain_cpp_FUN_00572400(this_ptr);
    unkaddr_0059f520_cpp_CInStreamFile_seek_FUN_005a0d00
              (&this_ptr->file_stream,iVar2 + this_ptr->file_offset,uVar5);
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x8fd;
  core_main_c_FUN_005030e0();
  return;
}
