// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0
// Address: 0044c5e0
// Address Range: [[0044c5e0, 0044c602]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044c5e0(SFogGrid *fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044c5e0(SFogGrid *fog)

{
  (fog->sampling_offset).y = 0;
  (fog->sampling_offset).z = 0;
  (fog->sampling_offset).x = 0;
  return;
}
