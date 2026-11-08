// Name: FUN_00557230
// Address: 00557230
// Address Range: [[00557230, 005572a8]]
// Convention: unknown
// Signature: undefined4 FUN_00557230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00557230(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_0048b880(&DAT_01fe5c1c,param_2,param_3);
  if (iVar1 == 0) {
    fVar2 = (float)FUN_005578b0(param_1,0xbf800000,param_2,param_3,0x3f8147ae);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) {
      return 0;
    }
  }
  return 1;
}
