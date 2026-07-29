// Name: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
// Address: 00525de0
// Address Range: [[00525de0, 00525eaf]]
// Convention: unknown
// Signature: double sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0(CSampleInfo *param_1,double param_2,uint param_3)

#include "nocturne.h"

double sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0(CSampleInfo *param_1,double param_2,uint param_3)

{
  double dVar1;
  
  param_2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(param_1,param_2,param_3,2);
  if (*(int *)(param_1[1].name + 4) == 0) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    else if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    dVar1 = floor(param_2);
    param_2 = param_2 - dVar1;
  }
  dVar1 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(param_1,param_2,2,param_3);
  return dVar1;
}
