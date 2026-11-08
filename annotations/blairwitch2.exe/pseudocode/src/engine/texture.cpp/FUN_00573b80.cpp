// Name: FUN_00573b80
// Address: 00573b80
// Address Range: [[00573b80, 00574235]]
// Convention: unknown
// Signature: int FUN_00573b80(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00573b80(int param_1,char *param_2)

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
  char local_1d8 [128];
  char local_158 [128];
  byte local_d8 [128];
  byte local_58 [40];
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar10 = 0;
  FUN_0057cd50(local_58);
  uVar4 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar4 - 1) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0xfb;
    FUN_004e4500("Texture name is too big : %s",param_2);
  }
  FUN_005b77c0(0x2652eb8,0,0x214);
  FUN_005b77c0(0x26530cc,0,0x214);
  FUN_005b77c0(0x26532e0,0,0x214);
  FUN_00460910(0x2652eb8,&DAT_005ec6f1,param_2);
  iVar2 = FUN_00460980(0x2652eb8);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x107;
    FUN_004e4500("CTextureCache::load - Can't get file info on %s",param_2);
  }
  uVar4 = _DAT_026530bc;
  local_1c = FUN_00573a60(param_1);
  piVar5 = (int *)(param_1 + 4 + local_1c * 0x60);
  piVar8 = piVar5 + 1;
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    *(char *)piVar8 = cVar1;
    pcVar7 = param_2;
    pcVar9 = local_1d8;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)piVar8 + 1) = cVar1;
    piVar8 = (int *)((int)piVar8 + 2);
    pcVar9 = local_1d8;
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
  FUN_004611a0(local_1d8,&DAT_005ec73b);
  FUN_00460910(0x26530cc,&DAT_005ec740,local_1d8);
  local_30 = FUN_00460980(0x26530cc);
  pcVar6 = local_158;
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
  FUN_004611a0(local_158,&DAT_005ec744);
  FUN_00460910(0x26532e0,&DAT_005ec749,local_158);
  iVar2 = FUN_00460980(0x26532e0);
  if (local_30 == 0) {
    if (uVar4 < 0x10000) {
      if (uVar4 < 0x1000) {
LAB_005741ee:
        FUN_005b7790(local_d8,"CTextureCache::load - Bad texture length : %s,%d",param_2,uVar4);
        _DAT_01d046a0 = "..\\engine\\texture.cpp";
        _DAT_01d046a4 = 0x194;
        FUN_004e4500(local_d8);
      }
      else if (uVar4 < 0x1001) {
        local_18 = 0x20;
      }
      else {
        if (uVar4 != 0x4000) goto LAB_005741ee;
        local_18 = 0x40;
      }
    }
    else if (uVar4 < 0x10001) {
      local_18 = 0x80;
    }
    else if (uVar4 < 0x100000) {
      if (uVar4 != 0x40000) goto LAB_005741ee;
      local_18 = 0x100;
    }
    else if (uVar4 < 0x100001) {
      local_18 = 0x200;
    }
    else {
      if (uVar4 != 0x400000) goto LAB_005741ee;
      local_18 = 0x400;
    }
    *piVar5 = local_18;
    iVar2 = FUN_005b8580(uVar4);
    piVar5[0x14] = iVar2;
    if (iVar2 == 0) {
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x19e;
      FUN_004e4500("CTextureCache::load - Out of memory");
    }
    FUN_0057d390(local_58,&DAT_005ec8cf,param_2);
    FUN_0057cfe0(local_58,piVar5[0x14],uVar4);
    FUN_0057d180(local_58);
    goto LAB_00573fe1;
  }
  iVar3 = FUN_005b8580(0x300);
  piVar5[0x13] = iVar3;
  if (iVar3 == 0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x131;
    FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (uVar4 < 0x4000) {
    if (uVar4 < 0x400) {
LAB_00573db1:
      FUN_005b7790(local_d8,"CTextureCache::load - Bad texture length : %s,%d",param_2,uVar4);
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x14a;
      FUN_004e4500(local_d8);
    }
    else if (uVar4 < 0x401) {
      local_18 = 0x20;
    }
    else {
      if (uVar4 != 0x1000) goto LAB_00573db1;
      local_18 = 0x40;
    }
  }
  else if (uVar4 < 0x4001) {
    local_18 = 0x80;
  }
  else if (uVar4 < 0x40000) {
    if (uVar4 != 0x10000) goto LAB_00573db1;
    local_18 = 0x100;
  }
  else if (uVar4 < 0x40001) {
    local_18 = 0x200;
  }
  else {
    if (uVar4 != 0x100000) goto LAB_00573db1;
    local_18 = 0x400;
  }
  *piVar5 = local_18;
  iVar3 = FUN_005b8580(uVar4);
  piVar5[0x11] = iVar3;
  if (iVar3 == 0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x154;
    FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (iVar2 != 0) {
    iVar3 = FUN_005b8580(uVar4);
    piVar5[0x12] = iVar3;
    if (iVar3 == 0) {
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x15a;
      FUN_004e4500("CTextureCache::load - Out of memory");
    }
  }
  FUN_0057d390(local_58,&DAT_005ec842,local_1d8);
  FUN_0057cfe0(local_58,piVar5[0x13],0x300);
  FUN_0057d180(local_58);
  if (iVar2 != 0) {
    FUN_0057d390(local_58,&DAT_005ec846,local_158);
    FUN_0057cfe0(local_58,piVar5[0x12],local_18 * local_18);
    FUN_0057d180(local_58);
  }
  FUN_0057d390(local_58,&DAT_005ec84a,param_2);
  FUN_0057cfe0(local_58,piVar5[0x11],local_18 * local_18);
  FUN_0057d180(local_58);
  if (_DAT_02652ea8 != 0) {
    iVar2 = 0;
    fVar11 = (float10)_DAT_005ec8de;
    fVar12 = (float10)_DAT_005ec8da;
    fVar13 = (float10)_DAT_005ec8d6;
    do {
      iVar3 = piVar5[0x13];
      bVar10 = *(byte *)(iVar3 + 2 + iVar2);
      local_14 = (uint)bVar10;
      fVar14 = (float10)bVar10 * fVar11 +
               (float10)*(byte *)(iVar3 + 1 + iVar2) * fVar12 +
               (float10)*(byte *)(iVar3 + iVar2) * fVar13;
      FUN_005b7ff0();
      local_20 = (int)ROUND(fVar14);
      *(byte *)(extraout_ECX + extraout_EDX) = (byte)local_20;
      *(byte *)(piVar5[0x13] + 1 + extraout_EDX) = (byte)local_20;
      iVar2 = extraout_EDX + 3;
      *(byte *)(piVar5[0x13] + -1 + iVar2) = (byte)local_20;
    } while (iVar2 != 0x300);
  }
LAB_00573fe1:
  FUN_0057cec0(local_58,0);
  return local_1c;
}
