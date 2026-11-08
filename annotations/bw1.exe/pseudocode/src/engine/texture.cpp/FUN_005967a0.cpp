// Name: FUN_005967a0
// Address: 005967a0
// Address Range: [[005967a0, 00596e5f]]
// Convention: unknown
// Signature: int FUN_005967a0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005967a0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_EDX;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  char local_1dc [128];
  char local_15c [128];
  byte local_dc [128];
  byte local_5c [44];
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar10 = 0;
  FUN_005a08d0(local_5c);
  uVar4 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar4 - 1) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0xfb;
    FUN_005030e0("Texture name is too big : %s",param_2);
  }
  FUN_005bfb70(0x2c8a688,0,0x214);
  FUN_005bfb70(0x2c8a89c,0,0x214);
  FUN_005bfb70(0x2c8aab0,0,0x214);
  FUN_00478e20(0x2c8a688,&DAT_005f7965,param_2);
  iVar2 = FUN_00478e90(0x2c8a688);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x107;
    FUN_005030e0("CTextureCache::load - Can't get file info on %s",param_2);
  }
  uVar4 = _DAT_02c8a88c;
  local_1c = FUN_00596680(param_1);
  piVar5 = (int *)(param_1 + 4 + local_1c * 0x60);
  piVar8 = piVar5 + 1;
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    *(char *)piVar8 = cVar1;
    pcVar7 = param_2;
    pcVar9 = local_1dc;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)piVar8 + 1) = cVar1;
    piVar8 = (int *)((int)piVar8 + 2);
    pcVar9 = local_1dc;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar9[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  FUN_004796b0(local_1dc,&DAT_005f79af);
  FUN_00478e20(0x2c8a89c,&DAT_005f79b4,local_1dc);
  local_30 = FUN_00478e90(0x2c8a89c);
  pcVar6 = local_15c;
  pcVar7 = param_2;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  FUN_004796b0(local_15c,&DAT_005f79b8);
  FUN_00478e20(0x2c8aab0,&DAT_005f79bd,local_15c);
  iVar2 = FUN_00478e90(0x2c8aab0);
  if (local_30 == 0) {
    if (uVar4 < 0x10000) {
      if (uVar4 < 0x1000) {
LAB_00596e18:
        FUN_005bfb40(local_dc,"CTextureCache::load - Bad texture length : %s,%d",param_2,uVar4);
        _DAT_01d1d400 = "..\\engine\\texture.cpp";
        _DAT_01d1d404 = 0x194;
        FUN_005030e0(local_dc);
      }
      else if (uVar4 < 0x1001) {
        local_18 = 0x20;
      }
      else {
        if (uVar4 != 0x4000) goto LAB_00596e18;
        local_18 = 0x40;
      }
    }
    else if (uVar4 < 0x10001) {
      local_18 = 0x80;
    }
    else if (uVar4 < 0x100000) {
      if (uVar4 != 0x40000) goto LAB_00596e18;
      local_18 = 0x100;
    }
    else if (uVar4 < 0x100001) {
      local_18 = 0x200;
    }
    else {
      if (uVar4 != 0x400000) goto LAB_00596e18;
      local_18 = 0x400;
    }
    *piVar5 = local_18;
    iVar2 = FUN_005c08d0(uVar4);
    piVar5[0x14] = iVar2;
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x19e;
      FUN_005030e0("CTextureCache::load - Out of memory");
    }
    FUN_005a0fd0(local_5c,&DAT_005f7b43,param_2,1);
    FUN_005a0c10(local_5c,piVar5[0x14],uVar4);
    FUN_005a0dc0(local_5c);
    goto LAB_00596c09;
  }
  iVar3 = FUN_005c08d0(0x300);
  piVar5[0x13] = iVar3;
  if (iVar3 == 0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x131;
    FUN_005030e0("CTextureCache::load - Out of memory");
  }
  if (uVar4 < 0x4000) {
    if (uVar4 < 0x400) {
LAB_005969d1:
      FUN_005bfb40(local_dc,"CTextureCache::load - Bad texture length : %s,%d",param_2,uVar4);
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x14a;
      FUN_005030e0(local_dc);
    }
    else if (uVar4 < 0x401) {
      local_18 = 0x20;
    }
    else {
      if (uVar4 != 0x1000) goto LAB_005969d1;
      local_18 = 0x40;
    }
  }
  else if (uVar4 < 0x4001) {
    local_18 = 0x80;
  }
  else if (uVar4 < 0x40000) {
    if (uVar4 != 0x10000) goto LAB_005969d1;
    local_18 = 0x100;
  }
  else if (uVar4 < 0x40001) {
    local_18 = 0x200;
  }
  else {
    if (uVar4 != 0x100000) goto LAB_005969d1;
    local_18 = 0x400;
  }
  *piVar5 = local_18;
  iVar3 = FUN_005c08d0(uVar4);
  piVar5[0x11] = iVar3;
  if (iVar3 == 0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x154;
    FUN_005030e0("CTextureCache::load - Out of memory");
  }
  if (iVar2 != 0) {
    iVar3 = FUN_005c08d0(uVar4);
    piVar5[0x12] = iVar3;
    if (iVar3 == 0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x15a;
      FUN_005030e0("CTextureCache::load - Out of memory");
    }
  }
  FUN_005a0fd0(local_5c,&DAT_005f7ab6,local_1dc,1);
  FUN_005a0c10(local_5c,piVar5[0x13],0x300);
  FUN_005a0dc0(local_5c);
  if (iVar2 != 0) {
    FUN_005a0fd0(local_5c,&DAT_005f7aba,local_15c,1);
    FUN_005a0c10(local_5c,piVar5[0x12],local_18 * local_18);
    FUN_005a0dc0(local_5c);
  }
  FUN_005a0fd0(local_5c,&DAT_005f7abe,param_2,1);
  FUN_005a0c10(local_5c,piVar5[0x11],local_18 * local_18);
  FUN_005a0dc0(local_5c);
  if (_DAT_02c8a678 != 0) {
    iVar2 = 0;
    fVar11 = (float10)_DAT_005f7b52;
    fVar12 = (float10)_DAT_005f7b4e;
    fVar13 = (float10)_DAT_005f7b4a;
    do {
      iVar3 = piVar5[0x13];
      bVar10 = *(byte *)(iVar3 + 2 + iVar2);
      local_14 = (uint)bVar10;
      fVar14 = (float10)bVar10 * fVar11 +
               (float10)*(byte *)(iVar3 + 1 + iVar2) * fVar12 +
               (float10)*(byte *)(iVar3 + iVar2) * fVar13;
      FUN_005c03a0();
      local_20 = (int)ROUND(fVar14);
      *(byte *)(extraout_ECX + extraout_EDX) = (byte)local_20;
      *(byte *)(piVar5[0x13] + 1 + extraout_EDX) = (byte)local_20;
      iVar2 = extraout_EDX + 3;
      *(byte *)(piVar5[0x13] + -1 + iVar2) = (byte)local_20;
    } while (iVar2 != 0x300);
  }
LAB_00596c09:
  FUN_005a0a50(local_5c,0);
  return local_1c;
}
