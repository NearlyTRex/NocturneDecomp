// Name: sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0
// Address: 005a60f0
// Address Range: [[005a60f0, 005a614d]]
// Convention: __cdecl
// Signature: CSfxSample * sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0(CSfxSample * this_ptr)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_ctor_FUN_005a60f0(CSfxSample *this_ptr)

{
  CSfxSample *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_005a8480(this_ptr);
  pCVar1->sample_data = (void *)0x0;
  pCVar1->ref_count = 0;
  pCVar1->buffer_id = 0;
  pCVar1->taken = 0;
  pCVar1->streaming_slot_index = -1;
  pCVar1->file_handle = (FILE *)0x0;
  pCVar1->mp3_data = (CMP3Decoder *)0x0;
  pCVar1->locked_length = 0;
  return pCVar1;
}
