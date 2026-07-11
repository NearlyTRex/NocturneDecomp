// Name: FUN_00566250
// Address: 00566250
// Address Range: [[00566250, 0056626b]]
// Convention: unknown
// Signature: int FUN_00566250(int param_1,int *param_2)

#include "nocturne.h"

int FUN_00566250(int param_1,int *param_2)

{
  if ((param_1 == 0x5c) || (param_1 == 0x2f)) {
    if (*param_2 == 0) {
      *param_2 = param_1;
    }
    param_1 = *param_2;
  }
  return param_1;
}
