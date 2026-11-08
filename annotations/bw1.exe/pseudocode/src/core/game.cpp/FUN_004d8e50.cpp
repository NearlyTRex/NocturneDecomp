// Name: FUN_004d8e50
// Address: 004d8e50
// Address Range: [[004d8e50, 004d925c]]
// Convention: unknown
// Signature: void FUN_004d8e50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8e50(int param_1)

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
  FUN_004032b0();
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 4;
    *(uint *)((int)local_1134 + iVar4) = 0;
    iVar4 = iVar3;
  } while (iVar3 != 0x1000);
  FUN_0040d0a0(local_34);
  FUN_0040d220(local_34,"stats",0x280,0x1e0);
  iVar4 = FUN_00479180(&DAT_005e3599,"credits.txt",&DAT_005e358a);
  if (iVar4 == 0) {
    FUN_0040d0c0(local_34,0);
    return;
  }
  for (iVar3 = local_1c << 2; ((*(byte *)(iVar4 + 0xc) & 0x10) == 0 && (iVar3 < 0x1000));
      iVar3 = iVar3 + 4) {
    FUN_005c1180(local_134,0xff,iVar4);
    iVar5 = FUN_005c0f80(local_134,&DAT_005e359e);
    if (iVar5 == 0) break;
    uVar7 = 0xffffffff;
    pcVar6 = local_134;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    iVar5 = FUN_005c08d0(~uVar7 + 9);
    *(int *)((int)local_1134 + iVar3) = iVar5;
    if (iVar5 == 0) {
      _DAT_01d1d400 = "..\\core\\game.cpp";
      _DAT_01d1d404 = 0x147e;
      FUN_005030e0("CGame::rollCredits - Out of memory");
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
  FUN_005c0d10(iVar4);
  FUN_005750e0();
  FUN_00574ee0();
  local_18 = 0;
  iVar4 = FUN_00573cd0(1);
  if (iVar4 != 0) {
    FUN_00572ac0();
    FUN_00572980(1);
    FUN_005729f0(1);
    local_18 = FUN_00572d20("splash-music-44.wav");
    FUN_00572b40();
  }
  FUN_004032b0();
  iVar4 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x4210) = 0;
  iVar3 = FUN_004c4510(iVar4,0x58);
  local_20 = -1;
  FUN_004cbf10(param_1);
  FUN_00406bd0(0xffff);
  local_10 = 0x1df - iVar3;
  do {
    fVar12 = (float10)local_14;
    FUN_005c03a0();
    local_c = (int)ROUND(fVar12);
    if (local_c != extraout_EDX) {
      local_20 = local_c;
      FUN_0057dc40();
      FUN_0040d4b0(local_34,0,0,0xffff);
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
            FUN_004c2350(iVar4,0x19e,0x27f,local_c,uVar8,0,pcVar6);
          }
          iVar9 = iVar9 + 4;
          local_c = local_c + iVar3;
        } while (iVar9 < iVar5);
      }
      if ((local_18 != 0) && (iVar5 = FUN_005735a0(local_18), iVar5 == 0)) {
LAB_004d91eb:
        if (_DAT_01d7f1b8 != 0) {
          *(uint *)(iVar4 + 0x4210) = 1;
        }
        FUN_005750e0();
        iVar4 = local_1c;
        FUN_004032b0();
        if (0 < iVar4) {
          iVar4 = 0;
          iVar3 = local_1c * 4;
          do {
            puVar1 = (uint *)((int)local_1134 + iVar4);
            iVar4 = iVar4 + 4;
            FUN_005c09f0(*puVar1);
          } while (iVar4 < iVar3);
        }
        FUN_0040d0c0(local_34,0);
        return;
      }
      FUN_004031c0(0x19e,0,0x27f,0x1e,0);
      FUN_004031c0(0x19e,0x1b7,0x27f,0x1df,0);
    }
    FUN_005acff0();
    iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,1);
    if (iVar5 != 0) goto LAB_004d91eb;
    FUN_004cbf20(param_1);
    local_14 = local_14 - *(float *)(param_1 + 0x294) * _DAT_005e35ec;
  } while( true );
}
