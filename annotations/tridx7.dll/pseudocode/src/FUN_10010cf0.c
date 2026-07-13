// Name: FUN_10010cf0
// Address: 10010cf0
// Address Range: [[10010cf0, 10010d2a]]
// Convention: unknown
// Signature: int FUN_10010cf0(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

int FUN_10010cf0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_10011040(DAT_10016ee0,1,param_1,param_3,param_2,param_3,DAT_10016edc);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}
