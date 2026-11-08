// Name: FUN_0045dc40
// Address: 0045dc40
// Address Range: [[0045dc40, 0045dd2a]]
// Convention: unknown
// Signature: int FUN_0045dc40(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_0045dc40(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    FUN_00436710(PTR_DAT_00609ed0,"?CDoc::startGettingGrabbed by %s, type %d\n" + 1,param_2,param_3);
    uVar1 = FUN_005035c0(param_1 + 0x2b4);
    FUN_00436710(PTR_DAT_00609ed0,"  current motion is %s\n",uVar1);
    if ((((*(int *)(param_1 + 0x25608) == 0) && (*(int *)(param_1 + 0x25604) == 0)) &&
        (*(int *)(param_1 + 0x25610) == 0)) &&
       ((*(int *)(param_1 + 0x256a4) == 0 || (*(int *)(param_1 + 0x256a4) == 3)))) {
      iVar2 = FUN_004cea50(param_1,param_2,param_3);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x25698) != *(int *)(param_1 + 0x2620)) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
        }
        if (*(int *)(param_1 + 0x25698) != *(int *)(param_1 + 0x2698)) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
        }
        *(uint *)(param_1 + 0x2573c) = 0;
      }
      return iVar2;
    }
  }
  return 0;
}
