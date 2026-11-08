// Name: thunk_FUN_0050cc90
// Address: 00503290
// Address Range: [[00503290, 00503294]]
// Convention: unknown
// Signature: int thunk_FUN_0050cc90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_0050cc90(void)

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
  
  puVar2 = 0x01CCF390;
  if (DAT_0061b49c < 0x1e0) {
    return 1;
  }
  if ((_DAT_02c83370 == 0) && (0x1e0 < (int)0x01CCF390[1])) {
    0x01CCF390[1] = 0x1e0;
    *puVar2 = 0x280;
  }
  iVar7 = 0x1d1e2e0;
  iVar6 = 0;
  do {
    FUN_0040d220(iVar7,*(uint *)((int)&PTR_s_f0100_0061f570 + iVar6),0x40,0x40);
    iVar6 = iVar6 + 4;
    FUN_0040d840(iVar7,2,1);
    iVar7 = iVar7 + 0x14;
  } while (iVar6 != 0x20);
  FUN_0040d220(0x1d1ee50,"fblurl",0x68,0x46);
  FUN_0040d220(0x1d1ee64,"fblurm",0x20,0x46);
  FUN_0040d220(0x1d1ee78,"fblurr",0x68,0x46);
  iVar6 = 0;
  FUN_004032b0();
  FUN_00597c30();
  uStack_10 = 0;
  FUN_00521c50(0x1d1e380);
  iStack_8 = 1;
  FUN_004cbf10(0x01CCF390);
  do {
    FUN_004cbf20(0x01CCF390);
    iVar7 = 0x01E82168;
    uStack_c = 0x01CCF390[0xa5];
    *(uint *)(0x01E82168 + 0x15ae84) = 1;
    FUN_00555770(iVar7,50000,50000,0x10000);
    *(uint *)(0x01E82168 + 0x15ae94) = 0xdac;
    FUN_00521dd0(0x1d1e380,uStack_c);
    FUN_00521e40(0x1d1e380);
    *(uint *)(0x01E82168 + 0x15ae84) = 0;
    pcVar3 = (char *)FUN_00531090("S T A R T");
    pcVar8 = &DAT_01d21048;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_00531090("O P T I O N S");
    pcVar8 = &DAT_01d21148;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_00531090("L O A D");
    pcVar8 = &DAT_01d21248;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_01d21348;
    pcVar3 = (char *)FUN_00531090("Q U I T");
    puVar5 = &DAT_01d21048;
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
      *(byte **)(iVar7 + 0x1d21448) = puVar5;
      iVar7 = iVar7 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar7 != 0x10);
    uVar4 = FUN_00509e20(0x1d21448,4,&uStack_10,0x32,0);
    if (iStack_8 != 0) {
      FUN_0057dc40();
    }
    FUN_005acff0();
    switch(uVar4) {
    case 0:
      FUN_00521d50(0x1d1e380);
      FUN_0057d800(0x02C82A60);
      iVar7 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
      if ((iVar7 == 0) || (iVar7 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar7 == 0)) {
        iVar7 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
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
      FUN_004d7250(0x01CCF390,uVar4);
      FUN_004032b0();
      FUN_00597c30();
      FUN_00521c50(0x1d1e380);
      goto LAB_0050cf69;
    case 1:
      FUN_0050c990(0);
      break;
    case 2:
      FUN_00521d50(0x1d1e380);
      FUN_0057d800(0x02C82A60);
      FUN_004d6990(0x01CCF390,0,1);
      FUN_004032b0();
      FUN_00597c30();
      FUN_00521c50(0x1d1e380);
LAB_0050cf69:
      FUN_0057d6a0(0x02C82A60);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar7 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar7 != 0) {
      iVar6 = 99;
    }
    iVar7 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
    if ((iVar7 != 0) && (iVar7 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x32), iVar7 != 0)) {
      iVar7 = FUN_005735f0();
      FUN_00573600(iVar7 == 0);
      FUN_0057d6a0(0x02C82A60);
    }
    iVar7 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
    if ((iVar7 != 0) &&
       ((iVar7 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x20), iVar7 != 0 ||
        (iVar7 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x26), iVar7 != 0)))) {
      FUN_00521d50(0x1d1e380);
      FUN_0057d800(0x02C82A60);
      FUN_005031c0();
      FUN_004032b0();
      FUN_00597c30();
      FUN_00521c50(0x1d1e380);
      FUN_0057d6a0(0x02C82A60);
    }
    iVar7 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
    if (iVar7 != 0) {
      (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x21);
    }
    if (iStack_8 != 0) {
      iStack_8 = 0;
      FUN_0057d6a0(0x02C82A60);
      FUN_004032b0();
    }
    if (iVar6 != 0) {
      FUN_0057d800(0x02C82A60);
      FUN_00521d50(0x1d1e380);
      return iVar6;
    }
  } while( true );
}
