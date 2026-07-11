// Name: FUN_004d23d0
// Address: 004d23d0
// Address Range: [[004d23d0, 004d2871]]
// Convention: unknown
// Signature: int FUN_004d23d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d23d0(void)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint local_c;
  int local_8;
  
  puVar2 = 0x01C775EC;
  if (DAT_005b7620 < 0x1e0) {
    return 1;
  }
  if ((_DAT_02dc9d60 == 0) && (0x1e0 < (int)0x01C775EC[1])) {
    0x01C775EC[1] = 0x1e0;
    *puVar2 = 0x280;
  }
  iVar6 = 0x1cc56e0;
  iVar7 = 0;
  do {
    FUN_0040e3c0(iVar6,*(uint *)((int)&PTR_s_f0100_005baf18 + iVar7),0x40,0x40);
    iVar7 = iVar7 + 4;
    FUN_0040e9e0(iVar6,2,1);
    iVar6 = iVar6 + 0x14;
  } while (iVar7 != 0x20);
  FUN_0040e3c0(0x1cc5b20,"fblurl",0x68,0x46);
  FUN_0040e3c0(0x1cc5b34,"fblurm",0x20,0x46);
  FUN_0040e3c0(0x1cc5b48,"fblurr",0x68,0x46);
  iVar6 = 0;
  FUN_00403f50();
  FUN_005459f0();
  local_c = 0;
  FUN_004de860(0x1cc5780);
  local_8 = 1;
  FUN_0049a890(0x01C775EC);
  do {
    FUN_0049a8a0(0x01C775EC);
    FUN_004deae0(0x1cc5780,0x01C775EC[0x99]);
    FUN_004dec50(0x1cc5780);
    pcVar3 = (char *)FUN_004ee370("S T A R T");
    pcVar8 = &DAT_01cc7d10;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_004ee370("O P T I O N S");
    pcVar8 = &DAT_01cc7e10;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_004ee370("L O A D");
    pcVar8 = &DAT_01cc7f10;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_01cc8010;
    pcVar3 = (char *)FUN_004ee370("Q U I T");
    puVar5 = &DAT_01cc7d10;
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
      *(byte **)(iVar7 + 0x1cc8110) = puVar5;
      iVar7 = iVar7 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar7 != 0x10);
    uVar4 = FUN_004cf440(0x1cc8110,4,&local_c,0xfa,0);
    if (local_8 != 0) {
      FUN_0052ee70();
    }
    FUN_00553910();
    switch(uVar4) {
    case 0:
      FUN_004dea60(0x1cc5780);
      FUN_0052e9c0(0x02DC9450);
      iVar7 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x2a);
      if ((iVar7 == 0) || (iVar7 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d), iVar7 == 0)) {
        iVar7 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
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
      FUN_004a4b50(0x01C775EC,uVar4);
      FUN_00403f50();
      FUN_005459f0();
      FUN_004de860(0x1cc5780);
      goto LAB_004d2665;
    case 1:
      FUN_004d21c0(0);
      break;
    case 2:
      FUN_004dea60(0x1cc5780);
      FUN_0052e9c0(0x02DC9450);
      FUN_004a4170(0x01C775EC,0,1);
      FUN_00403f50();
      FUN_005459f0();
      FUN_004de860(0x1cc5780);
LAB_004d2665:
      FUN_0052e850(0x02DC9450);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar7 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
    if (iVar7 != 0) {
      iVar6 = 99;
    }
    iVar7 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
    if ((iVar7 != 0) && (iVar7 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x32), iVar7 != 0)) {
      iVar7 = FUN_00526ca0();
      FUN_00526cb0(iVar7 == 0);
      FUN_0052e850(0x02DC9450);
    }
    iVar7 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
    if ((iVar7 != 0) &&
       ((iVar7 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x20), iVar7 != 0 ||
        (iVar7 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x26), iVar7 != 0)))) {
      FUN_0052e9c0(0x02DC9450);
      FUN_004c8510();
      FUN_0052e850(0x02DC9450);
    }
    iVar7 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
    if (iVar7 != 0) {
      (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x21);
    }
    if (local_8 != 0) {
      local_8 = 0;
      FUN_0052e850(0x02DC9450);
      FUN_00403f50();
    }
    if (iVar6 != 0) {
      FUN_0052e9c0(0x02DC9450);
      FUN_004dea60(0x1cc5780);
      return iVar6;
    }
  } while( true );
}
