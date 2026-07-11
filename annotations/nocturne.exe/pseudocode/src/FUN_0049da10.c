// Name: FUN_0049da10
// Address: 0049da10
// Address Range: [[0049da10, 0049e60e]]
// Convention: unknown
// Signature: undefined4 FUN_0049da10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049da10(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte local_400 [368];
  byte local_290 [368];
  byte local_120 [256];
  byte *local_20;
  uint local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  FUN_0043ae00(PTR_DAT_005ad350);
  FUN_0043ac60(PTR_DAT_005ad350,"Nocturne is alive and kicking\n");
  FUN_0043ac60(PTR_DAT_005ad350,"game.cpp built on %s %s\n\n","Nov 02 1999",
               "15:09:32");
  FUN_0043ac60(PTR_DAT_005ad350,"System RAM: %d\n",_DAT_02de20a8);
  local_18 = 1;
  FUN_0043ac60(PTR_DAT_005ad350,"Swap file: %d\n",_DAT_02de20ac);
  FUN_004736d0(0x01BCD074,local_120);
  FUN_0043ac60(PTR_DAT_005ad350,&DAT_0058282b,local_120);
  local_20 = local_400;
  FUN_0043ac60(PTR_DAT_005ad350,"ESP: %08X\n",local_400);
  *(uint *)(param_1 + 0x270) = 0;
  *(uint *)(param_1 + 0x1fc) = 0;
  *(uint *)(param_1 + 0x274) = 1;
  *(uint *)(param_1 + 0x1e4) = 0;
  *(uint *)(param_1 + 0x1e8) = 0;
  *(uint *)(param_1 + 0x278) = 0;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(uint *)(param_1 + 0x1e0) = 0;
  *(uint *)(param_1 + 0x1d4) = 0;
  *(uint *)(param_1 + 0x1d8) = 0;
  *(uint *)(param_1 + 0x1dc) = 0;
  *(uint *)(param_1 + 0x27c) = 0;
  *(uint *)(param_1 + 0x280) = 0;
  *(uint *)(param_1 + 0x1ec) = 0x3f800000;
  *(uint *)(param_1 + 0x1f0) = 0;
  *(uint *)(param_1 + 500) = 0;
  *(uint *)(param_1 + 0x1f8) = 0;
  *(byte *)(param_1 + 0x8b4) = 0;
  *(uint *)(param_1 + 0x9b4) = 0;
  *(uint *)(param_1 + 0x9b8) = 0;
  *(uint *)(param_1 + 0x23c) = 0;
  *(uint *)(param_1 + 0xcc) = 0;
  *(uint *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x238) = 0;
  *(uint *)(param_1 + 0x20c) = 0;
  *(uint *)(param_1 + 0xac8) = 0;
  *(uint *)(param_1 + 0x240) = 0;
  *(uint *)(param_1 + 0x244) = 0;
  *(uint *)(param_1 + 0x220) = 0;
  *(uint *)(param_1 + 0x218) = 0;
  *(uint *)(param_1 + 0x21c) = 0;
  _DAT_01c78420 = 0;
  *(uint *)(param_1 + 0x210) = 0;
  uVar3 = FUN_004ee3f0(&DAT_0058283a);
  iVar4 = FUN_00566e10(uVar3);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x210) = 1;
  }
  pcVar6 = "Flashlight";
  FUN_0044e1e0(&DAT_01c74640);
  pcVar7 = &DAT_01c74640;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  _DAT_01c762f4 = 0;
  _DAT_01c74740 = 0x42800000;
  FUN_005084c0(0x01E57284);
  if (_DAT_01c78698 == 0) {
    FUN_0048a150(0x01C08D04);
  }
  else {
    _DAT_01c78698 = 0;
    FUN_0050e820(0x01E57284,&DAT_01c7869c);
  }
  if (*(int *)(param_1 + 0x224) < 0x8000) {
    *(uint *)(param_1 + 0x224) = 0x8000;
  }
  else if (0x10000 < *(int *)(param_1 + 0x224)) {
    *(uint *)(param_1 + 0x224) = 0x10000;
  }
  FUN_0050e400(0x01E57284,*(uint *)(param_1 + 0x224));
  FUN_0049d870(param_1);
  FUN_0049aa90(param_1);
  FUN_00476160(&DAT_01c78424);
  if (*(int *)(param_1 + 0x274) == 0) {
    FUN_005088f0(0x01E57284,*(uint *)(param_1 + 0x270));
  }
  else {
    FUN_005125a0(0x01E57284,0x01E56DA0[3],1);
  }
  FUN_004a37e0(param_1);
  FUN_004a3660(param_1);
  iVar4 = FUN_004ea370(0x01CEA280,3);
  if ((iVar4 != 0) && (iVar4 = FUN_004ea370(0x01CEA280,4), iVar4 != 0)) {
    0x01CEA280[1] = 3;
    FUN_0049a890(param_1);
    FUN_0049f8c0(param_1);
    FUN_004ed2d0(0x01CEA280);
    FUN_004c5fa0(0x01CC3160);
    *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) =
         *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 600) = 0;
    while( true ) {
      if ((*(int *)(param_1 + 0x1fc) != 0) || (uVar3 = 1, _DAT_01c78420 != 0)) {
        uVar3 = 0;
      }
      FUN_004c4210(0x01CC30E4,uVar3);
      FUN_0049f930(param_1);
      FUN_0049b0b0(param_1);
      FUN_0049b260(param_1);
      FUN_0049e7d0(param_1);
      if ((((*(int *)(param_1 + 0x274) != 0) && (*(int *)(param_1 + 0xcc) == 0)) &&
          (0x01CEA280[0x5a] == 0)) && (*(int *)(param_1 + 0x240) == 0)) {
        iVar4 = FUN_005125a0(0x01E57284,0x01E56DA0[3],0x01E56DA0[4]);
        if (iVar4 != 0) {
          FUN_0049a890(param_1);
        }
        0x01E56DA0[4] = 0;
      }
      FUN_0049cc10(param_1);
      if (_DAT_01c78420 == 0) {
        iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
        if (iVar4 != 0) {
          FUN_00476160(&DAT_01c78424);
          *(uint *)(param_1 + 0x200) = 0;
          iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
          if (1 < iVar4) goto LAB_0049dec1;
          if (*0x01CEA280 == 2) {
            uVar3 = FUN_004ee370("Leave network game");
            FUN_00473cb0(&DAT_01c78424,uVar3);
            uVar3 = FUN_004ee370("Return to game");
            FUN_00473cb0(&DAT_01c78424,uVar3);
            uVar3 = FUN_004ee370("You are connect to a network game.\nDo you want to leave the game?",0,1);
            FUN_00474e70(&DAT_01c78424,uVar3);
            _DAT_01c78420 = 1;
          }
          else if (*0x01CEA280 == 1) {
            uVar3 = FUN_004ee370("Abort network game");
            FUN_00473cb0(&DAT_01c78424,uVar3);
            uVar3 = FUN_004ee370("Return to game");
            FUN_00473cb0(&DAT_01c78424,uVar3);
            uVar3 = FUN_004ee370("You are hosting a network game.\nDo you want to abort the game?",0,1);
            FUN_00474e70(&DAT_01c78424,uVar3);
            _DAT_01c78420 = 1;
          }
          else {
            FUN_0052df90(0x02DC9450);
            FUN_004940d0(0x01C70F74);
            FUN_00474c90(local_290);
            uVar3 = FUN_004ee370("Return");
            FUN_00473cb0(local_290,uVar3);
            uVar3 = FUN_004ee370("Options");
            FUN_00473cb0(local_290,uVar3);
            uVar3 = FUN_004ee370("Load game");
            FUN_00473cb0(local_290,uVar3);
            uVar3 = FUN_004ee370("Save game");
            FUN_00473cb0(local_290,uVar3);
            uVar3 = FUN_004ee370(&DAT_00582963);
            FUN_00473cb0(local_290,uVar3);
            if (*(int *)(param_1 + 0x228) == 1) {
              uVar3 = FUN_004ee370("Skip cinematic.");
              FUN_00473cb0(local_290,uVar3);
            }
            if (*(int *)(param_1 + 0x228) != 0) {
              FUN_00475f80(local_290,3,0);
            }
            uVar3 = FUN_004ee370("Game paused",0xffffffff);
            iVar4 = FUN_00474d70(local_290,uVar3);
            if (iVar4 == 1) {
              FUN_004c4210(0x01CC30E4,0);
              FUN_0049d960(param_1);
              FUN_004d21c0(1);
              FUN_0049d870(param_1);
              FUN_004c4210(0x01CC30E4,*(int *)(param_1 + 0x1fc) == 0);
              FUN_005088f0(0x01E57284,*(uint *)(0x01E57284 + 0x15aabc));
              _DAT_01bcd070 = _DAT_014b9904;
              if (0xf0 < DAT_005b7620) {
                _DAT_01bcd070 = _DAT_014b9900;
              }
            }
            if (iVar4 == 2) {
              FUN_004a6570(param_1);
            }
            if (iVar4 == 3) {
              FUN_004a3b90(param_1,0);
            }
            if (iVar4 == 4) {
              uVar3 = FUN_004ee370(&DAT_00582984);
              iVar5 = FUN_00470230(0x01BCD074,uVar3);
              if (iVar5 != 0) {
                FUN_00474cf0(local_290,0);
                goto LAB_0049dec1;
              }
            }
            if (iVar4 == 5) {
              iVar4 = FUN_00504d90(0x01E56DA0);
              *(uint *)(param_1 + 0xcc) = (uint)(iVar4 == 0);
            }
            FUN_00403f50();
            if (*(int *)(param_1 + 0xcc) == 0) {
              FUN_0052ddf0(0x02DC9450);
              FUN_004940d0(0x01C70F74);
            }
            *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) =
                 *(uint *)(param_1 + 0xc4);
            FUN_00474cf0(local_290,0);
          }
        }
      }
      else if (_DAT_01c78424 < 1) {
        _DAT_01c78420 = 0;
      }
      else {
        iVar4 = FUN_00475230(&DAT_01c78424);
        if (iVar4 != -2) {
          FUN_00403f50();
          FUN_004720c0(0x01BCD074);
          FUN_00476160(&DAT_01c78424);
          _DAT_01c78420 = 0;
        }
        if (iVar4 == 0) {
          FUN_004e9e90(0x01CEA280,1);
          goto LAB_0049dec1;
        }
      }
      if ((*(int *)(param_1 + 0xcc) == 0) && (0x01CEA280[0x5a] == 0)) {
        FUN_00553910();
        *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + 1;
      }
      else {
        FUN_005591c0();
      }
      if (_DAT_02de20a4 != 0) {
        _DAT_02de20a4 = 0;
        FUN_005088f0(0x01E57284,*(uint *)(0x01E57284 + 0x15aabc));
      }
      iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
      if (iVar4 == 2) {
        iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1c);
        if (iVar4 != 0) goto LAB_0049dec1;
        if (local_14 < 0.0) {
          iVar4 = FUN_004a3a50(param_1);
          if (iVar4 != 0) goto LAB_0049dec1;
        }
        else {
          local_14 = local_14 + *(float *)(param_1 + 0x264);
          if ((float)_DAT_005829a2 < local_14) {
            FUN_004a3820(param_1);
            local_14 = -1.0;
          }
        }
      }
      if (*0x01E56DA0 != 0) {
        local_1c = 1;
        goto LAB_0049dec1;
      }
      FUN_004a57c0(param_1);
      if (*(int *)(param_1 + 0x200) != 0) {
        FUN_00558b00();
      }
      if (*(int *)(param_1 + 0x9c4) != 0) break;
      if (local_18 != 0) {
        local_18 = *(int *)(param_1 + 0x9c4);
        FUN_0052ddf0(0x02DC9450);
        FUN_004940d0(0x01C70F74);
      }
    }
    local_1c = 0;
  }
LAB_0049dec1:
  iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
  if ((iVar4 == 2) && (*(int *)(param_1 + 0x9c4) == 0)) {
    FUN_00474c90(local_400);
    uVar3 = FUN_004ee370("Load game");
    FUN_00473cb0(local_400,uVar3);
    uVar3 = FUN_004ee370(&DAT_00582993);
    FUN_00473cb0(local_400,uVar3);
    do {
      uVar3 = FUN_004ee370("Game Over",0xffffffff);
      iVar4 = FUN_00474d70(local_400,uVar3);
      if (iVar4 == 0) {
        FUN_004a6570(param_1);
        break;
      }
    } while (iVar4 != 1);
    FUN_00474cf0(local_400,0);
  }
  uVar3 = FUN_004d9df0(0x01CC9450);
  piVar2 = 0x01CC30E4;
  *(uint *)(param_1 + 0x24c) = uVar3;
  FUN_004c4210(piVar2,0);
  FUN_0052df90(0x02DC9450);
  FUN_004940d0(0x01C70F74);
  FUN_0049d960(param_1);
  (**(code **)(*0x01CC30E4 + 8))(0x01CC30E4);
  FUN_0050ad20(0x01E57284);
  *(uint *)(param_1 + 0x1ec) = 0x3f800000;
  FUN_00476160(&DAT_01c78424);
  FUN_004bf270();
  return local_1c;
}
