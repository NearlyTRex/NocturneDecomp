// Name: wincore_winrun.cpp_normalizeControllerAxis_FUN_005901c0
// Address: 005901c0
// Address Range: [[005901c0, 0059029e]]
// Convention: __cdecl
// Signature: float __cdecl wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0(int raw_value,int *axis_calibration,float out_min,float out_max)

#include "nocturne.h"

float __cdecl wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0(int raw_value,int *axis_calibration,float out_min,float out_max)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (raw_value < *axis_calibration) {
    *axis_calibration = raw_value;
  }
  if (axis_calibration[1] < raw_value) {
    axis_calibration[1] = raw_value;
  }
  fVar3 = (out_min + out_max) * (float)0.5;
  if (g_INT_02665a44 != 0) {
    axis_calibration[2] = raw_value;
  }
  iVar1 = axis_calibration[2];
  if (raw_value < iVar1) {
    iVar4 = *axis_calibration;
    fVar2 = out_min;
    if (iVar1 <= iVar4) {
      return fVar3;
    }
  }
  else {
    iVar4 = axis_calibration[1];
    fVar2 = out_max;
    if (iVar4 <= iVar1) {
      return fVar3;
    }
  }
  fVar2 = fVar2 + ((fVar3 - fVar2) * (float)(raw_value - iVar4)) / (float)(iVar1 - iVar4);
  if ((out_min <= fVar2) && (out_min = out_max, fVar2 <= out_max)) {
    return fVar2;
  }
  return out_min;
}
