// Name: FUN_00541e30
// Address: 00541e30
// Address Range: [[00541e30, 00542085]]
// Convention: unknown
// Signature: void FUN_00541e30(int param_1,float param_2)

#include "nocturne.h"

void FUN_00541e30(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_14;
  
  iVar2 = FUN_00524770(param_1 + 0x158);
  if ((*(int *)(iVar2 + 0x24) != 0xc) &&
     (iVar2 = FUN_00524770(param_1 + 0x158), *(int *)(iVar2 + 0x24) != 0xd)) {
    iVar2 = *(int *)(param_1 + 0x1fe20);
    if (*(int *)(param_1 + 0x1ffac) == 0) {
      iVar2 = 0;
    }
    iVar5 = *(int *)(param_1 + 0x1ffc0);
    if (((iVar5 != 0) && (iVar2 != iVar5)) && (*(int *)(iVar5 + 0x2e0) == 8)) {
      iVar5 = FUN_00524770(param_1 + 0x158);
      if (*(int *)(iVar5 + 0x24) == 0) {
        *(uint *)(param_1 + 0x1ffc0) = 0;
      }
      else {
        FUN_005247c0(param_1 + 0x158,0,1);
      }
    }
    local_14 = 0;
    while (0.0 < param_2) {
      iVar5 = *(int *)(param_1 + 0x1ffc0);
      if (iVar2 == iVar5) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x2e0)) {
          default:
            iVar5 = 2;
            break;
          case 8:
            iVar5 = 0;
          }
        }
      }
      else if (iVar5 == 0) {
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2e0) != 8)) {
LAB_00542033:
          iVar5 = 1;
        }
      }
      else {
        if (*(int *)(iVar5 + 0x2e0) != 8) goto LAB_00542033;
        iVar5 = 0;
      }
      uVar3 = FUN_004340b0(param_1,&param_2,iVar5);
      FUN_00524a00(param_1 + 0x158);
      if (-1 < (int)uVar3) {
        iVar1 = *(int *)(param_1 + 0x1ffc0);
        if (iVar2 != iVar1) {
          if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x2e0) != 8) == uVar3)) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x1ffc0) + 0x154) + 0xdc))
                      (*(int *)(param_1 + 0x1ffc0),1);
            *(uint *)(param_1 + 0x1ffc0) = 0;
          }
          if (*(int *)(param_1 + 0x1ffac) != 0) {
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2e0) == 8)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            if (((uVar4 == uVar3) && (*(int *)(param_1 + 0x1ffc0) = iVar2, iVar2 != 0)) &&
               ((**(code **)(*(int *)(iVar2 + 0x154) + 0xdc))(iVar2,2),
               *(int *)(*(int *)(param_1 + 0x1ffc0) + 0x2e0) == 8)) {
              FUN_005247c0(param_1 + 0x158,6,1);
            }
          }
        }
        FUN_00434610(param_1,iVar5);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}
