// Name: sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
// Address: 005a87d0
// Address Range: [[005a87d0, 005a8809]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample *this_ptr)

{
  if (((this_ptr->loop_marker_count < 2) &&
      ((this_ptr->sample_info).sample_count == this_ptr->loop_length)) &&
     (this_ptr->loop_markers[0] < 1)) {
    if (this_ptr->loop_markers[0] == 0) {
      return 1;
    }
    return 0;
  }
  return 2;
}
