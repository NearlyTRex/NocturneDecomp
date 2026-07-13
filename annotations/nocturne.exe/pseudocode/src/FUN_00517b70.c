// Name: FUN_00517b70
// Address: 00517b70
// Address Range: [[00517b70, 00517c7d]]
// Convention: unknown
// Signature: undefined4 * FUN_00517b70(int param_1)

#include "nocturne.h"

uint * FUN_00517b70(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = FUN_005644a7(param_1 + 0x1750,100,&DAT_005993b0);
  iVar2 = FUN_005644a7(iVar2 + 0x4bc,100,&DAT_005993f0);
  puVar1 = (uint *)(iVar2 + -0x1c0c);
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
  } while (puVar4 != (uint *)(iVar2 + -0x1bf8));
  *(uint *)(iVar2 + -0x1b54) = 0;
  *(uint *)(iVar2 + -0x1b50) = 0;
  FUN_00563cc0(iVar2 + -0x1b4c,0,0xb40);
  *(uint *)(iVar2 + -0x100c) = 0;
  FUN_00563cc0(iVar2 + -0x1008,0,0xb40);
  *(byte *)(iVar2 + 0xe10) = 0;
  *(uint *)(iVar2 + 0xe60) = 0;
  *(uint *)(iVar2 + -0x4c0) = 0x3f800000;
  *puVar1 = 0;
  *(uint *)(iVar2 + -0x4c4) = *(uint *)(iVar2 + -0x4c0);
  *(uint *)(iVar2 + -0x4c8) = *(uint *)(iVar2 + -0x4c4);
  FUN_00563cc0(iVar2 + -0x1c08,0,0x28);
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -8) = *(uint *)(iVar2 + -4);
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  return puVar1;
}
