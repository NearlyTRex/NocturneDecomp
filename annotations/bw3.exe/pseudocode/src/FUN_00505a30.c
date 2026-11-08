// Name: FUN_00505a30
// Address: 00505a30
// Address Range: [[00505a30, 0050631e]]
// Convention: unknown
// Signature: undefined4 FUN_00505a30(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00505a30(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  float fStack_138;
  float fStack_134;
  char acStack_130 [256];
  uint uStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*param_1 != 0) {
    uStack_30 = DAT_0060728c;
    param_1[param_1[0x49] * 0x20 + 0x17] = 1;
    param_1[param_1[0x49] * 0x20 + 0x19] = 0;
    DAT_0060728c = 0;
    param_1[1] = 1;
    if (*param_1 == 1) {
      iVar3 = FUN_005a35cc();
      param_1[0x5f] = iVar3;
      FUN_00507370(param_1);
    }
    else {
      FUN_00507660(param_1);
    }
    piStack_2c = param_1 + 0x4a;
    while (*param_1 != 0) {
      FUN_00560d70();
      FUN_005a28c0(acStack_130,"Mission: %s",piStack_2c);
      FUN_00401fe0(acStack_130,0,0xb);
      FUN_005a28c0(acStack_130,"MyGameSettigsId: %d",_DAT_01da6484);
      FUN_00401fe0(acStack_130,400,0xb);
      FUN_00401fe0("Player",0,0x21);
      FUN_00401fe0(0x5cab98,100,0x21);
      FUN_00401fe0(0x5cab9b,200,0x21);
      FUN_00401fe0("Ready",300,0x21);
      FUN_00401fe0("heroType",400,0x21);
      FUN_00401fe0("gameSettings",500,0x21);
      _DAT_01c6b5c0 = 0xff;
      FUN_00402f30(0,0x31,DAT_005fba18 + -1);
      iVar3 = 0x37;
      iStack_28 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)(0x01DA62F0 + 0x1c); iStack_20 = iStack_20 + 1) {
        iStack_1c = iStack_28 + 0x01DA62F0 + 0x20;
        FUN_00401fe0(iStack_1c,0,iVar3);
        if (_DAT_02cfd89c == *(int *)(iStack_1c + 0x1c)) {
          pcVar5 = "(Local)";
          pcVar7 = acStack_130;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        else {
          FUN_0056f580(iStack_1c + 0x1c,acStack_130);
        }
        FUN_00401fe0(acStack_130,100,iVar3);
        if (iStack_20 == *(int *)(0x01DA62F0 + 0x124)) {
          pcVar7 = "(Local)";
LAB_00505c5c:
          pcVar5 = acStack_130;
          do {
            cVar1 = *pcVar7;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
        }
        else {
          if (*(float *)(iStack_1c + 0x28) < 0.0) {
            pcVar7 = (char *)0x5cabd1;
            goto LAB_00505c5c;
          }
          fVar9 = (float10)*(float *)(iStack_1c + 0x28) * (float10)_DAT_005cac09;
          FUN_005a3120();
          iStack_18 = (int)ROUND(fVar9);
          FUN_005a28c0(acStack_130,0x5cabcc,iStack_18);
        }
        FUN_00401fe0(acStack_130,200,iVar3);
        if (*(int *)(iStack_1c + 0x44) == 0) {
          pcVar7 = "Not ready";
        }
        else {
          pcVar7 = "Ready";
        }
        pcVar5 = acStack_130;
        do {
          cVar1 = *pcVar7;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        FUN_00401fe0(acStack_130,300,iVar3);
        FUN_005a28c0(acStack_130,0x5cabe3,*(uint *)(iStack_1c + 0x14));
        FUN_00401fe0(acStack_130,400,iVar3);
        if (*param_1 == 1) {
          FUN_005a28c0(acStack_130,0x5cabe6,*(uint *)(iStack_1c + 0x34));
          FUN_00401fe0(acStack_130,500,iVar3);
        }
        iVar3 = iVar3 + 0xb;
        iStack_28 = iStack_28 + 0x80;
      }
      iVar3 = iVar3 + 0x2c;
      iVar6 = (_DAT_01da648c - (DAT_005fba1c - iVar3) / 0xb) + 1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iStack_24 = iVar6 * 0x120 + 0x1da649c;
      iVar8 = iVar6 * 0x120 + 0x1da64b0;
      for (; iVar6 < _DAT_01da648c; iVar6 = iVar6 + 1) {
        FUN_00401fe0(iStack_24,0,iVar3);
        FUN_00401fe0(iVar8,100,iVar3);
        iVar3 = iVar3 + 0xb;
        iStack_24 = iStack_24 + 0x120;
        iVar8 = iVar8 + 0x120;
      }
      FUN_0057a8a0();
      FUN_00504c70(param_1);
      iVar3 = 0;
      piVar4 = param_1;
      if (0 < param_1[7]) {
        do {
          piVar4[0x1a] = 0;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x20;
        } while (iVar3 < param_1[7]);
      }
      param_1[0x5e] = 0;
      if (*param_1 == 1) {
        param_1[param_1[0x49] * 0x20 + 0x15] = _DAT_01da6484;
        iVar3 = 0;
        bVar2 = true;
        piVar4 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar4[0x19] == 0) {
              bVar2 = false;
            }
            if (_DAT_01da6484 != piVar4[0x15]) {
              iStack_18 = _DAT_01da6478 - piVar4[0x16];
              fStack_138 = (float)iStack_18 * (float)_DAT_005cac11;
              if (fStack_138 < 0.0) {
                fStack_138 = 0.0;
              }
              if ((float)_DAT_005cac19 < fStack_138) {
                fStack_138 = 30.0;
              }
              if ((float)_DAT_005cac21 < fStack_138) {
                FUN_00507450(param_1,iVar3);
              }
              bVar2 = false;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 0x20;
          } while (iVar3 < param_1[7]);
        }
        if ((bVar2) && (1 < param_1[7])) {
          param_1[1] = 2;
          FUN_004032b0();
          iVar3 = FUN_00504890(param_1,1);
          piVar4 = piStack_2c;
          if (iVar3 != 0) {
            FUN_0047cfa0(0x01C5B0E4,"Loading %s",piStack_2c);
            FUN_005a35f0(param_1[0x5f]);
            FUN_0040cdc0(param_1[0x5f]);
            FUN_004f5bc0(0x01D81080,piVar4,0);
            iVar3 = FUN_004f7880(0x01D81080,0);
            if (iVar3 != 0) {
              FUN_004f7590(0x01D81080);
              iVar3 = FUN_00504890(param_1,2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
          param_1[1] = 1;
        }
      }
      if ((*param_1 == 2) && (param_1[1] == 2)) {
        FUN_0047cfa0(0x01C5B0E4,"Loading %s",param_1 + 0x4a);
        FUN_005a35f0(param_1[0x5f]);
        FUN_0040cdc0(param_1[0x5f]);
        FUN_004f5bc0(0x01D81080,param_1 + 0x4a,0);
        iVar3 = FUN_004f7880(0x01D81080,0);
        if (iVar3 != 0) {
          FUN_004f7590(0x01D81080);
          iVar3 = FUN_00504890(param_1,2);
          if (iVar3 != 0) {
            iVar3 = FUN_005806a0();
            iVar6 = iVar3 / 0x12 - _DAT_01da6474;
            _DAT_01da6474 = iVar3 / 0x12;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x20000 < iVar6) {
              iVar6 = 0x20000;
            }
            _DAT_01da6478 = _DAT_01da6478 + iVar6;
            _DAT_01da6488 = _DAT_01da6478 + -0x1e0000;
            return 1;
          }
        }
        param_1[1] = 1;
        goto LAB_00505d65;
      }
      if ((*param_1 == 2) && (DAT_00603454 != 0)) {
        iStack_18 = _DAT_01da6478 - param_1[param_1[0x49] * 0x20 + 0x18];
        fStack_134 = (float)iStack_18 * (float)_DAT_005cac11;
        if (fStack_134 < 0.0) {
          fStack_134 = 0.0;
        }
        if ((float)_DAT_005cac19 < fStack_134) {
          fStack_134 = 30.0;
        }
        if ((float)_DAT_005cac21 < fStack_134) {
          FUN_00507660(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar3 != 0) goto LAB_00505d65;
      iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
      if (iVar3 != 0) {
        param_1[param_1[0x49] * 0x20 + 0x19] = (uint)(param_1[param_1[0x49] * 0x20 + 0x19] == 0);
        if (*param_1 == 1) {
          FUN_00507370(param_1);
        }
        else {
          FUN_00507660(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1f);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_0047ecf0(0x01C5B0E4,"Send chat",0x1da61f0,0x100,1), iVar3 != 0)) {
        FUN_005064d0(param_1,0x1da61f0,0xffffffff);
      }
      for (iVar3 = 0; iVar3 < *(int *)(0x01DA62F0 + 0x1c); iVar3 = iVar3 + 1) {
        FUN_00506320(param_1,iVar3,0x40000000);
      }
    }
    FUN_0047ce80(0x01C5B0E4,"You have been disconnected from the game.");
LAB_00505d65:
    FUN_004032b0();
    FUN_005043b0(param_1,1);
    FUN_004032b0();
    DAT_0060728c = uStack_30;
  }
  return 0;
}
