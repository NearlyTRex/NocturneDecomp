// Name: FUN_004be430
// Address: 004be430
// Address Range: [[004be430, 004be89a]]
// Convention: unknown
// Signature: void FUN_004be430(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004be430(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  float10 fVar10;
  int local_1158;
  int aiStack_1154 [1024];
  char local_154 [256];
  byte local_54 [20];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  local_40 = 0;
  local_28 = 480.0;
  FUN_004032b0();
  iVar5 = 0;
  do {
    iVar3 = iVar5 + 4;
    *(uint *)((int)aiStack_1154 + iVar5) = 0;
    iVar5 = iVar3;
  } while (iVar3 != 0x1000);
  FUN_0040d420(local_54);
  FUN_0040d5a0(local_54,"title_bw",0x280,0x1e0);
  local_30 = FUN_00460c70(&DAT_005d8a53,"credits.txt",&DAT_005d8a44);
  if (local_30 != 0) {
    for (iVar5 = local_40 << 2; ((*(byte *)(local_30 + 0xc) & 0x10) == 0 && (iVar5 < 0x1000));
        iVar5 = iVar5 + 4) {
      FUN_005b9600(local_154,0xff,local_30);
      iVar3 = FUN_005b8c30(local_154,&DAT_005d8a58);
      if (iVar3 == 0) break;
      uVar4 = 0xffffffff;
      pcVar6 = local_154;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
      } while (cVar2 != '\0');
      iVar3 = FUN_005b8580(~uVar4 + 9);
      *(int *)((int)aiStack_1154 + iVar5) = iVar3;
      if (iVar3 == 0) {
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x14ad;
        FUN_004e4500("CGame::rollCredits - Out of memory");
      }
      pcVar6 = local_154;
      pcVar8 = *(char **)((int)aiStack_1154 + iVar5);
      do {
        cVar2 = *pcVar6;
        *pcVar8 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar2;
        pcVar8 = pcVar8 + 2;
      } while (cVar2 != '\0');
      local_40 = local_40 + 1;
    }
    FUN_005b89c0(local_30);
    FUN_005526b0();
    FUN_005524b0();
    local_2c = 0;
    iVar5 = FUN_005512a0(1);
    if (iVar5 != 0) {
      FUN_00550450();
      FUN_00550310(1);
      FUN_00550380(1);
      local_2c = FUN_005506b0("XBLAIRMENU.WAV");
      FUN_005504d0();
    }
    FUN_004032b0();
    iVar5 = _DAT_01511cc0;
    local_20 = _DAT_01511cc0;
    *(uint *)(_DAT_01511cc0 + 0x4210) = 0;
    iVar5 = FUN_004ab560(iVar5,0x58);
    local_38 = -1;
    local_24 = iVar5;
    FUN_004b3000(param_1);
    FUN_00406da0(0xffff);
    local_34 = 0x1df - iVar5;
LAB_004be5a8:
    fVar10 = (float10)local_28;
    FUN_005b7ff0();
    local_1158 = (int)ROUND(fVar10);
    if (local_1158 != extraout_ECX) {
      local_38 = local_1158;
      FUN_0055b1f0();
      FUN_0040d900(local_54,10,7,0xffff);
      if (0 < local_40) {
        iVar5 = 0;
        local_1c = local_40 * 4;
        do {
          pcVar6 = *(char **)((int)aiStack_1154 + iVar5);
          uVar7 = 0xf8;
          if (*pcVar6 == '\\') {
            if (pcVar6[1] == 'b') {
              uVar7 = 2;
            }
            pcVar6 = pcVar6 + 2;
          }
          if ((-1 < local_1158) && (local_1158 < local_34)) {
            local_18 = local_1158;
            fVar10 = (float10)local_1158 + (float10)_DAT_005d8abb;
            FUN_005b7ff0();
            uVar4 = (int)ROUND(fVar10) >> 0x1f;
            local_18 = ((int)ROUND(fVar10) ^ uVar4) - uVar4;
            fVar10 = ((float10)1 - (float10)local_18 * (float10)_DAT_005d8aa3) *
                     (float10)_DAT_005d8aab;
            FUN_005b7ff0();
            local_3c = (int)ROUND(fVar10);
            FUN_00406da0(local_3c);
            FUN_004a93a0(local_20,0,0x280,local_1158,uVar7,0,pcVar6);
          }
          iVar5 = iVar5 + 4;
          local_1158 = local_1158 + local_24;
        } while (iVar5 < local_1c);
      }
      if ((local_2c != 0) && (iVar5 = FUN_00550b70(local_2c), iVar5 == 0)) goto LAB_004be71e;
    }
    FUN_00589560();
    iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,1);
    if (iVar5 != 0) goto LAB_004be71e;
    FUN_004b3010(param_1);
    local_28 = local_28 - *(float *)(param_1 + 0x284) * _DAT_005d8ab3;
    if (local_28 < _DAT_005d8ac3) {
      local_38 = -1;
      local_28 = 500.0;
    }
    goto LAB_004be5a8;
  }
LAB_004be772:
  FUN_0040d440(local_54,0);
  return;
LAB_004be71e:
  if (_DAT_01d63250 != 0) {
    *(uint *)(local_20 + 0x4210) = 1;
  }
  FUN_005526b0();
  iVar5 = local_40;
  FUN_004032b0();
  if (0 < iVar5) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)aiStack_1154 + iVar3);
      iVar3 = iVar3 + 4;
      FUN_005b86a0(*puVar1);
    } while (iVar3 < iVar5 * 4);
  }
  goto LAB_004be772;
}
