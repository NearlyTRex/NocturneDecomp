// Name: FUN_0052a010
// Address: 0052a010
// Address Range: [[0052a010, 0052a08f]]
// Convention: unknown
// Signature: void FUN_0052a010(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0052a010(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_d0 [50];
  
  puVar4 = &DAT_0061b470;
  puVar1 = local_d0;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  FUN_005b8100(param_1,"\"%[^\"]\"\n",local_d0);
  iVar3 = FUN_005b8130(local_d0,"(none)");
  if (iVar3 == 0) {
    *param_2 = 0;
    return;
  }
  uVar2 = FUN_004fc740(0x01D182F0,local_d0);
  *param_2 = uVar2;
  return;
}
