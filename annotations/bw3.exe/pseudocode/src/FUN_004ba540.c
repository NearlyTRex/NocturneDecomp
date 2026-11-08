// Name: FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004baf4c]]
// Convention: unknown
// Signature: void FUN_004ba540(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba540(int param_1)

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
  
  if (_DAT_01d22200 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xe8) != 0) goto LAB_004ba56c;
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x60));
  if (iVar4 != 0) {
    FUN_0048c150(0x01C6E360,"GoToMap");
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x68));
  if ((iVar4 != 0) &&
     (iVar4 = FUN_004db990(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,"voodoo_doll")
     , iVar4 != 0)) {
    FUN_0048c150(0x01C6E360,"UseSPS");
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x5c));
  if (iVar4 != 0) {
    if (*(int *)(0x01D1A05C + 0x40) == 0) {
      pcVar7 = 0x01D1A05C;
      pcVar7[0x40] = '\x01';
      pcVar7[0x41] = '\0';
      pcVar7[0x42] = '\0';
      pcVar7[0x43] = '\0';
      if (*(int *)(param_1 + 0x24c) != 0) {
        pcVar7[0x40] = '\0';
        pcVar7[0x41] = '\0';
        pcVar7[0x42] = '\0';
        pcVar7[0x43] = '\0';
      }
      if (DAT_007dffb4 == 0) goto LAB_004baa7c;
    }
    pcVar7 = 0x01D1A05C;
    pcVar7[0x40] = '\0';
    pcVar7[0x41] = '\0';
    pcVar7[0x42] = '\0';
    pcVar7[0x43] = '\0';
  }
LAB_004baa7c:
  if (*0x01D1A05C == '\0') {
    pcVar7 = 0x01D1A05C;
    pcVar7[0x40] = '\0';
    pcVar7[0x41] = '\0';
    pcVar7[0x42] = '\0';
    pcVar7[0x43] = '\0';
  }
  if ((((*(int *)(param_1 + 0x234) != 0) &&
       (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x12), iVar4 != 0)) &&
     (iVar4 = 1 - *(int *)(param_1 + 0x324), *(int *)(param_1 + 0x324) = iVar4, iVar4 != 0)) {
    FUN_0053f940(0x01ED78C8,*(uint *)(0x01ED73E0 + 0xc),1);
    *(uint *)(0x01ED73E0 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x324) == 0) &&
     (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2e), iVar4 != 0)) {
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    piVar3 = 0x01ED78C8;
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 800) + 1;
      *(int *)(param_1 + 800) = iVar4;
      if (*piVar3 <= iVar4) {
        *(uint *)(param_1 + 800) = 0;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 800) + -1;
      *(int *)(param_1 + 800) = iVar4;
      if (iVar4 < 0) {
        *(int *)(param_1 + 800) = *0x01ED78C8 + -1;
      }
    }
    FUN_00534890(0x01ED78C8,*(uint *)(param_1 + 800));
  }
LAB_004ba56c:
  if (((*(int *)(param_1 + 0x234) != 0) &&
      (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x15), iVar4 != 0)) {
    iVar4 = 1 - *(int *)(param_1 + 0x220);
    *(int *)(param_1 + 0x220) = iVar4;
    if (iVar4 == 0) {
      FUN_0055fd30();
    }
    else {
      _DAT_01c5fae4 = 0;
      FUN_0055fee0();
    }
  }
  if ((((*(int *)(param_1 + 0x234) != 0) || (iVar4 = FUN_005a5ec0(), iVar4 != 0)) &&
      (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2c), iVar4 != 0)) {
    *(int *)(param_1 + 0x208) = 1 - *(int *)(param_1 + 0x208);
  }
  iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x38);
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x32), iVar4 != 0)) {
    _DAT_01d8e40c = (uint)(_DAT_01d8e40c == 0);
  }
  if (((*(int *)(param_1 + 0x200) == 0) &&
      (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x3f), iVar4 != 0)) ||
     ((iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 != 0 &&
      (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x32), iVar4 != 0)))) {
    iVar4 = FUN_00556750();
    if (iVar4 == 0) {
      FUN_0055fee0();
      FUN_00556760();
    }
    else {
      FUN_00556760();
      FUN_0055fd30();
    }
  }
  if ((((*(int *)(param_1 + 0x234) != 0) &&
       (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x11), uVar2 = DAT_005fba1c, iVar4 != 0
      )) && (0x1df < (int)DAT_005fba1c)) {
    iVar4 = 1 - *(int *)(param_1 + 0x328);
    *(int *)(param_1 + 0x328) = iVar4;
    if (iVar4 != 0) {
      lVar8 = 0xf000000001;
    }
    else {
      lVar8 = (ulonglong)uVar2 << 0x20;
    }
    FUN_005353b0(0x01ED78C8,iVar4 != 0,lVar8);
  }
  if (((*(int *)(param_1 + 0x234) != 0) && (_DAT_01d22c40 == 0)) &&
     ((iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 != 0 &&
      ((iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2f), iVar4 != 0 &&
       (0x1df < (int)DAT_005fba1c)))))) {
    *(uint *)(param_1 + 0x20c) = (uint)(*(int *)(param_1 + 0x20c) == 0);
  }
  iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
  if (((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1f), iVar4 != 0)) &&
     (*(int *)(param_1 + 0x24c) == 0)) {
    FUN_004bda10(param_1,0);
  }
  iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,7), iVar4 != 0)) {
    FUN_004bda10(param_1,0);
  }
  iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x3c);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x24c) == 0)) {
    FUN_004bda10(param_1,0);
  }
  iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x3d);
  if (iVar4 != 0) {
    FUN_004bfa40();
  }
  iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x40);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x24c) == 0)) {
    FUN_004bda10(param_1,"quicksavedgame.sav");
    uVar5 = FUN_00508960("Quick Save",0x40000000);
    FUN_004b46b0(param_1,uVar5);
  }
  if ((*(int *)(param_1 + 0x200) == 0) &&
     (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x43), iVar4 != 0)) {
    iVar4 = FUN_004659c0(&DAT_005c28a2,"quicksavedgame.sav",&DAT_005c288c);
    if (iVar4 == 0) {
      uVar5 = FUN_00508960("No quicked saved game to load",0x40000000);
      FUN_004b46b0(param_1,uVar5);
    }
    else {
      FUN_005a3a90();
      uVar5 = FUN_00508960();
      iVar4 = FUN_0047d8c0(0x01C5B0E4,uVar5);
      if (iVar4 != 0) {
        pcVar6 = "quicksavedgame.sav";
        pcVar7 = (char *)(param_1 + 0xa7c);
        *(uint *)(param_1 + 0xa78) = 1;
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
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x3b);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0xb7c) = (uint)(*(int *)(param_1 + 0xb7c) == 0);
  }
  if (((*(int *)(param_1 + 0x234) != 0) || (iVar4 = FUN_005a5ec0(), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0xe), iVar4 != 0)) {
    *(uint *)(param_1 + 0x330) = (uint)(*(int *)(param_1 + 0x330) == 0);
  }
  if (*(int *)(param_1 + 0x220) == 0) {
    if ((*(int *)(0x01ED73E0 + 0x1c) != 2) &&
       (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x3f), piVar3 = 0x01ED78C8,
       iVar4 != 0)) {
      *(uint *)(param_1 + 0x328) = 1;
      FUN_005353b0(piVar3,0,0,0xf0);
      iVar4 = 0x01ED73E0;
      *(uint *)(param_1 + 0x200) = 1;
      if (*(int *)(iVar4 + 0x1c) == 1) {
        *(uint *)(iVar4 + 0x1c) = 0;
      }
      else {
        *(uint *)(iVar4 + 0x1c) = 1;
      }
    }
    if (*(int *)(param_1 + 0x200) != 0) {
      if ((*(int *)(0x01ED73E0 + 0x1c) == 2) &&
         (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x44), iVar4 != 0)) {
        *(uint *)(0x01ED73E0 + 0x1c) = 1;
      }
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x3f);
      if (iVar4 != 0) {
        *(uint *)(0x01ED73E0 + 0x1c) = 0;
      }
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x43);
      if (iVar4 != 0) {
        FUN_00530500();
      }
    }
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x57);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x248) + -0x400;
    *(int *)(param_1 + 0x248) = iVar4;
    if (iVar4 < 0x8000) {
      *(uint *)(param_1 + 0x248) = 0x8000;
    }
    FUN_005a28c0(auStack_11c,"Gamma : %f",(double)*(int *)(param_1 + 0x248) * _DAT_005c2918);
    FUN_004b46b0(param_1,auStack_11c,0x3f800000);
    FUN_0053b1c0(0x01ED78C8,*(uint *)(param_1 + 0x248));
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x58);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x248) + 0x400;
    *(int *)(param_1 + 0x248) = iVar4;
    if (0x10000 < iVar4) {
      *(uint *)(param_1 + 0x248) = 0x10000;
    }
    FUN_005a28c0(auStack_21c,"Gamma : %f",(double)*(int *)(param_1 + 0x248) * _DAT_005c2918);
    FUN_004b46b0(param_1,auStack_21c,0x3f800000);
    FUN_0053b1c0(0x01ED78C8,*(uint *)(param_1 + 0x248));
  }
  if (((*(int *)(param_1 + 0x234) != 0) &&
      (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x23), iVar4 != 0)) {
    0x01ED78C8[0x56bad] = (uint)(0x01ED78C8[0x56bad] == 0);
  }
  if (((*(int *)(param_1 + 0x234) != 0) &&
      (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x38), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1e), iVar4 != 0)) {
    fStack_1c = 0.02;
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if (iVar4 != 0) {
      fStack_1c = -0.02;
    }
    iStack_18 = _DAT_0203a134;
    fStack_220 = (float)_DAT_0203a134 * (float)_DAT_005c2920 + fStack_1c;
    if (fStack_220 < 0.0) {
      fStack_220 = 0.0;
    }
    if (1.0 < fStack_220) {
      fStack_220 = 1.0;
    }
    for (iVar4 = 0; iVar4 < *0x01ED78C8; iVar4 = iVar4 + 1) {
      FUN_0053b280(0x01ED78C8,iVar4,fStack_220);
    }
  }
  return;
}
