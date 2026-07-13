// Name: APIDLLsetVideoMode2
// Address: 10002bb0
// Address Range: [[10002bb0, 10002bda]]
// Convention: unknown
// Signature: void APIDLLsetVideoMode2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4 )

#include "nocturne.h"

void APIDLLsetVideoMode2(uint param_1,uint param_2,uint param_3,uint param_4 )

{
                    /* 0x2bb0  32  APIDLLsetVideoMode2 */
  DAT_10014174 = param_1;
  DAT_10014178 = param_2;
  DAT_1001417c = param_3;
  APIDLLsetVideoMode(param_4);
  return;
}
