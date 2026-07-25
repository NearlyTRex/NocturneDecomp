// Name: FUN_0045cd80
// Address: 0045cd80
// Address Range: [[0045cd80, 0045cdd6]]
// Convention: unknown
// Signature: void FUN_0045cd80(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

void FUN_0045cd80(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((param_3 + param_2 + 1) - param_6) / 2;
  iVar2 = ((param_5 + param_4 + 1) - param_7) / 2;
  FUN_0045cc70(param_1,iVar1,iVar2,param_6 + iVar1 + -1,param_7 + -1 + iVar2);
  return;
}
