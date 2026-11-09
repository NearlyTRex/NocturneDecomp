// Name: crt_unknown.c_FUN_005c85c0
// Address: 005c85c0
// Address Range: [[005c85c0, 005c862b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c85c0(uint param_1)

#include "nocturne.h"

uint FUN_005c85c0(uint param_1)

{
  int error_code;
  
  FUN_005c6488(param_1);
  if (param_1 == 0x7b) {
    error_code = 1;
  }
  else {
    if (param_1 == 0xce) {
      setErrno(9);
      return 0xffffffff;
    }
    if (param_1 == 0xb7) {
      setErrno(7);
      return 0xffffffff;
    }
    if (0x13 < param_1) {
      param_1 = 0x13;
    }
    error_code = *(int *)(&DAT_006267c9 + param_1) >> 0x18;
  }
  setErrno(error_code);
  return 0xffffffff;
}
