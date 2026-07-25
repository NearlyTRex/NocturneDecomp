// Name: FUN_0045df80
// Address: 0045df80
// Address Range: [[0045df80, 0045dff5]]
// Convention: unknown
// Signature: void FUN_0045df80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_0045df80(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte local_1014 [4096];
  byte *local_14;
  
  local_14 = &stack0x00000018;
  _vsprintf(local_1014,param_5,&local_14);
  local_14 = (byte *)0x0;
  FUN_0045df20(param_1,local_1014,param_2,param_3,param_4);
  return;
}
