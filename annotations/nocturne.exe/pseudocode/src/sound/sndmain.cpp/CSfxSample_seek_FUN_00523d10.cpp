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
  
  if (this_ptr->streaming_slot_index < 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 1937;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSample::seek - '%s' isn't streamed!",this_ptr);
  }
  dVar2 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
                    (this_ptr,(double)playback_position,0);
  dVar2 = round(dVar2);
  this_ptr->stream_read_position = (int)ROUND(dVar2);
  if (this_ptr->stream_read_position < 0) {
    this_ptr->stream_read_position = 0;
  }
  if ((dest_buffer_offset < 0) || (this_ptr->streaming_buffer_size <= dest_buffer_offset)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 1948;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSample::seek - invalid destPtr");
  }
  this_ptr->stream_write_position = dest_buffer_offset;
  this_ptr_00 = this_ptr->mp3_data;
  if (this_ptr_00 == (CMP3Decoder *)0x0) {
    if (this_ptr->file_handle == (_FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 1968;
      core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSample::seek - no MP3 and no wavFile for sample '%s'");
      return;
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
    _fseek(this_ptr->file_handle,iVar1 * this_ptr->stream_read_position + this_ptr->file_offset,
               (int)this_ptr_00);
  }
  else {
    iVar1 = sound_mp3_cpp_CMP3Decoder_seek_FUN_004e8410(this_ptr_00,this_ptr->stream_read_position);
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 1957;
      core_main_c_displayErrorAndQuit_FUN_004c8440
                ("Error seeking %s to %d",this_ptr,this_ptr->stream_read_position);
      return;
    }
  }
  return;
}
