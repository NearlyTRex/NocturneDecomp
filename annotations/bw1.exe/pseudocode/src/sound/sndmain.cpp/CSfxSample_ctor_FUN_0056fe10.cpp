// Name: sound_sndmain.cpp_CSfxSample_ctor_FUN_0056fe10
// Address: 0056fe10
// Address Range: [[0056fe10, 0056fe76]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_0056fe10(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_0056fe10(CSfxSample *this_ptr)

{
  CSfxSample *pCVar1;
  CInStreamFile *pCVar2;
  
  pCVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_00572340(this_ptr);
  pCVar2 = support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&pCVar1->file_stream);
  pCVar2[-3].binary_mode = 0;
  pCVar2[-1].file_handle = (HANDLE)0x0;
  pCVar2[-1].file_size = 0;
  pCVar2[-1].vtable = (void *)0x0;
  pCVar2[-1].file_offset = 0;
  pCVar2[-1].position = -1;
  pCVar2[-1].buffer_length = 0;
  pCVar2[1].file_handle = (HANDLE)0x0;
  pCVar2[-1].buffer_alloc = (void *)0x0;
  pCVar2[-1].buffer = (char *)0x0;
  return (CSfxSample *)&pCVar2[-9].position;
}
