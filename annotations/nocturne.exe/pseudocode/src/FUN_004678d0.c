// Name: FUN_004678d0
// Address: 004678d0
// Address Range: [[004678d0, 0046792e]]
// Convention: unknown
// Signature: int FUN_004678d0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

int FUN_004678d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((((-1 < param_2) && (-1 < param_3)) && (-1 < param_4)) &&
     (((param_2 < *(int *)(param_1 + 0x40) && (param_3 < *(int *)(param_1 + 0x44))) &&
      (iVar1 = *(int *)(param_1 + 0x48), param_4 < iVar1)))) {
    return *(int *)(param_1 + 0x50) +
           (param_3 * iVar1 + param_4 + param_2 * *(int *)(param_1 + 0x44) * iVar1) * 0x34;
  }
  return 0;
}
