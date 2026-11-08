// Name: FUN_00578cb0
// Address: 00578cb0
// Address Range: [[00578cb0, 00578ce0]]
// Convention: unknown
// Signature: void FUN_00578cb0(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00578cb0(byte *param_1,uint param_2)

{
  FUN_005b7790(param_2,"%d.%d.%d.%d",*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}
