// Name: FUN_0045bf00
// Address: 0045bf00
// Address Range: [[0045bf00, 0045bfae]]
// Convention: unknown
// Signature: void FUN_0045bf00(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_0045bf00(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  FUN_0045bab0(param_1,param_2 + param_4,param_3 + param_5);
  FUN_0045bab0(param_1,param_2 - param_4,param_3 + param_5);
  FUN_0045bab0(param_1,param_2 + param_4,param_3 - param_5);
  FUN_0045bab0(param_1,param_2 - param_4,param_3 - param_5);
  FUN_0045bab0(param_1,param_2 + param_5,param_3 + param_4);
  FUN_0045bab0(param_1,param_2 - param_5,param_3 + param_4);
  FUN_0045bab0(param_1,param_2 + param_5,param_3 - param_4);
  FUN_0045bab0(param_1,param_2 - param_5,param_3 - param_4);
  return;
}
