// Name: FUN_004f7690
// Address: 004f7690
// Address Range: [[004f7690, 004f8b6c]]
// Convention: unknown
// Signature: undefined4 FUN_004f7690(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f7690(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char acStack_334 [256];
  char acStack_234 [256];
  char acStack_134 [256];
  char *pcStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar11 = 0;
  if (99 < *(int *)(param_1 + 0x10)) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)(param_2 + 0x154) + 0x94))(param_2);
  if (iVar3 != *(int *)(param_1 + 4)) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x8c))(param_2,0);
    if (*(int *)(param_1 + 4) != 0) {
      (**(code **)(*(int *)(param_2 + 0x154) + 0x88))(param_2,*(int *)(param_1 + 4));
    }
  }
  pcVar9 = acStack_334;
  if (((*(int *)(param_1 + 4) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) && (param_3 != 0)) &&
     (*(int *)(0x01CCF390 + 0x244) == 0)) {
    pcStack_34 = (char *)FUN_004f62e0(param_2);
    FUN_004f6350(param_2);
    iVar3 = FUN_0040c600(param_2,DAT_007c33a4);
    pcVar4 = (char *)FUN_00531090("You've found : ");
    do {
      cVar1 = *pcVar4;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (iVar3 != 0) {
      FUN_005bfb40(acStack_234,&DAT_005e61e7,*(uint *)(iVar3 + 0x314));
      pcVar9 = acStack_234;
      iVar3 = -1;
      pcVar4 = acStack_334;
      do {
        pcVar10 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar4 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = -1;
    pcVar9 = acStack_334;
    do {
      pcVar4 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar4 = pcVar9 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + -1;
    pcVar9 = pcStack_34;
    do {
      cVar1 = *pcVar9;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    acStack_134[0] = '\0';
    iVar3 = FUN_0040c550(param_2,"CHealthItem");
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_00531090("Press ");
      pcVar9 = acStack_134;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x98));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" and ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x9c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x4c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to use this item to restore some health.");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = FUN_0040c550(param_2,"CGasMask");
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_00531090("Press ");
      pcVar9 = acStack_134;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x98));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" and ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x9c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x4c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to put on and off the goggles.");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = FUN_0040c550(param_2,"CGoggles");
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_00531090("Press ");
      pcVar9 = acStack_134;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x98));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" and ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x9c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x4c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to put on and off the goggles.");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = FUN_0040c550(param_2,"CKeyActor");
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_00531090("With your guns put away, press ");
      pcVar9 = acStack_134;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x48));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to open a previously locked door.");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = FUN_0040c550(param_2,"CBoxActor");
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_00531090("Press ");
      pcVar9 = acStack_134;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x98));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" and ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x9c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x4c));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" to use this item.");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = FUN_0040c550(param_2,"CAmmo");
    if (iVar3 != 0) {
      iVar3 = FUN_0040c600(param_2,DAT_007c33a4);
      iVar3 = FUN_0040c2b0(iVar3 + 0x2d4);
      pcVar4 = (char *)FUN_00531090("This ammo is for your ");
      pcVar9 = acStack_134;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_004f62e0(iVar3);
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(".  Select your ");
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_004f62e0(iVar3);
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" with ");
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x90));
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" and ");
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x94));
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(&DAT_005e63f3);
      iVar7 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0xd0))(iVar3,2);
      }
    }
    iVar3 = FUN_0040c550(param_2,"CWeapon");
    if (iVar3 != 0) {
      uVar5 = FUN_0040c600(param_2,_DAT_02c99770);
      pcVar4 = (char *)FUN_00531090("Select your ");
      pcVar9 = acStack_134;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_004f62e0(uVar5);
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" with ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x90));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(" and ");
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_0050d220(*(uint *)(0x01CCF390 + 0x94));
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00531090(&DAT_005e6417);
      iVar3 = -1;
      pcVar9 = acStack_134;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    FUN_004cc190(0x01CCF390,acStack_334,0x41200000);
    pcVar9 = acStack_134;
    pcVar4 = (char *)(param_1 + 0x354);
    do {
      cVar1 = *pcVar9;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    iStack_14 = FUN_004c3ea0(_DAT_0152d248,(char *)(param_1 + 0x354));
    *(float *)(param_1 + 0x34c) = (float)iStack_14 * (float)_DAT_005e6540;
  }
  iStack_24 = FUN_0040c600(param_2,DAT_007c33a4);
  if (iStack_24 != 0) {
    iVar3 = iStack_24 + 0x2d4;
    iVar8 = 0;
    FUN_0040ddd0(iStack_24,iVar3);
    iVar7 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iStack_2c = iVar3;
        iVar3 = FUN_0040c600(*(uint *)(iVar7 + 0x14),DAT_007c33a4);
        if (((iVar3 != 0) && (iVar6 = FUN_005c0f80(iStack_2c,iVar3 + 0x2d4), iVar6 == 0)) &&
           (*(int *)(iVar3 + 0x318) == *(int *)(iStack_24 + 0x318))) {
          *(int *)(iVar3 + 0x314) = *(int *)(iVar3 + 0x314) + *(int *)(iStack_24 + 0x314);
          FUN_00445430(PTR_DAT_00611100,"Found existing ammo, but no weapon\n");
          FUN_0051b740(0x01D2C900,param_2,1);
          return 1;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 4;
        iVar3 = iStack_2c;
      } while (iVar8 < *(int *)(param_1 + 0x10));
    }
    iVar7 = 0;
    iVar8 = iStack_24 + 0x2d4;
    iStack_30 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar6 = FUN_0040c600(*(uint *)(iVar3 + 0x14),_DAT_02c99770);
        if (iVar6 != 0) {
          uVar5 = FUN_00408830(iVar6);
          iVar6 = FUN_005c04e0(iVar8,uVar5);
          if (iVar6 == 0) goto LAB_004f84d6;
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    if (iStack_30 != 0) {
LAB_004f84d6:
      iStack_28 = iStack_24 + 0x2d4;
      iVar7 = 0;
      iVar3 = param_1;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          iVar8 = FUN_0040c600(*(uint *)(iVar3 + 0x14),_DAT_02c99770);
          if (iVar8 != 0) {
            uVar5 = FUN_00408830(iVar8);
            iVar6 = FUN_005c04e0(iStack_28,uVar5);
            uVar5 = _DAT_02c8ad44;
            if ((iVar6 == 0) && (*(int *)(iVar8 + 0x56c) == *(int *)(iStack_24 + 0x318))) {
              *(int *)(iVar8 + 0x568) = *(int *)(iVar8 + 0x568) + *(int *)(iStack_24 + 0x314);
              iVar3 = FUN_0040c600(iVar8,uVar5);
              if ((iVar3 != 0) && (200 < *(int *)(iVar3 + 0x568))) {
                *(uint *)(iVar3 + 0x568) = 200;
              }
              FUN_0051b740(0x01D2C900,param_2,1);
              FUN_00445430(PTR_DAT_00611100,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar7 < *(int *)(param_1 + 0x10));
      }
      iVar3 = FUN_0040c2b0(iStack_28);
      FUN_0051bd60(0x01D2C900,iVar3);
      (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
      *(uint *)(iVar3 + 0x568) = *(uint *)(iStack_24 + 0x314);
      *(uint *)(iVar3 + 0x56c) = *(uint *)(iStack_24 + 0x318);
      (**(code **)(*(int *)(iVar3 + 0x154) + 0x88))(iVar3,*(uint *)(param_1 + 4));
      *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = iVar3;
      uVar5 = 0x01D2C900;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_0051b740(uVar5,param_2,1);
      FUN_00445430(PTR_DAT_00611100,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar3 = FUN_005c0f80(iVar8,"CDynamite");
    if (iVar3 == 0) {
      iVar3 = FUN_0040c2b0("CDynamite");
      FUN_0051bd60(0x01D2C900,iVar3);
      (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
      *(uint *)(iVar3 + 0x568) = *(uint *)(iStack_24 + 0x314);
      (**(code **)(*(int *)(iVar3 + 0x154) + 0x88))(iVar3,*(uint *)(param_1 + 4));
      FUN_00408560(param_2);
      FUN_00445430(PTR_DAT_00611100,"Found dynamite.  Creating weapon for it.\n");
      FUN_004f7690(param_1,iVar3,1);
      return 1;
    }
  }
  iVar3 = FUN_0040c600(param_2,_DAT_02c99770);
  if (iVar3 != 0) {
    iVar7 = FUN_0040c600(iVar3,_DAT_01d1e2dc);
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
      uVar5 = 0x01D2C900;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_0051b740(uVar5,param_2,0);
      (**(code **)(*(int *)(param_2 + 0x154) + 0x6c))(param_2,param_1);
      return 1;
    }
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iStack_20 = param_1;
      do {
        iVar8 = FUN_0040c600(*(uint *)(iStack_20 + 0x14),_DAT_02c99770);
        if (iVar8 != 0) {
          uVar5 = FUN_00408830(iVar8);
          uVar5 = FUN_00408830(iVar3,uVar5);
          iVar6 = FUN_005c0f80(uVar5);
          uVar5 = _DAT_02c8ad44;
          if ((iVar6 == 0) && (*(int *)(iVar8 + 0x56c) == *(int *)(iVar3 + 0x56c))) {
            *(int *)(iVar8 + 0x568) = *(int *)(iVar8 + 0x568) + *(int *)(iVar3 + 0x568);
            iVar3 = FUN_0040c600(iVar8,uVar5);
            if ((iVar3 != 0) && (200 < *(int *)(iVar3 + 0x568))) {
              *(uint *)(iVar3 + 0x568) = 200;
            }
            FUN_00445430(PTR_DAT_00611100,"Found same weapon, increasing ammoCount\n");
            FUN_0051b740(0x01D2C900,param_2,1);
            return 1;
          }
        }
        iVar7 = iVar7 + 1;
        iStack_20 = iStack_20 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    bVar2 = false;
    iStack_1c = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iStack_18 = param_1;
      do {
        iVar7 = FUN_0040c600(*(uint *)(iStack_18 + 0x14),DAT_007c33a4);
        if (iVar7 != 0) {
          uVar5 = FUN_00408830(iVar3);
          iVar8 = FUN_005c0f80(iVar7 + 0x2d4,uVar5);
          if (iVar8 == 0) {
            uVar5 = FUN_00408830(iVar3);
            iVar8 = FUN_0040c2b0(uVar5);
            FUN_0051bd60(0x01D2C900,iVar8);
            (*(code *)**(uint **)(iVar8 + 0x154))(iVar8);
            *(uint *)(iVar8 + 0x568) = *(uint *)(iVar7 + 0x314);
            *(uint *)(iVar8 + 0x56c) = *(uint *)(iVar7 + 0x318);
            (**(code **)(*(int *)(iVar8 + 0x154) + 0x88))(iVar8,*(uint *)(param_1 + 4));
            (**(code **)(*(int *)(iVar8 + 0x154) + 0x6c))(iVar8,param_1);
            FUN_00408560(*(uint *)(iStack_18 + 0x14));
            *(int *)(iStack_18 + 0x14) = iVar8;
            uVar5 = FUN_00408830(iVar3);
            bVar2 = true;
            FUN_00445430(PTR_DAT_00611100,"Converting existing ammo for %s to weapon\n",uVar5);
          }
        }
        iStack_18 = iStack_18 + 4;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < *(int *)(param_1 + 0x10));
    }
    if (bVar2) {
      FUN_0051b740(0x01D2C900,iVar3,1);
      return 1;
    }
  }
  *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (*(int *)(param_1 + 0x460) == 0) {
    uVar5 = FUN_0040c600(param_2,_DAT_01cd0e38);
    *(uint *)(param_1 + 0x460) = uVar5;
  }
  if (*(int *)(param_1 + 0x45c) == 0) {
    uVar5 = FUN_0040c600(param_2,_DAT_01cd0d40);
    *(uint *)(param_1 + 0x45c) = uVar5;
  }
  FUN_0051b1d0(0x01D2C900,param_2);
  (**(code **)(*(int *)(param_2 + 0x154) + 0x6c))(param_2,param_1);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x338) == 0)) {
    FUN_004f8dc0(param_1,iVar3,5,1);
  }
  return 1;
}
