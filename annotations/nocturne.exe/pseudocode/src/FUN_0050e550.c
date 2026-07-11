// Name: FUN_0050e550
// Address: 0050e550
// Address Range: [[0050e550, 0050e575]]
// Convention: unknown
// Signature: void FUN_0050e550(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0050e550(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 * 0x1a0 + param_1 + 0x1a0) = param_3;
  return;
}
