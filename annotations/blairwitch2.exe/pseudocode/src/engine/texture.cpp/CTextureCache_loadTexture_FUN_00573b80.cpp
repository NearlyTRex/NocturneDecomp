// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80
// Address: 00573b80
// Address Range: [[00573b80, 00574235]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00573b80(CTextureCache *this_ptr,char *texture_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00573b80(CTextureCache *this_ptr,char *texture_name)

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
  char local_1d8 [128];
  char local_158 [128];
  char local_d8 [128];
  CInStreamFile local_58;
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar12 = 0;
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_58);
  uVar6 = 0xffffffff;
  pcVar11 = texture_name;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar6 - 1) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0xfb;
    core_main_c_FUN_004e4500("Texture name is too big : %s",texture_name);
  }
  memset((void *)0x2652eb8,0,0x214);
  memset((void *)0x26530cc,0,0x214);
  memset((void *)0x26532e0,0,0x214);
  engine_dosio_cpp_FUN_00460910(0x2652eb8,&DAT_005ec6f1,texture_name);
  iVar4 = engine_dosio_cpp_findFile_FUN_00460980(0x2652eb8);
  if (iVar4 == 0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x107;
    core_main_c_FUN_004e4500("CTextureCache::load - Can't get file info on %s",texture_name);
  }
  uVar6 = _DAT_026530bc;
  local_1c = engine_texture_cpp_FUN_00573a60(this_ptr);
  pCVar7 = this_ptr + local_1c * 0x60 + 4;
  pCVar10 = pCVar7 + 4;
  pCVar8 = (CTextureCache *)texture_name;
  do {
    CVar2 = *pCVar8;
    *pCVar10 = CVar2;
    pcVar11 = texture_name;
    pcVar9 = local_1d8;
    if (CVar2 == (CTextureCache)0x0) break;
    CVar2 = pCVar8[1];
    pCVar8 = pCVar8 + 2;
    pCVar10[1] = CVar2;
    pCVar10 = pCVar10 + 2;
    pcVar9 = local_1d8;
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
  engine_dosio_cpp_changeFileExtension_FUN_004611a0(local_1d8,&DAT_005ec73b);
  engine_dosio_cpp_FUN_00460910(0x26530cc,&DAT_005ec740,local_1d8);
  local_30 = engine_dosio_cpp_findFile_FUN_00460980(0x26530cc);
  pcVar11 = local_158;
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
  engine_dosio_cpp_changeFileExtension_FUN_004611a0(local_158,&DAT_005ec744);
  engine_dosio_cpp_FUN_00460910(0x26532e0,&DAT_005ec749,local_158);
  iVar4 = engine_dosio_cpp_findFile_FUN_00460980(0x26532e0);
  if (local_30 == 0) {
    if (uVar6 < 0x10000) {
      if (uVar6 < 0x1000) {
LAB_005741ee:
        _sprintf(local_d8,"CTextureCache::load - Bad texture length : %s,%d");
        _DAT_01d046a0 = "..\\engine\\texture.cpp";
        _DAT_01d046a4 = 0x194;
        core_main_c_FUN_004e4500(local_d8);
      }
      else if (uVar6 < 0x1001) {
        local_18 = 0x20;
      }
      else {
        if (uVar6 != 0x4000) goto LAB_005741ee;
        local_18 = 0x40;
      }
    }
    else if (uVar6 < 0x10001) {
      local_18 = 0x80;
    }
    else if (uVar6 < 0x100000) {
      if (uVar6 != 0x40000) goto LAB_005741ee;
      local_18 = 0x100;
    }
    else if (uVar6 < 0x100001) {
      local_18 = 0x200;
    }
    else {
      if (uVar6 != 0x400000) goto LAB_005741ee;
      local_18 = 0x400;
    }
    *(int *)pCVar7 = local_18;
    pvVar5 = FUN_005b8580(uVar6);
    *(void **)(pCVar7 + 0x50) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x19e;
      core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
    }
    support_trstream_cpp_FUN_0057d390(&local_58,&DAT_005ec8cf,texture_name);
    unkaddr_0057b9a0_cpp_FUN_0057cfe0(&local_58,*(uint *)(pCVar7 + 0x50),uVar6);
    unkaddr_0057b9a0_cpp_FUN_0057d180(&local_58);
    goto LAB_00573fe1;
  }
  pvVar5 = FUN_005b8580(0x300);
  *(void **)(pCVar7 + 0x4c) = pvVar5;
  if (pvVar5 == (void *)0x0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x131;
    core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (uVar6 < 0x4000) {
    if (uVar6 < 0x400) {
LAB_00573db1:
      _sprintf(local_d8,"CTextureCache::load - Bad texture length : %s,%d");
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x14a;
      core_main_c_FUN_004e4500(local_d8);
    }
    else if (uVar6 < 0x401) {
      local_18 = 0x20;
    }
    else {
      if (uVar6 != 0x1000) goto LAB_00573db1;
      local_18 = 0x40;
    }
  }
  else if (uVar6 < 0x4001) {
    local_18 = 0x80;
  }
  else if (uVar6 < 0x40000) {
    if (uVar6 != 0x10000) goto LAB_00573db1;
    local_18 = 0x100;
  }
  else if (uVar6 < 0x40001) {
    local_18 = 0x200;
  }
  else {
    if (uVar6 != 0x100000) goto LAB_00573db1;
    local_18 = 0x400;
  }
  *(int *)pCVar7 = local_18;
  pvVar5 = FUN_005b8580(uVar6);
  *(void **)(pCVar7 + 0x44) = pvVar5;
  if (pvVar5 == (void *)0x0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x154;
    core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (iVar4 != 0) {
    pvVar5 = FUN_005b8580(uVar6);
    *(void **)(pCVar7 + 0x48) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x15a;
      core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
    }
  }
  support_trstream_cpp_FUN_0057d390(&local_58,&DAT_005ec842,local_1d8);
  unkaddr_0057b9a0_cpp_FUN_0057cfe0(&local_58,*(uint *)(pCVar7 + 0x4c),0x300);
  unkaddr_0057b9a0_cpp_FUN_0057d180(&local_58);
  if (iVar4 != 0) {
    support_trstream_cpp_FUN_0057d390(&local_58,&DAT_005ec846,local_158);
    unkaddr_0057b9a0_cpp_FUN_0057cfe0(&local_58,*(uint *)(pCVar7 + 0x48),local_18 * local_18);
    unkaddr_0057b9a0_cpp_FUN_0057d180(&local_58);
  }
  support_trstream_cpp_FUN_0057d390(&local_58,&DAT_005ec84a,texture_name);
  unkaddr_0057b9a0_cpp_FUN_0057cfe0(&local_58,*(uint *)(pCVar7 + 0x44),local_18 * local_18);
  unkaddr_0057b9a0_cpp_FUN_0057d180(&local_58);
  if (_DAT_02652ea8 != 0) {
    iVar4 = 0;
    fVar13 = (float10)_DAT_005ec8de;
    fVar14 = (float10)_DAT_005ec8da;
    fVar15 = (float10)_DAT_005ec8d6;
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
LAB_00573fe1:
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_58,0);
  return local_1c;
}
