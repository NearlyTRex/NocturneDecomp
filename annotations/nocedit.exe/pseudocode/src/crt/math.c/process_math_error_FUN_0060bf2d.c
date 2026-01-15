// Name: crt_math.c_process_math_error_FUN_0060bf2d
// Address: 0060bf2d
// Address Range: [[0060bf2d, 0060c02a]]
// Convention: __cdecl
// Signature: double crt_math.c_process_math_error_FUN_0060bf2d(int errorFlags, double * value1, double * value2)

#include "nocturne.h"

double __cdecl
crt_math_c_process_math_error_FUN_0060bf2d(int errorFlags,double *value1,double *value2)

{
  int unaff_EBX;
  double dVar1;
  MathErrorContext local_3c;
  
  local_3c.inputValue1._0_4_ = *(uint *)value1;
  local_3c.inputValue1._4_4_ = *(uint *)((int)value1 + 4);
  local_3c.inputValue2._0_4_ = *(uint *)value2;
  local_3c.inputValue2._4_4_ = *(uint *)((int)value2 + 4);
  if ((errorFlags & 0x40U) == 0) {
    if ((errorFlags & 0x80U) == 0) {
      if ((errorFlags & 0x100U) == 0) {
        if ((errorFlags & 0x800U) == 0) {
          if ((errorFlags & 0x200U) == 0) {
            if ((errorFlags & 0x400U) != 0) {
              unaff_EBX = 5;
            }
          }
          else {
            unaff_EBX = 6;
          }
        }
        else {
          unaff_EBX = 4;
        }
      }
      else {
        unaff_EBX = 3;
      }
    }
    else {
      unaff_EBX = 2;
    }
  }
  else {
    unaff_EBX = 1;
  }
  local_3c.errorData = g_MathFunctionNames[errorFlags & 0x1f];
  if ((errorFlags & 0x1000U) == 0) {
    if ((errorFlags & 0x2000U) == 0) {
      if ((errorFlags & 0x4000U) == 0) {
        local_3c.resultValue = inf;
        if ((errorFlags & 0x8000U) == 0) {
          local_3c.resultValue = *value2;
        }
      }
      else {
        local_3c.resultValue = 1.0;
      }
    }
    else {
      local_3c.resultValue = 0.0;
    }
  }
  else {
    local_3c.resultValue = -inf;
  }
  local_3c.errorType = unaff_EBX;
  dVar1 = crt_math_c_report_math_error_FUN_0060e2e5(&local_3c);
  return dVar1;
}
