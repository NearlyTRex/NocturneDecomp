// Name: FUN_004e6730
// Address: 004e6730
// Address Range: [[004e6730, 004e67d4]]
// Convention: unknown
// Signature: undefined4 FUN_004e6730(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e6730(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_005c03c0(param_2,"--- Gore ---\n");
  iVar3 = 0;
  FUN_005c03c0(param_2,&DAT_005e4183,_DAT_01cf69f8);
  if (0 < _DAT_01cf69f8) {
    iVar2 = 0x1cf69fc;
    do {
      iVar3 = iVar3 + 1;
      FUN_004e5660(iVar2,param_2);
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < _DAT_01cf69f8);
  }
  iVar3 = 0;
  uVar1 = FUN_005c03c0(param_2,&DAT_005e4187,_DAT_01cd56b0);
  if (0 < _DAT_01cd56b0) {
    iVar2 = 0x1cd56b4;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_004e5030(iVar2,param_2);
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < _DAT_01cd56b0);
  }
  return uVar1;
}
