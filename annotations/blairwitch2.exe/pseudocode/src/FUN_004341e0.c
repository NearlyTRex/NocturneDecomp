// Name: FUN_004341e0
// Address: 004341e0
// Address Range: [[004341e0, 00434249]]
// Convention: unknown
// Signature: bool FUN_004341e0(int *param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

bool FUN_004341e0(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte auStack_28 [24];
  
  FUN_0057de80(auStack_28,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_28);
  iVar2 = FUN_0057e0c0(auStack_28);
  *param_3 = *param_3 - iVar2;
  FUN_0057df10(auStack_28,0);
  return iVar1 == 1;
}
