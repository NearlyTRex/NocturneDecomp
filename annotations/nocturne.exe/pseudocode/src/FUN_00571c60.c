// Name: FUN_00571c60
// Address: 00571c60
// Address Range: [[00571c60, 00571cc5]]
// Convention: unknown
// Signature: uint FUN_00571c60(int *param_1)

#include "nocturne.h"

uint FUN_00571c60(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0056ce57(param_1,1);
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
  FUN_0056b327((int)param_1 + *(int *)(*param_1 + 4),4);
  return 0xffffffff;
}
