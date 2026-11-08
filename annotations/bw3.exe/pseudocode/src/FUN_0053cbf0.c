// Name: FUN_0053cbf0
// Address: 0053cbf0
// Address Range: [[0053cbf0, 0053cc68]]
// Convention: unknown
// Signature: undefined4 FUN_0053cbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0053cbf0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_00474400(&DAT_0203b37c,param_2,param_3);
  if (iVar1 == 0) {
    fVar2 = (float)FUN_0053d270(param_1,0xbf800000,param_2,param_3,0x3f8147ae);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) {
      return 0;
    }
  }
  return 1;
}
