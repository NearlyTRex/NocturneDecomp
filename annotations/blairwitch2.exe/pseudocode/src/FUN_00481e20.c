// Name: FUN_00481e20
// Address: 00481e20
// Address Range: [[00481e20, 00481fbd]]
// Convention: unknown
// Signature: void FUN_00481e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00481e20(uint param_1,uint param_2,uint param_3)

{
  char acStack_828 [256];
  byte bStack_728;
  byte auStack_714 [260];
  byte auStack_610 [260];
  byte auStack_50c [260];
  byte auStack_408 [256];
  byte auStack_308 [256];
  byte auStack_208 [256];
  byte auStack_108 [256];
  byte auStack_8 [4];
  
  FUN_00461070(param_2,auStack_8,auStack_108,auStack_308,auStack_408);
  FUN_004610a0(auStack_208,0,auStack_108,auStack_308,auStack_408);
  FUN_00461070(param_3,0,0,auStack_308,auStack_408);
  FUN_004610a0(auStack_50c,auStack_8,auStack_208,auStack_308,auStack_408);
  FUN_00460e10(acStack_828);
  FUN_00460e50(acStack_828,auStack_50c);
  while (acStack_828[0] != '\0') {
    if ((bStack_728 & 4) == 0) {
      FUN_00461070(acStack_828,0,0,auStack_308,auStack_408);
      FUN_004610a0(auStack_714,auStack_8,auStack_208,auStack_308,auStack_408);
      FUN_00461210(auStack_610,auStack_714);
      FUN_00480e70(param_1,auStack_610);
    }
    FUN_00460ed0(acStack_828);
  }
  FUN_00460f50(acStack_828);
  FUN_00460e30(acStack_828,0);
  return;
}
