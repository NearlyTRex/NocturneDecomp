// Name: FUN_0053ac80
// Address: 0053ac80
// Address Range: [[0053ac80, 0053acef]]
// Convention: unknown
// Signature: void FUN_0053ac80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0053ac80(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (*(int *)(0x01D2130C + 0x214) == 0) {
    if (*(int *)(0x01D2130C + 0x218) != 0) {
      iVar1 = FUN_0046d540(DAT_005f2afc);
      if (iVar1 == 0) {
        FUN_0053a6c0(param_1,param_2,param_3,0xffff);
        return;
      }
    }
    FUN_0046dbd0(DAT_005f2afc,param_2,param_3,param_4);
  }
  return;
}
