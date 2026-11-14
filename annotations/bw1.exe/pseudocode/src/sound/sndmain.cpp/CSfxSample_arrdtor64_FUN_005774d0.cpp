// Name: sound_sndmain.cpp_CSfxSample_arrdtor64_FUN_005774d0
// Address: 005774d0
// Address Range: [[005774d0, 005774e4]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_005774d0(CSfxSample *this_ptr,uint flags)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_005774d0(CSfxSample *this_ptr,uint flags)

{
  CSfxSample *pCVar1;
  
  pCVar1 = (CSfxSample *)__arrfini(this_ptr,0x40,&g_SfxSampleTypeInfo);
  return pCVar1;
}
