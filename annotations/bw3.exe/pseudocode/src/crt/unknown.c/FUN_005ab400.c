// Name: crt_unknown.c_FUN_005ab400
// Address: 005ab400
// Address Range: [[005ab400, 005ab46b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ab400(uint param_1)

#include "nocturne.h"

uint FUN_005ab400(uint param_1)

{
  int error_code;
  
  FUN_005a92f8(param_1);
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
    error_code = *(int *)(&DAT_00607b6d + param_1) >> 0x18;
  }
  setErrno(error_code);
  return 0xffffffff;
}
