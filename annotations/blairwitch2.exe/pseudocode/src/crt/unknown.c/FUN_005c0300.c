// Name: crt_unknown.c_FUN_005c0300
// Address: 005c0300
// Address Range: [[005c0300, 005c036b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c0300(uint param_1)

#include "nocturne.h"

uint FUN_005c0300(uint param_1)

{
  int error_code;
  
  FUN_005be1b8(param_1);
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
    error_code = *(int *)(&DAT_0061f469 + param_1) >> 0x18;
  }
  setErrno(error_code);
  return 0xffffffff;
}
