// Name: FUN_0050cf50
// Address: 0050cf50
// Address Range: [[0050cf50, 0050d83e]]
// Convention: unknown
// Signature: undefined4 FUN_0050cf50(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050cf50(int *param_1)

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
    uStack_30 = DAT_0061e990;
    param_1[param_1[0x49] * 0x20 + 0x17] = 1;
    param_1[param_1[0x49] * 0x20 + 0x19] = 0;
    DAT_0061e990 = 0;
    param_1[1] = 1;
    if (*param_1 == 1) {
      iVar3 = FUN_005b849c();
      param_1[0x5f] = iVar3;
      FUN_0050e890(param_1);
    }
    else {
      FUN_0050eb80(param_1);
    }
    piStack_2c = param_1 + 0x4a;
    while (*param_1 != 0) {
      FUN_0055b1f0();
      FUN_005b7790(acStack_130,"Mission: %s",piStack_2c);
      FUN_00401fe0(acStack_130,0,0xb);
      FUN_005b7790(acStack_130,"MyGameSettigsId: %d",_DAT_01d34e44);
      FUN_00401fe0(acStack_130,400,0xb);
      FUN_00401fe0("Player",0,0x21);
      FUN_00401fe0(0x5e0b2c,100,0x21);
      FUN_00401fe0(0x5e0b2f,200,0x21);
      FUN_00401fe0("Ready",300,0x21);
      FUN_00401fe0("heroType",400,0x21);
      FUN_00401fe0("gameSettings",500,0x21);
      _DAT_01c35e60 = 0xff;
      FUN_00402f30(0,0x31,DAT_006141b8 + -1);
      iVar3 = 0x37;
      iStack_28 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)(0x01D34CB0 + 0x1c); iStack_20 = iStack_20 + 1) {
        iStack_1c = iStack_28 + 0x01D34CB0 + 0x20;
        FUN_00401fe0(iStack_1c,0,iVar3);
        if (_DAT_02653630 == *(int *)(iStack_1c + 0x1c)) {
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
          FUN_00578cb0(iStack_1c + 0x1c,acStack_130);
        }
        FUN_00401fe0(acStack_130,100,iVar3);
        if (iStack_20 == *(int *)(0x01D34CB0 + 0x124)) {
          pcVar7 = "(Local)";
LAB_0050d17c:
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
            pcVar7 = (char *)0x5e0b65;
            goto LAB_0050d17c;
          }
          fVar9 = (float10)*(float *)(iStack_1c + 0x28) * (float10)_DAT_005e0b9d;
          FUN_005b7ff0();
          iStack_18 = (int)ROUND(fVar9);
          FUN_005b7790(acStack_130,0x5e0b60,iStack_18);
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
        FUN_005b7790(acStack_130,0x5e0b77,*(uint *)(iStack_1c + 0x14));
        FUN_00401fe0(acStack_130,400,iVar3);
        if (*param_1 == 1) {
          FUN_005b7790(acStack_130,0x5e0b7a,*(uint *)(iStack_1c + 0x34));
          FUN_00401fe0(acStack_130,500,iVar3);
        }
        iVar3 = iVar3 + 0xb;
        iStack_28 = iStack_28 + 0x80;
      }
      iVar3 = iVar3 + 0x2c;
      iVar6 = (_DAT_01d34e4c - (DAT_006141bc - iVar3) / 0xb) + 1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iStack_24 = iVar6 * 0x120 + 0x1d34e5c;
      iVar8 = iVar6 * 0x120 + 0x1d34e70;
      for (; iVar6 < _DAT_01d34e4c; iVar6 = iVar6 + 1) {
        FUN_00401fe0(iStack_24,0,iVar3);
        FUN_00401fe0(iVar8,100,iVar3);
        iVar3 = iVar3 + 0xb;
        iStack_24 = iStack_24 + 0x120;
        iVar8 = iVar8 + 0x120;
      }
      FUN_00589560();
      FUN_0050c190(param_1);
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
        param_1[param_1[0x49] * 0x20 + 0x15] = _DAT_01d34e44;
        iVar3 = 0;
        bVar2 = true;
        piVar4 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar4[0x19] == 0) {
              bVar2 = false;
            }
            if (_DAT_01d34e44 != piVar4[0x15]) {
              iStack_18 = _DAT_01d34e38 - piVar4[0x16];
              fStack_138 = (float)iStack_18 * (float)_DAT_005e0ba5;
              if (fStack_138 < 0.0) {
                fStack_138 = 0.0;
              }
              if ((float)_DAT_005e0bad < fStack_138) {
                fStack_138 = 30.0;
              }
              if ((float)_DAT_005e0bb5 < fStack_138) {
                FUN_0050e970(param_1,iVar3);
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
          iVar3 = FUN_0050bdb0(param_1,1);
          piVar4 = piStack_2c;
          if (iVar3 != 0) {
            FUN_0047be90(0x01C25594,"Loading %s",piStack_2c);
            FUN_005b84c0(param_1[0x5f]);
            FUN_0040cee0(param_1[0x5f]);
            FUN_004fb490(0x01D182F0,piVar4,0);
            iVar3 = FUN_004fd0e0(0x01D182F0,0);
            if (iVar3 != 0) {
              FUN_004fce00(0x01D182F0);
              iVar3 = FUN_0050bdb0(param_1,2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
          param_1[1] = 1;
        }
      }
      if ((*param_1 == 2) && (param_1[1] == 2)) {
        FUN_0047be90(0x01C25594,"Loading %s",param_1 + 0x4a);
        FUN_005b84c0(param_1[0x5f]);
        FUN_0040cee0(param_1[0x5f]);
        FUN_004fb490(0x01D182F0,param_1 + 0x4a,0);
        iVar3 = FUN_004fd0e0(0x01D182F0,0);
        if (iVar3 != 0) {
          FUN_004fce00(0x01D182F0);
          iVar3 = FUN_0050bdb0(param_1,2);
          if (iVar3 != 0) {
            iVar3 = FUN_0058e9e0();
            iVar6 = iVar3 / 0x12 - _DAT_01d34e34;
            _DAT_01d34e34 = iVar3 / 0x12;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x20000 < iVar6) {
              iVar6 = 0x20000;
            }
            _DAT_01d34e38 = _DAT_01d34e38 + iVar6;
            _DAT_01d34e48 = _DAT_01d34e38 + -0x1e0000;
            return 1;
          }
        }
        param_1[1] = 1;
        goto LAB_0050d285;
      }
      if ((*param_1 == 2) && (DAT_0061b124 != 0)) {
        iStack_18 = _DAT_01d34e38 - param_1[param_1[0x49] * 0x20 + 0x18];
        fStack_134 = (float)iStack_18 * (float)_DAT_005e0ba5;
        if (fStack_134 < 0.0) {
          fStack_134 = 0.0;
        }
        if ((float)_DAT_005e0bad < fStack_134) {
          fStack_134 = 30.0;
        }
        if ((float)_DAT_005e0bb5 < fStack_134) {
          FUN_0050eb80(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
      if (iVar3 != 0) goto LAB_0050d285;
      iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
      if (iVar3 != 0) {
        param_1[param_1[0x49] * 0x20 + 0x19] = (uint)(param_1[param_1[0x49] * 0x20 + 0x19] == 0);
        if (*param_1 == 1) {
          FUN_0050e890(param_1);
        }
        else {
          FUN_0050eb80(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1f);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_0047dae0(0x01C25594,"Send chat",0x1d34bb0,0x100,1), iVar3 != 0)) {
        FUN_0050d9f0(param_1,0x1d34bb0,0xffffffff);
      }
      for (iVar3 = 0; iVar3 < *(int *)(0x01D34CB0 + 0x1c); iVar3 = iVar3 + 1) {
        FUN_0050d840(param_1,iVar3,0x40000000);
      }
    }
    FUN_0047bda0(0x01C25594,"You have been disconnected from the game.");
LAB_0050d285:
    FUN_004032b0();
    FUN_0050b8d0(param_1,1);
    FUN_004032b0();
    DAT_0061e990 = uStack_30;
  }
  return 0;
}
