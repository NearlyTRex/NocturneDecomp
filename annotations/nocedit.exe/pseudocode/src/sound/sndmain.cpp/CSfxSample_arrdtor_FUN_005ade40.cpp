// Name: sound_sndmain.cpp_CSfxSample_arrdtor_FUN_005ade40
// Address: 005ade40
// Address Range: [[005ade40, 005ade54]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor_FUN_005ade40(CSfxSample *this_ptr,uint flags)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor_FUN_005ade40(CSfxSample *this_ptr,uint flags)

{
  CSfxSample *pCVar1;
  
  pCVar1 = (CSfxSample *)__arrfini(this_ptr,0x40,&g_SfxSampleTypeInfo);
  return pCVar1;
}
