// Name: APIDLLselectTexture
// Address: 10003e90
// Address Range: [[10003e90, 10003ec4]]
// Convention: unknown
// Signature: undefined4 APIDLLselectTexture(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint APIDLLselectTexture(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
                    /* 0x3e90  27  APIDLLselectTexture */
  DAT_1020de38 = param_3;
  DAT_10138fb0 = param_4;
  DAT_1024061c = param_5;
  DAT_10014138 = FUN_10001470(param_1);
  return 1;
}
