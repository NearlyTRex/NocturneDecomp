// Name: FUN_00440a70
// Address: 00440a70
// Address Range: [[00440a70, 00440b52]]
// Convention: unknown
// Signature: undefined4 FUN_00440a70(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00440a70(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte auStack_38 [44];
  byte auStack_c [8];
  
  FUN_00573920(auStack_38,param_2,1);
  iVar1 = FUN_00573d60(auStack_38);
  if (iVar1 == 0) {
    uVar2 = 0;
    goto LAB_00440b15;
  }
  FUN_005747e0(auStack_c,param_3,&DAT_005b92c5);
  iVar1 = FUN_00574980(auStack_c);
  if (iVar1 == 0) {
    FUN_00574850(auStack_c,0);
    FUN_00573a40(auStack_38,0);
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,auStack_38,auStack_c);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_c);
    uVar2 = 1;
    if (iVar1 != 1) goto LAB_00440afb;
  }
  else {
LAB_00440afb:
    uVar2 = 0;
  }
  FUN_00574850(auStack_c,0);
LAB_00440b15:
  FUN_00573a40(auStack_38,0);
  return uVar2;
}
