// Name: FUN_1000c300
// Address: 1000c300
// Address Range: [[1000c300, 1000c332]]
// Convention: unknown
// Signature: int FUN_1000c300(short *param_1,int param_2)

#include "nocturne.h"

int FUN_1000c300(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*psVar2 == 0) goto LAB_1000c329;
    psVar2 = psVar2 + 1;
  }
  if (*psVar2 == 0) {
LAB_1000c329:
    param_2 = (int)psVar2 - (int)param_1 >> 1;
  }
  return param_2;
}
