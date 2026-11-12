// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_00448720
// Address: 00448720
// Address Range: [[00448720, 00448742]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_00448720(SFogGrid *fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_00448720(SFogGrid *fog)

{
  (fog->sampling_offset).y = 0;
  (fog->sampling_offset).z = 0;
  (fog->sampling_offset).x = 0;
  return;
}
