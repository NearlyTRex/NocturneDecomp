// Name: sound_sndmain.cpp_FUN_00555b80
// Address: 00555b80
// Address Range: [[00555b80, 00555bc1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00555b80(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_00555b80(CSfxSample *this_ptr)

{
  int iVar1;
  
  if (this_ptr->loop_marker_count < 2) {
    iVar1 = (this_ptr->sample_info).sample_count;
    if ((iVar1 <= this_ptr->loop_endpoints[0]) && (this_ptr->loop_destinations[0] < 1)) {
      if ((iVar1 <= this_ptr->loop_endpoints[0]) && (this_ptr->loop_destinations[0] == 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 2;
}
