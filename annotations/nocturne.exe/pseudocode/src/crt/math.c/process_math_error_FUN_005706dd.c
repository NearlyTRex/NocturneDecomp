// Name: crt_math.c_process_math_error_FUN_005706dd
// Address: 005706dd
// Address Range: [[005706dd, 005707da]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_process_math_error_FUN_005706dd(int errorFlags,double *value1,double *value2)

#include "nocturne.h"

double __cdecl process_math_error(int errorFlags,double *value1,double *value2)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBX;
  double dVar3;
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
  local_3c.errorData = (char *)(&DAT_005c206c)[errorFlags & 0x1f];
  if ((errorFlags & 0x1000U) == 0) {
    if ((errorFlags & 0x2000U) == 0) {
      if ((errorFlags & 0x4000U) == 0) {
        uVar2 = 0x7FF00000;
        uVar1 = DAT_005a4b78;
        if ((errorFlags & 0x8000U) == 0) {
          uVar2 = *(uint *)((int)value2 + 4);
          uVar1 = *(uint *)value2;
        }
        local_3c.resultValue = __BITCAST_DOUBLE(CONCAT44(uVar2,uVar1));
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
    local_3c.resultValue = -__BITCAST_DOUBLE(CONCAT44(0x7FF00000,DAT_005a4b78));
  }
  local_3c.errorType = unaff_EBX;
  dVar3 = report_math_error(&local_3c);
  return dVar3;
}
