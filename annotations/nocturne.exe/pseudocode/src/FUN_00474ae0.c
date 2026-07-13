// Name: FUN_00474ae0
// Address: 00474ae0
// Address Range: [[00474ae0, 00474c81]]
// Convention: unknown
// Signature: void FUN_00474ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00474ae0(uint param_1,uint param_2,uint param_3)

{
  char acStack_828 [276];
  byte auStack_714 [260];
  byte auStack_610 [260];
  byte auStack_50c [260];
  byte auStack_408 [256];
  byte auStack_308 [256];
  byte auStack_208 [256];
  byte auStack_108 [256];
  byte auStack_8 [4];
  
  FUN_00566498(param_2,auStack_8,auStack_108,auStack_308,auStack_408);
  FUN_0056626c(auStack_208,0,auStack_108,auStack_308,auStack_408);
  FUN_00566498(param_3,0,0,auStack_308,auStack_408);
  FUN_0056626c(auStack_50c,auStack_8,auStack_208,auStack_308,auStack_408);
  FUN_00456c00(acStack_828);
  FUN_00456c40(acStack_828,auStack_50c);
  while (acStack_828[0] != '\0') {
    FUN_00566498(acStack_828,0,0,auStack_308,auStack_408);
    FUN_0056626c(auStack_714,auStack_8,auStack_208,auStack_308,auStack_408);
    FUN_00565d00(auStack_610,auStack_714,0x104);
    FUN_00473cb0(param_1,auStack_610);
    FUN_00456cc0(acStack_828);
  }
  FUN_00456d40(acStack_828);
  FUN_00456c20(acStack_828,0);
  return;
}
