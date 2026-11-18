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
  float fVar2;
  float fVar3;
  float fVar4;
  ulong size;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  int iVar8;
  STextureCacheEntry *pSVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  double dVar15;
  char local_1d8 [128];
  char local_158 [128];
  char local_d8 [128];
  CInStreamFile local_58;
  int local_30;
  int iStack_24;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar14 = 0;
  support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_58);
  uVar7 = 0xffffffff;
  pcVar12 = texture_name;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar7 - 1) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
    g_INT_01d046a4 = 0xfb;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Texture name is too big : %s");
  }
  memset(g_CHAR_ARRAY_02652eb8,0,0x214);
  memset(g_CHAR_ARRAY_026530cc,0,0x214);
  memset(g_CHAR_ARRAY_026532e0,0,0x214);
  engine_dosio_cpp_callRelativeFilePathHook_FUN_00460910
            (g_CHAR_ARRAY_02652eb8,"art",texture_name);
  iVar5 = engine_dosio_cpp_findFile_FUN_00460980((SFoundFileInfo *)g_CHAR_ARRAY_02652eb8);
  if (iVar5 == 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
    g_INT_01d046a4 = 0x107;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CTextureCache::load - Can't get file info on %s");
  }
  size = g_ULONG_026530bc;
  local_1c = engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00573a60(this_ptr);
  pSVar9 = this_ptr->entries + local_1c;
  pcVar12 = pSVar9->texture_name;
  pcVar10 = texture_name;
  do {
    cVar1 = *pcVar10;
    *pcVar12 = cVar1;
    pcVar11 = texture_name;
    pcVar13 = local_1d8;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
    pcVar13 = local_1d8;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar11;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar13[1] = cVar1;
    pcVar11 = pcVar11 + 2;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_004611a0(local_1d8,".act");
  engine_dosio_cpp_callRelativeFilePathHook_FUN_00460910
            (g_CHAR_ARRAY_026530cc,"art",local_1d8);
  local_30 = engine_dosio_cpp_findFile_FUN_00460980((SFoundFileInfo *)g_CHAR_ARRAY_026530cc);
  pcVar12 = local_158;
  pcVar10 = texture_name;
  do {
    cVar1 = *pcVar10;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_004611a0(local_158,".opa");
  engine_dosio_cpp_callRelativeFilePathHook_FUN_00460910
            (g_CHAR_ARRAY_026532e0,"art",local_158);
  iVar5 = engine_dosio_cpp_findFile_FUN_00460980((SFoundFileInfo *)g_CHAR_ARRAY_026532e0);
  if (local_30 == 0) {
    if (size < 0x10000) {
      if (size < 0x1000) {
LAB_005741ee:
        _sprintf(local_d8,"CTextureCache::load - Bad texture length : %s,%d");
        g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
        g_INT_01d046a4 = 0x194;
        core_main_c_displayErrorAndQuit_FUN_004e4500(local_d8);
      }
      else if (size < 0x1001) {
        local_18 = 0x20;
      }
      else {
        if (size != 0x4000) goto LAB_005741ee;
        local_18 = 0x40;
      }
    }
    else if (size < 0x10001) {
      local_18 = 0x80;
    }
    else if (size < 0x100000) {
      if (size != 0x40000) goto LAB_005741ee;
      local_18 = 0x100;
    }
    else if (size < 0x100001) {
      local_18 = 0x200;
    }
    else {
      if (size != 0x400000) goto LAB_005741ee;
      local_18 = 0x400;
    }
    pSVar9->dimension = local_18;
    puVar6 = (uchar *)malloc(size);
    pSVar9->true_color_data = puVar6;
    if (puVar6 == (uchar *)0x0) {
      g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
      g_INT_01d046a4 = 0x19e;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CTextureCache::load - Out of memory");
    }
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
              (&local_58,"art",texture_name);
    support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_58,pSVar9->true_color_data,size);
    support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
    goto LAB_00573fe1;
  }
  puVar6 = (uchar *)malloc(0x300);
  pSVar9->palette_data = puVar6;
  if (puVar6 == (uchar *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
    g_INT_01d046a4 = 0x131;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (size < 0x4000) {
    if (size < 0x400) {
LAB_00573db1:
      _sprintf(local_d8,"CTextureCache::load - Bad texture length : %s,%d");
      g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
      g_INT_01d046a4 = 0x14a;
      core_main_c_displayErrorAndQuit_FUN_004e4500(local_d8);
    }
    else if (size < 0x401) {
      local_18 = 0x20;
    }
    else {
      if (size != 0x1000) goto LAB_00573db1;
      local_18 = 0x40;
    }
  }
  else if (size < 0x4001) {
    local_18 = 0x80;
  }
  else if (size < 0x40000) {
    if (size != 0x10000) goto LAB_00573db1;
    local_18 = 0x100;
  }
  else if (size < 0x40001) {
    local_18 = 0x200;
  }
  else {
    if (size != 0x100000) goto LAB_00573db1;
    local_18 = 0x400;
  }
  pSVar9->dimension = local_18;
  puVar6 = (uchar *)malloc(size);
  pSVar9->texture_data = puVar6;
  if (puVar6 == (uchar *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
    g_INT_01d046a4 = 0x154;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CTextureCache::load - Out of memory");
  }
  if (iVar5 != 0) {
    puVar6 = (uchar *)malloc(size);
    pSVar9->opacity_data = puVar6;
    if (puVar6 == (uchar *)0x0) {
      g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
      g_INT_01d046a4 = 0x15a;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CTextureCache::load - Out of memory");
    }
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
            (&local_58,"art",local_1d8);
  support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_58,pSVar9->palette_data,0x300);
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
  if (iVar5 != 0) {
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
              (&local_58,"art",local_158);
    support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
              (&local_58,pSVar9->opacity_data,local_18 * local_18);
    support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
            (&local_58,"art",texture_name);
  support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
            (&local_58,pSVar9->texture_data,local_18 * local_18);
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_58);
  fVar4 = 0.11f;
  fVar3 = 0.59f;
  fVar2 = 0.3f;
  if (_DAT_02652ea8 != 0) {
    iVar5 = 0;
    do {
      puVar6 = pSVar9->palette_data;
      local_14 = (uint)puVar6[iVar5 + 2];
      local_1d8[0] = -0x4f;
      local_1d8[1] = '?';
      local_1d8[2] = 'W';
      local_1d8[3] = '\0';
      dVar15 = round
                         ((double)((float)puVar6[iVar5 + 2] * fVar4 +
                                  (float)puVar6[iVar5 + 1] * fVar3 + (float)puVar6[iVar5] * fVar2));
      iStack_24 = (int)ROUND(dVar15);
      puVar6[iVar5] = (uchar)iStack_24;
      pSVar9->palette_data[iVar5 + 1] = (uchar)iStack_24;
      iVar8 = iVar5 + 3;
      pSVar9->palette_data[iVar5 + 2] = (uchar)iStack_24;
      iVar5 = iVar8;
    } while (iVar8 != 0x300);
  }
LAB_00573fe1:
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_58,0);
  return local_1c;
}
