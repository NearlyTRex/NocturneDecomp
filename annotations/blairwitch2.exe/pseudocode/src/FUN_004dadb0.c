// Name: FUN_004dadb0
// Address: 004dadb0
// Address Range: [[004dadb0, 004db759]]
// Convention: unknown
// Signature: undefined4 FUN_004dadb0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004dadb0(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  byte bVar14;
  char acStack_32c [256];
  char acStack_22c [256];
  char acStack_12c [256];
  int iStack_2c;
  char *pcStack_28;
  uint local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar14 = 0;
  local_24 = *(uint *)(param_1 + 0x468);
  if (99 < *(int *)(param_1 + 0x10)) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)(param_2 + 0x2b0) + 0x9c))(param_2);
  if (iVar3 != *(int *)(param_1 + 4)) {
    (**(code **)(*(int *)(param_2 + 0x2b0) + 0x94))(param_2,0);
    if (*(int *)(param_1 + 4) != 0) {
      (**(code **)(*(int *)(param_2 + 0x2b0) + 0x90))(param_2,*(int *)(param_1 + 4));
    }
  }
  pcVar11 = acStack_32c;
  pcVar12 = acStack_32c;
  pcVar8 = acStack_32c;
  if (((*(int *)(param_1 + 4) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) && (param_3 != 0)) &&
     (*(int *)(0x01CB6900 + 0x244) == 0)) {
    pcStack_28 = (char *)FUN_004d9f10(param_2);
    FUN_004d9f80(param_2);
    iVar3 = FUN_0040c8f0(param_2,DAT_007bc3a4);
    pcVar4 = (char *)FUN_0050fe80("You've found : ");
    pcVar9 = acStack_12c;
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
      FUN_005b7790(acStack_22c,&DAT_005db537,*(uint *)(iVar3 + 0x470));
      pcVar9 = acStack_22c;
      iVar3 = -1;
      pcVar4 = acStack_12c;
      do {
        pcVar10 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar4 + (uint)bVar14 * -2 + 1;
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
    pcVar9 = acStack_12c;
    do {
      pcVar4 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar4 = pcVar9 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + -1;
    pcVar9 = pcStack_28;
    do {
      cVar1 = *pcVar9;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    acStack_32c[0] = '\0';
    FUN_0040c840(param_2,"CHealthItem");
    iVar3 = FUN_0040c840(param_2,"CGasMask");
    if (iVar3 != 0) {
      pcVar9 = (char *)FUN_0050fe80("Press ");
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_004ee960(*(uint *)(0x01CB6900 + 0x98));
      iVar3 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar11 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_0050fe80(" and ");
      iVar3 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar11 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_004ee960(*(uint *)(0x01CB6900 + 0x9c));
      iVar3 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar11 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_0050fe80(" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar11 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_004ee960(*(uint *)(0x01CB6900 + 0x4c));
      iVar3 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar11 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_0050fe80(" to put on and off the mask.");
      iVar3 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar11 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = FUN_0040c840(param_2,"CKeyActor");
    if (iVar3 != 0) {
      pcVar11 = (char *)FUN_0050fe80("With your guns put away, press ");
      do {
        cVar1 = *pcVar11;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar11 = (char *)FUN_004ee960(*(uint *)(0x01CB6900 + 0x48));
      iVar3 = -1;
      pcVar12 = acStack_32c;
      do {
        pcVar9 = pcVar12;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar12 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar11 = (char *)FUN_0050fe80(" to open a previously locked door.");
      iVar3 = -1;
      pcVar12 = acStack_32c;
      do {
        pcVar9 = pcVar12;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar12 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    FUN_0040c840(param_2,"CBoxActor");
    FUN_0040c840(param_2,"CAmmo");
    FUN_0040c840(param_2,"CWeapon");
    FUN_004b31a0(0x01CB6900,acStack_12c,0x41200000);
    pcVar12 = (char *)(param_1 + 0x354);
    do {
      cVar1 = *pcVar8;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iStack_14 = FUN_004aaf00(_DAT_01511cc4,(char *)(param_1 + 0x354));
    *(float *)(param_1 + 0x34c) = (float)iStack_14 * (float)_DAT_005db702;
  }
  iStack_1c = FUN_0040c8f0(param_2,DAT_007bc3a4);
  if (iStack_1c != 0) {
    iVar3 = iStack_1c + 0x430;
    iVar7 = 0;
    FUN_0040e240(iStack_1c,iVar3);
    iVar13 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iStack_20 = iVar3;
        iVar3 = FUN_0040c8f0(*(uint *)(iVar13 + 0x14),DAT_007bc3a4);
        if (((*(int *)(iVar13 + 0x46c) == *(int *)(param_1 + 0x468)) && (iVar3 != 0)) &&
           ((iVar5 = FUN_005b8c30(iStack_20,iVar3 + 0x430), puVar2 = PTR_DAT_00609ed0, iVar5 == 0 &&
            (*(int *)(iVar3 + 0x474) == *(int *)(iStack_1c + 0x474))))) {
          *(int *)(iVar3 + 0x470) = *(int *)(iVar3 + 0x470) + *(int *)(iStack_1c + 0x470);
          FUN_00436710(puVar2,"Found existing ammo... adding count");
          FUN_004fc7b0(0x01D182F0,param_2,1);
          return 1;
        }
        iVar7 = iVar7 + 1;
        iVar13 = iVar13 + 4;
        iVar3 = iStack_20;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar7 = iStack_1c + 0x430;
      iVar13 = param_1;
      do {
        iVar5 = FUN_0040c8f0(*(uint *)(iVar13 + 0x14),_DAT_02661f38);
        if (iVar5 != 0) {
          uVar6 = FUN_00408a50(iVar5);
          iVar5 = FUN_005b8130(iVar7,uVar6);
          if (iVar5 == 0) break;
        }
        iVar3 = iVar3 + 1;
        iVar13 = iVar13 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    iVar3 = FUN_005b8c30(iStack_1c + 0x430,"CDynamite");
    if (iVar3 == 0) {
      iVar3 = FUN_0040c5a0("CDynamite");
      FUN_004fcda0(0x01D182F0,iVar3);
      (**(code **)(*(int *)(iVar3 + 0x2b0) + 8))(iVar3);
      *(uint *)(iVar3 + 0x6c4) = *(uint *)(iStack_1c + 0x470);
      (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x90))(iVar3,*(uint *)(param_1 + 4));
      FUN_00408730(param_2);
      FUN_00436710(PTR_DAT_00609ed0,"Found dynamite.  Creating weapon for it.\n");
      FUN_004dadb0(param_1,iVar3,1,0);
      return 1;
    }
  }
  iStack_2c = FUN_0040c8f0(param_2,_DAT_01ceded8);
  if ((iStack_2c != 0) && (iVar13 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x10))) {
    do {
      iVar7 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14),_DAT_01ceded8);
      uVar6 = 0x01D182F0;
      if ((*(int *)(iVar3 + 0x46c) == *(int *)(param_1 + 0x468)) && (iVar7 != 0)) {
        *(int *)(iVar7 + 0x430) = *(int *)(iVar7 + 0x430) + *(int *)(iStack_2c + 0x430);
        FUN_004fc7b0(uVar6,param_2,1);
        return 1;
      }
      iVar13 = iVar13 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar13 < *(int *)(param_1 + 0x10));
  }
  iStack_18 = FUN_0040c8f0(param_2,_DAT_02661f38);
  if (iStack_18 != 0) {
    iVar3 = FUN_0040c8f0(iStack_18,_DAT_01d0557c);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
      *(uint *)(param_1 + 0x46c + *(int *)(param_1 + 0x10) * 4) = local_24;
      uVar6 = 0x01D182F0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_004fc7b0(uVar6,param_2,0);
      (**(code **)(*(int *)(param_2 + 0x2b0) + 0x74))(param_2,param_1);
      return 1;
    }
    iVar13 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar7 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14),_DAT_02661f38);
        if ((*(int *)(iVar3 + 0x46c) == *(int *)(param_1 + 0x468)) && (iVar7 != 0)) {
          uVar6 = FUN_00408a50(iVar7);
          uVar6 = FUN_00408a50(iStack_18,uVar6);
          iVar5 = FUN_005b8c30(uVar6);
          uVar6 = _DAT_02653574;
          if ((iVar5 == 0) && (*(int *)(iVar7 + 0x6c8) == *(int *)(iStack_18 + 0x6c8))) {
            *(int *)(iVar7 + 0x6c4) = *(int *)(iVar7 + 0x6c4) + *(int *)(iStack_18 + 0x6c4);
            iVar3 = FUN_0040c8f0(iVar7,uVar6);
            if ((iVar3 != 0) && (200 < *(int *)(iVar3 + 0x6c4))) {
              *(uint *)(iVar3 + 0x6c4) = 200;
            }
            FUN_00436710(PTR_DAT_00609ed0,"Found same weapon, increasing ammoCount\n");
            FUN_004fc7b0(0x01D182F0,param_2,1);
            return 1;
          }
        }
        iVar13 = iVar13 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar13 < *(int *)(param_1 + 0x10));
    }
  }
  *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
  *(uint *)(param_1 + 0x46c + *(int *)(param_1 + 0x10) * 4) = *(uint *)(param_1 + 0x468)
  ;
  uVar6 = 0x01D182F0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_004fc270(uVar6,param_2);
  (**(code **)(*(int *)(param_2 + 0x2b0) + 0x74))(param_2,param_1);
  if ((iStack_18 != 0) && (*(int *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4) == 0)) {
    FUN_004db9d0(param_1,iStack_18,5,1);
  }
  return 1;
}
