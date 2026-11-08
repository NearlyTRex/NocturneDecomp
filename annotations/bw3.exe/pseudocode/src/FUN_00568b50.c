// Name: FUN_00568b50
// Address: 00568b50
// Address Range: [[00568b50, 00568c0a]]
// Convention: unknown
// Signature: undefined4 FUN_00568b50(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_00568b50(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1014 [1012];
  uint uStack_2c;
  uint uStack_20;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar3 = 0;
  iVar1 = FUN_0057b880(param_1);
  if (iVar1 == 0) {
    FUN_005609d0(0x02CF5680,param_1,"wp_nomana.wav",param_1 + 0x20);
    *(uint *)(param_1 + 0x300) = 0x3f800000;
    uVar2 = 0;
  }
  else {
    uStack_10 = 0xc1200000;
    uStack_c = 0x41200000;
    uStack_14 = 0;
    if (*(int *)(param_1 + 0x304) != 0) {
      FUN_00408b00(*(uint *)(param_1 + 0x304),&stack0xffffffec);
      uStack_20 = uStack_2c;
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      FUN_004a3a00(0x01C73654,param_1 + 0x20,*(int *)(param_1 + 0x304) + 0x30,&stack0xffffffe0);
    }
    uVar2 = 1;
    *(uint *)(param_1 + 0x300) = 0x40a00000;
  }
  return uVar2;
}
