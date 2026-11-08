// Name: FUN_00548230
// Address: 00548230
// Address Range: [[00548230, 00548344]]
// Convention: unknown
// Signature: undefined4 * FUN_00548230(int param_1)

#include "nocturne.h"

uint * FUN_00548230(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = FUN_005a30d7(param_1 + 0x2290,100,&DAT_005db0f0);
  iVar2 = FUN_005a30d7(iVar2 + 0x4bc,100,&DAT_005e2c40);
  puVar1 = (uint *)(iVar2 + -0x274c);
  puVar3 = puVar1;
  do {
    puVar4 = puVar3 + 1;
    puVar3[0x10] = 0;
    puVar3[0x15] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x24] = 0;
    puVar3[0x29] = 0;
    puVar3[0xb] = 0;
    puVar3 = puVar4;
  } while (puVar4 != (uint *)(iVar2 + -0x2738));
  *(uint *)(iVar2 + -0x2694) = 0;
  *(uint *)(iVar2 + -0x2690) = 0;
  FUN_005a28f0(iVar2 + -0x268c,0,0xb40);
  *(uint *)(iVar2 + -0x1b4c) = 0;
  FUN_005a28f0(iVar2 + -0x1b48,0,0x1680);
  *(byte *)(iVar2 + 0xe10) = 0;
  *(uint *)(iVar2 + 0xe60) = 0;
  *(uint *)(iVar2 + -0x4c0) = 0x3f800000;
  *puVar1 = 0;
  *(uint *)(iVar2 + -0x4c4) = *(uint *)(iVar2 + -0x4c0);
  *(uint *)(iVar2 + -0x4c8) = *(uint *)(iVar2 + -0x4c4);
  FUN_005a28f0(iVar2 + -0x2748,0,0x28);
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -8) = *(uint *)(iVar2 + -4);
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(byte *)(iVar2 + 0xe64) = 0;
  return puVar1;
}
