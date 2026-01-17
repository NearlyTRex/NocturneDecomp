// Name: sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
// Address: 005a8480
// Address Range: [[005a8480, 005a84ca]]
// Convention: __cdecl
// Signature: CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_005a8480(CSfxSample *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x150);
  fVar1 = (float)1;
  fVar2 = g_SoundReferenceVolumeDistance * fVar1;
  fVar3 = 10000.0f * fVar1;
  (this_ptr->sample_info).reference_distance = 20.0f * fVar1;
  (this_ptr->sample_info).reference_volume_distance = fVar2;
  (this_ptr->sample_info).max_distance = fVar3;
  return this_ptr;
}
