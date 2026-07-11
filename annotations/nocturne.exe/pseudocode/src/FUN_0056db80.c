// Name: FUN_0056db80
// Address: 0056db80
// Address Range: [[0056db80, 0056dbac]]
// Convention: unknown
// Signature: undefined4 FUN_0056db80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0056db80(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0056dbb0(param_2,param_3);
  FUN_00570ce0(param_1,param_2,iVar1 + 1);
  return param_1;
}
