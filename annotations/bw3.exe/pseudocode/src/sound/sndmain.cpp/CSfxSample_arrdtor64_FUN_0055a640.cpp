// Name: sound_sndmain.cpp_CSfxSample_arrdtor64_FUN_0055a640
// Address: 0055a640
// Address Range: [[0055a640, 0055a654]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_0055a640(CSfxSample *this_ptr,uint flags)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_0055a640(CSfxSample *this_ptr,uint flags)

{
  CSfxSample *pCVar1;
  
  pCVar1 = (CSfxSample *)__arrfini(this_ptr,0x40,&g_SfxSampleTypeInfo);
  return pCVar1;
}
