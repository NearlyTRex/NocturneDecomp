// Name: FUN_0054b320
// Address: 0054b320
// Address Range: [[0054b320, 0054b39f]]
// Convention: unknown
// Signature: void FUN_0054b320(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0054b320(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_d0 [50];
  
  puVar4 = &DAT_00622ae0;
  puVar1 = local_d0;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  FUN_005c04b0(param_1,"\"%[^\"]\"\n",local_d0);
  iVar3 = FUN_005c04e0(local_d0,"(none)");
  if (iVar3 == 0) {
    *param_2 = 0;
    return;
  }
  uVar2 = FUN_0051b6c0(0x01D2C900,local_d0);
  *param_2 = uVar2;
  return;
}
