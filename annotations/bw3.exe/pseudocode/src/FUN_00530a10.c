// Name: FUN_00530a10
// Address: 00530a10
// Address Range: [[00530a10, 00530a8f]]
// Convention: unknown
// Signature: void FUN_00530a10(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00530a10(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_d0 [50];
  
  puVar4 = &DAT_006039f0;
  puVar1 = local_d0;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  FUN_005a3230(param_1,"\"%[^\"]\"\n",local_d0);
  iVar3 = FUN_005a3260(local_d0,"(none)");
  if (iVar3 == 0) {
    *param_2 = 0;
    return;
  }
  uVar2 = FUN_004f6e90(0x01D81080,local_d0);
  *param_2 = uVar2;
  return;
}
