// Name: FUN_00442e10
// Address: 00442e10
// Address Range: [[00442e10, 00442ef2]]
// Convention: unknown
// Signature: undefined4 FUN_00442e10(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00442e10(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte auStack_38 [44];
  byte auStack_c [8];
  
  FUN_005a0930(auStack_38,param_2,1);
  iVar1 = FUN_005a0d70(auStack_38);
  if (iVar1 == 0) {
    uVar2 = 0;
    goto LAB_00442eb5;
  }
  FUN_005a17f0(auStack_c,param_3,&DAT_005d6a55);
  iVar1 = FUN_005a1990(auStack_c);
  if (iVar1 == 0) {
    FUN_005a1860(auStack_c,0);
    FUN_005a0a50(auStack_38,0);
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,auStack_38,auStack_c);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_c);
    uVar2 = 1;
    if (iVar1 != 1) goto LAB_00442e9b;
  }
  else {
LAB_00442e9b:
    uVar2 = 0;
  }
  FUN_005a1860(auStack_c,0);
LAB_00442eb5:
  FUN_005a0a50(auStack_38,0);
  return uVar2;
}
