// Name: FUN_00568bb0
// Address: 00568bb0
// Address Range: [[00568bb0, 00568cdd]]
// Convention: unknown
// Signature: void FUN_00568bb0(void)

#include "nocturne.h"

void FUN_00568bb0(void)

{
  uint *puVar1;
  byte *pbVar2;
  uint *in_EAX;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  uint *puVar7;
  
  if (in_EAX == (uint *)0x0) {
    return;
  }
  puVar1 = in_EAX + -1;
  if ((*puVar1 & 1) == 0) {
    return;
  }
  uVar6 = *puVar1 & 0xfffffffe;
  pbVar2 = (byte *)((int)puVar1 + uVar6);
  if ((*pbVar2 & 1) == 0) {
    *puVar1 = uVar6 + *(int *)pbVar2;
    if (pbVar2 == *(byte **)(unaff_EBX + 0xc)) {
      *(uint **)(unaff_EBX + 0xc) = puVar1;
    }
    uVar6 = *(uint *)(pbVar2 + 4);
    puVar4 = *(uint **)(pbVar2 + 8);
    *(uint **)(uVar6 + 8) = puVar4;
    puVar4[1] = uVar6;
    *(int *)(unaff_EBX + 0x1c) = *(int *)(unaff_EBX + 0x1c) + -1;
  }
  else {
    *puVar1 = uVar6;
    puVar4 = *(uint **)(unaff_EBX + 0xc);
    if (puVar1 < puVar4) {
      if (((uint *)puVar4[1] < puVar1) || (puVar4 = *(uint **)(unaff_EBX + 0x28), puVar1 < puVar4))
      goto LAB_00568c8e;
    }
    else {
      puVar4 = (uint *)puVar4[2];
      if ((puVar1 < puVar4) ||
         (puVar4 = (uint *)(unaff_EBX + 0x20), *(uint **)(unaff_EBX + 0x24) < puVar1))
      goto LAB_00568c8e;
    }
    uVar6 = *(uint *)(unaff_EBX + 0x1c);
    uVar3 = *(uint *)(unaff_EBX + 0x18) / (uVar6 + 1);
    if (uVar3 < uVar6) {
      iVar5 = uVar3 * 2;
      if (*(int *)(unaff_EBX + 0x18) - uVar6 <= uVar6) {
        iVar5 = -1;
      }
      puVar4 = (uint *)(*puVar1 + (int)puVar1);
      do {
        uVar6 = *puVar4;
        if ((uVar6 & 1) == 0) goto LAB_00568c8e;
        if (uVar6 == 0xffffffff) break;
        puVar4 = (uint *)((int)puVar4 + (uVar6 & 0xfffffffe));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar4 = *(uint **)(unaff_EBX + 0xc);
    if (puVar1 < puVar4) {
      puVar4 = *(uint **)(unaff_EBX + 0x28);
    }
    while (((puVar4 <= puVar1 && (puVar4 = (uint *)puVar4[2], puVar4 <= puVar1)) &&
           (puVar4 = (uint *)puVar4[2], puVar4 <= puVar1))) {
      puVar4 = (uint *)puVar4[2];
    }
  }
LAB_00568c8e:
  puVar7 = (uint *)puVar4[1];
  uVar6 = *puVar1;
  if ((uint *)(*puVar7 + (int)puVar7) == puVar1) {
    uVar6 = uVar6 + *puVar7;
    *puVar7 = uVar6;
    if (puVar1 == *(uint **)(unaff_EBX + 0xc)) {
      *(uint **)(unaff_EBX + 0xc) = puVar7;
    }
  }
  else {
    *(int *)(unaff_EBX + 0x1c) = *(int *)(unaff_EBX + 0x1c) + 1;
    in_EAX[1] = puVar4;
    *in_EAX = puVar7;
    puVar7[2] = (uint)puVar1;
    puVar4[1] = (uint)puVar1;
    puVar7 = puVar1;
  }
  *(int *)(unaff_EBX + 0x18) = *(int *)(unaff_EBX + 0x18) + -1;
  if ((puVar7 < *(uint **)(unaff_EBX + 0xc)) && (*(uint *)(unaff_EBX + 0x10) < uVar6)) {
    *(uint *)(unaff_EBX + 0x10) = uVar6;
  }
  if (*(uint *)(unaff_EBX + 0x14) < uVar6) {
    *(uint *)(unaff_EBX + 0x14) = uVar6;
  }
  return;
}
