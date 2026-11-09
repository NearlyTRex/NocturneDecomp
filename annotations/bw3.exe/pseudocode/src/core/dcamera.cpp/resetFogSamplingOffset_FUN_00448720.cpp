// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_00448720
// Address: 00448720
// Address Range: [[00448720, 00448742]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_00448720(int param_1)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_00448720(int param_1)

{
  *(uint *)(param_1 + 0x1004) = 0;
  *(uint *)(param_1 + 0x1008) = 0;
  *(uint *)(param_1 + 0x1000) = 0;
  return;
}
