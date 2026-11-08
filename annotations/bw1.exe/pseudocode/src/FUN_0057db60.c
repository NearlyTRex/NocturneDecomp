// Name: FUN_0057db60
// Address: 0057db60
// Address Range: [[0057db60, 0057dbf8]]
// Convention: unknown
// Signature: undefined4 FUN_0057db60(undefined4 param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint FUN_0057db60(uint param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  byte auStack_3c4 [960];
  
  iVar2 = 0;
  FUN_0049a620(auStack_3c4);
  do {
    puVar1 = (uint *)(iVar2 + 0x6236bc);
    iVar2 = iVar2 + 0x10;
    FUN_004994d0(auStack_3c4,*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = FUN_0049a8b0(auStack_3c4,param_2,*param_3,0);
  if (-1 < iVar2) {
    *param_3 = iVar2;
    FUN_0049a710(auStack_3c4,0);
    return 1;
  }
  FUN_0049a710(auStack_3c4,0);
  return 0;
}
