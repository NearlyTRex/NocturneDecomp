// Name: FUN_00560c90
// Address: 00560c90
// Address Range: [[00560c90, 00560d28]]
// Convention: unknown
// Signature: undefined4 FUN_00560c90(undefined4 param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint FUN_00560c90(uint param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  byte auStack_3c4 [960];
  
  iVar2 = 0;
  FUN_004831c0(auStack_3c4);
  do {
    puVar1 = (uint *)(iVar2 + 0x6045fc);
    iVar2 = iVar2 + 0x10;
    FUN_00482070(auStack_3c4,*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = FUN_00483450(auStack_3c4,param_2,*param_3,0);
  if (-1 < iVar2) {
    *param_3 = iVar2;
    FUN_004832b0(auStack_3c4,0);
    return 1;
  }
  FUN_004832b0(auStack_3c4,0);
  return 0;
}
