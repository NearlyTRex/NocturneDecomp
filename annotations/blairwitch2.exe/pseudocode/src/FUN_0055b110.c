// Name: FUN_0055b110
// Address: 0055b110
// Address Range: [[0055b110, 0055b1a8]]
// Convention: unknown
// Signature: undefined4 FUN_0055b110(undefined4 param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint FUN_0055b110(uint param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  byte auStack_3c4 [960];
  
  iVar2 = 0;
  FUN_00481fc0(auStack_3c4);
  do {
    puVar1 = (uint *)(iVar2 + 0x61c06c);
    iVar2 = iVar2 + 0x10;
    FUN_00480e70(auStack_3c4,*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = FUN_00482250(auStack_3c4,param_2,*param_3,0);
  if (-1 < iVar2) {
    *param_3 = iVar2;
    FUN_004820b0(auStack_3c4,0);
    return 1;
  }
  FUN_004820b0(auStack_3c4,0);
  return 0;
}
