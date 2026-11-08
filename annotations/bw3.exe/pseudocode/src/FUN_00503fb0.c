// Name: FUN_00503fb0
// Address: 00503fb0
// Address Range: [[00503fb0, 0050426d]]
// Convention: unknown
// Signature: undefined4 FUN_00503fb0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00503fb0(uint *param_1,uint *param_2)

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
  uint uStack_53;
  char acStack_4f [20];
  uint uStack_3b;
  uint uStack_37;
  uint uStack_30;
  uint uStack_2c;
  byte auStack_28 [8];
  uint uStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  FUN_005043b0(param_1,0);
  iVar3 = 0x01D2130C;
  param_1[7] = 0;
  uVar2 = FUN_0056f730(auStack_28,_DAT_02cfd89c,0x1ddf,param_1 + 2,*(uint *)(iVar3 + 0xd8),
                       *(uint *)(iVar3 + 0xdc));
  uVar2 = FUN_00505950(param_1,uVar2);
  param_1[0x49] = uVar2;
  iVar3 = FUN_00504270(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0056f730(&uStack_30,*param_2,0x1ddf);
  uVar2 = FUN_00505950(param_1,&uStack_30,"TheServer",0,0);
  *param_1 = 2;
  param_1[1] = 1;
  iVar3 = _DAT_01da6478;
  param_1[0x48] = uVar2;
  _DAT_01da647c = 0;
  iVar3 = iVar3 + -0x50000;
  FUN_0047cfa0(0x01C5B0E4,"Contacting server.  Press ESC to give up...");
  uStack_20 = DAT_0060728c;
  DAT_0060728c = 0;
  if (-1 < (int)param_1[0x48]) {
    pcStack_1c = (char *)(param_1 + 2);
    do {
      iStack_18 = _DAT_01da6478 - iVar3;
      fStack_60 = (float)(_DAT_01da6478 - iVar3) * (float)_DAT_005ca5a1;
      if (fStack_60 < 0.0) {
        fStack_60 = 0.0;
      }
      if ((float)_DAT_005ca5a9 < fStack_60) {
        fStack_60 = 30.0;
      }
      if ((float)_DAT_005ca5b1 < fStack_60) {
        uStack_5c = 0x29;
        uStack_58 = 1;
        uStack_57 = uStack_30;
        (&uStack_53)[(uint)bVar7 * -2] = (&uStack_2c)[(uint)bVar7 * -2];
        uStack_3b = param_1[param_1[0x49] * 0x20 + 0xd];
        uStack_37 = param_1[param_1[0x49] * 0x20 + 0xe];
        pcVar6 = acStack_4f;
        pcVar5 = pcStack_1c;
        do {
          cVar1 = *pcVar5;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        FUN_00505870(param_1,param_1[0x48],&uStack_5c);
        iVar3 = _DAT_01da6478;
      }
      FUN_0057a8a0();
      FUN_00504c70(param_1);
      if (_DAT_01da647c == 1) {
        DAT_0060728c = uStack_20;
        return 1;
      }
      if (_DAT_01da647c < 3) {
        if (_DAT_01da647c == 2) {
          FUN_0047cf40(0x01C5B0E4,"Connection refused - computer is not a server");
          FUN_005043b0(param_1,0);
          return 0;
        }
      }
      else {
        if (_DAT_01da647c < 4) {
          FUN_0047cf40(0x01C5B0E4,"Connection refused - game is full");
          FUN_005043b0(param_1,0);
          return 0;
        }
        if (_DAT_01da647c == 4) {
          FUN_0047cf40(0x01C5B0E4,"Connection refused - already in the game");
          goto LAB_00504239;
        }
      }
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar4 != 0) {
LAB_00504239:
        FUN_005043b0(param_1,0);
        return 0;
      }
    } while (-1 < (int)param_1[0x48]);
  }
  FUN_005043b0(param_1,1);
  return 0;
}
