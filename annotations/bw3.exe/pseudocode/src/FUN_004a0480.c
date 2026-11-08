// Name: FUN_004a0480
// Address: 004a0480
// Address Range: [[004a0480, 004a056e]]
// Convention: unknown
// Signature: void FUN_004a0480(undefined4 *param_1)

#include "nocturne.h"

void FUN_004a0480(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  piVar1 = 0x02D0C1A0;
  iVar3 = *0x02D0C1A0;
  param_1[1] = iVar3;
  if (iVar3 == 0) {
    iVar3 = *(int *)(0x01ED78C8 + 0x15aeb8) * 0x1a4 + 0x01ED78C8;
    if (&local_14 != (uint *)(iVar3 + 0x104)) {
      local_14 = *(uint *)(iVar3 + 0x104);
      local_10 = *(uint *)(iVar3 + 0x108);
      local_c = *(uint *)(iVar3 + 0x10c);
    }
    iVar3 = *(int *)(0x01ED78C8 + 0x15aeb8) * 0x1a4 + 0x01ED78C8;
    if (&local_20 != (uint *)(iVar3 + 0x110)) {
      local_20 = *(uint *)(iVar3 + 0x110);
      local_1c = *(uint *)(iVar3 + 0x114);
      local_18 = *(uint *)(iVar3 + 0x118);
    }
    FUN_0057d050(0x02D0C1A0,5);
    FUN_0057d1a0(0x02D0C1A0,&local_14,&local_20);
  }
  else {
    FUN_0057d050(piVar1,5);
  }
  uVar2 = 0x02CF5680;
  *param_1 = 0x40a00000;
  uVar2 = FUN_005609d0(uVar2,param_1,"@wp_storm.wav" + 1,&stack0x00000008);
  param_1[2] = uVar2;
  return;
}
