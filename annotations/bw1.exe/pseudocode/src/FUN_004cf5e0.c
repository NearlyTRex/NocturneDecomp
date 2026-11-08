// Name: FUN_004cf5e0
// Address: 004cf5e0
// Address Range: [[004cf5e0, 004d03f8]]
// Convention: unknown
// Signature: undefined4 FUN_004cf5e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cf5e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte local_8a0 [960];
  byte local_4e0 [960];
  byte local_120 [256];
  byte *local_20;
  uint local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  FUN_004455d0(PTR_DAT_00611100);
  FUN_00445430(PTR_DAT_00611100,"Nocturne is alive and kicking\n");
  FUN_00445430(PTR_DAT_00611100,"game.cpp built on %s %s\n\n","Sep 11 2000",
               "09:46:30");
  FUN_00445430(PTR_DAT_00611100,"System RAM: %d\n",_DAT_02c9be78);
  local_18 = 1;
  FUN_00445430(PTR_DAT_00611100,"Swap file: %d\n",_DAT_02c9be7c);
  FUN_00498e40(0x01C3EB54,local_120);
  FUN_00445430(PTR_DAT_00611100,"%s\n",local_120);
  local_20 = local_8a0;
  FUN_00445430(PTR_DAT_00611100,"ESP: %08X\n",local_8a0);
  *(uint *)(param_1 + 0x2a0) = 0;
  *(uint *)(param_1 + 0x218) = 0;
  *(uint *)(param_1 + 0x2a4) = 1;
  *(uint *)(param_1 + 0x200) = 0;
  *(uint *)(param_1 + 0x204) = 0;
  *(uint *)(param_1 + 0x2a8) = 0;
  *(uint *)(param_1 + 0x1ec) = 0;
  *(uint *)(param_1 + 0x1fc) = 0;
  *(uint *)(param_1 + 0x1f0) = 0;
  *(uint *)(param_1 + 500) = 0;
  *(uint *)(param_1 + 0x1f8) = 0;
  *(uint *)(param_1 + 0x2ac) = 0;
  *(uint *)(param_1 + 0x2b0) = 0;
  *(uint *)(param_1 + 0x208) = 0x3f800000;
  *(uint *)(param_1 + 0x20c) = 0;
  *(uint *)(param_1 + 0x210) = 0;
  *(uint *)(param_1 + 0x214) = 0;
  *(byte *)(param_1 + 0x8e8) = 0;
  *(uint *)(param_1 + 0x9e8) = 0;
  *(uint *)(param_1 + 0x9ec) = 0;
  *(uint *)(param_1 + 600) = 0;
  *(uint *)(param_1 + 0xe0) = 0;
  *(uint *)(param_1 + 0x224) = 0;
  *(uint *)(param_1 + 0x254) = 0;
  *(uint *)(param_1 + 0x228) = 0;
  *(uint *)(param_1 + 0xafc) = 0;
  *(uint *)(param_1 + 0x25c) = 0;
  *(uint *)(param_1 + 0x260) = 0;
  *(uint *)(param_1 + 0x264) = 0;
  *(uint *)(param_1 + 0x23c) = 0;
  *(uint *)(param_1 + 0x234) = 0;
  *(uint *)(param_1 + 0x238) = 0;
  _DAT_01cd01f8 = 0;
  *(uint *)(0x01CC8004 + 0x40) = 0;
  FUN_00415c80();
  _DAT_01cd0c24 = 0;
  *(uint *)(param_1 + 0x22c) = 0;
  FUN_004cf430(param_1);
  iVar3 = FUN_005c3050("VELOCITY");
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x22c) = 1;
  }
  FUN_00462590(0x1ccc3e4);
  pcVar6 = "Flashlight";
  FUN_004dc040(param_1);
  pcVar7 = &DAT_01ccc424;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  _DAT_01ccc524 = 0x42000000;
  DAT_01cce098 = 0;
  uRam01cce099 = 0;
  FUN_0054ec60(0x01E82168);
  if (_DAT_01cd06c0 == 0) {
    FUN_004b4b30(0x01C57074);
  }
  else {
    _DAT_01cd06c0 = 0;
    FUN_00555ca0(0x01E82168,&DAT_01cd06c4);
  }
  if (*(int *)(param_1 + 0x240) < 0x8000) {
    *(uint *)(param_1 + 0x240) = 0x8000;
  }
  else if (0x10000 < *(int *)(param_1 + 0x240)) {
    *(uint *)(param_1 + 0x240) = 0x10000;
  }
  FUN_00555830(0x01E82168,*(uint *)(param_1 + 0x240));
  FUN_004cc1f0(param_1);
  FUN_0049c370(&DAT_01cd01fc);
  if (*(int *)(param_1 + 0x2a4) == 0) {
    FUN_0054f0d0(0x01E82168,*(uint *)(param_1 + 0x2a0));
  }
  else {
    FUN_00559f80(0x01E82168,0x01E81C80[3],1);
  }
  FUN_004d6030(param_1);
  FUN_004d5e40(param_1);
  iVar3 = FUN_0052cf90(0x01D51C20,3);
  if ((iVar3 != 0) && (iVar3 = FUN_0052cf90(0x01D51C20,4), iVar3 != 0)) {
    0x01D51C20[1] = 3;
    FUN_004cbf10(param_1);
    FUN_004d19d0(param_1);
    FUN_0052fee0(0x01D51C20);
    FUN_004fefa0(0x01D1BD1C);
    *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
         *(uint *)(param_1 + 0xd8);
    _DAT_01cd0c60 = 0;
    *(uint *)(param_1 + 0x27c) = 0;
LAB_004cf9e0:
    iVar3 = _DAT_01cd0c60;
    if (_DAT_01cd0c34 != 0) {
      if ((DAT_007c3978 == 0) && (*(int *)(0x01CC8004 + 0x40) == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      if ((iVar3 != 0) && (_DAT_01cd0c60 == 0)) {
        FUN_004cf530(param_1);
      }
      if ((iVar3 == 0) && (_DAT_01cd0c60 != 0)) {
        FUN_004cf430(param_1);
        FUN_0054f0d0(0x01E82168,*(uint *)(0x01E82168 + 0x15aeb8));
      }
    }
    _DAT_01cd0c60 = iVar3;
    if ((*(int *)(param_1 + 0x218) != 0) || (iVar3 = 1, _DAT_01cd01f8 != 0)) {
      iVar3 = 0;
    }
    FUN_004fd2b0(0x01D1BCA0,iVar3);
    FUN_004d1a80(param_1);
    FUN_004cc810(param_1);
    FUN_004cc9c0(param_1);
    FUN_004d0860(param_1);
    iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if ((iVar3 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 = 0x01CC8004,
       iVar4 != 0)) {
      *(uint *)(param_1 + 0x25c) = 0;
      if (*(int *)(iVar3 + 0x40) != 0) {
        *(uint *)(iVar3 + 0x40) = 0;
      }
      if (DAT_007c3978 != 0) {
        FUN_00415be0(DAT_007c3978,0);
      }
    }
    if (*(int *)(0x01E82168 + 0x15aeb8) < 0) {
      0x01E81C80[4] = 2;
LAB_004cfb22:
      iVar3 = FUN_00559f80(0x01E82168,0x01E81C80[3],0x01E81C80[4]);
      if (iVar3 != 0) {
        FUN_004cbf10(param_1);
      }
      0x01E81C80[4] = 0;
    }
    else if ((((*(int *)(param_1 + 0x2a4) != 0) && (*(int *)(param_1 + 0xe0) == 0)) &&
             (0x01D51C20[0x5c] == 0)) && (*(int *)(param_1 + 0x25c) == 0)) goto LAB_004cfb22;
    iVar3 = 0;
    FUN_004ce580(param_1);
    if (_DAT_01cd01f8 == 0) {
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar4 == 0) goto LAB_004cfde8;
      if (*(int *)(0x01D2C900 + 0x1014) != 0) goto LAB_004cf9e0;
      FUN_0049c370(&DAT_01cd01fc);
      *(uint *)(param_1 + 0x21c) = 0;
      if (*(int *)(0x01CC8004 + 0x40) == 0) {
        if (DAT_007c3978 == 0) {
          iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (1 < iVar4) goto LAB_004cfbd7;
          if (*0x01D51C20 == 2) {
            uVar5 = FUN_00531090("Leave network game");
            FUN_004994d0(&DAT_01cd01fc,uVar5);
            uVar5 = FUN_00531090("Return to game");
            FUN_004994d0(&DAT_01cd01fc,uVar5);
            uVar5 = FUN_00531090("You are connect to a network game.\nDo you want to leave the game?",0,1);
            FUN_0049a980(&DAT_01cd01fc,uVar5);
            _DAT_01cd01f8 = 1;
          }
          else if (*0x01D51C20 == 1) {
            uVar5 = FUN_00531090("Abort network game");
            FUN_004994d0(&DAT_01cd01fc,uVar5);
            uVar5 = FUN_00531090("Return to game");
            FUN_004994d0(&DAT_01cd01fc,uVar5);
            uVar5 = FUN_00531090("You are hosting a network game.\nDo you want to abort the game?",0,1);
            FUN_0049a980(&DAT_01cd01fc,uVar5);
            _DAT_01cd01f8 = 1;
          }
          else {
            FUN_0057cdb0(0x02C82A60);
            FUN_0049a620(local_8a0);
            uVar5 = FUN_00531090("Return");
            FUN_004994d0(local_8a0,uVar5);
            uVar5 = FUN_00531090("Options");
            FUN_004994d0(local_8a0,uVar5);
            uVar5 = FUN_00531090("Load game");
            FUN_004994d0(local_8a0,uVar5);
            uVar5 = FUN_00531090("Save game");
            FUN_004994d0(local_8a0,uVar5);
            uVar5 = FUN_00531090("Quit");
            FUN_004994d0(local_8a0,uVar5);
            if (*(int *)(param_1 + 0x244) == 1) {
              uVar5 = FUN_00531090("Skip cinematic.");
              FUN_004994d0(local_8a0,uVar5);
            }
            if (*(int *)(param_1 + 0x244) != 0) {
              FUN_0049c030(local_8a0,3,0);
            }
            uVar5 = FUN_00531090("Game paused",0xffffffff,0);
            iVar3 = FUN_0049a8b0(local_8a0,uVar5);
            if (iVar3 == 1) {
              FUN_004fd2b0(0x01D1BCA0,0);
              FUN_004cf530(param_1);
              FUN_0050c990(1);
              FUN_004cf430(param_1);
              FUN_004fd2b0(0x01D1BCA0,*(int *)(param_1 + 0x218) == 0);
              FUN_0054f0d0(0x01E82168,*(uint *)(0x01E82168 + 0x15aeb8));
              _DAT_01c3eb50 = _DAT_0152d248;
              if (0xf0 < DAT_0061b49c) {
                _DAT_01c3eb50 = _DAT_0152d244;
              }
            }
            if (iVar3 == 2) {
              FUN_004d85f0(param_1);
            }
            if (iVar3 == 3) {
              FUN_004d6420(param_1,0);
            }
            if (iVar3 == 4) {
              uVar5 = FUN_00531090("Quit");
              iVar4 = FUN_00494d20(0x01C3EB54,uVar5);
              if (iVar4 != 0) {
                FUN_0049a710(local_8a0,0);
                goto LAB_004cfbd7;
              }
            }
            if (iVar3 == 5) {
              FUN_004d5e80(param_1);
              iVar3 = FUN_0054ae40(0x01E81C80);
              *(uint *)(param_1 + 0xe0) = (uint)(iVar3 == 0);
            }
            FUN_004032b0();
            if (*(int *)(param_1 + 0xe0) == 0) {
              FUN_0057cc00(0x02C82A60);
            }
            *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
                 *(uint *)(param_1 + 0xd8);
            FUN_0049a710(local_8a0,0);
            iVar3 = 1;
          }
        }
        else {
          FUN_00415be0(DAT_007c3978,0);
        }
      }
      else {
        *(uint *)(0x01CC8004 + 0x40) = 0;
      }
    }
    else {
      if (_DAT_01cd01fc < 1) {
        _DAT_01cd01f8 = 0;
        goto LAB_004cfde8;
      }
      iVar4 = FUN_0049add0(&DAT_01cd01fc);
      if (iVar4 != -2) {
        FUN_004032b0();
        FUN_00496dd0(0x01C3EB54);
        FUN_0049c370(&DAT_01cd01fc);
        _DAT_01cd01f8 = 0;
      }
      if (iVar4 == 0) {
        FUN_0052cab0(0x01D51C20,1);
        goto LAB_004cfbd7;
      }
    }
LAB_004cfde8:
    if (((*(int *)(param_1 + 0xe0) == 0) && (0x01D51C20[0x5c] == 0)) && (iVar3 == 0)) {
      if (*(int *)(param_1 + 0x278) < 3) {
        FUN_0057dc40();
        *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
      }
      if (_DAT_01c50948 == 0) {
        FUN_005acff0();
        *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
      }
      else {
        FUN_00582990(1);
        FUN_005b2cf0();
        *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
      }
    }
    else {
      FUN_005b2cf0();
    }
    if (_DAT_02c9be74 != 0) {
      _DAT_02c9be74 = 0;
      FUN_0054f0d0(0x01E82168,*(uint *)(0x01E82168 + 0x15aeb8));
    }
    iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
    if (iVar3 == 2) {
      iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
      if (iVar3 != 0) goto LAB_004cfbd7;
      if (local_14 < 0.0) {
        iVar3 = FUN_004d62e0(param_1);
        if (iVar3 != 0) goto LAB_004cfbd7;
      }
      else {
        local_14 = local_14 + *(float *)(param_1 + 0x294);
        if ((float)_DAT_005e197c < local_14) {
          FUN_004d6070(param_1);
          local_14 = -1.0;
        }
      }
    }
    if (*0x01E81C80 != 0) {
      local_1c = 1;
      goto LAB_004cfbd7;
    }
    FUN_004d77d0(param_1);
    if (*(int *)(param_1 + 0x21c) != 0) {
      FUN_005b2510();
    }
    if (*(int *)(param_1 + 0x9f8) == 0) {
      if (local_18 != 0) {
        local_18 = *(int *)(param_1 + 0x9f8);
        FUN_0057cc00(0x02C82A60);
      }
      if ((*(int *)(param_1 + 0x22c) != 0) &&
         (iVar3 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar3 != 0)) {
        (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x19);
      }
      if (*(int *)(param_1 + 0x288) != 0) {
        FUN_004a9870(0x01C51D80,"NewSet",1);
        *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + -1;
      }
      goto LAB_004cf9e0;
    }
    local_1c = 0;
  }
LAB_004cfbd7:
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
  if ((iVar3 == 2) && (*(int *)(param_1 + 0x9f8) == 0)) {
    FUN_0049a620(local_4e0);
    uVar5 = FUN_00531090("Load game");
    FUN_004994d0(local_4e0,uVar5);
    uVar5 = FUN_00531090("Quit");
    FUN_004994d0(local_4e0,uVar5);
    do {
      uVar5 = FUN_00531090("Game Over",0xffffffff,0);
      iVar3 = FUN_0049a8b0(local_4e0,uVar5);
      if (iVar3 == 0) {
        FUN_004d85f0(param_1);
        break;
      }
    } while (iVar3 != 1);
    FUN_0049a710(local_4e0,0);
  }
  uVar5 = FUN_0051c410(0x01D2C900);
  piVar2 = 0x01D1BCA0;
  *(uint *)(param_1 + 0x26c) = uVar5;
  FUN_004fd2b0(piVar2,0);
  FUN_0057cdb0(0x02C82A60);
  FUN_00415c80();
  FUN_004dc180(param_1);
  FUN_004cf530(param_1);
  (**(code **)(*0x01D1BCA0 + 8))(0x01D1BCA0);
  FUN_00551b90(0x01E82168);
  *(uint *)(param_1 + 0x208) = 0x3f800000;
  FUN_0049c370(&DAT_01cd01fc);
  FUN_004f75a0();
  return local_1c;
}
