// Name: FUN_00538000
// Address: 00538000
// Address Range: [[00538000, 00538040]]
// Convention: unknown
// Signature: undefined4 FUN_00538000(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00538000(uint param_1,uint param_2)

{
  uint uVar1;
  byte auStack_100 [256];
  
  FUN_00437400(param_2,auStack_100);
  uVar1 = FUN_00538050(param_1,auStack_100);
  return uVar1;
}
