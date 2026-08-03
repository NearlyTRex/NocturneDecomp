// Name: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
// Address: 00525de0
// Address Range: [[00525de0, 00525eaf]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0(CSfxSample *this_ptr,double position,uint input_type)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0(CSfxSample *this_ptr,double position,uint input_type)

{
  double dVar1;
  
  position = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                       (&this_ptr->sample_info,position,input_type,2);
  if (this_ptr->loop_marker_count == 0) {
    if (position < 0.0) {
      position = 0.0;
    }
    else if (1.0 < position) {
      position = 1.0;
    }
  }
  else {
    dVar1 = floor(position);
    position = position - dVar1;
  }
  dVar1 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                    (&this_ptr->sample_info,position,2,input_type);
  return dVar1;
}
