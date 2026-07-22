// Name: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450
// Address: 0041d450
// Address Range: [[0041d450, 0041d547]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450(float *param_1)

{
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  local_28 = (*param_1 + param_1[3]) * 0.5f;
  local_24 = (param_1[1] + param_1[4]) * 0.5f;
  local_20 = (param_1[2] + param_1[5]) * 0.5f;
  local_34 = (int)ROUND(local_28 * _DAT_0059aa80);
  local_30 = (int)ROUND(local_24 * _DAT_0059aa80);
  local_2c = (int)ROUND(local_20 * _DAT_0059aa80);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
            (*DAT_005ae704 + 0xea5d0,&local_34,*param_1 + param_1[3],param_1[1] + param_1[4],
             param_1[2] + param_1[5]);
  if (0 < *(int *)(*DAT_005ae704 + 0xea5d8)) {
    return ABS(((float)_DAT_01c00c4c *
               ((param_1[4] - param_1[1]) /
               ((float)*(int *)(*DAT_005ae704 + 0xea5d8) * (float)0.00390625))) /
               (float)DAT_005b7648);
  }
  return 99999.0;
}
