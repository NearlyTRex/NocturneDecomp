// Name: FUN_0049c3e0
// Address: 0049c3e0
// Address Range: [[0049c3e0, 0049c465]]
// Convention: unknown
// Signature: void FUN_0049c3e0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0049c3e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x1ac) <= param_2) && (*(int *)(param_1 + 0x1b4) <= param_2)) {
    FUN_00499830(param_1,param_2,param_3);
    return;
  }
  for (; param_2 < param_3; param_3 = param_3 + -1) {
    if (param_2 < param_3) {
      iVar3 = param_2 * 4;
      iVar2 = param_2;
      do {
        iVar1 = FUN_005c04e0(*(uint *)(iVar3 + *(int *)(param_1 + 8)),
                             *(uint *)(iVar3 + 4 + *(int *)(param_1 + 8)));
        if (0 < iVar1) {
          (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(param_1,iVar2,iVar2 + 1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < param_3);
    }
  }
  return;
}
