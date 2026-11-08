// Name: FUN_0057bb60
// Address: 0057bb60
// Address Range: [[0057bb60, 0057bd1f]]
// Convention: unknown
// Signature: int FUN_0057bb60(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_0057bb60(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int aiStackY_1048 [971];
  uint uStack_c4;
  int iStack_c0;
  uint *puStack_bc;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_98;
  uint local_60;
  uint auStack_5c [5];
  uint uStack_48;
  uint auStack_3c [3];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint auStack_20 [5];
  
  bVar4 = 0;
  puStack_bc = (uint *)0x57bb78;
  iVar1 = FUN_004a2de0();
  if ((*(int *)(param_1 + 0x57c) != 0) && (iVar1 = 0x01D2130C, *(int *)(0x01D2130C + 0xe4) != 0)
     ) {
    puStack_bc = (uint *)0x57bbad;
    iVar1 = FUN_0046d540();
    if (iVar1 == 0) {
      puStack_bc = (uint *)param_1;
      iStack_c0 = 0x57bbcd;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))();
      puStack_bc = auStack_20 + 2;
      auStack_20[2] = local_60;
      auStack_20[(uint)bVar4 * -2 + 3] = auStack_5c[(uint)bVar4 * -2];
      auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      iStack_c0 = param_1;
      uStack_c4 = 0x57bbf0;
      FUN_00408b80();
      auStack_3c[0] = auStack_5c[2];
      auStack_5c[(uint)bVar4 * -2 + 9] = auStack_5c[(uint)bVar4 * -2 + 3];
      auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      uStack_28 = *(uint *)(param_1 + 0x2e8);
      puStack_bc = auStack_5c + 0xb;
      uStack_30 = 0;
      iStack_c0 = param_1;
      uStack_2c = 0;
      uStack_c4 = 0x57bc30;
      FUN_00408b00();
      puStack_bc = (uint *)0x01ED78C8;
      uStack_24 = uStack_48;
      auStack_20[(uint)bVar4 * -2] = auStack_5c[(uint)bVar4 * -2 + 6];
      auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8];
      iStack_c0 = 0x57bc45;
      FUN_0053ebe0();
      puStack_bc = (uint *)param_1;
      iStack_c0 = 0x01ED78C8;
      uStack_c4 = 0x57bc55;
      FUN_0053ec10();
      puStack_bc = *(uint **)(param_1 + 0x304);
      if (puStack_bc != (uint *)0x0) {
        iStack_c0 = 0x01ED78C8;
        uStack_c4 = 0x57bc6f;
        FUN_0053ec10();
      }
      uStack_ac = 1;
      uStack_a8 = *(uint *)(param_1 + 0x2f4);
      uStack_a4 = *(uint *)(param_1 + 0x2f8);
      uStack_a0 = *(uint *)(param_1 + 0x2fc);
      uStack_b0 = 0;
      if (*(float *)(param_1 + 0x300) <= 0.0) {
        uStack_b4 = 0x3f800000;
      }
      else {
        uStack_b4 = 0x3f000000;
      }
      puStack_bc = (uint *)0x01ED78C8;
      uStack_98 = 1;
      iStack_c0 = 0x57bcc8;
      FUN_0053ebd0();
      puStack_bc = (uint *)0x0;
      puVar2 = &uStack_b4;
      puVar3 = (uint *)&stack0xfffffef0;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      FUN_004a2e20(0x01C73654,auStack_5c + 8,&uStack_24);
      puStack_bc = (uint *)0x01ED78C8;
      iStack_c0 = 0x57bd08;
      iVar1 = FUN_0053ebe0();
      return iVar1;
    }
  }
  return iVar1;
}
