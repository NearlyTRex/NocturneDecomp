// Name: FUN_0053f260
// Address: 0053f260
// Address Range: [[0053f260, 0053f2c5]]
// Convention: unknown
// Signature: undefined4 FUN_0053f260(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0053f260(int param_1,uint param_2)

{
  byte local_48 [40];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_20 = *(uint *)(param_1 + 0x1fa58);
  local_18 = 0;
  local_1c = 0;
  FUN_0044d7a0(local_48,&local_20);
  local_c = *(uint *)(param_1 + 0x1fa4c);
  local_14 = 0;
  local_10 = 0;
  FUN_0044da40(local_48,param_2,&local_14);
  return param_2;
}
