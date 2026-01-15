// Name: sound_sndmain.cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90
// Address: 005add90
// Address Range: [[005add90, 005adda8]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90(CSfxSample * this_ptr)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90(CSfxSample *this_ptr)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
  return iVar1 * this_ptr->streaming_buffer_size;
}
