// Name: FUN_00535e10
// Address: 00535e10
// Address Range: [[00535e10, 00535e88]]
// Convention: unknown
// Signature: undefined4 FUN_00535e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00535e10(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_00473390(&DAT_01fc9c68,param_2,param_3);
  if (iVar1 == 0) {
    fVar2 = (float)FUN_00536490(param_1,0xbf800000,param_2,param_3,0x3f8147ae);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) {
      return 0;
    }
  }
  return 1;
}
