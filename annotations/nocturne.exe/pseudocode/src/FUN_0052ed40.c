// Name: FUN_0052ed40
// Address: 0052ed40
// Address Range: [[0052ed40, 0052edd6]]
// Convention: unknown
// Signature: undefined4 FUN_0052ed40(undefined4 param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint FUN_0052ed40(uint param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  byte auStack_174 [368];
  
  iVar2 = 0;
  FUN_00474c90(auStack_174);
  do {
    puVar1 = (uint *)(iVar2 + 0x5bed6c);
    iVar2 = iVar2 + 0x10;
    FUN_00473cb0(auStack_174,*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = FUN_00474d70(auStack_174,param_2,*param_3);
  if (-1 < iVar2) {
    *param_3 = iVar2;
    FUN_00474cf0(auStack_174,0);
    return 1;
  }
  FUN_00474cf0(auStack_174,0);
  return 0;
}
