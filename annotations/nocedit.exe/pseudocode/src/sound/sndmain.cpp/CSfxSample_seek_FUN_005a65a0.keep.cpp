// Name: sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
// Address: 005a65a0
// MANUAL RECONSTRUCTION
// Address Range: [[005a65a0, 005a6723]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

{
  int iVar1;
  int iVar2;
  double dVar2;
  CMP3Decoder *this_ptr_00;
  
  if (this_ptr->streaming_slot_index < 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x797;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - '%s' isn't streamed!",(this_ptr->sample_info).name);
  }
  dVar2 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_005a86f0
                    (this_ptr,(double)playback_position,0);
  this_ptr->stream_read_position = (int)ROUND(ROUND(dVar2));
  if (this_ptr->stream_read_position < 0) {
    this_ptr->stream_read_position = 0;
  }
  if ((dest_buffer_offset < 0) || (this_ptr->streaming_buffer_size <= dest_buffer_offset)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - invalid destPtr");
  }
  this_ptr->stream_write_position = dest_buffer_offset;
  this_ptr_00 = this_ptr->mp3_data;
  if (this_ptr_00 == (CMP3Decoder *)0x0) {
    if (this_ptr->file_handle == (_FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7b6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - no MP3 and no wavFile for sample '%s'",(this_ptr->sample_info).name);
      return;
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
    _fseek(this_ptr->file_handle,iVar1 * this_ptr->stream_read_position + this_ptr->file_offset,
               0);
  }
  else {
    iVar2 = sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(this_ptr_00,this_ptr->stream_read_position);
    if (iVar2 == 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7ab;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error seeking %s to %d",(this_ptr->sample_info).name,this_ptr->stream_read_position);
      return;
    }
  }
  return;
}
