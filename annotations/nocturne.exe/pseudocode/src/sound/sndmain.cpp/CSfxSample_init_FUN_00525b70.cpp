// Name: sound_sndmain.cpp_CSfxSample_init_FUN_00525b70
// Address: 00525b70
// Address Range: [[00525b70, 00525bba]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(CSfxSample *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  memset(this_ptr,0,0x128);
  fVar1 = (float)_DAT_005bea88;
  fVar2 = _DAT_02dbd370 * fVar1;
  fVar3 = 10000.0f * fVar1;
  (this_ptr->sample_info).reference_distance = 20.0f * fVar1;
  (this_ptr->sample_info).reference_volume_distance = fVar2;
  (this_ptr->sample_info).max_distance = fVar3;
  return this_ptr;
}
