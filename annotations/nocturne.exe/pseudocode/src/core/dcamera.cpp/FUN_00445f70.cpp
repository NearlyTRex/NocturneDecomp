// Name: core_dcamera.cpp_FUN_00445f70
// Address: 00445f70
// Address Range: [[00445f70, 00445fde]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00445f70(int param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00445f70(int param_1,float param_2,float param_3,float param_4)

{
  int local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  local_1c = (int)ROUND(param_2 * 256.0f);
  local_18 = (int)ROUND(param_3 * 256.0f);
  local_14 = (int)ROUND(param_4 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(param_1 * 0x30 + *DAT_005ae704,&local_1c)
  ;
  return;
}
