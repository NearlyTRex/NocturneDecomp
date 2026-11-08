// Name: FUN_0051fd00
// Address: 0051fd00
// Address Range: [[0051fd00, 0051ff5b]]
// Convention: unknown
// Signature: void FUN_0051fd00(int param_1,float param_2)

#include "nocturne.h"

void FUN_0051fd00(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_14;
  
  iVar2 = FUN_005035c0(param_1 + 0x2b4);
  if ((*(int *)(iVar2 + 0x24) != 0xc) &&
     (iVar2 = FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar2 + 0x24) != 0xd)) {
    iVar2 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
    if (*(int *)(param_1 + 0x25640) == 0) {
      iVar2 = 0;
    }
    iVar5 = *(int *)(param_1 + 0x25654);
    if (((iVar5 != 0) && (iVar2 != iVar5)) && (*(int *)(iVar5 + 0x43c) == 9)) {
      iVar5 = FUN_005035c0(param_1 + 0x2b4);
      if (*(int *)(iVar5 + 0x24) == 0) {
        *(uint *)(param_1 + 0x25654) = 0;
      }
      else {
        FUN_00503620(param_1 + 0x2b4,0,1);
      }
    }
    local_14 = 0;
    while (0.0 < param_2) {
      iVar5 = *(int *)(param_1 + 0x25654);
      if (iVar2 == iVar5) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x43c)) {
          default:
            iVar5 = 2;
            break;
          case 9:
            iVar5 = 0;
          }
        }
      }
      else if (iVar5 == 0) {
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x43c) != 9)) {
LAB_0051ff09:
          iVar5 = 1;
        }
      }
      else {
        if (*(int *)(iVar5 + 0x43c) != 9) goto LAB_0051ff09;
        iVar5 = 0;
      }
      uVar3 = FUN_0042a0c0(param_1,&param_2,iVar5);
      FUN_00503860(param_1 + 0x2b4);
      if (-1 < (int)uVar3) {
        iVar1 = *(int *)(param_1 + 0x25654);
        if (iVar2 != iVar1) {
          if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x43c) != 9) == uVar3)) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x25654) + 0x2b0) + 0xe4))
                      (*(int *)(param_1 + 0x25654),1);
            *(uint *)(param_1 + 0x25654) = 0;
          }
          if (*(int *)(param_1 + 0x25640) != 0) {
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0x43c) == 9)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            if (((uVar4 == uVar3) && (*(int *)(param_1 + 0x25654) = iVar2, iVar2 != 0)) &&
               ((**(code **)(*(int *)(iVar2 + 0x2b0) + 0xe4))(iVar2,2),
               *(int *)(*(int *)(param_1 + 0x25654) + 0x43c) == 9)) {
              FUN_00503620(param_1 + 0x2b4,6,1);
            }
          }
        }
        FUN_0042a620(param_1,iVar5);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}
