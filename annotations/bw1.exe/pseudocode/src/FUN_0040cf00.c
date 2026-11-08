// Name: FUN_0040cf00
// Address: 0040cf00
// Address Range: [[0040cf00, 0040cf33]]
// Convention: unknown
// Signature: void FUN_0040cf00(undefined4 param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

void FUN_0040cf00(uint param_1,byte *param_2,int param_3)

{
  byte uVar1;
  
  for (; 0 < param_3; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    FUN_0040ce20(param_1,uVar1);
  }
  return;
}
