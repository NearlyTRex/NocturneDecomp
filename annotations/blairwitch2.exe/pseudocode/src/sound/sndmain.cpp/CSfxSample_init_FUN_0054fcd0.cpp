// Name: sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0
// Address: 0054fcd0
// Address Range: [[0054fcd0, 0054fd1a]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(CSfxSample *this_ptr)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(CSfxSample *this_ptr)

{
  float fVar1;
  float fVar2;
  
  memset(this_ptr,0,0x150);
  fVar1 = g_SoundReferenceVolumeDistance * g_FLOAT_0061bcb8;
  fVar2 = 10000.0f * g_FLOAT_0061bcb8;
  (this_ptr->sample_info).reference_distance = 20.0f * g_FLOAT_0061bcb8;
  (this_ptr->sample_info).reference_volume_distance = fVar1;
  (this_ptr->sample_info).max_distance = fVar2;
  return this_ptr;
}
