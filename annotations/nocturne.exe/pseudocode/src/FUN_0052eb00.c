// Name: FUN_0052eb00
// Address: 0052eb00
// Address Range: [[0052eb00, 0052eb44]]
// Convention: unknown
// Signature: undefined4 FUN_0052eb00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,float param_5)

#include "nocturne.h"

uint FUN_0052eb00(uint param_1,uint param_2,uint param_3,uint *param_4,float param_5)

{
  uint uVar1;
  
  FUN_00526340();
  FUN_00526210((double)param_5);
  uVar1 = FUN_0052d120(param_2,param_3,*param_4,param_4[1],param_4[2],0,0);
  FUN_005263c0();
  return uVar1;
}
