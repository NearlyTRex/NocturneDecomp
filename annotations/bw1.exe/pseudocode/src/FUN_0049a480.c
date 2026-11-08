// Name: FUN_0049a480
// Address: 0049a480
// Address Range: [[0049a480, 0049a61d]]
// Convention: unknown
// Signature: void FUN_0049a480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0049a480(uint param_1,uint param_2,uint param_3)

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
  
  FUN_00479580(param_2,auStack_8,auStack_108,auStack_308,auStack_408);
  FUN_004795b0(auStack_208,0,auStack_108,auStack_308,auStack_408);
  FUN_00479580(param_3,0,0,auStack_308,auStack_408);
  FUN_004795b0(auStack_50c,auStack_8,auStack_208,auStack_308,auStack_408);
  FUN_00479320(acStack_828);
  FUN_00479360(acStack_828,auStack_50c);
  while (acStack_828[0] != '\0') {
    if ((bStack_728 & 4) == 0) {
      FUN_00479580(acStack_828,0,0,auStack_308,auStack_408);
      FUN_004795b0(auStack_714,auStack_8,auStack_208,auStack_308,auStack_408);
      FUN_00479720(auStack_610,auStack_714);
      FUN_004994d0(param_1,auStack_610);
    }
    FUN_004793e0(acStack_828);
  }
  FUN_00479460(acStack_828);
  FUN_00479340(acStack_828,0);
  return;
}
