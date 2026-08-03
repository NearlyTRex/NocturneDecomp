// Name: sound_sndmain.cpp_CSfxSample_ctor_FUN_00523890
// Address: 00523890
// Address Range: [[00523890, 005238ed]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_ctor_FUN_00523890(CSfxSample *this_ptr)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_ctor_FUN_00523890(CSfxSample *this_ptr)

{
  CSfxSample *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(this_ptr);
  pCVar1->sample_data = (short *)0x0;
  pCVar1->ref_count = 0;
  pCVar1->buffer_id = 0;
  pCVar1->taken = 0;
  pCVar1->streaming_slot_index = -1;
  pCVar1->file_handle = (_FILE *)0x0;
  pCVar1->mp3_data = (CMP3Decoder *)0x0;
  pCVar1->locked_length = 0;
  return pCVar1;
}
