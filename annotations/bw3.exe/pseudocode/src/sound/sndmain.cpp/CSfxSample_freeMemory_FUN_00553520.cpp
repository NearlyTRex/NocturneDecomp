// Name: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
// Address: 00553520
// Address Range: [[00553520, 005535dd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample *this_ptr)

{
  CMP3Decoder *pCVar1;
  
  if (this_ptr->ref_count != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x85a;
    core_main_c_FUN_004e4330("SfxSample::freeMemory - freeing sample in use!");
  }
  sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00553630(this_ptr);
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005535e0(this_ptr);
  if (this_ptr->mp3_data != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00502790(this_ptr->mp3_data,0);
    FUN_005a30c4(pCVar1);
  }
  this_ptr->mp3_data = (CMP3Decoder *)0x0;
  unkafter_turret_cpp_CInStreamFile_close_FUN_00573db0(&this_ptr->file_stream);
  (this_ptr->sample_info).name[0] = '\0';
  this_ptr->taken = 0;
  this_ptr->is_user_sample = 0;
  this_ptr->streaming_buffer_size = 0;
  this_ptr->data_size_bytes = 0;
  this_ptr->streaming_slot_index = -1;
  return;
}
