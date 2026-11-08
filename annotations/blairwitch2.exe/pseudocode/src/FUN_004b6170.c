// Name: FUN_004b6170
// Address: 004b6170
// Address Range: [[004b6170, 004b6e0c]]
// Convention: unknown
// Signature: undefined4 FUN_004b6170(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b6170(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte local_89c [960];
  byte local_4dc [960];
  byte local_11c [256];
  byte *local_1c;
  uint local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 1;
  FUN_004368b0(PTR_DAT_00609ed0);
  FUN_00436710(PTR_DAT_00609ed0,"Nocturne is alive and kicking\n");
  FUN_00436710(PTR_DAT_00609ed0,"game.cpp built on %s %s\n\n","Oct 16 2000",
               "23:00:23");
  FUN_00436710(PTR_DAT_00609ed0,"System RAM: %d\n",_DAT_02664638);
  FUN_00436710(PTR_DAT_00609ed0,"Swap file: %d\n",_DAT_0266463c);
  FUN_00436710(PTR_DAT_00609ed0,&DAT_005d7738);
  FUN_004807e0(0x01C25594,local_11c);
  FUN_00436710(PTR_DAT_00609ed0,&DAT_005d773a,local_11c);
  FUN_0059c2c0(0x02668118);
  local_1c = local_89c;
  FUN_00436710(PTR_DAT_00609ed0,"ESP: %08X\n",local_89c);
  *(uint *)(param_1 + 0x290) = 0;
  *(uint *)(param_1 + 0x218) = 0;
  *(uint *)(param_1 + 0x294) = 1;
  *(uint *)(param_1 + 0x200) = 0;
  *(uint *)(param_1 + 0x204) = 0;
  *(uint *)(param_1 + 0x298) = 0;
  *(uint *)(param_1 + 0x1ec) = 0;
  *(uint *)(param_1 + 0x1fc) = 0;
  *(uint *)(param_1 + 0x1f0) = 0;
  *(uint *)(param_1 + 500) = 0;
  *(uint *)(param_1 + 0x1f8) = 0;
  *(uint *)(param_1 + 0x29c) = 0;
  *(uint *)(param_1 + 0x2a0) = 0;
  *(uint *)(param_1 + 0x208) = 0x3f800000;
  *(uint *)(param_1 + 0x20c) = 0;
  *(uint *)(param_1 + 0x210) = 0;
  *(uint *)(param_1 + 0x214) = 0;
  *(byte *)(param_1 + 0x8d8) = 0;
  *(uint *)(param_1 + 0x9d8) = 0;
  *(uint *)(param_1 + 0x9dc) = 0;
  *(uint *)(param_1 + 600) = 0;
  *(uint *)(param_1 + 0xe0) = 0;
  *(uint *)(param_1 + 0x224) = 0;
  *(uint *)(param_1 + 0x254) = 0;
  *(uint *)(param_1 + 0x228) = 0;
  *(uint *)(param_1 + 0xaec) = 0;
  *(uint *)(param_1 + 0x25c) = 0;
  *(uint *)(param_1 + 0x260) = 0;
  *(uint *)(param_1 + 0x264) = 0;
  *(uint *)(param_1 + 0x23c) = 0;
  *(uint *)(param_1 + 0x234) = 0;
  *(uint *)(param_1 + 0x238) = 0;
  _DAT_01cb7788 = 0;
  *(uint *)(0x01CAF56C + 0x40) = 0;
  FUN_0059ac10();
  *(uint *)(param_1 + 0x22c) = 0;
  FUN_004b5fd0(param_1);
  iVar3 = FUN_005bac90("VELOCITY");
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x22c) = 1;
  }
  FUN_00449d90(0x1cb3950);
  pcVar7 = "Flashlight";
  pcVar8 = &DAT_01cb3990;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  _DAT_01cb5604 = 0;
  _DAT_01cb3a90 = 0x42000000;
  FUN_0052d980(0x01E661B8);
  if (_DAT_01cb7c50 == 0) {
    FUN_0049c190(0x01C3DEB4);
  }
  else {
    _DAT_01cb7c50 = 0;
    FUN_00534990(0x01E661B8,&DAT_01cb7c54);
  }
  if (*(int *)(param_1 + 0x240) < 0x8000) {
    *(uint *)(param_1 + 0x240) = 0x8000;
  }
  else if (0x10000 < *(int *)(param_1 + 0x240)) {
    *(uint *)(param_1 + 0x240) = 0x10000;
  }
  FUN_00534580(0x01E661B8,*(uint *)(param_1 + 0x240));
  FUN_004b3200(param_1);
  FUN_00483d10(&DAT_01cb778c);
  if (*(int *)(param_1 + 0x294) == 0) {
    FUN_0052ddf0(0x01E661B8,*(uint *)(param_1 + 0x290));
  }
  else {
    FUN_00538d10(0x01E661B8,0x01E65CD0[3],1);
  }
  _DAT_01cb80e0 = 0;
  FUN_004bb050(param_1);
  iVar3 = FUN_0050bdb0(0x01D34CB0,3);
  if ((iVar3 != 0) && (iVar3 = FUN_0050bdb0(0x01D34CB0,4), iVar3 != 0)) {
    0x01D34CB0[1] = 3;
    FUN_004b3000(param_1);
    FUN_004b8250(param_1);
    FUN_0050ecb0(0x01D34CB0);
    FUN_004e1b80(0x01D03000);
    *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
         *(uint *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0x278) = 0;
    iVar3 = 0;
LAB_004b6569:
    iVar5 = iVar3;
    if ((*(int *)(param_1 + 0x218) == 0) && (_DAT_01cb7788 == 0)) {
      iVar5 = 1;
    }
    FUN_004dfee0(0x01D02F84,iVar5);
    FUN_004b82e0(param_1);
    FUN_004b3820(param_1);
    FUN_004b39d0(param_1);
    FUN_004b7050(param_1);
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    if ((iVar5 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(iVar5), iVar5 = 0x01CAF56C,
       iVar4 != 0)) {
      *(uint *)(param_1 + 0x25c) = 0;
      *(uint *)(iVar5 + 0x40) = 0;
      if (_DAT_026677e0 != 0) {
        FUN_0059ab70(_DAT_026677e0,0);
      }
    }
    if (*(int *)(0x01E661B8 + 0x15aeb8) < 0) {
      0x01E65CD0[4] = 2;
LAB_004b6635:
      iVar5 = FUN_00538d10(0x01E661B8,0x01E65CD0[3],0x01E65CD0[4]);
      if (iVar5 != 0) {
        FUN_004b3000(param_1);
      }
      0x01E65CD0[4] = 0;
    }
    else if ((((*(int *)(param_1 + 0x294) != 0) && (*(int *)(param_1 + 0xe0) == 0)) &&
             (0x01D34CB0[0x5e] == 0)) && (*(int *)(param_1 + 0x25c) == 0)) goto LAB_004b6635;
    iVar5 = 0;
    FUN_004b5190(param_1);
    if (_DAT_01cb7788 == 0) {
      iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
      if (iVar4 != 0) {
        FUN_00483d10(&DAT_01cb778c);
        *(uint *)(param_1 + 0x21c) = 0;
        if (*(int *)(0x01CAF56C + 0x40) == 0) {
          if (_DAT_026677e0 == 0) {
            iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
            iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
            if (1 < iVar4) goto LAB_004b66e4;
            if (*0x01D34CB0 == 2) {
              uVar6 = FUN_0050fe80("Leave network game");
              FUN_00480e70(&DAT_01cb778c,uVar6);
              uVar6 = FUN_0050fe80("Return to game");
              FUN_00480e70(&DAT_01cb778c,uVar6);
              uVar6 = FUN_0050fe80("You are connect to a network game.\nDo you want to leave the game?",0,1);
              FUN_00482320(&DAT_01cb778c,uVar6);
              _DAT_01cb7788 = 1;
            }
            else if (*0x01D34CB0 == 1) {
              uVar6 = FUN_0050fe80("Abort network game");
              FUN_00480e70(&DAT_01cb778c,uVar6);
              uVar6 = FUN_0050fe80("Return to game");
              FUN_00480e70(&DAT_01cb778c,uVar6);
              uVar6 = FUN_0050fe80("You are hosting a network game.\nDo you want to abort the game?",0,1);
              FUN_00482320(&DAT_01cb778c,uVar6);
              _DAT_01cb7788 = 1;
            }
            else {
              FUN_0055a360(0x0264B290);
              FUN_00481fc0(local_89c);
              uVar6 = FUN_0050fe80("Return");
              FUN_00480e70(local_89c,uVar6);
              uVar6 = FUN_0050fe80("Options");
              FUN_00480e70(local_89c,uVar6);
              uVar6 = FUN_0050fe80("Load game");
              FUN_00480e70(local_89c,uVar6);
              uVar6 = FUN_0050fe80("Save game");
              FUN_00480e70(local_89c,uVar6);
              uVar6 = FUN_0050fe80(&DAT_005d7845);
              FUN_00480e70(local_89c,uVar6);
              if (*(int *)(param_1 + 0x244) == 1) {
                uVar6 = FUN_0050fe80("Skip cinematic.");
                FUN_00480e70(local_89c,uVar6);
              }
              if (*(int *)(param_1 + 0x244) != 0) {
                FUN_004839d0(local_89c,3,0);
              }
              uVar6 = FUN_0050fe80("Game paused",0xffffffff,0);
              iVar5 = FUN_00482250(local_89c,uVar6);
              if (iVar5 == 1) {
                FUN_004dfee0(0x01D02F84,0);
                FUN_004b60c0(param_1);
                FUN_004ee1a0(1);
                FUN_004b5fd0(param_1);
                FUN_004dfee0(0x01D02F84,*(int *)(param_1 + 0x218) == 0);
                FUN_0052ddf0(0x01E661B8,*(uint *)(0x01E661B8 + 0x15aeb8));
                _DAT_01c25590 = _DAT_01511cc4;
                if (0xf0 < DAT_006141bc) {
                  _DAT_01c25590 = _DAT_01511cc0;
                }
              }
              if (iVar5 == 2) {
                FUN_004bdb10(param_1);
              }
              if (iVar5 == 3) {
                FUN_004bb9b0(param_1,0);
              }
              if (iVar5 == 4) {
                uVar6 = FUN_0050fe80(&DAT_005d7866);
                iVar4 = FUN_0047c760(0x01C25594,uVar6);
                if (iVar4 != 0) {
                  FUN_004820b0(local_89c,0);
                  goto LAB_004b66e4;
                }
              }
              if (iVar5 == 5) {
                FUN_004bb090(param_1);
                iVar5 = FUN_00529b30(0x01E65CD0);
                *(uint *)(param_1 + 0xe0) = (uint)(iVar5 == 0);
              }
              FUN_004032b0();
              if (*(int *)(param_1 + 0xe0) == 0) {
                FUN_0055a1d0(0x0264B290);
              }
              *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
                   *(uint *)(param_1 + 0xd8);
              iVar5 = 1;
              FUN_004820b0(local_89c,0);
            }
          }
          else {
            FUN_0059ab70(_DAT_026677e0,0);
          }
        }
        else {
          *(uint *)(0x01CAF56C + 0x40) = 0;
        }
      }
    }
    else {
      iVar5 = iVar3;
      if (_DAT_01cb778c < 1) {
        _DAT_01cb7788 = 0;
      }
      else {
        iVar4 = FUN_00482770(&DAT_01cb778c);
        if (iVar4 != -2) {
          FUN_004032b0();
          FUN_0047e760(0x01C25594);
          FUN_00483d10(&DAT_01cb778c);
          _DAT_01cb7788 = 0;
        }
        if (iVar4 == 0) {
          FUN_0050b8d0(0x01D34CB0,1);
          goto LAB_004b66e4;
        }
      }
    }
    if (((*(int *)(param_1 + 0xe0) == 0) && (0x01D34CB0[0x5e] == 0)) && (iVar5 == 0)) {
      if (_DAT_01c37788 == 0) {
        FUN_00589560();
        *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
      }
      else {
        FUN_0055ff40(1);
        FUN_0058f270();
        *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
      }
    }
    else {
      FUN_0058f270();
    }
    if (_DAT_02664634 != 0) {
      _DAT_02664634 = 0;
      FUN_0052ddf0(0x01E661B8,*(uint *)(0x01E661B8 + 0x15aeb8));
    }
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(iVar5);
    if ((iVar5 == 2) && (iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c), iVar5 != 0))
    goto LAB_004b66e4;
    if (*0x01E65CD0 != 0) {
      local_18 = 1;
      goto LAB_004b66e4;
    }
    FUN_004bcbf0(param_1);
    if (*(int *)(param_1 + 0x21c) != 0) {
      FUN_0058ead0();
    }
    if (*(int *)(param_1 + 0x9e8) == 0) {
      if (local_14 != 0) {
        local_14 = *(int *)(param_1 + 0x9e8);
        FUN_0055a1d0(0x0264B290);
      }
      goto LAB_004b6569;
    }
    local_18 = 0;
  }
LAB_004b66e4:
  iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
  if ((iVar3 == 2) && (*(int *)(param_1 + 0x9e8) == 0)) {
    FUN_00481fc0(local_4dc);
    uVar6 = FUN_0050fe80("Load game");
    FUN_00480e70(local_4dc,uVar6);
    uVar6 = FUN_0050fe80(&DAT_005d7875);
    FUN_00480e70(local_4dc,uVar6);
    do {
      uVar6 = FUN_0050fe80("Game Over",0xffffffff,0);
      iVar3 = FUN_00482250(local_4dc,uVar6);
      if (iVar3 == 0) {
        FUN_004bdb10(param_1);
        break;
      }
    } while (iVar3 != 1);
    FUN_004820b0(local_4dc,0);
  }
  uVar6 = FUN_004fd450(0x01D182F0);
  piVar2 = 0x01D02F84;
  *(uint *)(param_1 + 0x26c) = uVar6;
  FUN_004dfee0(piVar2,0);
  FUN_0055a360(0x0264B290);
  FUN_0059ac10();
  FUN_004b60c0(param_1);
  (**(code **)(*0x01D02F84 + 8))(0x01D02F84);
  FUN_005308e0(0x01E661B8);
  *(uint *)(param_1 + 0x208) = 0x3f800000;
  FUN_00483d10(&DAT_01cb778c);
  FUN_004dacc0();
  return local_18;
}
