// Name: FUN_00545390
// Address: 00545390
// Address Range: [[00545390, 00545402]]
// Convention: unknown
// Signature: int FUN_00545390(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_00545390(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 4))) &&
     (iVar2 = FUN_005649c0(param_2 * 0x40 + param_1 + 0x3008,param_3), iVar2 == 0)) {
    return param_2;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xd3008)) {
    iVar3 = param_1 + 0x3008;
    do {
      iVar1 = FUN_005649c0(iVar3,param_3);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < *(int *)(param_1 + 0xd3008));
  }
  return -1;
}
