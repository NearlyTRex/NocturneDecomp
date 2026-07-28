// Name: crt_math.c_math_domain_error_FUN_0056bd22
// Address: 0056bd22
// Address Range: [[0056bd22, 0056bdc7]]
// Convention: unknown
// Signature: undefined8 crt_math_c_math_domain_error_FUN_0056bd22(double param_1,double param_2,byte param_3)

#include "nocturne.h"

ulonglong math_domain_error(double param_1,double param_2,byte param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (0.0 < param_2) {
        return 0;
      }
      if (0.0 <= param_2) {
        uVar1 = 0x4047;
      }
      else {
        uVar1 = 0x8047;
      }
    }
    else {
      uVar1 = 0x2047;
    }
  }
  else {
    if (param_2 <= 0.0) {
      return 0;
    }
    if (param_1 <= 0.0) {
      uVar1 = 0x1107;
    }
    else {
      uVar1 = 0x8107;
    }
  }
  uVar2 = process_math_error(uVar1,&param_1,&param_2);
  return uVar2;
}
