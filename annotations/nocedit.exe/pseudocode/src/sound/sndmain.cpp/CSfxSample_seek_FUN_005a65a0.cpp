// Name: sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
// Address: 005a65a0
// Address Range: [[005a65a0, 005a6723]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0
          (CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

{
  int iVar1;
  int iVar2;
  double value;
  double dVar3;
  uint in_stack_ffffffe8;
  uint in_stack_ffffffec;
  
  if (this_ptr->streaming_slot_index < 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x797;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - '%s' isn't streamed!",this_ptr);
  }
  value = sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
                    (SUB84 /* extract 2-byte value */((double)dest_buffer_offset,0),
                     (double)((ulonglong)(double)dest_buffer_offset >> 0x20),in_stack_ffffffe8,
                     in_stack_ffffffec);
  dVar3 = crt_math_c_round_FUN_005fe6b0(value);
  iVar2 = SUB84 /* extract 2-byte value */(value,0);
  this_ptr->stream_read_position = (int)ROUND(dVar3);
  if (this_ptr->stream_read_position < 0) {
    this_ptr->stream_read_position = 0;
  }
  if ((dest_buffer_offset < 0) || (this_ptr->streaming_buffer_size <= dest_buffer_offset)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - invalid destPtr");
  }
  this_ptr->stream_write_position = dest_buffer_offset;
  if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
    if (this_ptr->file_handle == (FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7b6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - no MP3 and no wavFile for sample '%s'",this_ptr);
      return;
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
    crt_stdio_c_fseek_FUN_005ffacc
              (this_ptr->file_handle,iVar1 * this_ptr->stream_read_position + this_ptr->file_offset,
               iVar2);
  }
  else {
    iVar2 = sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0
                      (this_ptr->mp3_data,this_ptr->stream_read_position);
    if (iVar2 == 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7ab;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Error seeking %s to %d",this_ptr,this_ptr->stream_read_position);
      return;
    }
  }
  return;
}
