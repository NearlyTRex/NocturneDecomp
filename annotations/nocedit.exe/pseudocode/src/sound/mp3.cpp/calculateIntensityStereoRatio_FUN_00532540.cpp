// Name: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540
// Address: 00532540
// Address Range: [[00532540, 005325d2]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position, double ratio, int unused_param3, int sample_index, float * output_buffer)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
          (int intensity_position,double ratio,int unused_param3,int sample_index,
          float *output_buffer)

{
  float *pfVar1;
  double dVar2;
  
  pfVar1 = (float *)(unused_param3 * 4 + sample_index);
  if (intensity_position == 0) {
    pfVar1[0x240] = 1.0;
    *pfVar1 = 1.0;
  }
  else {
    if (intensity_position % 2 != 1) {
      dVar2 = crt_math_c_pow_FUN_005ffd76
                        (SUB108 /* extract 3-byte value */((float10)ratio,0),SUB108 /* extract 3-byte value */((float10)(intensity_position / 2),0));
      *pfVar1 = 1.0;
      pfVar1[0x240] = (float)dVar2;
      return;
    }
    dVar2 = crt_math_c_pow_FUN_005ffd76
                      (SUB108 /* extract 3-byte value */((float10)ratio,0),SUB108 /* extract 3-byte value */((float10)((intensity_position + 1) / 2),0));
    pfVar1[0x240] = 1.0;
    *pfVar1 = (float)dVar2;
  }
  return;
}
