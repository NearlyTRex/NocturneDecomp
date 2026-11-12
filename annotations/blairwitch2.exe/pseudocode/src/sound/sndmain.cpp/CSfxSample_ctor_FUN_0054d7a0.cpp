// Name: sound_sndmain.cpp_CSfxSample_ctor_FUN_0054d7a0
// Address: 0054d7a0
// Address Range: [[0054d7a0, 0054d806]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_0054d7a0(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_0054d7a0(CSfxSample *this_ptr)

{
  CSfxSample *pCVar1;
  CInStreamFile *pCVar2;
  
  pCVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(this_ptr);
  pCVar2 = support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&pCVar1->file_stream);
  pCVar2[-3].buffer_start = 0;
  pCVar2[-1].vtable = (void *)0x0;
  pCVar2[-1].file_handle = (HANDLE)0x0;
  pCVar2[-2].buffer_length = 0;
  pCVar2[-1].file_size = 0;
  pCVar2[-1].file_offset = -1;
  pCVar2[-1].buffer_capacity = 0;
  pCVar2[1].file_handle = (HANDLE)0x0;
  pCVar2[-1].position = 0;
  pCVar2[-1].buffer_alloc = (void *)0x0;
  return (CSfxSample *)&pCVar2[-10].buffer_alloc;
}
