// Name: FUN_00521af0
// Address: 00521af0
// Address Range: [[00521af0, 00521ce6]]
// Convention: unknown
// Signature: void FUN_00521af0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_00521af0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_a4 [100];
  byte local_40 [32];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = (param_5 - param_3) + 1;
  FUN_00465d30(local_40,param_2,param_3,(param_4 - param_2) + 1,iVar3,0);
  FUN_00465ea0(0);
  FUN_00467ac0(local_40);
  FUN_00466350(0);
  if (*(int *)(param_1 + 0x2c) < 1) {
    FUN_00465ea0(0xf9);
    FUN_00468a70(local_40,"(No script loaded.)");
  }
  else {
    local_1c = FUN_00468b30(local_40);
    local_20 = *(int *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x44) * 8) + -1;
    iVar1 = local_20 - (iVar3 / local_1c) / 2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar2 = 2;
    local_14 = param_1 + 0x34;
    local_18 = iVar3 - local_1c;
    if (2 < local_18) {
      do {
        iVar3 = FUN_004858f0(local_14);
        if (iVar3 <= iVar1) break;
        if (iVar1 == local_20) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar4 = 0xfa;
          }
          else if (*(int *)(param_1 + 0x1c) == 1) {
            uVar4 = 0xfb;
          }
          else {
            uVar4 = 0xf9;
          }
        }
        else {
          uVar4 = 0xff;
        }
        FUN_00465ea0(uVar4);
        FUN_005b7790(local_a4,&DAT_005e2eb7,iVar1 + 1);
        FUN_00468240(local_40,local_a4,2,iVar2);
        uVar4 = FUN_00481240(local_14,iVar1,0x1e,iVar2);
        FUN_00468240(local_40,uVar4);
        iVar2 = iVar2 + local_1c;
        iVar1 = iVar1 + 1;
      } while (iVar2 < local_18);
    }
  }
  FUN_00465ea0(0xff);
  FUN_004673b0(local_40);
  return;
}
