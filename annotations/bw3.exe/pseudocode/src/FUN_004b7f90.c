// Name: FUN_004b7f90
// Address: 004b7f90
// Address Range: [[004b7f90, 004b8e54]]
// Convention: unknown
// Signature: undefined4 FUN_004b7f90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b7f90(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  byte local_8a4 [960];
  byte local_4e4 [960];
  byte local_124 [256];
  byte *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  FUN_00442190(PTR_DAT_005f1690);
  FUN_00441ff0(PTR_DAT_005f1690,"Blair Witch 3 started\n");
  FUN_00441ff0(PTR_DAT_005f1690,"game.cpp built on %s %s\n\n","Oct 30 2000",
               "16:06:32");
  FUN_00441ff0(PTR_DAT_005f1690,"System RAM: %d\n",_DAT_02d21b88);
  local_18 = 1;
  FUN_00441ff0(PTR_DAT_005f1690,"Swap file: %d\n",_DAT_02d21b8c);
  FUN_004819e0(0x01C5B0E4,local_124);
  FUN_00441ff0(PTR_DAT_005f1690,&DAT_005c2661,local_124);
  local_24 = local_8a4;
  FUN_00441ff0(PTR_DAT_005f1690,"ESP: %08X\n",local_8a4);
  *(uint *)(param_1 + 800) = 0;
  *(uint *)(param_1 + 0x220) = 0;
  *(uint *)(param_1 + 0x324) = 1;
  *(uint *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x20c) = 0;
  *(uint *)(param_1 + 0x328) = 0;
  *(uint *)(param_1 + 500) = 0;
  *(uint *)(param_1 + 0x204) = 0;
  *(uint *)(param_1 + 0x1f8) = 0;
  *(uint *)(param_1 + 0x1fc) = 0;
  *(uint *)(param_1 + 0x200) = 0;
  *(uint *)(param_1 + 0x32c) = 0;
  *(uint *)(param_1 + 0x330) = 0;
  *(uint *)(param_1 + 0x210) = 0x3f800000;
  *(uint *)(param_1 + 0x214) = 0;
  *(uint *)(param_1 + 0x218) = 0;
  *(uint *)(param_1 + 0x21c) = 0;
  *(byte *)(param_1 + 0x968) = 0;
  *(uint *)(param_1 + 0xa68) = 0;
  *(uint *)(param_1 + 0xa6c) = 0;
  *(uint *)(param_1 + 0x260) = 0;
  *(uint *)(param_1 + 0xe8) = 0;
  *(uint *)(param_1 + 0x22c) = 0;
  *(uint *)(param_1 + 0x25c) = 0;
  *(uint *)(param_1 + 0x230) = 0;
  *(uint *)(param_1 + 0xb7c) = 0;
  *(uint *)(param_1 + 0x264) = 0;
  *(uint *)(param_1 + 0x268) = 0;
  *(uint *)(param_1 + 0x26c) = 0;
  *(uint *)(param_1 + 0x244) = 0;
  *(uint *)(param_1 + 0x23c) = 0;
  *(uint *)(param_1 + 0x240) = 0;
  _DAT_01d22200 = 0;
  *(uint *)(0x01D1A05C + 0x40) = 0;
  FUN_00411a40();
  _DAT_01d22c2c = 0;
  *(uint *)(param_1 + 0x234) = 0;
  FUN_004b7de0(param_1);
  iVar4 = FUN_005a5ec0("VELOCITY");
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x234) = 1;
  }
  FUN_0045c2a0(0x1d1e360);
  pcVar7 = "Flashlight";
  FUN_004c48b0(param_1);
  pcVar8 = &DAT_01d1e3a0;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  _DAT_01d1e4a0 = 0x42000000;
  DAT_01d20014 = 0;
  uRam01d20015 = 0;
  FUN_00534420(0x01ED78C8);
  if (_DAT_01d226c8 == 0) {
    FUN_004a1480(0x01C73654);
  }
  else {
    _DAT_01d226c8 = 0;
    FUN_0053b660(0x01ED78C8,&DAT_01d226cc);
  }
  if (*(int *)(param_1 + 0x248) < 0x8000) {
    *(uint *)(param_1 + 0x248) = 0x8000;
  }
  else if (0x10000 < *(int *)(param_1 + 0x248)) {
    *(uint *)(param_1 + 0x248) = 0x10000;
  }
  FUN_0053b1c0(0x01ED78C8,*(uint *)(param_1 + 0x248));
  FUN_004b4710(param_1);
  FUN_00484f10(&DAT_01d22204);
  if (*(int *)(param_1 + 0x324) == 0) {
    FUN_00534890(0x01ED78C8,*(uint *)(param_1 + 800));
  }
  else {
    FUN_0053f940(0x01ED78C8,0x01ED73E0[3],1);
  }
  FUN_004bd620(param_1);
  FUN_004bd430(param_1);
  iVar4 = FUN_00504890(0x01DA62F0,3);
  if ((iVar4 != 0) && (iVar4 = FUN_00504890(0x01DA62F0,4), iVar4 != 0)) {
    0x01DA62F0[1] = 3;
    FUN_004b4430(param_1);
    FUN_004ba490(param_1);
    FUN_00507790(0x01DA62F0);
    FUN_004dfc40(0x01D70AB8);
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
         *(uint *)(param_1 + 0xdc);
    _DAT_01d22c68 = 0;
    *(uint *)(param_1 + 0x284) = 0;
LAB_004b8391:
    iVar4 = _DAT_01d22c68;
    if (_DAT_01d22c3c != 0) {
      if ((DAT_007dffb4 == 0) && (*(int *)(0x01D1A05C + 0x40) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      if ((iVar4 != 0) && (_DAT_01d22c68 == 0)) {
        FUN_004b7ee0(param_1);
      }
      if ((iVar4 == 0) && (_DAT_01d22c68 != 0)) {
        FUN_004b7de0(param_1);
        FUN_00534890(0x01ED78C8,*(uint *)(0x01ED78C8 + 0x15aeb8));
      }
    }
    _DAT_01d22c68 = iVar4;
    if ((*(int *)(param_1 + 0x220) == 0) && (_DAT_01d22200 == 0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    FUN_004df5d0(0x01D70A78,uVar5);
    FUN_004ba540(param_1);
    FUN_004b4d50(param_1);
    FUN_004b4f00(param_1);
    FUN_004b92e0(param_1);
    FUN_004c4bc0(param_1);
    iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    if ((iVar4 != 0) &&
       (iVar6 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 = 0x01D1A05C,
       iVar6 != 0)) {
      *(uint *)(param_1 + 0x264) = 0;
      if (*(int *)(iVar4 + 0x40) != 0) {
        *(uint *)(iVar4 + 0x40) = 0;
      }
      if (DAT_007dffb4 != 0) {
        FUN_004119a0(DAT_007dffb4,0);
      }
    }
    if (*(int *)(0x01ED78C8 + 0x15aeb8) < 0) {
      0x01ED73E0[4] = 2;
LAB_004b84e1:
      iVar4 = FUN_0053f940(0x01ED78C8,0x01ED73E0[3],0x01ED73E0[4]);
      if (iVar4 != 0) {
        FUN_004b4430(param_1);
      }
      0x01ED73E0[4] = 0;
    }
    else if ((((*(int *)(param_1 + 0x324) != 0) && (*(int *)(param_1 + 0xe8) == 0)) &&
             (0x01DA62F0[0x5e] == 0)) && (*(int *)(param_1 + 0x264) == 0)) goto LAB_004b84e1;
    bVar2 = false;
    FUN_004b6f30(param_1);
    if (_DAT_01d22200 == 0) {
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar4 == 0) goto LAB_004b8719;
      if (*(int *)(0x01D81080 + 0x1014) != 0) goto LAB_004b8391;
      FUN_00484f10(&DAT_01d22204);
      *(uint *)(param_1 + 0x224) = 0;
      if (*(int *)(0x01D1A05C + 0x40) == 0) {
        if (DAT_007dffb4 == 0) {
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (1 < iVar4) goto LAB_004b8594;
          if (*0x01DA62F0 == 2) {
            uVar5 = FUN_00508960("Leave network game");
            FUN_00482070(&DAT_01d22204,uVar5);
            uVar5 = FUN_00508960("Return to game");
            FUN_00482070(&DAT_01d22204,uVar5);
            uVar5 = FUN_00508960("You are connect to a network game.\nDo you want to leave the game?",0,1);
            FUN_00483520(&DAT_01d22204,uVar5);
            _DAT_01d22200 = 1;
          }
          else if (*0x01DA62F0 == 1) {
            uVar5 = FUN_00508960("Abort network game");
            FUN_00482070(&DAT_01d22204,uVar5);
            uVar5 = FUN_00508960("Return to game");
            FUN_00482070(&DAT_01d22204,uVar5);
            uVar5 = FUN_00508960("You are hosting a network game.\nDo you want to abort the game?",0,1);
            FUN_00483520(&DAT_01d22204,uVar5);
            _DAT_01d22200 = 1;
          }
          else {
            FUN_004c4cc0(param_1);
            FUN_0055fee0(0x02CF5680);
            FUN_004831c0(local_8a4);
            uVar5 = FUN_00508960("Return");
            FUN_00482070(local_8a4,uVar5);
            uVar5 = FUN_00508960("Options");
            FUN_00482070(local_8a4,uVar5);
            uVar5 = FUN_00508960("Load game");
            FUN_00482070(local_8a4,uVar5);
            uVar5 = FUN_00508960("Save game");
            FUN_00482070(local_8a4,uVar5);
            uVar5 = FUN_00508960(&DAT_005c276c);
            FUN_00482070(local_8a4,uVar5);
            if (*(int *)(param_1 + 0x24c) == 1) {
              uVar5 = FUN_00508960("Skip cinematic.");
              FUN_00482070(local_8a4,uVar5);
            }
            if (*(int *)(param_1 + 0x24c) != 0) {
              FUN_00484bd0(local_8a4,3,0);
            }
            uVar5 = FUN_00508960("Game paused",0xffffffff,0);
            iVar4 = FUN_00483450(local_8a4,uVar5);
            if (iVar4 == 1) {
              FUN_004df5d0(0x01D70A78,0);
              FUN_004b7ee0(param_1);
              FUN_004ea280(1);
              FUN_004b7de0(param_1);
              FUN_004df5d0(0x01D70A78,*(int *)(param_1 + 0x220) == 0);
              FUN_00534890(0x01ED78C8,*(uint *)(0x01ED78C8 + 0x15aeb8));
              _DAT_01c5b0e0 = _DAT_01549ab4;
              if (0xf0 < DAT_005fba1c) {
                _DAT_01c5b0e0 = _DAT_01549aa8;
              }
            }
            if (iVar4 == 2) {
              FUN_004bfa40(param_1);
            }
            if (iVar4 == 3) {
              FUN_004bda10(param_1,0);
            }
            if (iVar4 == 4) {
              uVar5 = FUN_00508960(&DAT_005c278d);
              iVar6 = FUN_0047d8c0(0x01C5B0E4,uVar5);
              if (iVar6 != 0) {
                FUN_004832b0(local_8a4,0);
                goto LAB_004b8594;
              }
            }
            if (iVar4 == 5) {
              FUN_004bd470(param_1);
              iVar4 = FUN_00530530(0x01ED73E0);
              *(uint *)(param_1 + 0xe8) = (uint)(iVar4 == 0);
            }
            FUN_004032b0();
            FUN_0055fd30(0x02CF5680);
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
                 *(uint *)(param_1 + 0xdc);
            bVar2 = true;
            FUN_004832b0(local_8a4,0);
          }
        }
        else {
          FUN_004119a0(DAT_007dffb4,0);
        }
      }
      else {
        *(uint *)(0x01D1A05C + 0x40) = 0;
      }
    }
    else {
      if (_DAT_01d22204 < 1) {
        _DAT_01d22200 = 0;
        goto LAB_004b8719;
      }
      iVar4 = FUN_00483970(&DAT_01d22204);
      if (iVar4 != -2) {
        FUN_004032b0();
        FUN_0047f970(0x01C5B0E4);
        FUN_00484f10(&DAT_01d22204);
        _DAT_01d22200 = 0;
      }
      if (iVar4 == 0) {
        FUN_005043b0(0x01DA62F0,1);
        goto LAB_004b8594;
      }
    }
LAB_004b8719:
    if (((*(int *)(param_1 + 0xe8) != 0) || (0x01DA62F0[0x5e] != 0)) || (bVar2)) {
      FUN_00580f70();
    }
    else {
      if (*(int *)(param_1 + 0x280) < 3) {
        FUN_00560d70();
        *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
      }
      if (_DAT_01c6cee8 == 0) {
        FUN_0057a8a0();
        *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 1;
      }
      else {
        FUN_00566260(1);
        FUN_00580f70();
        *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 1;
      }
    }
    if (_DAT_02d21b84 != 0) {
      _DAT_02d21b84 = 0;
      FUN_00534890(0x01ED78C8,*(uint *)(0x01ED78C8 + 0x15aeb8));
    }
    if (*(float *)(param_1 + 0x294) <= 0.0) {
      *(byte *)(param_1 + 0xb80) = 0;
    }
    else {
      *(float *)(param_1 + 0x294) = *(float *)(param_1 + 0x294) - *(float *)(param_1 + 0x314);
      fVar9 = (float10)1 + (float10)*(float *)(param_1 + 0x294);
      FUN_005a3120();
      local_20 = (int)ROUND(fVar9);
      FUN_005a28c0(param_1 + 0xb80,&DAT_005c2792,local_20);
      if (*(float *)(param_1 + 0x294) <= 0.0) {
        *(uint *)(param_1 + 0x294) = 0;
        FUN_004bd660(param_1);
        local_14 = -1.0;
      }
    }
    iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
    if ((iVar4 == 2) || ((*(uint *)(param_1 + 0x294) & 0x7fffffff) == 0)) {
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
      if (iVar4 != 0) goto LAB_004b8594;
      if (local_14 < 0.0) {
        iVar4 = FUN_004bd8d0(param_1);
        if (iVar4 != 0) goto LAB_004b8594;
      }
      else {
        local_14 = local_14 + *(float *)(param_1 + 0x314);
        if ((float)_DAT_005c27b8 < local_14) {
          FUN_004bd660(param_1);
          local_14 = -1.0;
        }
      }
    }
    if (*0x01ED73E0 != 0) {
      local_1c = 1;
      goto LAB_004b8594;
    }
    FUN_004bec20(param_1);
    if (*(int *)(param_1 + 0x224) != 0) {
      FUN_00580790();
    }
    if (*(int *)(param_1 + 0xa78) == 0) {
      if (local_18 != 0) {
        local_18 = *(int *)(param_1 + 0xa78);
        FUN_0055fd30(0x02CF5680);
      }
      if (*(int *)(param_1 + 0x290) != 0) {
        FUN_004946f0(0x01C6E360,"NewSet",1);
        *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + -1;
      }
      goto LAB_004b8391;
    }
    local_1c = 0;
  }
LAB_004b8594:
  iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
  if (((iVar4 == 2) || ((*(uint *)(param_1 + 0x294) & 0x7fffffff) == 0)) &&
     (*(int *)(param_1 + 0xa78) == 0)) {
    FUN_004831c0(local_4e4);
    uVar5 = FUN_00508960("Load game");
    FUN_00482070(local_4e4,uVar5);
    uVar5 = FUN_00508960(&DAT_005c27a6);
    FUN_00482070(local_4e4,uVar5);
    do {
      uVar5 = FUN_00508960("Game Over",0xffffffff,0);
      iVar4 = FUN_00483450(local_4e4,uVar5);
      if (iVar4 == 0) {
        FUN_004bfa40(param_1);
        break;
      }
    } while (iVar4 != 1);
    FUN_004832b0(local_4e4,0);
  }
  uVar5 = FUN_004f7bf0(0x01D81080);
  piVar3 = 0x01D70A78;
  *(uint *)(param_1 + 0x274) = uVar5;
  FUN_004df5d0(piVar3,0);
  FUN_0055fee0(0x02CF5680);
  FUN_00411a40();
  FUN_004c49f0(param_1);
  FUN_004b7ee0(param_1);
  (**(code **)(*0x01D70A78 + 8))(0x01D70A78);
  FUN_00537520(0x01ED78C8);
  *(uint *)(param_1 + 0x210) = 0x3f800000;
  FUN_00484f10(&DAT_01d22204);
  FUN_004da840();
  return local_1c;
}
