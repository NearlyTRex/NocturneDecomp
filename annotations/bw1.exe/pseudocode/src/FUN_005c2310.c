// Name: FUN_005c2310
// Address: 005c2310
// Address Range: [[005c2310, 005c232b]]
// Convention: unknown
// Signature: int FUN_005c2310(int param_1,int *param_2)

#include "nocturne.h"

int FUN_005c2310(int param_1,int *param_2)

{
  if ((param_1 == 0x5c) || (param_1 == 0x2f)) {
    if (*param_2 == 0) {
      *param_2 = param_1;
    }
    param_1 = *param_2;
  }
  return param_1;
}
