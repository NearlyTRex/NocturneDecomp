// Name: FUN_004340f0
// Address: 004340f0
// Address Range: [[004340f0, 004341d0]]
// Convention: unknown
// Signature: undefined4 FUN_004340f0(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_004340f0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte auStack_34 [40];
  byte auStack_c [8];
  
  FUN_0057cdb0(auStack_34,param_2);
  iVar1 = FUN_0057d130(auStack_34);
  if (iVar1 == 0) {
    uVar2 = 0;
    goto LAB_00434193;
  }
  FUN_0057dba0(auStack_c,param_3,&DAT_005cd993);
  iVar1 = FUN_0057dd40(auStack_c);
  if (iVar1 == 0) {
    FUN_0057dc10(auStack_c,0);
    FUN_0057cec0(auStack_34,0);
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,auStack_34,auStack_c);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_c);
    uVar2 = 1;
    if (iVar1 != 1) goto LAB_00434179;
  }
  else {
LAB_00434179:
    uVar2 = 0;
  }
  FUN_0057dc10(auStack_c,0);
LAB_00434193:
  FUN_0057cec0(auStack_34,0);
  return uVar2;
}
