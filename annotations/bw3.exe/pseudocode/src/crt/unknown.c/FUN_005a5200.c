// Name: crt_unknown.c_FUN_005a5200
// Address: 005a5200
// Address Range: [[005a5200, 005a521b]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005a5200(int param_1,int *param_2)

#include "nocturne.h"

int FUN_005a5200(int param_1,int *param_2)

{
  if ((param_1 == 0x5c) || (param_1 == 0x2f)) {
    if (*param_2 == 0) {
      *param_2 = param_1;
    }
    param_1 = *param_2;
  }
  return param_1;
}
