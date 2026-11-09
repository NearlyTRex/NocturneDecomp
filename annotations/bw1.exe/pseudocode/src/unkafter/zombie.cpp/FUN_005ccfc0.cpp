// Name: unkafter_zombie.cpp_FUN_005ccfc0
// Address: 005ccfc0
// Address Range: [[005ccfc0, 005ccfe0]]
// Convention: unknown
// Signature: int unkafter_zombie_cpp_FUN_005ccfc0(short *param_1)

#include "nocturne.h"

int unkafter_zombie_cpp_FUN_005ccfc0(short *param_1)

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
