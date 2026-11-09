// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790
// Address: 00569790
// Address Range: [[00569790, 00569e4f]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00569790(CTextureCache *this_ptr,char *texture_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00569790(CTextureCache *this_ptr,char *texture_name)

{
  char cVar1;
  CTextureCache CVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_EDX;
  CTextureCache *pCVar7;
  CTextureCache *pCVar8;
  char *pcVar9;
  CTextureCache *pCVar10;
  char *pcVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  char local_1dc [128];
  char local_15c [128];
  byte local_dc [128];
  CInStreamFile local_5c;
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar12 = 0;
  unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_5c);
  uVar6 = 0xffffffff;
  pcVar11 = texture_name;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar6 - 1) {
    _DAT_01d71de0 = "..\\engine\\texture.cpp";
    _DAT_01d71de4 = 0xfb;
    core_main_c_FUN_004e4330("Texture name is too big : %s",texture_name);
  }
  memset((void *)0x2cfd0d8,0,0x214);
  memset((void *)0x2cfd2ec,0,0x214);
  memset((void *)0x2cfd500,0,0x214);
  engine_dosio_cpp_FUN_00465660(0x2cfd0d8,&DAT_005d5ed4,texture_name);
  iVar4 = engine_dosio_cpp_findFile_FUN_004656d0(0x2cfd0d8);
  if (iVar4 == 0) {
    _DAT_01d71de0 = "..\\engine\\texture.cpp";
    _DAT_01d71de4 = 0x107;
    core_main_c_FUN_004e4330("CTextureCache::load - Can't get file info on %s",texture_name);
  }
  uVar6 = _DAT_02cfd2dc;
  local_1c = engine_texture_cpp_FUN_00569670(this_ptr);
  pCVar7 = this_ptr + local_1c * 0x60 + 4;
  pCVar10 = pCVar7 + 4;
  pCVar8 = (CTextureCache *)texture_name;
  do {
    CVar2 = *pCVar8;
    *pCVar10 = CVar2;
    pcVar11 = texture_name;
    pcVar9 = local_1dc;
    if (CVar2 == (CTextureCache)0x0) break;
    CVar2 = pCVar8[1];
    pCVar8 = pCVar8 + 2;
    pCVar10[1] = CVar2;
    pCVar10 = pCVar10 + 2;
    pcVar9 = local_1dc;
  } while (CVar2 != (CTextureCache)0x0);
  do {
    cVar1 = *pcVar11;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar9[1] = cVar1;
    pcVar11 = pcVar11 + 2;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_00465f80(local_1dc,&DAT_005d5f1e);
  engine_dosio_cpp_FUN_00465660(0x2cfd2ec,&DAT_005d5f23,local_1dc);
  local_30 = engine_dosio_cpp_findFile_FUN_004656d0(0x2cfd2ec);
  pcVar11 = local_15c;
  pcVar9 = texture_name;
  do {
    cVar1 = *pcVar9;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_00465f80(local_15c,&DAT_005d5f27);
  engine_dosio_cpp_FUN_00465660(0x2cfd500,&DAT_005d5f2c,local_15c);
  iVar4 = engine_dosio_cpp_findFile_FUN_004656d0(0x2cfd500);
  if (local_30 == 0) {
    if (uVar6 < 0x10000) {
      if (uVar6 < 0x1000) {
LAB_00569e08:
        FUN_005a28c0(local_dc,"CTextureCache::load - Bad texture length : %s,%d",texture_name,uVar6);
        _DAT_01d71de0 = "..\\engine\\texture.cpp";
        _DAT_01d71de4 = 0x194;
        core_main_c_FUN_004e4330(local_dc);
      }
      else if (uVar6 < 0x1001) {
        local_18 = 0x20;
      }
      else {
        if (uVar6 != 0x4000) goto LAB_00569e08;
        local_18 = 0x40;
      }
    }
    else if (uVar6 < 0x10001) {
      local_18 = 0x80;
    }
    else if (uVar6 < 0x100000) {
      if (uVar6 != 0x40000) goto LAB_00569e08;
      local_18 = 0x100;
    }
    else if (uVar6 < 0x100001) {
      local_18 = 0x200;
    }
    else {
      if (uVar6 != 0x400000) goto LAB_00569e08;
      local_18 = 0x400;
    }
    *(int *)pCVar7 = local_18;
    pvVar5 = FUN_005a3650(uVar6);
    *(void **)(pCVar7 + 0x50) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x19e;
      core_main_c_FUN_004e4330("CTextureCache::load - Out of memory");
    }
    support_trstream_cpp_FUN_00573fc0(&local_5c,&DAT_005d60b2,texture_name,1);
    unkafter_turret_cpp_FUN_00573c00(&local_5c,*(uint *)(pCVar7 + 0x50),uVar6);
    unkafter_turret_cpp_FUN_00573db0(&local_5c);
    goto LAB_00569bf9;
  }
  pvVar5 = FUN_005a3650(0x300);
  *(void **)(pCVar7 + 0x4c) = pvVar5;
  if (pvVar5 == (void *)0x0) {
    _DAT_01d71de0 = "..\\engine\\texture.cpp";
    _DAT_01d71de4 = 0x131;
    core_main_c_FUN_004e4330("CTextureCache::load - Out of memory");
  }
  if (uVar6 < 0x4000) {
    if (uVar6 < 0x400) {
LAB_005699c1:
      FUN_005a28c0(local_dc,"CTextureCache::load - Bad texture length : %s,%d",texture_name,uVar6);
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x14a;
      core_main_c_FUN_004e4330(local_dc);
    }
    else if (uVar6 < 0x401) {
      local_18 = 0x20;
    }
    else {
      if (uVar6 != 0x1000) goto LAB_005699c1;
      local_18 = 0x40;
    }
  }
  else if (uVar6 < 0x4001) {
    local_18 = 0x80;
  }
  else if (uVar6 < 0x40000) {
    if (uVar6 != 0x10000) goto LAB_005699c1;
    local_18 = 0x100;
  }
  else if (uVar6 < 0x40001) {
    local_18 = 0x200;
  }
  else {
    if (uVar6 != 0x100000) goto LAB_005699c1;
    local_18 = 0x400;
  }
  *(int *)pCVar7 = local_18;
  pvVar5 = FUN_005a3650(uVar6);
  *(void **)(pCVar7 + 0x44) = pvVar5;
  if (pvVar5 == (void *)0x0) {
    _DAT_01d71de0 = "..\\engine\\texture.cpp";
    _DAT_01d71de4 = 0x154;
    core_main_c_FUN_004e4330("CTextureCache::load - Out of memory");
  }
  if (iVar4 != 0) {
    pvVar5 = FUN_005a3650(uVar6);
    *(void **)(pCVar7 + 0x48) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x15a;
      core_main_c_FUN_004e4330("CTextureCache::load - Out of memory");
    }
  }
  support_trstream_cpp_FUN_00573fc0(&local_5c,&DAT_005d6025,local_1dc,1);
  unkafter_turret_cpp_FUN_00573c00(&local_5c,*(uint *)(pCVar7 + 0x4c),0x300);
  unkafter_turret_cpp_FUN_00573db0(&local_5c);
  if (iVar4 != 0) {
    support_trstream_cpp_FUN_00573fc0(&local_5c,&DAT_005d6029,local_15c,1);
    unkafter_turret_cpp_FUN_00573c00(&local_5c,*(uint *)(pCVar7 + 0x48),local_18 * local_18);
    unkafter_turret_cpp_FUN_00573db0(&local_5c);
  }
  support_trstream_cpp_FUN_00573fc0(&local_5c,&DAT_005d602d,texture_name,1);
  unkafter_turret_cpp_FUN_00573c00(&local_5c,*(uint *)(pCVar7 + 0x44),local_18 * local_18);
  unkafter_turret_cpp_FUN_00573db0(&local_5c);
  if (_DAT_02cfd0c8 != 0) {
    iVar4 = 0;
    fVar13 = (float10)_DAT_005d60c1;
    fVar14 = (float10)_DAT_005d60bd;
    fVar15 = (float10)_DAT_005d60b9;
    do {
      iVar3 = *(int *)(pCVar7 + 0x4c);
      bVar12 = *(byte *)(iVar3 + 2 + iVar4);
      local_14 = (uint)bVar12;
      fVar16 = (float10)bVar12 * fVar13 +
               (float10)*(byte *)(iVar3 + 1 + iVar4) * fVar14 +
               (float10)*(byte *)(iVar3 + iVar4) * fVar15;
      round();
      local_20 = (int)ROUND(fVar16);
      *(byte *)(extraout_ECX + extraout_EDX) = (byte)local_20;
      *(byte *)(*(int *)(pCVar7 + 0x4c) + 1 + extraout_EDX) = (byte)local_20;
      iVar4 = extraout_EDX + 3;
      *(byte *)(*(int *)(pCVar7 + 0x4c) + -1 + iVar4) = (byte)local_20;
    } while (iVar4 != 0x300);
  }
LAB_00569bf9:
  unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_5c,0);
  return local_1c;
}
