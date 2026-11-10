// Name: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0
// Address: 005725a0
// Address Range: [[005725a0, 00572676]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0(CSfxSample *this_ptr,double position,uint input_type)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0(CSfxSample *this_ptr,double position,uint input_type)

{
  int iVar1;
  double dVar2;
  
  position = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430
                       (&this_ptr->sample_info,position,input_type,2);
  iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(this_ptr);
  if (iVar1 == 0) {
    if (position < 0.0) {
      position = 0.0;
    }
    else if (1.0 < position) {
      position = 1.0;
    }
  }
  else {
    dVar2 = floor(position);
    position = position - dVar2;
  }
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430
                    (&this_ptr->sample_info,position,2,input_type);
  return dVar2;
}
