// Name: FUN_004ca540
// Address: 004ca540
// Address Range: [[004ca540, 004ca641]]
// Convention: unknown
// Signature: void FUN_004ca540(int param_1)

#include "nocturne.h"

void FUN_004ca540(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  int iStack_c;
  
  bVar4 = 0;
  if (*(int *)(0x01D182F0 + 0x1008) == 0) {
    fVar5 = (float10)*(float *)(param_1 + 0x430);
    uVar2 = FUN_005b7ff0();
    iStack_c = (int)ROUND(fVar5);
    iVar1 = FUN_0044fd20(uVar2);
    puVar3 = (uint *)(*(int *)(iVar1 + 0x350) + iStack_c * 0x18);
    if (&uStack_24 != puVar3) {
      uStack_24 = *puVar3;
      uStack_20 = puVar3[1];
      uStack_1c = puVar3[2];
    }
    if (&uStack_18 != puVar3 + 3) {
      uStack_18 = puVar3[3];
      uStack_14 = puVar3[4];
      uStack_10 = puVar3[5];
      puVar3 = &uStack_24;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *unaff_ESI = *puVar3;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
      }
      return;
    }
  }
  else {
    iVar1 = FUN_0044fd20(param_1 + 0x2b4);
    if (&uStack_24 != (uint *)(iVar1 + 0x338)) {
      uStack_24 = *(uint *)(iVar1 + 0x338);
      uStack_20 = *(uint *)(iVar1 + 0x33c);
      uStack_1c = *(uint *)(iVar1 + 0x340);
    }
    if (&uStack_18 != (uint *)(iVar1 + 0x344)) {
      uStack_18 = *(uint *)(iVar1 + 0x344);
      uStack_14 = *(uint *)(iVar1 + 0x348);
      uStack_10 = *(uint *)(iVar1 + 0x34c);
    }
  }
  puVar3 = &uStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
