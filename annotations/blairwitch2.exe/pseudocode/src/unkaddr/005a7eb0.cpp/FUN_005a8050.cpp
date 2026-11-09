// Name: unkaddr_005a7eb0.cpp_FUN_005a8050
// Address: 005a8050
// Address Range: [[005a8050, 005a80cc]]
// Convention: unknown
// Signature: void unkaddr_005a7eb0_cpp_FUN_005a8050(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void unkaddr_005a7eb0_cpp_FUN_005a8050(uint *param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[5] == 0) {
    param_1[5] = param_2;
    iVar2 = 0;
    pvVar1 = FUN_005b8580(param_1[6] * 0x60);
    param_1[0xf] = pvVar1;
    if (0 < (int)param_1[6]) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        unkafter_superopt_cpp_FUN_005a84c0(param_1[0xf] + iVar3);
        iVar3 = iVar3 + 0x60;
      } while (iVar2 < (int)param_1[6]);
    }
    iVar2 = param_1[5];
    if (param_1 != (uint *)(iVar2 + 0x20)) {
      *param_1 = *(uint *)(iVar2 + 0x20);
      param_1[1] = *(uint *)(iVar2 + 0x24);
      param_1[2] = *(uint *)(iVar2 + 0x28);
    }
    param_1[4] = 0;
    return;
  }
  return;
}
