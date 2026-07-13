// Name: FUN_1000a930
// Address: 1000a930
// Address Range: [[1000a930, 1000a947]]
// Convention: unknown
// Signature: int FUN_1000a930(short *param_1)

#include "nocturne.h"

int FUN_1000a930(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = param_1;
  do {
    psVar3 = psVar2 + 1;
    sVar1 = *psVar2;
    psVar2 = psVar3;
  } while (sVar1 != 0);
  return ((int)psVar3 - (int)param_1 >> 1) + -1;
}
