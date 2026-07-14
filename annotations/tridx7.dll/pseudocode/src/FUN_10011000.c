// Name: FUN_10011000
// Address: 10011000
// Address Range: [[10011000, 10011032]]
// Convention: unknown
// Signature: int FUN_10011000(short *param_1,int param_2)

#include "nocturne.h"

int FUN_10011000(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*psVar2 == 0) goto LAB_10011029;
    psVar2 = psVar2 + 1;
  }
  if (*psVar2 == 0) {
LAB_10011029:
    param_2 = (int)psVar2 - (int)param_1 >> 1;
  }
  return param_2;
}
