// Name: FUN_004d1a80
// Address: 004d1a80
// Address Range: [[004d1a80, 004d24b8]]
// Convention: unknown
// Signature: void FUN_004d1a80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1a80(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  float fStack_220;
  byte auStack_21c [256];
  byte auStack_11c [256];
  float fStack_1c;
  int iStack_18;
  
  if (_DAT_01cd01f8 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xe0) != 0) goto LAB_004d1aac;
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x5c));
  if (iVar4 != 0) {
    FUN_004a1b70(0x01C51D80,"GoToMap");
  }
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x60));
  if (iVar4 != 0) {
    FUN_004a1b70(0x01C51D80,"GoToCompass");
  }
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 100));
  if ((iVar4 != 0) && (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 == 0)) {
    FUN_004a1b70(0x01C51D80,"UseSPS");
  }
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x58));
  if (iVar4 != 0) {
    if (*(int *)(0x01CC8004 + 0x40) == 0) {
      pcVar7 = 0x01CC8004;
      pcVar7[0x40] = '\x01';
      pcVar7[0x41] = '\0';
      pcVar7[0x42] = '\0';
      pcVar7[0x43] = '\0';
      if (*(int *)(param_1 + 0x244) != 0) {
        pcVar7[0x40] = '\0';
        pcVar7[0x41] = '\0';
        pcVar7[0x42] = '\0';
        pcVar7[0x43] = '\0';
      }
      if (DAT_007c3978 == 0) goto LAB_004d1fc8;
    }
    pcVar7 = 0x01CC8004;
    pcVar7[0x40] = '\0';
    pcVar7[0x41] = '\0';
    pcVar7[0x42] = '\0';
    pcVar7[0x43] = '\0';
  }
LAB_004d1fc8:
  if (*0x01CC8004 == '\0') {
    pcVar7 = 0x01CC8004;
    pcVar7[0x40] = '\0';
    pcVar7[0x41] = '\0';
    pcVar7[0x42] = '\0';
    pcVar7[0x43] = '\0';
  }
  if ((((*(int *)(param_1 + 0x22c) != 0) &&
       (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x12), iVar4 != 0)) &&
     (iVar4 = 1 - *(int *)(param_1 + 0x2a4), *(int *)(param_1 + 0x2a4) = iVar4, iVar4 != 0)) {
    FUN_00559f80(0x01E82168,*(uint *)(0x01E81C80 + 0xc),1);
    *(uint *)(0x01E81C80 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x2a4) == 0) &&
     (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2e), iVar4 != 0)) {
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
    piVar3 = 0x01E82168;
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x2a0) + 1;
      *(int *)(param_1 + 0x2a0) = iVar4;
      if (*piVar3 <= iVar4) {
        *(uint *)(param_1 + 0x2a0) = 0;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2a0) + -1;
      *(int *)(param_1 + 0x2a0) = iVar4;
      if (iVar4 < 0) {
        *(int *)(param_1 + 0x2a0) = *0x01E82168 + -1;
      }
    }
    FUN_0054f0d0(0x01E82168,*(uint *)(param_1 + 0x2a0));
  }
LAB_004d1aac:
  if (((*(int *)(param_1 + 0x22c) != 0) &&
      (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x15), iVar4 != 0)) {
    iVar4 = 1 - *(int *)(param_1 + 0x218);
    *(int *)(param_1 + 0x218) = iVar4;
    if (iVar4 == 0) {
      FUN_0057cc00();
    }
    else {
      _DAT_01c43544 = 0;
      FUN_0057cdb0();
    }
  }
  if ((((*(int *)(param_1 + 0x22c) != 0) || (iVar4 = FUN_005c3050(), iVar4 != 0)) &&
      (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2c), iVar4 != 0)) {
    *(int *)(param_1 + 0x200) = 1 - *(int *)(param_1 + 0x200);
  }
  iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x38);
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x32), iVar4 != 0)) {
    _DAT_01d39d34 = (uint)(_DAT_01d39d34 == 0);
  }
  if (((*(int *)(param_1 + 0x1f8) == 0) &&
      (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x3f), iVar4 != 0)) ||
     ((iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0 &&
      (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x32), iVar4 != 0)))) {
    iVar4 = FUN_005735f0();
    if (iVar4 == 0) {
      FUN_0057cdb0();
      FUN_00573600();
    }
    else {
      FUN_00573600();
      FUN_0057cc00();
    }
  }
  if ((((*(int *)(param_1 + 0x22c) != 0) &&
       (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x11), uVar2 = DAT_0061b49c, iVar4 != 0
      )) && (0x1df < (int)DAT_0061b49c)) {
    iVar4 = 1 - *(int *)(param_1 + 0x2a8);
    *(int *)(param_1 + 0x2a8) = iVar4;
    if (iVar4 != 0) {
      lVar8 = 0xf000000001;
    }
    else {
      lVar8 = (ulonglong)uVar2 << 0x20;
    }
    FUN_0054fbf0(0x01E82168,iVar4 != 0,lVar8);
  }
  if (((*(int *)(param_1 + 0x22c) != 0) && (_DAT_01cd0c38 == 0)) &&
     ((iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0 &&
      ((iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2f), iVar4 != 0 &&
       (0x1df < (int)DAT_0061b49c)))))) {
    *(uint *)(param_1 + 0x204) = (uint)(*(int *)(param_1 + 0x204) == 0);
  }
  iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
  if (((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1f), iVar4 != 0)) &&
     (*(int *)(param_1 + 0x244) == 0)) {
    FUN_004d6420(param_1,0);
  }
  iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,7), iVar4 != 0)) {
    FUN_004d6420(param_1,0);
  }
  iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x3c);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x244) == 0)) {
    FUN_004d6420(param_1,0);
  }
  iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x3d);
  if (iVar4 != 0) {
    FUN_004d85f0();
  }
  iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x40);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x244) == 0)) {
    FUN_004d6420(param_1,"quicksavedgame.noc");
    uVar5 = FUN_00531090("Quick Save",0x40000000);
    FUN_004cc190(param_1,uVar5);
  }
  if ((*(int *)(param_1 + 0x1f8) == 0) &&
     (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x43), iVar4 != 0)) {
    iVar4 = FUN_00479180(&DAT_005e1a66,"quicksavedgame.noc",&DAT_005e1a50);
    if (iVar4 == 0) {
      uVar5 = FUN_00531090("No quicked saved game to load",0x40000000);
      FUN_004cc190(param_1,uVar5);
    }
    else {
      FUN_005c0d10();
      uVar5 = FUN_00531090();
      iVar4 = FUN_00494d20(0x01C3EB54,uVar5);
      if (iVar4 != 0) {
        pcVar6 = "quicksavedgame.noc";
        pcVar7 = (char *)(param_1 + 0x9fc);
        *(uint *)(param_1 + 0x9f8) = 1;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
    }
  }
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x3b);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0xafc) = (uint)(*(int *)(param_1 + 0xafc) == 0);
  }
  if (((*(int *)(param_1 + 0x22c) != 0) || (iVar4 = FUN_005c3050(), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0xe), iVar4 != 0)) {
    *(uint *)(param_1 + 0x2b0) = (uint)(*(int *)(param_1 + 0x2b0) == 0);
  }
  if (*(int *)(param_1 + 0x218) == 0) {
    if ((*(int *)(0x01E81C80 + 0x1c) != 2) &&
       (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x3f), piVar3 = 0x01E82168,
       iVar4 != 0)) {
      *(uint *)(param_1 + 0x2a8) = 1;
      FUN_0054fbf0(piVar3,0,0,0xf0);
      iVar4 = 0x01E81C80;
      *(uint *)(param_1 + 0x1f8) = 1;
      if (*(int *)(iVar4 + 0x1c) == 1) {
        *(uint *)(iVar4 + 0x1c) = 0;
      }
      else {
        *(uint *)(iVar4 + 0x1c) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1f8) != 0) {
      if ((*(int *)(0x01E81C80 + 0x1c) == 2) &&
         (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x44), iVar4 != 0)) {
        *(uint *)(0x01E81C80 + 0x1c) = 1;
      }
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x3f);
      if (iVar4 != 0) {
        *(uint *)(0x01E81C80 + 0x1c) = 0;
      }
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x43);
      if (iVar4 != 0) {
        FUN_0054ae10();
      }
    }
  }
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x57);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x240) + -0x400;
    *(int *)(param_1 + 0x240) = iVar4;
    if (iVar4 < 0x8000) {
      *(uint *)(param_1 + 0x240) = 0x8000;
    }
    FUN_005bfb40(auStack_21c,"Gamma : %f",(double)*(int *)(param_1 + 0x240) * _DAT_005e1adc);
    FUN_004cc190(param_1,auStack_21c,0x3f800000);
    FUN_00555830(0x01E82168,*(uint *)(param_1 + 0x240));
  }
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x58);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x240) + 0x400;
    *(int *)(param_1 + 0x240) = iVar4;
    if (0x10000 < iVar4) {
      *(uint *)(param_1 + 0x240) = 0x10000;
    }
    FUN_005bfb40(auStack_11c,"Gamma : %f",(double)*(int *)(param_1 + 0x240) * _DAT_005e1adc);
    FUN_004cc190(param_1,auStack_11c,0x3f800000);
    FUN_00555830(0x01E82168,*(uint *)(param_1 + 0x240));
  }
  if (((*(int *)(param_1 + 0x22c) != 0) &&
      (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x23), iVar4 != 0)) {
    0x01E82168[0x56bad] = (uint)(0x01E82168[0x56bad] == 0);
  }
  if (((*(int *)(param_1 + 0x22c) != 0) &&
      (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x38), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1e), iVar4 != 0)) {
    fStack_1c = 0.02;
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
    if (iVar4 != 0) {
      fStack_1c = -0.02;
    }
    iStack_18 = _DAT_01fe49d4;
    fStack_220 = (float)_DAT_01fe49d4 * (float)_DAT_005e1ae4 + fStack_1c;
    if (fStack_220 < 0.0) {
      fStack_220 = 0.0;
    }
    if (1.0 < fStack_220) {
      fStack_220 = 1.0;
    }
    for (iVar4 = 0; iVar4 < *0x01E82168; iVar4 = iVar4 + 1) {
      FUN_005558f0(0x01E82168,iVar4,fStack_220);
    }
  }
  return;
}
