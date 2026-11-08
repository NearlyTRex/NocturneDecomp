// Name: FUN_004c02a0
// Address: 004c02a0
// Address Range: [[004c02a0, 004c07a0]]
// Convention: unknown
// Signature: void FUN_004c02a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c02a0(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  int local_154c [1024];
  byte local_54c [1024];
  char local_14c [256];
  byte local_4c [20];
  float local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar10 = 0;
  local_20 = 0;
  local_38 = 480.0;
  FUN_004032b0();
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 4;
    *(uint *)((int)local_154c + iVar5) = 0;
    iVar5 = iVar4;
  } while (iVar4 != 0x1000);
  FUN_0040d2e0(local_4c);
  FUN_0040d460(local_4c,"stats",0x280,0x1e0);
  iVar5 = FUN_004659c0(&DAT_005c3b9d,"credits.txt",&DAT_005c3b8e);
  if (iVar5 == 0) {
    FUN_0040d300(local_4c,0);
    return;
  }
  for (iVar4 = local_20 << 2; ((*(byte *)(iVar5 + 0xc) & 0x10) == 0 && (iVar4 < 0x1000));
      iVar4 = iVar4 + 4) {
    FUN_005a3f00(local_14c,0xff,iVar5);
    iVar6 = FUN_005a3d00(local_14c,&DAT_005c3ba2);
    if (iVar6 == 0) break;
    uVar7 = 0xffffffff;
    pcVar9 = local_14c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
    iVar6 = FUN_005a3650(~uVar7 + 9);
    *(int *)((int)local_154c + iVar4) = iVar6;
    if (iVar6 == 0) {
      _DAT_01d71de0 = "..\\core\\game.cpp";
      _DAT_01d71de4 = 0x14af;
      FUN_004e4330("CGame::rollCredits - Out of memory");
    }
    pcVar9 = local_14c;
    pcVar8 = *(char **)((int)local_154c + iVar4);
    do {
      cVar2 = *pcVar9;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    local_20 = local_20 + 1;
  }
  FUN_005a3a90(iVar5);
  FUN_00558050();
  FUN_004032b0();
  iVar5 = _DAT_01549aa8;
  local_10 = _DAT_01549aa8;
  *(uint *)(_DAT_01549aa8 + 0x4210) = 0;
  iVar5 = FUN_004b30f0(iVar5,0x58);
  local_24 = -1;
  local_34 = iVar5;
  FUN_004b4430(param_1);
  FUN_00406bf0(0xffff);
  local_1c = 0x1df - iVar5;
  do {
    iVar5 = local_24;
    fVar11 = (float10)local_38;
    FUN_005a3120();
    local_c = (int)ROUND(fVar11);
    if (local_c != iVar5) {
      local_24 = local_c;
      FUN_00560d70();
      local_18 = 0;
      if (0 < local_20) {
        local_30 = 0;
        local_14 = local_20 * 4;
        do {
          local_2c = 0xf8;
          pcVar9 = *(char **)((int)local_154c + local_30);
          if ((*pcVar9 == '\\') && (pcVar9[1] == 'b')) {
            local_2c = 2;
            pcVar9 = pcVar9 + 2;
          }
          if ((-1 < local_c) && (local_c < local_1c)) {
            local_18 = 1;
            if ((*pcVar9 == '\\') && (pcVar9[1] == '1')) {
              pcVar9 = pcVar9 + 2;
              local_28 = -1;
              uVar7 = 0xffffffff;
              pcVar8 = pcVar9;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar2 = *pcVar8;
                pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
              } while (cVar2 != '\0');
              iVar4 = ~uVar7 - 1;
              iVar5 = 0;
              if (0 < iVar4) {
                pcVar8 = pcVar9;
                do {
                  if ((int)(~uVar7 - 3) <= iVar5) break;
                  if ((*pcVar8 == '\\') && (pcVar8[1] == '2')) {
                    local_28 = iVar5;
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  pcVar8 = pcVar8 + 1;
                } while (iVar5 < iVar4);
              }
              if (0 < local_28) {
                FUN_005a4ee0(local_54c,pcVar9,local_28);
                iVar6 = local_28 + 2;
                local_54c[local_28] = 0;
                iVar4 = local_c;
                iVar5 = local_10;
                uVar3 = local_2c;
                FUN_004b0cb0(local_10,100,local_c,local_2c,0,local_54c);
                FUN_004b0cb0(iVar5,300,iVar4,uVar3,0,pcVar9 + iVar6);
              }
            }
            else {
              FUN_004b0fa0(local_10,100,400,local_c,local_2c,0,pcVar9);
            }
          }
          local_30 = local_30 + 4;
          local_c = local_c + local_34;
        } while (local_30 < local_14);
      }
      FUN_004031c0(0,0,0x27f,0x1e,0);
      FUN_004031c0(0,0x1b7,0x27f,0x1df,0);
    }
    FUN_0057a8a0();
    iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,1);
    if (iVar5 != 0) {
      if (_DAT_01dd4890 != 0) {
        *(uint *)(local_10 + 0x4210) = 1;
      }
      FUN_004032b0();
      if (0 < local_20) {
        iVar5 = local_20 * 4;
        iVar4 = 0;
        do {
          puVar1 = (uint *)((int)local_154c + iVar4);
          iVar4 = iVar4 + 4;
          FUN_005a3770(*puVar1);
        } while (iVar4 < iVar5);
      }
      FUN_0040d300(local_4c,0);
      return;
    }
    FUN_004b4440(param_1);
    local_38 = local_38 - *(float *)(param_1 + 0x314) * _DAT_005c3bdc;
    if ((local_18 == 0) && (local_38 < 0.0)) {
      local_38 = 480.0;
      local_24 = -1;
    }
  } while( true );
}
