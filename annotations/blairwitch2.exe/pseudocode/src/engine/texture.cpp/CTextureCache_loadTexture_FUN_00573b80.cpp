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
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_EDX;
  STextureCacheEntry *pSVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  char local_1d8 [128];
  char local_158 [128];
  char local_d8 [128];
  CInStreamFile local_58;
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar10 = 0;
  support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_58);
  uVar4 = 0xffffffff;
  pcVar8 = texture_name;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar4 - 1) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0xfb;
    core_main_c_FUN_004e4500("Texture name is too big : %s",texture_name);
  }
  memset((void *)0x2652eb8,0,0x214);
  memset((void *)0x26530cc,0,0x214);
  memset((void *)0x26532e0,0,0x214);
  engine_dosio_cpp_FUN_00460910(0x2652eb8,&DAT_005ec6f1,texture_name);
  iVar2 = engine_dosio_cpp_findFile_FUN_00460980((SFoundFileInfo *)0x2652eb8);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x107;
    core_main_c_FUN_004e4500("CTextureCache::load - Can't get file info on %s",texture_name);
  }
  uVar4 = _DAT_026530bc;
  local_1c = engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00573a60(this_ptr);
  pSVar5 = this_ptr->entries + local_1c;
  pcVar8 = pSVar5->texture_name;
  pcVar6 = texture_name;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    pcVar7 = texture_name;
    pcVar9 = local_1d8;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
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
  engine_dosio_cpp_changeFileExtension_FUN_004611a0(local_1d8,&DAT_005ec73b);
  engine_dosio_cpp_FUN_00460910(0x26530cc,&DAT_005ec740,local_1d8);
  local_30 = engine_dosio_cpp_findFile_FUN_00460980((SFoundFileInfo *)0x26530cc);
  pcVar8 = local_158;
  pcVar6 = texture_name;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_004611a0(local_158,&DAT_005ec744);
  engine_dosio_cpp_FUN_00460910(0x26532e0,&DAT_005ec749,local_158);
  iVar2 = engine_dosio_cpp_findFile_FUN_00460980((SFoundFileInfo *)0x26532e0);
  if (local_30 == 0) {
    if (uVar4 < 0x10000) {
      if (uVar4 < 0x1000) {
LAB_005741ee:
        _sprintf(local_d8,"CTextureCache::load - Bad texture length : %s,%d");
        _DAT_01d046a0 = "..\\engine\\texture.cpp";
        _DAT_01d046a4 = 0x194;
        core_main_c_FUN_004e4500(local_d8);
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
    pSVar5->dimension = local_18;
    puVar3 = (uchar *)malloc(uVar4);
    pSVar5->true_color_data = puVar3;
    if (puVar3 == (uchar *)0x0) {
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x19e;
      core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
    }
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
              (&local_58,&DAT_005ec8cf,texture_name);
    support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_58,pSVar5->true_color_data,uVar4);
    support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
    goto LAB_00573fe1;
  }
  puVar3 = (uchar *)malloc(0x300);
  pSVar5->palette_data = puVar3;
  if (puVar3 == (uchar *)0x0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x131;
    core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (uVar4 < 0x4000) {
    if (uVar4 < 0x400) {
LAB_00573db1:
      _sprintf(local_d8,"CTextureCache::load - Bad texture length : %s,%d");
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x14a;
      core_main_c_FUN_004e4500(local_d8);
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
  pSVar5->dimension = local_18;
  puVar3 = (uchar *)malloc(uVar4);
  pSVar5->texture_data = puVar3;
  if (puVar3 == (uchar *)0x0) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x154;
    core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (iVar2 != 0) {
    puVar3 = (uchar *)malloc(uVar4);
    pSVar5->opacity_data = puVar3;
    if (puVar3 == (uchar *)0x0) {
      _DAT_01d046a0 = "..\\engine\\texture.cpp";
      _DAT_01d046a4 = 0x15a;
      core_main_c_FUN_004e4500("CTextureCache::load - Out of memory");
    }
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390(&local_58,&DAT_005ec842,local_1d8)
  ;
  support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_58,pSVar5->palette_data,0x300);
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
  if (iVar2 != 0) {
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
              (&local_58,&DAT_005ec846,local_158);
    support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
              (&local_58,pSVar5->opacity_data,local_18 * local_18);
    support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
            (&local_58,&DAT_005ec84a,texture_name);
  support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
            (&local_58,pSVar5->texture_data,local_18 * local_18);
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
  if (_DAT_02652ea8 != 0) {
    iVar2 = 0;
    fVar11 = (float10)_DAT_005ec8de;
    fVar12 = (float10)_DAT_005ec8da;
    fVar13 = (float10)_DAT_005ec8d6;
    do {
      puVar3 = pSVar5->palette_data;
      local_14 = (uint)puVar3[iVar2 + 2];
      fVar14 = (float10)puVar3[iVar2 + 2] * fVar11 +
               (float10)puVar3[iVar2 + 1] * fVar12 + (float10)puVar3[iVar2] * fVar13;
      round();
      local_20 = (int)ROUND(fVar14);
      *(uchar *)(extraout_ECX + extraout_EDX) = (uchar)local_20;
      pSVar5->palette_data[extraout_EDX + 1] = (uchar)local_20;
      iVar2 = extraout_EDX + 3;
      pSVar5->palette_data[extraout_EDX + 2] = (uchar)local_20;
    } while (iVar2 != 0x300);
  }
LAB_00573fe1:
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_58,0);
  return local_1c;
}
