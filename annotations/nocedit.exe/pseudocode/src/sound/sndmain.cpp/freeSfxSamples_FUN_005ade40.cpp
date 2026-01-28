// Name: sound_sndmain.cpp_freeSfxSamples_FUN_005ade40
// Address: 005ade40
// Address Range: [[005ade40, 005ade54]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeSfxSamples_FUN_005ade40(CSfxSample **array)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeSfxSamples_FUN_005ade40(CSfxSample **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x40,&g_SfxSampleTypeInfo);
  return;
}
