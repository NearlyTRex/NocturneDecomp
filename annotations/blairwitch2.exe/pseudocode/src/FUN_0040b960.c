// Name: FUN_0040b960
// Address: 0040b960
// Address Range: [[0040b960, 0040b9d3]]
// Convention: unknown
// Signature: void FUN_0040b960(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b960(uint *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = FUN_005b8100(DAT_007bc034,&DAT_005cab46,param_1);
    if (iVar1 != 1) {
      FUN_0040b380("Integer value",param_2);
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,&DAT_005cab49,&DAT_00609590,*param_1);
  }
  FUN_0040b400("Integer value",param_2);
  return;
}
