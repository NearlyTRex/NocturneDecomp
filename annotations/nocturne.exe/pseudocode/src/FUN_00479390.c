// Name: FUN_00479390
// Address: 00479390
// Address Range: [[00479390, 00479417]]
// Convention: unknown
// Signature: undefined4 FUN_00479390(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00479390(int param_1,uint param_2)

{
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&uStack_30);
  uStack_18 = FUN_0040dda0(uStack_30,uStack_24);
  uStack_c = uStack_18;
  uStack_14 = FUN_0040dda0(uStack_2c,uStack_20);
  uStack_c = uStack_14;
  uStack_10 = FUN_0040dda0(uStack_28,uStack_1c);
  uStack_c = uStack_10;
  FUN_0040a240(param_1,param_2,&uStack_18);
  return param_2;
}
