// Name: sound_sndmain.cpp_CSfxSample_dtor_FUN_00553380
// Address: 00553380
// Address Range: [[00553380, 005533a5]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_dtor_FUN_00553380(CSfxSample *this_ptr,uint flags)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_dtor_FUN_00553380(CSfxSample *this_ptr,uint flags)

{
  CInStreamFile *pCVar1;
  
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
  pCVar1 = support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&this_ptr->file_stream,0);
  return (CSfxSample *)&pCVar1[-9].position;
}
