// Name: sound_sndmain.cpp_CSfxSample_dtor_FUN_0056fe80
// Address: 0056fe80
// Address Range: [[0056fe80, 0056fea5]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_CSfxSample_dtor_FUN_0056fe80(CSfxSample *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_CSfxSample_dtor_FUN_0056fe80(CSfxSample *this_ptr,uint flags)

{
  CInStreamFile *pCVar1;
  
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(this_ptr);
  pCVar1 = unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50
                     ((CInStreamFile *)&this_ptr->field_0x17c,0);
  return (CSfxSample *)&pCVar1[-9].field_0x10;
}
