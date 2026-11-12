// Name: sound_sndmain.cpp_CSfxSample_dtor_FUN_0054d810
// Address: 0054d810
// Address Range: [[0054d810, 0054d835]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_CSfxSample_dtor_FUN_0054d810(CSfxSample *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_CSfxSample_dtor_FUN_0054d810(CSfxSample *this_ptr,uint flags)

{
  CInStreamFile *pCVar1;
  
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
  pCVar1 = support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&this_ptr->file_stream,0);
  return (CSfxSample *)&pCVar1[-10].buffer_alloc;
}
