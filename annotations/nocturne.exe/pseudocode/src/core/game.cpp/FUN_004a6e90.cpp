// Name: FUN_004a6e90
// Address: 004a6e90
// Address Range: [[004a6e90, 004a729c]]
// Convention: unknown
// Signature: void FUN_004a6e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6e90(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int extraout_EDX;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  int local_1134 [1024];
  char local_134 [256];
  byte local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  
  bVar11 = 0;
  local_1c = 0;
  local_14 = 480.0;
  FUN_00403f50();
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 4;
    *(uint *)((int)local_1134 + iVar4) = 0;
    iVar4 = iVar3;
  } while (iVar3 != 0x1000);
  FUN_0040e320(local_34);
  FUN_0040e3c0(local_34,"stats",0x280,0x1e0);
  iVar4 = FUN_00456a60(&DAT_00584687,"credits.txt",&DAT_00584678);
  if (iVar4 == 0) {
    FUN_0040e340(local_34,0);
    return;
  }
  for (iVar3 = local_1c << 2; ((*(byte *)(iVar4 + 0xc) & 0x10) == 0 && (iVar3 < 0x1000));
      iVar3 = iVar3 + 4) {
    FUN_00564b20(local_134,0xff,iVar4);
    iVar5 = FUN_005649c0(local_134,&DAT_0058468c);
    if (iVar5 == 0) break;
    uVar7 = 0xffffffff;
    pcVar6 = local_134;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    iVar5 = FUN_005635b0(~uVar7 + 9);
    *(int *)((int)local_1134 + iVar3) = iVar5;
    if (iVar5 == 0) {
      _DAT_01cc4800 = "..\\core\\game.cpp";
      _DAT_01cc4804 = 0x1242;
      FUN_004c8440("CGame::rollCredits - Out of memory");
    }
    pcVar6 = local_134;
    pcVar10 = *(char **)((int)local_1134 + iVar3);
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    local_1c = local_1c + 1;
  }
  FUN_00563380(iVar4);
  FUN_00528080();
  FUN_00527e40();
  local_18 = 0;
  iVar4 = FUN_00527490(1);
  if (iVar4 != 0) {
    FUN_00526340();
    FUN_005261b0(1);
    FUN_00526240(1);
    local_18 = FUN_005265a0("faded-remix.mp3");
    FUN_005263c0();
  }
  FUN_00403f50();
  iVar4 = _DAT_014b9900;
  *(uint *)(_DAT_014b9900 + 0x3190) = 0;
  iVar3 = FUN_004930e0(iVar4,0x58);
  local_20 = -1;
  FUN_0049a890(param_1);
  FUN_00408370(0xffff);
  local_10 = 0x1df - iVar3;
  do {
    fVar12 = (float10)local_14;
    FUN_00563a30();
    local_c = (int)ROUND(fVar12);
    if (local_c != extraout_EDX) {
      local_20 = local_c;
      FUN_0052ee70();
      FUN_0040e710(local_34,0,0,0xffff);
      if (0 < local_1c) {
        iVar5 = local_1c * 4;
        iVar9 = 0;
        do {
          pcVar6 = *(char **)((int)local_1134 + iVar9);
          uVar8 = 0xf8;
          if (*pcVar6 == '\\') {
            if (pcVar6[1] == 'b') {
              uVar8 = 2;
            }
            pcVar6 = pcVar6 + 2;
          }
          if ((-1 < local_c) && (local_c < local_10)) {
            FUN_00490de0(iVar4,0x19e,0x27f,local_c,uVar8,0,pcVar6);
          }
          iVar9 = iVar9 + 4;
          local_c = local_c + iVar3;
        } while (iVar9 < iVar5);
      }
      if ((local_18 != 0) && (iVar5 = FUN_00526c50(local_18), iVar5 == 0)) {
LAB_004a722b:
        if (_DAT_01d16810 != 0) {
          *(uint *)(iVar4 + 0x3190) = 1;
        }
        FUN_00528080();
        iVar4 = local_1c;
        FUN_00403f50();
        if (0 < iVar4) {
          iVar4 = 0;
          iVar3 = local_1c * 4;
          do {
            puVar1 = (uint *)((int)local_1134 + iVar4);
            iVar4 = iVar4 + 4;
            FUN_005638d0(*puVar1);
          } while (iVar4 < iVar3);
        }
        FUN_0040e340(local_34,0);
        return;
      }
      FUN_00403e60(0x19e,0,0x27f,0x1e,0);
      FUN_00403e60(0x19e,0x1b7,0x27f,0x1df,0);
    }
    FUN_00553910();
    iVar5 = (**(code **)*0x01CC30E4)(0x01CC30E4,1);
    if (iVar5 != 0) goto LAB_004a722b;
    FUN_0049a8a0(param_1);
    local_14 = local_14 - *(float *)(param_1 + 0x264) * _DAT_005846d6;
  } while( true );
}
