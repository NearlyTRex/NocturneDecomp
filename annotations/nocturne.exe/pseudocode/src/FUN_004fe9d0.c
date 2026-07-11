// Name: FUN_004fe9d0
// Address: 004fe9d0
// Address Range: [[004fe9d0, 004febc6]]
// Convention: unknown
// Signature: void FUN_004fe9d0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_004fe9d0(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  FUN_0045b480(local_40,param_2,param_3,(param_4 - param_2) + 1,iVar3,0);
  FUN_0045b5f0(0);
  FUN_0045d2b0(local_40);
  FUN_0045baa0(0);
  if (*(int *)(param_1 + 0x28) < 1) {
    FUN_0045b5f0(0xf9);
    FUN_0045e260(local_40,"(No script loaded.)");
  }
  else {
    local_1c = FUN_0045e320(local_40);
    local_20 = *(int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x40) * 8) + -1;
    iVar1 = local_20 - (iVar3 / local_1c) / 2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar2 = 2;
    local_14 = param_1 + 0x30;
    local_18 = iVar3 - local_1c;
    if (2 < local_18) {
      do {
        iVar3 = FUN_00477660(local_14);
        if (iVar3 <= iVar1) break;
        if (iVar1 == local_20) {
          if (*(int *)(param_1 + 0x18) == 0) {
            uVar4 = 0xfa;
          }
          else if (*(int *)(param_1 + 0x18) == 1) {
            uVar4 = 0xfb;
          }
          else {
            uVar4 = 0xf9;
          }
        }
        else {
          uVar4 = 0xff;
        }
        FUN_0045b5f0(uVar4);
        FUN_00563c90(local_a4,&DAT_0058e24e,iVar1 + 1);
        FUN_0045da30(local_40,local_a4,2,iVar2);
        uVar4 = FUN_00474080(local_14,iVar1,0x1e,iVar2);
        FUN_0045da30(local_40,uVar4);
        iVar2 = iVar2 + local_1c;
        iVar1 = iVar1 + 1;
      } while (iVar2 < local_18);
    }
  }
  FUN_0045b5f0(0xff);
  FUN_0045cb70(local_40);
  return;
}
