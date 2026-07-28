// Name: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0
// Address: 004e60c0
// Address Range: [[004e60c0, 004e6152]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_004e60c0(int intensity_position,double ratio,int sample_index,float *ratio_buffer)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_004e60c0(int intensity_position,double ratio,int sample_index,float *ratio_buffer)

{
  float *pfVar1;
  float10 fVar2;
  
  pfVar1 = ratio_buffer + sample_index;
  if (intensity_position == 0) {
    pfVar1[0x240] = 1.0;
    *pfVar1 = 1.0;
  }
  else {
    if (intensity_position % 2 != 1) {
      fVar2 = pow((float10)ratio,(float10)(intensity_position / 2));
      *pfVar1 = 1.0;
      pfVar1[0x240] = (float)fVar2;
      return;
    }
    fVar2 = pow((float10)ratio,(float10)((intensity_position + 1) / 2));
    pfVar1[0x240] = 1.0;
    *pfVar1 = (float)fVar2;
  }
  return;
}
