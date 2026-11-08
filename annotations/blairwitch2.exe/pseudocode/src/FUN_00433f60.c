// Name: FUN_00433f60
// Address: 00433f60
// Address Range: [[00433f60, 00433fe1]]
// Convention: unknown
// Signature: undefined4 FUN_00433f60(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

#include "nocturne.h"

uint FUN_00433f60(int *param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte auStack_24 [24];
  
  FUN_0057de80(auStack_24,param_3,*param_4);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,auStack_24);
  if (iVar1 == 1) {
    uVar2 = 1;
    if (param_5 == 0) goto LAB_00433fa2;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_24);
    uVar2 = 1;
    if (iVar1 == 1) goto LAB_00433fa2;
  }
  uVar2 = 0;
LAB_00433fa2:
  iVar1 = FUN_0057e0c0(auStack_24);
  *param_4 = *param_4 - iVar1;
  FUN_0057df10(auStack_24,0);
  return uVar2;
}
