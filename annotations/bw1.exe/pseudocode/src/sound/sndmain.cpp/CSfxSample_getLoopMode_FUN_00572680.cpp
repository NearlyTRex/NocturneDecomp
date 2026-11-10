// Name: sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680
// Address: 00572680
// Address Range: [[00572680, 005726b9]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(CSfxSample *this_ptr)

{
  if (((this_ptr->loop_marker_count < 2) &&
      ((this_ptr->sample_info).sample_count == this_ptr->loop_endpoints[0])) &&
     (this_ptr->loop_destinations[0] < 1)) {
    if (this_ptr->loop_destinations[0] == 0) {
      return 1;
    }
    return 0;
  }
  return 2;
}
