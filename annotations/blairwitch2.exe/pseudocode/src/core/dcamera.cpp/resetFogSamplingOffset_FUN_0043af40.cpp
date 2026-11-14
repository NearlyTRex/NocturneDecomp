// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_0043af40
// Address: 0043af40
// Address Range: [[0043af40, 0043af62]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0043af40(SFogGrid *fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0043af40(SFogGrid *fog)

{
  (fog->sampling_offset).y = 0;
  (fog->sampling_offset).z = 0;
  (fog->sampling_offset).x = 0;
  return;
}
