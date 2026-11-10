// Name: crt_unknown.c_FUN_005c5f03
// Address: 005c5f03
// Address Range: [[005c5f03, 005c5f68]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005c5f03(int *param_1)

#include "nocturne.h"

uint FUN_005c5f03(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005c0c9f(param_1,1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  if (*(byte **)(iVar1 + 0x14) < *(byte **)(iVar1 + 0x10)) {
    uVar2 = (uint)**(byte **)(iVar1 + 0x14);
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))(iVar1);
  }
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  FUN_005c0b85((int)param_1 + *(int *)(*param_1 + 4),4);
  return 0xffffffff;
}
