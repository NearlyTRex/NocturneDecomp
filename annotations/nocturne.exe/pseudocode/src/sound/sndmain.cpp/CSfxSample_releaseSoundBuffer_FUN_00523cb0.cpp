// Name: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0
// Address: 00523cb0
// Address Range: [[00523cb0, 00523d08]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(CSfxSample *sample)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(CSfxSample *sample)

{
  if (sample->locked_length != 0) {
    if ((sample->buffer_id != 0) && (_DAT_02dc8318 != (int *)0x0)) {
      (**(code **)(*_DAT_02dc8318 + 0x38))
                (_DAT_02dc8318,sample->buffer_id,sample->locked_offset,sample->locked_length,sample)
      ;
    }
    sample->locked_length = 0;
    sample->locked_offset = 0;
  }
  return;
}
