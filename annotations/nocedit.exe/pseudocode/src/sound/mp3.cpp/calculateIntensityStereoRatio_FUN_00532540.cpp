// Name: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540
// Address: 00532540
// Address Range: [[00532540, 005325d2]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540 (int intensity_position,double ratio,int unused_param3,int sample_index, float *output_buffer)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
          (int intensity_position,double ratio,int unused_param3,int sample_index,
          float *output_buffer)

{
  float *pfVar1;
  float10 fVar2;
  
  pfVar1 = (float *)(unused_param3 * 4 + sample_index);
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
