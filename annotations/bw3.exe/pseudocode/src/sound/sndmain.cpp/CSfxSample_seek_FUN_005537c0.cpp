// Name: sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0
// Address: 005537c0
// Address Range: [[005537c0, 00553952]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  double dVar3;
  int origin;
  
  if (this_ptr->streaming_slot_index < 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2272;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSample::seek - '%s' isn't streamed!");
  }
  dVar3 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0
                    (this_ptr,(double)playback_position,0);
  dVar3 = round(dVar3);
  this_ptr->stream_read_position = (int)ROUND(dVar3);
  if (this_ptr->stream_read_position < 0) {
    this_ptr->stream_read_position = 0;
  }
  if ((dest_buffer_offset < 0) || (this_ptr->streaming_buffer_size <= dest_buffer_offset)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2283;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSample::seek - invalid destPtr");
  }
  this_ptr->stream_write_position = dest_buffer_offset;
  if (this_ptr->mp3_data != (CMP3Decoder *)0x0) {
    iVar2 = sound_mp3_cpp_CMP3Decoder_seek_FUN_00502bc0
                      (this_ptr->mp3_data,this_ptr->stream_read_position);
    if (iVar2 != 0) {
      return;
    }
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2292;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Error seeking %s to %d");
    return;
  }
  bVar1 = support_trstream_cpp_CInStreamFile_isOpen_FUN_00573d60(&this_ptr->file_stream);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    origin = 0;
    iVar2 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900
                      (this_ptr,this_ptr->stream_read_position);
    support_trstream_cpp_CInStreamFile_seek_FUN_00573cf0
              (&this_ptr->file_stream,iVar2 + this_ptr->file_offset,origin);
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 2303;
  core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSample::seek - no MP3 and no wavFile for sample '%s'");
  return;
}
