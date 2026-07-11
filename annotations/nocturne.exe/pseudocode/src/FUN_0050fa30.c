// Name: FUN_0050fa30
// Address: 0050fa30
// Address Range: [[0050fa30, 0050faa8]]
// Convention: unknown
// Signature: undefined4 FUN_0050fa30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0050fa30(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_004680b0(&DAT_01fba938,param_2,param_3);
  if (iVar1 == 0) {
    fVar2 = (float)FUN_0050ffe0(param_1,0xbf800000,param_2,param_3,0x3f8147ae);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) {
      return 0;
    }
  }
  return 1;
}
