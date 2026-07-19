// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
// Address: 005dcc00
// Address Range: [[005dcc00, 005dd172]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

{
  char cVar1;
  uint size;
  uchar *puVar2;
  _FILE *p_Var3;
  int iVar4;
  int iVar5;
  SIZE_T width;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char (*pacVar10) [64];
  uchar *puVar11;
  byte bVar12;
  char local_114 [256];
  uint local_14;
  
  bVar12 = 0;
  size = engine_dosio_cpp_getFileSize_FUN_00481880("art",texture_name);
  if (size < 0x4000) {
    if (0x3ff < size) {
      if (size < 0x401) {
        width = 0x20;
        goto LAB_005dcc85;
      }
      if (size == 0x1000) {
        width = 0x40;
        goto LAB_005dcc85;
      }
    }
  }
  else {
    if (size < 0x4001) {
      width = 0x80;
      goto LAB_005dcc85;
    }
    if (size < 0x40000) {
      if (size == 0x10000) {
        width = 0x100;
        goto LAB_005dcc85;
      }
    }
    else {
      if (size < 0x40001) {
        width = 0x200;
        goto LAB_005dcc85;
      }
      if (size == 0x100000) {
        width = 0x400;
        goto LAB_005dcc85;
      }
    }
  }
  _sprintf(local_114,"CTextureCache::load - Bad texture length : %s,%d",texture_name,size);
  g_CurrentLineNumber = 257;
  g_CurrentFilename = "..\\engine\\texture.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_114);
LAB_005dcc85:
  if (cache->texture_palette_ptrs[cache->current_texture_count] == (uchar *)0x0) {
    puVar2 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x300,"..\\engine\\texture.cpp",263);
    cache->texture_palette_ptrs[cache->current_texture_count] = puVar2;
    if (cache->texture_palette_ptrs[cache->current_texture_count] == (uchar *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 265;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
    }
  }
  pcVar9 = local_114;
  pcVar8 = local_114;
  pcVar6 = texture_name;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    pcVar7 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
    pcVar7 = local_114;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == '.') goto LAB_005dcd2c;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == '.') goto LAB_005dcd2c;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_005dcd2c:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 273;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Can't find extension");
  }
  _sprintf(pcVar6,".act");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    puVar2 = g_SourcePaletteData;
    puVar11 = cache->texture_palette_ptrs[cache->current_texture_count];
    for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)puVar11 = *(uint *)puVar2;
      puVar2 = puVar2 + (uint)bVar12 * -8 + 4;
      puVar11 = puVar11 + (uint)bVar12 * -8 + 4;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar2;
      puVar2 = puVar2 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
  }
  else {
    _fread(cache->texture_palette_ptrs[cache->current_texture_count],0x100,3,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",279);
  }
  pacVar10 = cache->texture_names + cache->current_texture_count;
  pcVar6 = texture_name;
  do {
    cVar1 = *pcVar6;
    (*pacVar10)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    (*pacVar10)[1] = cVar1;
    pacVar10 = (char (*) [64])(*pacVar10 + 2);
  } while (cVar1 != '\0');
  pcVar6 = texture_name;
  pcVar9 = local_114;
  if (width != cache->texture_dimensions[cache->current_texture_count]) {
    if (cache->texture_data_ptrs[cache->current_texture_count] != (uchar *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (cache->texture_data_ptrs[cache->current_texture_count],
                 "..\\engine\\texture.cpp",292);
      if (cache->texture_opacity_ptrs[cache->current_texture_count] != (uchar *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (cache->texture_opacity_ptrs[cache->current_texture_count],
                   "..\\engine\\texture.cpp",294);
        cache->texture_opacity_ptrs[cache->current_texture_count] = (uchar *)0x0;
      }
    }
    puVar2 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\texture.cpp",298);
    cache->texture_data_ptrs[cache->current_texture_count] = puVar2;
    pcVar9 = local_114;
    if (cache->texture_data_ptrs[cache->current_texture_count] == (uchar *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 300;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
      pcVar9 = local_114;
    }
  }
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    pcVar7 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar9[1] = cVar1;
    pcVar7 = local_114;
    pcVar6 = pcVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == '.') goto LAB_005dceea;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == '.') goto LAB_005dceea;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_005dceea:
  _sprintf(pcVar6,".raw");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    memset
              (cache->texture_data_ptrs[cache->current_texture_count],0,width * width);
    pcVar8 = local_114;
  }
  else {
    _fread(cache->texture_data_ptrs[cache->current_texture_count],width,width,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",314);
  }
  do {
    cVar1 = *texture_name;
    *pcVar8 = cVar1;
    pcVar6 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar8[1] = cVar1;
    pcVar6 = local_114;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_005dcf75;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_005dcf75;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dcf75:
  _sprintf(pcVar8,".opa");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    if (cache->texture_opacity_ptrs[cache->current_texture_count] != (uchar *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (cache->texture_opacity_ptrs[cache->current_texture_count],
                 "..\\engine\\texture.cpp",334);
      cache->texture_opacity_ptrs[cache->current_texture_count] = (uchar *)0x0;
    }
  }
  else {
    if (width != cache->texture_dimensions[cache->current_texture_count]) {
      if (cache->texture_opacity_ptrs[cache->current_texture_count] != (uchar *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (cache->texture_opacity_ptrs[cache->current_texture_count],
                   "..\\engine\\texture.cpp",326);
      }
      puVar2 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\texture.cpp",328);
      cache->texture_opacity_ptrs[cache->current_texture_count] = puVar2;
    }
    _fread(cache->texture_opacity_ptrs[cache->current_texture_count],width,width,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",331);
  }
  cache->texture_dimensions[cache->current_texture_count] = width;
  iVar4 = cache->current_texture_count;
  iVar5 = cache->current_texture_count + 1;
  cache->current_texture_count = iVar5;
  if (cache->max_texture_count <= iVar5) {
    cache->wrap_indicator = 1;
    cache->current_texture_count = 0;
    return iVar4;
  }
  return iVar4;
}
