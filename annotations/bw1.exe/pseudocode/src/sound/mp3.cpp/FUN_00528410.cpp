// Name: FUN_00528410
// Address: 00528410
// Address Range: [[00528410, 00528add]]
// Convention: unknown
// Signature: int FUN_00528410(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00528410(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  char *pcVar12;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar11 = 0;
  local_34 = ((int *)*param_7)[4] + *(int *)*param_7 * 3;
  if (_DAT_01d3bd40 == 0) {
    local_18 = _DAT_01d3bd40;
    iVar1 = 0;
    iVar6 = 0;
    local_1c = 0x1d405c8;
    do {
      iVar9 = local_1c;
      FUN_005bfb40(local_1c,"%d",iVar6);
      *(uint *)(&DAT_01d40dec + iVar1) = *(uint *)(&DAT_00622240 + local_18);
      *(uint *)(iVar1 + 0x1d405cc) = *(uint *)(&DAT_00622244 + local_18);
      *(uint *)(iVar1 + 0x1d405d0) = *(uint *)(&DAT_00622248 + local_18);
      *(uint *)(iVar1 + 0x1d405d4) = *(uint *)(&DAT_0062224c + local_18);
      *(int *)(iVar1 + 0x1d405d8) = (1 << (*(byte *)(iVar1 + 0x1d405d4) & 0x1f)) + -1;
      FUN_005c2cac(iVar9,"%u",&local_38);
      if (iVar6 != local_38) {
        _DAT_01d1d400 = "..\\sound\\mp3.cpp";
        _DAT_01d1d404 = 0xdfb;
        FUN_005030e0("wrong table number %u.  File: %s",iVar6,&DAT_01d404c8);
      }
      iVar9 = *(int *)(&DAT_00622250 + local_18);
      if (iVar9 < 0) {
        if (iVar9 != -1) {
          _DAT_01d1d400 = "..\\sound\\mp3.cpp";
          _DAT_01d1d404 = 0xe1d;
          pcVar12 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_005287a4;
        }
        uVar7 = *(uint *)(&DAT_01d40dec + iVar1);
        *(uint *)(iVar1 + 0x1d405dc) = 0xffffffff;
        if (0x400 < uVar7) {
          _DAT_01d1d400 = "..\\sound\\mp3.cpp";
          _DAT_01d1d404 = 0xe0e;
          FUN_005030e0("MP3 Huffman tree overflow!  File: %s",&DAT_01d404c8);
        }
        uVar7 = 0;
        puVar4 = *(byte **)(&DAT_00622254 + local_18);
        iVar9 = iVar1;
        if (*(int *)(&DAT_01d40dec + iVar1) != 0) {
          do {
            *(byte *)(iVar9 + 0x1d405e8) = *puVar4;
            *(byte *)(iVar9 + 0x1d405e9) = puVar4[1];
            uVar7 = uVar7 + 1;
            puVar4 = puVar4 + 2;
            iVar9 = iVar9 + 2;
          } while (uVar7 < *(uint *)(&DAT_01d40dec + iVar1));
        }
      }
      else {
        *(int *)(iVar1 + 0x1d405dc) = iVar9;
        iVar9 = iVar9 * 0x828;
        puVar8 = (uint *)(iVar9 + 0x1d405e8);
        puVar10 = (uint *)(iVar1 + 0x1d405e8);
        for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(byte *)puVar10 = *(byte *)puVar8;
          puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
          puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
        }
        *(uint *)(&DAT_01d40dec + iVar1) = *(uint *)(&DAT_01d40dec + iVar9);
        if ((*(int *)(iVar1 + 0x1d405cc) != *(int *)(iVar9 + 0x1d405cc)) ||
           (*(int *)(iVar9 + 0x1d405d0) != *(int *)(iVar1 + 0x1d405d0))) {
          _DAT_01d1d400 = "..\\sound\\mp3.cpp";
          _DAT_01d1d404 = 0xe06;
          pcVar12 = "wrong table %u reference.  File: %s";
LAB_005287a4:
          FUN_005030e0(pcVar12,iVar6,&DAT_01d404c8);
        }
      }
      iVar1 = iVar1 + 0x828;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 0x828;
    } while (iVar6 < 0x22);
    if (iVar6 != 0x22) {
      _DAT_01d1d400 = "..\\sound\\mp3.cpp";
      _DAT_01d1d404 = 0xe32;
      FUN_005030e0("decoder table read error.  File: %s",&DAT_01d404c8);
    }
    _DAT_01d3bd40 = 1;
  }
  iVar1 = param_5 * 0x48 + param_3 + param_4 * 0xa0;
  if ((*(int *)(iVar1 + 0x28) == 0) || (*(int *)(iVar1 + 0x2c) != 2)) {
    iVar6 = param_3 + param_4 * 0xa0 + param_5 * 0x48;
    iVar1 = *(int *)(iVar6 + 0x4c);
    local_20 = *(int *)(&DAT_0062079c + iVar1 * 4 + local_34 * 0x94);
    iVar1 = *(int *)(&DAT_006207a0 + (*(int *)(iVar6 + 0x50) + iVar1) * 4 + local_34 * 0x94);
  }
  else {
    iVar1 = 0x240;
    local_20 = 0x24;
  }
  FUN_00525ef0(param_1);
  local_30 = param_5 * 0x48;
  iVar6 = 1;
  local_24 = param_3 + param_4 * 0xa0;
  for (uVar7 = 0; iVar9 = local_24 + local_30, uVar7 < (uint)(*(int *)(iVar9 + 0x1c) * 2);
      uVar7 = uVar7 + 2) {
    if ((int)uVar7 < local_20) {
      iVar9 = *(int *)(iVar9 + 0x34) * 0x828 + 0x1d405c8;
    }
    else if ((int)uVar7 < iVar1) {
      iVar9 = *(int *)(iVar9 + 0x38) * 0x828 + 0x1d405c8;
    }
    else {
      iVar9 = *(int *)(iVar9 + 0x3c) * 0x828 + 0x1d405c8;
    }
    FUN_005260e0(param_1,iVar9,&local_48,&local_44,&local_40,&local_3c);
    *(uint *)(param_2 + ((int)uVar7 / 0x12) * 0x48 + ((int)uVar7 % 0x12) * 4) = local_48;
    iVar9 = iVar6 / 0x12;
    iVar3 = iVar6 % 0x12;
    iVar6 = iVar6 + 2;
    *(uint *)(param_2 + iVar9 * 0x48 + iVar3 * 4) = local_44;
  }
  FUN_00525ef0(param_1);
  local_28 = (*(int *)(iVar9 + 0x5c) + 0x20) * 0x828 + 0x1d405c8;
  iVar1 = uVar7 + 3;
  iVar6 = uVar7 + 2;
  local_2c = param_3 + param_4 * 0xa0 + param_5 * 0x48;
  iVar9 = uVar7 + 1;
  while( true ) {
    local_14 = param_6 + *(int *)(local_2c + 0x18);
    uVar2 = FUN_00525ef0(param_1);
    if ((local_14 <= uVar2) || (0x23f < (int)uVar7)) break;
    FUN_005260e0(param_1,local_28,&local_48,&local_44,&local_40,&local_3c);
    *(uint *)(param_2 + ((int)uVar7 / 0x12) * 0x48 + ((int)uVar7 % 0x12) * 4) = local_40;
    *(uint *)(param_2 + (iVar9 / 0x12) * 0x48 + (iVar9 % 0x12) * 4) = local_3c;
    *(uint *)(param_2 + (iVar6 / 0x12) * 0x48 + (iVar6 % 0x12) * 4) = local_48;
    iVar3 = iVar1 / 0x12;
    iVar5 = iVar1 % 0x12;
    uVar7 = uVar7 + 4;
    iVar9 = iVar9 + 4;
    iVar6 = iVar6 + 4;
    iVar1 = iVar1 + 4;
    *(uint *)(param_2 + iVar3 * 0x48 + iVar5 * 4) = local_44;
  }
  iVar6 = param_3 + param_4 * 0xa0 + param_5 * 0x48;
  FUN_00525ef0(param_1);
  iVar1 = *(int *)(iVar6 + 0x18);
  uVar2 = FUN_00525ef0(param_1);
  if ((uint)(param_6 + iVar1) < uVar2) {
    iVar1 = FUN_00525ef0(param_1);
    uVar7 = uVar7 - 4;
    FUN_00526050(param_1,(iVar1 - param_6) - *(int *)(iVar6 + 0x18));
  }
  param_6 = param_6 + *(int *)(param_3 + param_4 * 0xa0 + 0x18 + param_5 * 0x48);
  iVar1 = FUN_00525ef0(param_1);
  if (iVar1 < param_6) {
    iVar1 = FUN_00525f00(param_1,param_6 - iVar1);
  }
  for (; (int)uVar7 < 0x240; uVar7 = uVar7 + 1) {
    iVar1 = (int)uVar7 / 0x12;
    *(uint *)(param_2 + ((int)uVar7 / 0x12) * 0x48 + ((int)uVar7 % 0x12) * 4) = 0;
  }
  return iVar1;
}
