// Name: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
// Address: 005a62c0
// Address Range: [[005a62c0, 005a63a4]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample *this_ptr)

{
  CMP3Decoder *ptr;
  
  if (this_ptr->ref_count != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x710;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::freeMemory - freeing sample in use!");
  }
  sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_005a6400(this_ptr);
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(this_ptr);
  g_CurrentDebugFilename = "..\\sound\\sndmain.cpp";
  g_CurrentDebugLine = 0x71d;
  if (this_ptr->mp3_data != (CMP3Decoder *)0x0) {
    ptr = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(this_ptr->mp3_data);
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  this_ptr->mp3_data = (CMP3Decoder *)0x0;
  if (this_ptr->file_handle != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              (this_ptr->file_handle,"..\\sound\\sndmain.cpp",0x723);
    this_ptr->file_handle = (_FILE *)0x0;
  }
  this_ptr->taken = 0;
  this_ptr->streaming_buffer_size = 0;
  this_ptr->streaming_slot_index = -1;
  (this_ptr->sample_info).name[0] = '\0';
  return;
}
