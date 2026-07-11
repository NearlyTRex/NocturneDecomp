// Name: FUN_00571e75
// Address: 00571e75
// Address Range: [[00571e75, 00571edc]]
// Convention: unknown
// Signature: int FUN_00571e75(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

int FUN_00571e75(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (param_2 == 0) {
    if (param_1 <= param_6 - param_3) {
      return param_1;
    }
  }
  else if (param_2 == 2) {
    param_5 = param_5 - param_3;
    if (-param_5 == param_1 || -param_1 < param_5) {
LAB_00571eaa:
      return param_5 + param_1;
    }
  }
  else if (param_2 == 1) {
    param_5 = param_4 - param_3;
    if (param_1 < 0) {
      if (-param_5 == param_1 || -param_1 < param_5) goto LAB_00571eaa;
    }
    else {
      if (param_1 < 1) {
        return param_5;
      }
      if (param_1 <= param_6 - param_4) {
        return param_1 + param_5;
      }
    }
  }
  return -1;
}
