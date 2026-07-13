// Name: APIDLLselectCard
// Address: 100052c0
// Address Range: [[100052c0, 100052dd]]
// Convention: unknown
// Signature: void APIDLLselectCard(undefined4 param_1)

#include "nocturne.h"

void APIDLLselectCard(uint param_1)

{
                    /* 0x52c0  26  APIDLLselectCard */
  DAT_10014210 = param_1;
  APIDLLinit(DAT_10138fb8,&DAT_102268b8);
  return;
}
