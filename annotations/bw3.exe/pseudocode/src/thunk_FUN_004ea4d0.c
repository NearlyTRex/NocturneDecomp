// Name: thunk_FUN_004ea4d0
// Address: 004e44d0
// Address Range: [[004e44d0, 004e44d4]]
// Convention: unknown
// Signature: int thunk_FUN_004ea4d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_004ea4d0(void)

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
  
  puVar2 = 0x01D2130C;
  if (DAT_005fba1c < 0x1e0) {
    return 1;
  }
  if ((_DAT_02cf5fcc == 0) && (0x1e0 < (int)0x01D2130C[1])) {
    0x01D2130C[1] = 0x1e0;
    *puVar2 = 0x280;
  }
  iVar6 = 0x1d72c10;
  iVar7 = 0;
  do {
    FUN_0040d460(iVar6,*(uint *)((int)&PTR_s_f0100_00600478 + iVar7),0x40,0x40);
    iVar7 = iVar7 + 4;
    FUN_0040da80(iVar6,2,1);
    iVar6 = iVar6 + 0x14;
  } while (iVar7 != 0x20);
  FUN_0040d460(0x1d73798,"fblurl",0x68,0x46);
  FUN_0040d460(0x1d737ac,"fblurm",0x20,0x46);
  FUN_0040d460(0x1d737c0,"fblurr",0x68,0x46);
  iVar6 = 0;
  FUN_004032b0();
  FUN_0056ac20();
  uStack_10 = 0;
  FUN_004f94a0(0x1d72cb0);
  iStack_8 = 1;
  FUN_004b4430(0x01D2130C);
  do {
    FUN_004b4440(0x01D2130C);
    iVar7 = 0x01ED78C8;
    uStack_c = 0x01D2130C[0xc5];
    *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
    FUN_0053b100(iVar7,50000,50000,0x10000);
    *(uint *)(0x01ED78C8 + 0x15ae94) = 0xdac;
    FUN_004f9600(0x1d72cb0,uStack_c);
    FUN_004f9670(0x1d72cb0);
    *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
    pcVar3 = (char *)FUN_00508960("START");
    pcVar8 = &DAT_01d75888;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_00508960("OPTIONS");
    pcVar8 = &DAT_01d75988;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_00508960(&DAT_005c794b);
    pcVar8 = &DAT_01d75a88;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_01d75b88;
    pcVar3 = (char *)FUN_00508960(&DAT_005c7950);
    puVar5 = &DAT_01d75888;
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
      *(byte **)(iVar7 + 0x1d75c88) = puVar5;
      iVar7 = iVar7 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar7 != 0x10);
    uVar4 = FUN_004e7860(0x1d75c88,4,&uStack_10,200,0);
    if (iStack_8 != 0) {
      FUN_00560d70();
    }
    FUN_0057a8a0();
    switch(uVar4) {
    case 0:
      FUN_004f9580(0x1d72cb0);
      FUN_00560930(0x02CF5680);
      iVar7 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
      if ((iVar7 == 0) || (iVar7 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar7 == 0)) {
        iVar7 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
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
      FUN_004be8d0(0x01D2130C,uVar4);
      FUN_004032b0();
      FUN_0056ac20();
      FUN_004f94a0(0x1d72cb0);
      goto LAB_004ea7ac;
    case 1:
      FUN_004ea280(0);
      break;
    case 2:
      FUN_004f9580(0x1d72cb0);
      FUN_00560930(0x02CF5680);
      FUN_004bdfb0(0x01D2130C,0,1);
      FUN_004032b0();
      FUN_0056ac20();
      FUN_004f94a0(0x1d72cb0);
LAB_004ea7ac:
      FUN_005607d0(0x02CF5680);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar7 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar7 != 0) {
      iVar6 = 99;
    }
    iVar7 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
    if ((iVar7 != 0) && (iVar7 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x32), iVar7 != 0)) {
      iVar7 = FUN_00556750();
      FUN_00556760(iVar7 == 0);
      FUN_005607d0(0x02CF5680);
    }
    iVar7 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
    if ((iVar7 != 0) &&
       ((iVar7 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x20), iVar7 != 0 ||
        (iVar7 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x26), iVar7 != 0)))) {
      FUN_004f9580(0x1d72cb0);
      FUN_00560930(0x02CF5680);
      FUN_004e4400();
      FUN_004032b0();
      FUN_0056ac20();
      FUN_004f94a0(0x1d72cb0);
      FUN_005607d0(0x02CF5680);
    }
    iVar7 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
    if (iVar7 != 0) {
      (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x21);
    }
    if (iStack_8 != 0) {
      iStack_8 = 0;
      FUN_005607d0(0x02CF5680);
      FUN_004032b0();
    }
    if (iVar6 != 0) {
      FUN_00560930(0x02CF5680);
      FUN_004f9580(0x1d72cb0);
      return iVar6;
    }
  } while( true );
}
