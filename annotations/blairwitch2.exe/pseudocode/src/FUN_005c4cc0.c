// Name: FUN_005c4cc0
// Address: 005c4cc0
// Address Range: [[005c4cc0, 005c4ce0]]
// Convention: unknown
// Signature: int FUN_005c4cc0(short *param_1)

#include "nocturne.h"

int FUN_005c4cc0(short *param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  sVar2 = *param_1;
  psVar3 = param_1;
  while (sVar2 != 0) {
    psVar1 = psVar3 + 1;
    psVar3 = psVar3 + 1;
    sVar2 = *psVar1;
  }
  return (int)psVar3 - (int)param_1 >> 1;
}
