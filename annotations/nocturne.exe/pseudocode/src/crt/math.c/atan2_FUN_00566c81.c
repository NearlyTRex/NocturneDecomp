// Name: crt_math.c_atan2_FUN_00566c81
// Address: 00566c81
// Address Range: [[00566c81, 00566c95]]
// Convention: __fpureg
// Signature: void __fpureg crt_math_c_atan2_FUN_00566c81(unkbyte10 param_1,unkbyte10 param_2)

#include "nocturne.h"

void __fpureg atan2(unkbyte10 param_1,unkbyte10 param_2)

{
  if ((DAT_005c1d98 & 1) == 0) {
    fpatan(param_1,param_2);
  }
  else {
    FUN_0056dc98();
  }
  return;
}
