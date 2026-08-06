// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0
// Address: 00544ef0
// Address Range: [[00544ef0, 00545385]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00544ef0(CTextureCache *cache,char *texture_name)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00544ef0(CTextureCache *cache,char *texture_name)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  SIZE_T unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char (*pacVar11) [64];
  uchar **ppuVar12;
  byte bVar13;
  char local_114 [256];
  uint local_14;
  
  bVar13 = 0;
  local_14 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",texture_name);
  if (local_14 < 0x1000) {
    if (local_14 == 0x400) {
      unaff_EBP = 0x20;
      goto LAB_00544f38;
    }
  }
  else {
    if (local_14 < 0x1001) {
      unaff_EBP = 0x40;
      goto LAB_00544f38;
    }
    if (0x3fff < local_14) {
      if (local_14 < 0x4001) {
        unaff_EBP = 0x80;
        goto LAB_00544f38;
      }
      if (local_14 == 0x10000) {
        unaff_EBP = 0x100;
        goto LAB_00544f38;
      }
    }
  }
  _sprintf(local_114,"CTextureCache::load - Bad texture length : %s,%d",texture_name,local_14);
  g_CurrentLineNumber = 243;
  g_CurrentFilename = "..\\engine\\texture.cpp";
  core_main_c_displayErrorAndQuit_FUN_004c8440(local_114);
LAB_00544f38:
  pcVar10 = local_114;
  pcVar9 = local_114;
  pcVar7 = texture_name;
  do {
    cVar1 = *pcVar7;
    *pcVar10 = cVar1;
    pcVar8 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
    pcVar8 = local_114;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == '.') goto LAB_00544f77;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == '.') goto LAB_00544f77;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00544f77:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 250;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CTextureCache::load - Can't find extension");
  }
  _sprintf(pcVar7,".act");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    puVar4 = g_SourcePaletteData;
    ppuVar12 = cache->texture_palette_ptrs + *(int *)(cache[10].texture_names[0x1fe] + 8) * 0xc0;
    for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppuVar12 = *(uchar **)puVar4;
      puVar4 = puVar4 + ((uint)bVar13 * -2 + 1) * 4;
      ppuVar12 = ppuVar12 + (uint)bVar13 * -2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(uchar *)ppuVar12 = *puVar4;
      puVar4 = puVar4 + (uint)bVar13 * -2 + 1;
      ppuVar12 = (uchar **)((int)ppuVar12 + (uint)bVar13 * -2 + 1);
    }
  }
  else {
    _fread(cache->texture_palette_ptrs + *(int *)(cache[10].texture_names[0x1fe] + 8) * 0xc0,
               0x100,3,p_Var3);
    _fclose(p_Var3);
  }
  pacVar11 = cache->texture_names + *(int *)(cache[10].texture_names[0x1fe] + 8);
  pcVar7 = texture_name;
  do {
    cVar1 = *pcVar7;
    (*pacVar11)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    (*pacVar11)[1] = cVar1;
    pacVar11 = (char (*) [64])(*pacVar11 + 2);
  } while (cVar1 != '\0');
  iVar6 = *(int *)(cache[10].texture_names[0x1fe] + 8);
  pcVar7 = texture_name;
  pcVar10 = local_114;
  if (unaff_EBP != cache->texture_dimensions[iVar6]) {
    if (cache->texture_data_ptrs[iVar6] != (uchar *)0x0) {
      free(cache->texture_data_ptrs[iVar6]);
      if (cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)] != (uchar *)0x0)
      {
        free
                  (cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)]);
        cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)] = (uchar *)0x0;
      }
    }
    puVar4 = (uchar *)malloc(local_14);
    cache->texture_data_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)] = puVar4;
    pcVar10 = local_114;
    if (cache->texture_data_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)] == (uchar *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 277;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
      pcVar10 = local_114;
    }
  }
  do {
    cVar1 = *pcVar7;
    *pcVar10 = cVar1;
    pcVar8 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar10[1] = cVar1;
    pcVar8 = local_114;
    pcVar7 = pcVar7 + 2;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == '.') goto LAB_0054511b;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == '.') goto LAB_0054511b;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0054511b:
  _sprintf(pcVar7,".raw");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    memset
              (cache->texture_data_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)],0,
               unaff_EBP * unaff_EBP);
    pcVar9 = local_114;
  }
  else {
    _fread(cache->texture_data_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)],unaff_EBP,
               unaff_EBP,p_Var3);
    _fclose(p_Var3);
  }
  do {
    cVar1 = *texture_name;
    *pcVar9 = cVar1;
    pcVar7 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar9[1] = cVar1;
    pcVar7 = local_114;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  do {
    pcVar9 = pcVar7;
    if (*pcVar7 == '.') goto LAB_005451a6;
    if (*pcVar7 == '\0') break;
    pcVar9 = pcVar7 + 1;
    if (*pcVar9 == '.') goto LAB_005451a6;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_005451a6:
  _sprintf(pcVar9,".opa");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    if (cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)] != (uchar *)0x0) {
      free
                (cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)]);
      cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)] = (uchar *)0x0;
    }
  }
  else {
    iVar6 = *(int *)(cache[10].texture_names[0x1fe] + 8);
    if (unaff_EBP != cache->texture_dimensions[iVar6]) {
      if (cache->texture_opacity_ptrs[iVar6] != (uchar *)0x0) {
        free(cache->texture_opacity_ptrs[iVar6]);
      }
      puVar4 = (uchar *)malloc(local_14);
      cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)] = puVar4;
    }
    _fread(cache->texture_opacity_ptrs[*(int *)(cache[10].texture_names[0x1fe] + 8)],unaff_EBP,
               unaff_EBP,p_Var3);
    _fclose(p_Var3);
  }
  cache->texture_dimensions[*(int *)(cache[10].texture_names[0x1fe] + 8)] = unaff_EBP;
  iVar5 = *(int *)(cache[10].texture_names[0x1fe] + 8);
  iVar6 = iVar5 + 1;
  iVar2 = cache->max_texture_count;
  *(int *)(cache[10].texture_names[0x1fe] + 8) = iVar6;
  if (iVar2 <= iVar6) {
    cache->wrap_indicator = 1;
    pacVar11 = cache[10].texture_names;
    *(char *)((int)(pacVar11 + 0x1fe) + 8) = '\0';
    *(char *)((int)(pacVar11 + 0x1fe) + 9) = '\0';
    *(char *)((int)(pacVar11 + 0x1fe) + 10) = '\0';
    *(char *)((int)(pacVar11 + 0x1fe) + 0xb) = '\0';
    return iVar5;
  }
  return iVar5;
}
