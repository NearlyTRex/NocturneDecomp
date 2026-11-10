// Name: core_dcamera.cpp_saveCameraFog_FUN_00454b6e
// Address: 00454b6e
// Address Range: [[00454b6e, 00454c13]]
// Convention: unknown
// Signature: void core_dcamera_cpp_saveCameraFog_FUN_00454b6e(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_dcamera_cpp_saveCameraFog_FUN_00454b6e(int param_1,uint param_2)

{
  FUN_005c03c0(param_2,0x5d7a46);
  FUN_005c03c0();
  FUN_005c03c0(param_2,0x5d7a60);
  FUN_005c03c0
            (param_2,0x5d7a68,(double)*(float *)(param_1 + 0xc),(double)*(float *)(param_1 + 0x10),
             (double)*(float *)(param_1 + 0x14));
  FUN_005c03c0
            (param_2,0x5d7a72,(double)*(float *)(param_1 + 0x18),(double)*(float *)(param_1 + 0x1c))
  ;
  FUN_005c03c0(param_2,0x5d7a79,(double)*(float *)(param_1 + 0x20));
  return;
}
