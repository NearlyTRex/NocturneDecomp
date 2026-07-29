// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20
// Address: 0043fa20
// Address Range: [[0043fa20, 0043fa42]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0043fa20(SFogGrid *fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0043fa20(SFogGrid *fog)

{
  (fog->sampling_offset).y = 0;
  (fog->sampling_offset).z = 0;
  (fog->sampling_offset).x = 0;
  return;
}
