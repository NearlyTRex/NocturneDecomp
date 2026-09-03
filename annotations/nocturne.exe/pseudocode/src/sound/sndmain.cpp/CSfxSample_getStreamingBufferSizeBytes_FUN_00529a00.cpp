// Name: sound_sndmain.cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_00529a00
// Address: 00529a00
// Address Range: [[00529a00, 00529a18]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_00529a00(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_00529a00(CSfxSample *this_ptr)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
  return iVar1 * this_ptr->streaming_buffer_size;
}
