// Name: FUN_0052e120
// Address: 0052e120
// Address Range: [[0052e120, 0052ea06]]
// Convention: unknown
// Signature: undefined4 FUN_0052e120(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052e120(int *param_1)

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
    uStack_30 = DAT_006260e8;
    param_1[param_1[0x47] * 0x1f + 0x17] = 1;
    param_1[param_1[0x47] * 0x1f + 0x19] = 0;
    DAT_006260e8 = 0;
    param_1[1] = 1;
    if (*param_1 == 1) {
      iVar3 = FUN_005c084c();
      param_1[0x5d] = iVar3;
      FUN_0052fa80(param_1);
    }
    else {
      FUN_0052fd80(param_1);
    }
    piStack_2c = param_1 + 0x48;
    while (*param_1 != 0) {
      FUN_0057dc40();
      FUN_005bfb40(acStack_130,"Mission: %s",piStack_2c);
      FUN_00401fe0(acStack_130,0,0xb);
      FUN_005bfb40(acStack_130,"MyGameSettigsId: %d",_DAT_01d51dac);
      FUN_00401fe0(acStack_130,400,0xb);
      FUN_00401fe0("Player",0,0x21);
      FUN_00401fe0("IP",100,0x21);
      FUN_00401fe0("Ping",200,0x21);
      FUN_00401fe0("Ready",300,0x21);
      FUN_00401fe0("heroType",400,0x21);
      FUN_00401fe0("gameSettings",500,0x21);
      _DAT_01c4f020 = 0xff;
      FUN_00402f30(0,0x31,DAT_0061b498 + -1);
      iVar3 = 0x37;
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)(0x01D51C20 + 0x1c); iStack_20 = iStack_20 + 1) {
        iStack_1c = iStack_24 + 0x01D51C20 + 0x20;
        FUN_00401fe0(iStack_1c,0,iVar3);
        if (_DAT_02c8ae4c == *(int *)(iStack_1c + 0x1c)) {
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
          FUN_0059c590(iStack_1c + 0x1c,acStack_130);
        }
        FUN_00401fe0(acStack_130,100,iVar3);
        if (iStack_20 == *(int *)(0x01D51C20 + 0x11c)) {
          pcVar7 = "(Local)";
LAB_0052e35a:
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
            pcVar7 = "?";
            goto LAB_0052e35a;
          }
          fVar9 = (float10)*(float *)(iStack_1c + 0x28) * (float10)_DAT_005ebdf8;
          FUN_005c03a0();
          iStack_18 = (int)ROUND(fVar9);
          FUN_005bfb40(acStack_130,"%dms",iStack_18);
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
        FUN_005bfb40(acStack_130,0x5ebdd2,*(uint *)(iStack_1c + 0x14));
        FUN_00401fe0(acStack_130,400,iVar3);
        if (*param_1 == 1) {
          FUN_005bfb40(acStack_130,0x5ebdd5,*(uint *)(iStack_1c + 0x34));
          FUN_00401fe0(acStack_130,500,iVar3);
        }
        iVar3 = iVar3 + 0xb;
        iStack_24 = iStack_24 + 0x7c;
      }
      iVar3 = iVar3 + 0x2c;
      iVar6 = (_DAT_01d51db4 - (DAT_0061b49c - iVar3) / 0xb) + 1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iStack_28 = iVar6 * 0x120 + 0x1d51dd8;
      iVar8 = iVar6 * 0x120 + 0x1d51dc4;
      for (; iVar6 < _DAT_01d51db4; iVar6 = iVar6 + 1) {
        FUN_00401fe0(iVar8,0,iVar3);
        FUN_00401fe0(iStack_28,100,iVar3);
        iVar8 = iVar8 + 0x120;
        iStack_28 = iStack_28 + 0x120;
        iVar3 = iVar3 + 0xb;
      }
      FUN_005acff0();
      FUN_0052d360(param_1);
      iVar3 = 0;
      piVar4 = param_1;
      if (0 < param_1[7]) {
        do {
          piVar4[0x1a] = 0;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x1f;
        } while (iVar3 < param_1[7]);
      }
      param_1[0x5c] = 0;
      if (*param_1 == 1) {
        param_1[param_1[0x47] * 0x1f + 0x15] = _DAT_01d51dac;
        iVar3 = 0;
        bVar2 = true;
        piVar4 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar4[0x19] == 0) {
              bVar2 = false;
            }
            if (_DAT_01d51dac != piVar4[0x15]) {
              iStack_18 = _DAT_01d51da0 - piVar4[0x16];
              fStack_134 = (float)iStack_18 * (float)_DAT_005ebe00;
              if (fStack_134 < 0.0) {
                fStack_134 = 0.0;
              }
              if ((float)_DAT_005ebe08 < fStack_134) {
                fStack_134 = 30.0;
              }
              if ((float)_DAT_005ebe10 < fStack_134) {
                FUN_0052fb60(param_1,iVar3);
              }
              bVar2 = false;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 0x1f;
          } while (iVar3 < param_1[7]);
        }
        if ((bVar2) && (1 < param_1[7])) {
          param_1[1] = 2;
          FUN_004032b0();
          iVar3 = FUN_0052cf90(param_1,1);
          piVar4 = piStack_2c;
          if (iVar3 != 0) {
            FUN_00494400(0x01C3EB54,"Loading %s",piStack_2c);
            FUN_005c0870(param_1[0x5d]);
            FUN_0040cb80(param_1[0x5d]);
            FUN_0051a3f0(0x01D2C900,piVar4,0);
            iVar3 = FUN_0051c0a0(0x01D2C900,0);
            if (iVar3 != 0) {
              FUN_0051bdc0(0x01D2C900);
              iVar3 = FUN_0052cf90(param_1,2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
          param_1[1] = 1;
        }
      }
      if ((*param_1 == 2) && (param_1[1] == 2)) {
        FUN_00494400(0x01C3EB54,"Loading %s",param_1 + 0x48);
        FUN_005c0870(param_1[0x5d]);
        FUN_0040cb80(param_1[0x5d]);
        FUN_0051a3f0(0x01D2C900,param_1 + 0x48,0);
        iVar3 = FUN_0051c0a0(0x01D2C900,0);
        if (iVar3 != 0) {
          FUN_0051bdc0(0x01D2C900);
          iVar3 = FUN_0052cf90(param_1,2);
          if (iVar3 != 0) {
            iVar3 = FUN_005b2420();
            iVar6 = iVar3 / 0x12 - _DAT_01d51d9c;
            _DAT_01d51d9c = iVar3 / 0x12;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x20000 < iVar6) {
              iVar6 = 0x20000;
            }
            _DAT_01d51da0 = _DAT_01d51da0 + iVar6;
            _DAT_01d51db0 = _DAT_01d51da0 + -0x1e0000;
            return 1;
          }
        }
        param_1[1] = 1;
        goto LAB_0052e460;
      }
      if ((*param_1 == 2) && (DAT_00622584 != 0)) {
        iStack_18 = _DAT_01d51da0 - param_1[param_1[0x47] * 0x1f + 0x18];
        fStack_138 = (float)iStack_18 * (float)_DAT_005ebe00;
        if (fStack_138 < 0.0) {
          fStack_138 = 0.0;
        }
        if ((float)_DAT_005ebe08 < fStack_138) {
          fStack_138 = 30.0;
        }
        if ((float)_DAT_005ebe10 < fStack_138) {
          FUN_0052fd80(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar3 != 0) goto LAB_0052e460;
      iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
      if (iVar3 != 0) {
        param_1[param_1[0x47] * 0x1f + 0x19] = (uint)(param_1[param_1[0x47] * 0x1f + 0x19] == 0);
        if (*param_1 == 1) {
          FUN_0052fa80(param_1);
        }
        else {
          FUN_0052fd80(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1f);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_00496150(0x01C3EB54,"Send chat",0x1d51b20,0x100,1), iVar3 != 0)) {
        FUN_0052ebd0(param_1,0x1d51b20,0xffffffff);
      }
      for (iVar3 = 0; iVar3 < *(int *)(0x01D51C20 + 0x1c); iVar3 = iVar3 + 1) {
        FUN_0052ea10(param_1,iVar3,0x40000000);
      }
    }
    FUN_004942e0(0x01C3EB54,"You have been disconnected from the game.");
LAB_0052e460:
    FUN_004032b0();
    FUN_0052cab0(param_1,1);
    FUN_004032b0();
    DAT_006260e8 = uStack_30;
  }
  return 0;
}
