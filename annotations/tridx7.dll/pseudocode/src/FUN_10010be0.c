// Name: FUN_10010be0
// Address: 10010be0
// Address Range: [[10010be0, 10010c10]]
// Convention: unknown
// Signature: int FUN_10010be0(short *param_1,int param_2)

#include "nocturne.h"

int FUN_10010be0(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = param_2;
  for (psVar2 = param_1; (iVar1 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
    iVar1 = iVar1 + -1;
  }
  if ((iVar1 != 0) && (*psVar2 == 0)) {
    param_2 = ((int)psVar2 - (int)param_1 >> 1) + 1;
  }
  return param_2;
}
