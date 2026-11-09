// Name: support_trstream.cpp_FUN_005a1300
// Address: 005a1300
// Address Range: [[005a1300, 005a135e]]
// Convention: unknown
// Signature: uint support_trstream_cpp_FUN_005a1300(int param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint support_trstream_cpp_FUN_005a1300(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
    if ((int)uVar1 < (int)param_3) {
      param_3 = uVar1;
    }
    puVar2 = (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(byte *)param_2 = *(byte *)puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
      param_2 = (uint *)((int)param_2 + 1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
    return param_3;
  }
  return 0xffffffff;
}
