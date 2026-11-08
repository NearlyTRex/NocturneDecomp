// Name: FUN_00529210
// Address: 00529210
// Address Range: [[00529210, 00529406]]
// Convention: unknown
// Signature: void FUN_00529210(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_00529210(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  FUN_00467900(local_40,param_2,param_3,(param_4 - param_2) + 1,iVar3,0);
  FUN_00467a70(0);
  FUN_00469690(local_40);
  FUN_00467f20(0);
  if (*(int *)(param_1 + 0x2c) < 1) {
    FUN_00467a70(0xf9);
    FUN_0046a640(local_40,"(No script loaded.)");
  }
  else {
    local_1c = FUN_0046a700(local_40);
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
        iVar3 = FUN_00486af0(local_14);
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
        FUN_00467a70(uVar4);
        FUN_005a28c0(local_a4,&DAT_005cde1c,iVar1 + 1);
        FUN_00469e10(local_40,local_a4,2,iVar2);
        uVar4 = FUN_00482440(local_14,iVar1,0x1e,iVar2);
        FUN_00469e10(local_40,uVar4);
        iVar2 = iVar2 + local_1c;
        iVar1 = iVar1 + 1;
      } while (iVar2 < local_18);
    }
  }
  FUN_00467a70(0xff);
  FUN_00468f80(local_40);
  return;
}
