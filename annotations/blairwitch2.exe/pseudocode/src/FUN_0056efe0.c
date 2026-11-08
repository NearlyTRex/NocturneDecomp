// Name: FUN_0056efe0
// Address: 0056efe0
// Address Range: [[0056efe0, 0056f082]]
// Convention: unknown
// Signature: int FUN_0056efe0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_0056efe0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x25608) == 0) && (*(int *)(param_1 + 0x25604) == 0)) &&
     ((*(int *)(param_1 + 0x256a4) == 0 || (*(int *)(param_1 + 0x256a4) == 3)))) {
    iVar1 = FUN_004cea50(param_1,param_2,param_3);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x25698) != *(int *)(param_1 + 0x2620)) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
      }
      if (*(int *)(param_1 + 0x25698) != *(int *)(param_1 + 0x2698)) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
      }
      *(uint *)(param_1 + 0x25740) = 0;
    }
    return iVar1;
  }
  return 0;
}
