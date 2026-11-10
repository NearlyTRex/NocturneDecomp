// Name: core_dcamera.cpp_saveCameraFog_FUN_00450cbe
// Address: 00450cbe
// Address Range: [[00450cbe, 00450d63]]
// Convention: unknown
// Signature: void core_dcamera_cpp_saveCameraFog_FUN_00450cbe(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_dcamera_cpp_saveCameraFog_FUN_00450cbe(int param_1,uint param_2)

{
  FUN_005a3140(param_2,0x5ba0ad);
  FUN_005a3140();
  FUN_005a3140(param_2,0x5ba0c7);
  FUN_005a3140
            (param_2,0x5ba0cf,(double)*(float *)(param_1 + 0xc),(double)*(float *)(param_1 + 0x10),
             (double)*(float *)(param_1 + 0x14));
  FUN_005a3140
            (param_2,0x5ba0d9,(double)*(float *)(param_1 + 0x18),(double)*(float *)(param_1 + 0x1c))
  ;
  FUN_005a3140(param_2,0x5ba0e0,(double)*(float *)(param_1 + 0x20));
  return;
}
