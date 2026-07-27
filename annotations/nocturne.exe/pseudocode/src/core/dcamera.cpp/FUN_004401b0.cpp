// Name: core_dcamera.cpp_FUN_004401b0
// Address: 004401b0
// Address Range: [[004401b0, 004401c8]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_004401b0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_dcamera_cpp_FUN_004401b0(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x144) = param_2;
  *(uint *)(param_1 + 0x148) = param_3;
  return;
}
