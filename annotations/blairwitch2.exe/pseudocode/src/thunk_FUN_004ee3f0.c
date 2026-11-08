// Name: thunk_FUN_004ee3f0
// Address: 004e46b0
// Address Range: [[004e46b0, 004e46b4]]
// Convention: unknown
// Signature: int thunk_FUN_004ee3f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_004ee3f0(void)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uStack_10;
  uint uStack_c;
  int iStack_8;
  
  puVar2 = 0x01CB6900;
  if (DAT_006141bc < 0x1e0) {
    return 1;
  }
  if ((_DAT_0264bba0 == 0) && (0x1e0 < (int)0x01CB6900[1])) {
    0x01CB6900[1] = 0x1e0;
    *puVar2 = 0x280;
  }
  iVar6 = 0x1d05580;
  iVar7 = 0;
  do {
    FUN_0040d5a0(iVar6,*(uint *)((int)&PTR_s_f0100_00618088 + iVar7),0x40,0x40);
    iVar7 = iVar7 + 4;
    FUN_0040dbd0(iVar6,2,1);
    iVar6 = iVar6 + 0x14;
  } while (iVar7 != 0x20);
  FUN_0040d5a0(0x1d060f0,"fblurl",0x68,0x46);
  FUN_0040d5a0(0x1d06104,"fblurm",0x20,0x46);
  FUN_0040d5a0(0x1d06118,"fblurr",0x68,0x46);
  iVar6 = 0;
  FUN_004032b0();
  FUN_00575010();
  uStack_10 = 0;
  FUN_005023e0(0x1d05620);
  iStack_8 = 1;
  FUN_004b3000(0x01CB6900);
  do {
    FUN_004b3010(0x01CB6900);
    iVar7 = 0x01E661B8;
    uStack_c = 0x01CB6900[0xa1];
    *(uint *)(0x01E661B8 + 0x15ae84) = 1;
    FUN_005344c0(iVar7,50000,50000,0x10000);
    *(uint *)(0x01E661B8 + 0x15ae94) = 0xdac;
    FUN_005024a0(0x1d05620,uStack_c);
    FUN_00502510(0x1d05620);
    *(uint *)(0x01E661B8 + 0x15ae84) = 0;
    pcVar3 = (char *)FUN_0050fe80("S T A R T");
    pcVar8 = &DAT_01d082e0;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_0050fe80("O P T I O N S");
    pcVar8 = &DAT_01d083e0;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_0050fe80("L O A D");
    pcVar8 = &DAT_01d084e0;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_01d085e0;
    pcVar3 = (char *)FUN_0050fe80("Q U I T");
    puVar5 = &DAT_01d082e0;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar7 = 0;
    do {
      *(byte **)(iVar7 + 0x1d086e0) = puVar5;
      iVar7 = iVar7 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar7 != 0x10);
    uVar4 = FUN_004eb0e0(0x1d086e0,4,&uStack_10,0x136,0);
    if (iStack_8 != 0) {
      FUN_0055b1f0();
    }
    FUN_00589560();
    switch(uVar4) {
    case 0:
      FUN_00502450(0x1d05620);
      FUN_0055adb0(0x0264B290);
      iVar7 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
      if ((iVar7 == 0) || (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar7 == 0)) {
        iVar7 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
        if (iVar7 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 2;
      }
      FUN_004bc840(0x01CB6900,uVar4);
      FUN_004032b0();
      FUN_00575010();
      FUN_005023e0(0x1d05620);
      goto LAB_004ee6cc;
    case 1:
      FUN_004ee1a0(0);
      break;
    case 2:
      FUN_00502450(0x1d05620);
      FUN_0055adb0(0x0264B290);
      FUN_004bbf70(0x01CB6900,0,1);
      FUN_004032b0();
      FUN_00575010();
      FUN_005023e0(0x1d05620);
LAB_004ee6cc:
      FUN_0055ac50(0x0264B290);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
    if (iVar7 != 0) {
      iVar6 = 99;
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if ((iVar7 != 0) && (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x32), iVar7 != 0)) {
      iVar7 = FUN_00550bc0();
      FUN_00550bd0(iVar7 == 0);
      FUN_0055ac50(0x0264B290);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if ((iVar7 != 0) &&
       ((iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x20), iVar7 != 0 ||
        (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x26), iVar7 != 0)))) {
      FUN_0055adb0(0x0264B290);
      FUN_004e45e0();
      FUN_0055ac50(0x0264B290);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if (iVar7 != 0) {
      (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x21);
    }
    if (iStack_8 != 0) {
      iStack_8 = 0;
      FUN_0055ac50(0x0264B290);
      FUN_004032b0();
    }
    if (iVar6 != 0) {
      FUN_0055adb0(0x0264B290);
      FUN_00502450(0x1d05620);
      return iVar6;
    }
  } while( true );
}
