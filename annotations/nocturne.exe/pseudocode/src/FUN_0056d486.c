// Name: FUN_0056d486
// Address: 0056d486
// Address Range: [[0056d486, 0056d487]]
// Convention: unknown
// Signature: void FUN_0056d486(undefined4 *param_1,int param_2)

#include "nocturne.h"

void FUN_0056d486(uint *param_1,int param_2)

{
  *(uint *)(param_2 + 0x20) = 0;
  FUN_0056d340(0x63df,*param_1,0,param_2);
  return;
}
