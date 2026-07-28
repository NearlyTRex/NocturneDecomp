// Name: crt_math.c_process_math_error_FUN_005706dd
// Address: 005706dd
// Address Range: [[005706dd, 005707da]]
// Convention: unknown
// Signature: double crt_math_c_process_math_error_FUN_005706dd(uint param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

double process_math_error(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBX;
  double dVar3;
  MathErrorContext local_3c;
  
  local_3c.inputValue1._0_4_ = *param_2;
  local_3c.inputValue1._4_4_ = param_2[1];
  local_3c.inputValue2._0_4_ = *param_3;
  local_3c.inputValue2._4_4_ = param_3[1];
  if ((param_1 & 0x40) == 0) {
    if ((param_1 & 0x80) == 0) {
      if ((param_1 & 0x100) == 0) {
        if ((param_1 & 0x800) == 0) {
          if ((param_1 & 0x200) == 0) {
            if ((param_1 & 0x400) != 0) {
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
  local_3c.errorData = (char *)(&DAT_005c206c)[param_1 & 0x1f];
  if ((param_1 & 0x1000) == 0) {
    if ((param_1 & 0x2000) == 0) {
      if ((param_1 & 0x4000) == 0) {
        uVar2 = 0x7FF00000;
        uVar1 = DAT_005a4b78;
        if ((param_1 & 0x8000) == 0) {
          uVar2 = param_3[1];
          uVar1 = *param_3;
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
