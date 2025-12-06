// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
// Address: 0044bb70
// Address Range: [[0044bb70, 0044bb92]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid * fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid *fog)

{
  (fog->sampling_offset).y = 0;
  (fog->sampling_offset).z = 0;
  (fog->sampling_offset).x = 0;
  return;
}
