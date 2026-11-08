// Name: FUN_0052c6b0
// Address: 0052c6b0
// Address Range: [[0052c6b0, 0052c969]]
// Convention: unknown
// Signature: undefined4 FUN_0052c6b0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052c6b0(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float fStack_60;
  uint uStack_5c;
  byte uStack_58;
  uint uStack_57;
  int iStack_53;
  char acStack_4f [20];
  uint uStack_3b;
  uint uStack_37;
  byte auStack_30 [8];
  uint uStack_28;
  int aiStack_24 [3];
  char *pcStack_18;
  
  bVar7 = 0;
  FUN_0052cab0(param_1,0);
  iVar3 = 0x01CCF390;
  param_1[7] = 0;
  uVar2 = FUN_0059c740(auStack_30,_DAT_02c8ae4c,0x1ddf,param_1 + 2,*(uint *)(iVar3 + 0xd4),
                       *(uint *)(iVar3 + 0xd8));
  uVar2 = FUN_0052e040(param_1,uVar2);
  param_1[0x47] = uVar2;
  iVar3 = FUN_0052c970(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0059c740(&uStack_28,*param_2,0x1ddf);
  uVar2 = FUN_0052e040(param_1,&uStack_28,"TheServer",0,0);
  *param_1 = 2;
  param_1[1] = 1;
  iVar3 = _DAT_01d51da0;
  param_1[0x46] = uVar2;
  _DAT_01d51da4 = 0;
  iVar3 = iVar3 + -0x50000;
  FUN_00494400(0x01C3EB54,"Contacting server.  Press ESC to give up...");
  aiStack_24[2] = DAT_006260e8;
  DAT_006260e8 = 0;
  if (-1 < (int)param_1[0x46]) {
    pcStack_18 = (char *)(param_1 + 2);
    do {
      aiStack_24[1] = _DAT_01d51da0 - iVar3;
      fStack_60 = (float)(_DAT_01d51da0 - iVar3) * (float)_DAT_005eb790;
      if (fStack_60 < 0.0) {
        fStack_60 = 0.0;
      }
      if ((float)_DAT_005eb798 < fStack_60) {
        fStack_60 = 30.0;
      }
      if ((float)_DAT_005eb7a0 < fStack_60) {
        uStack_5c = 0x29;
        uStack_58 = 1;
        uStack_57 = uStack_28;
        (&iStack_53)[(uint)bVar7 * -2] = aiStack_24[(uint)bVar7 * -2];
        uStack_3b = param_1[param_1[0x47] * 0x1f + 0xd];
        uStack_37 = param_1[param_1[0x47] * 0x1f + 0xe];
        pcVar6 = acStack_4f;
        pcVar5 = pcStack_18;
        do {
          cVar1 = *pcVar5;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        FUN_0052df50(param_1,param_1[0x46],&uStack_5c);
        iVar3 = _DAT_01d51da0;
      }
      FUN_005acff0();
      FUN_0052d360(param_1);
      if (_DAT_01d51da4 == 1) {
        DAT_006260e8 = aiStack_24[2];
        return 1;
      }
      if (_DAT_01d51da4 < 3) {
        if (_DAT_01d51da4 == 2) {
          FUN_004943a0(0x01C3EB54,"Connection refused - computer is not a server");
          FUN_0052cab0(param_1,0);
          return 0;
        }
      }
      else {
        if (_DAT_01d51da4 < 4) {
          FUN_004943a0(0x01C3EB54,"Connection refused - game is full");
          FUN_0052cab0(param_1,0);
          return 0;
        }
        if (_DAT_01d51da4 == 4) {
          FUN_004943a0(0x01C3EB54,"Connection refused - already in the game");
          goto LAB_0052c938;
        }
      }
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar4 != 0) {
LAB_0052c938:
        FUN_0052cab0(param_1,0);
        return 0;
      }
    } while (-1 < (int)param_1[0x46]);
  }
  FUN_0052cab0(param_1,1);
  return 0;
}
