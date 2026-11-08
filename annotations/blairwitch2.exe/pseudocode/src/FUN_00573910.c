// Name: FUN_00573910
// Address: 00573910
// Address Range: [[00573910, 0057393f]]
// Convention: unknown
// Signature: void FUN_00573910(int param_1,uint param_2)

#include "nocturne.h"

void FUN_00573910(int param_1,uint param_2)

{
  FUN_0046ca00(DAT_0060b280,(param_2 & 0xfff) * 0x18 + param_1 + 4);
  return;
}
