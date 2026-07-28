// Name: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
// Address: 00523a60
// Address Range: [[00523a60, 00523b1e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample *this_ptr)

{
  CMP3Decoder *pCVar1;
  
  if (this_ptr->loop_endpoints[1] != 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x70a;
    core_main_c_FUN_004c8440("SfxSample::freeMemory - freeing sample in use!");
  }
  sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(this_ptr);
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(this_ptr);
  if ((CMP3Decoder *)this_ptr->loop_destinations[2] != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_004e7dd0
                       ((CMP3Decoder *)this_ptr->loop_destinations[2],0);
    FUN_00564494(pCVar1);
  }
  this_ptr->loop_destinations[2] = 0;
  if ((_FILE *)this_ptr->loop_destinations[4] != (_FILE *)0x0) {
    _fclose((_FILE *)this_ptr->loop_destinations[4]);
    this_ptr->loop_destinations[4] = 0;
  }
  this_ptr->loop_endpoints[0] = 0;
  this_ptr->loop_endpoints[4] = 0;
  this_ptr->loop_endpoints[3] = -1;
  (this_ptr->sample_info).name[0] = '\0';
  return;
}
