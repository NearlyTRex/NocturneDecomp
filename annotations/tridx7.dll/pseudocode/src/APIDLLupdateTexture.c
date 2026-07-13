// Name: APIDLLupdateTexture
// Address: 10003ed0
// Address Range: [[10003ed0, 10003eff]]
// Convention: unknown
// Signature: undefined4 APIDLLupdateTexture(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint APIDLLupdateTexture(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
                    /* 0x3ed0  37  APIDLLupdateTexture */
  DAT_1020de38 = param_3;
  DAT_10138fb0 = param_4;
  DAT_1024061c = param_5;
  FUN_100015d0(param_1);
  return 1;
}
