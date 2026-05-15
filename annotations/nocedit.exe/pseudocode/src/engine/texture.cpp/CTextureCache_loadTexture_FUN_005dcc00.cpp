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
  byte *pbVar2;
  _FILE *p_Var3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  SIZE_T width;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char (*pacVar11) [64];
  byte *pbVar12;
  byte bVar13;
  char local_114 [256];
  uint local_14;
  
  bVar13 = 0;
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
  g_CurrentLineNumber = 0x101;
  g_CurrentFilename = "..\\engine\\texture.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_114);
LAB_005dcc85:
  if (cache->texture_palette_ptrs[cache->current_texture_count] == (byte *)0x0) {
    pbVar2 = (byte *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x300,"..\\engine\\texture.cpp",0x107);
    cache->texture_palette_ptrs[cache->current_texture_count] = pbVar2;
    if (cache->texture_palette_ptrs[cache->current_texture_count] == (byte *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 0x109;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
    }
  }
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
    if (*pcVar8 == '.') goto LAB_005dcd2c;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == '.') goto LAB_005dcd2c;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_005dcd2c:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 0x111;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Can't find extension");
  }
  _sprintf(pcVar7,".act");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    pbVar2 = (byte *)g_SourcePaletteData;
    pbVar12 = cache->texture_palette_ptrs[cache->current_texture_count];
    for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(uint *)pbVar12 = *(uint *)pbVar2;
      pbVar2 = pbVar2 + (uint)bVar13 * -8 + 4;
      pbVar12 = pbVar12 + (uint)bVar13 * -8 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pbVar12 = *pbVar2;
      pbVar2 = pbVar2 + (uint)bVar13 * -2 + 1;
      pbVar12 = pbVar12 + (uint)bVar13 * -2 + 1;
    }
  }
  else {
    _fread(cache->texture_palette_ptrs[cache->current_texture_count],0x100,3,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",0x117);
  }
  pacVar11 = cache->texture_names + cache->current_texture_count;
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
  pcVar7 = texture_name;
  pcVar10 = local_114;
  if (width != cache->texture_dimensions[cache->current_texture_count]) {
    if (cache->texture_data_ptrs[cache->current_texture_count] != (void *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (cache->texture_data_ptrs[cache->current_texture_count],
                 "..\\engine\\texture.cpp",0x124);
      if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (cache->texture_opacity_ptrs[cache->current_texture_count],
                   "..\\engine\\texture.cpp",0x126);
        cache->texture_opacity_ptrs[cache->current_texture_count] = (void *)0x0;
      }
    }
    pvVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\texture.cpp",0x12a);
    cache->texture_data_ptrs[cache->current_texture_count] = pvVar4;
    pcVar10 = local_114;
    if (cache->texture_data_ptrs[cache->current_texture_count] == (void *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 300;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
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
    if (*pcVar8 == '.') goto LAB_005dceea;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == '.') goto LAB_005dceea;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_005dceea:
  _sprintf(pcVar7,".raw");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    memset
              (cache->texture_data_ptrs[cache->current_texture_count],0,width * width);
    pcVar9 = local_114;
  }
  else {
    _fread(cache->texture_data_ptrs[cache->current_texture_count],width,width,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",0x13a);
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
    if (*pcVar7 == '.') goto LAB_005dcf75;
    if (*pcVar7 == '\0') break;
    pcVar9 = pcVar7 + 1;
    if (*pcVar9 == '.') goto LAB_005dcf75;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_005dcf75:
  _sprintf(pcVar9,".opa");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (cache->texture_opacity_ptrs[cache->current_texture_count],
                 "..\\engine\\texture.cpp",0x14e);
      cache->texture_opacity_ptrs[cache->current_texture_count] = (void *)0x0;
    }
  }
  else {
    if (width != cache->texture_dimensions[cache->current_texture_count]) {
      if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (cache->texture_opacity_ptrs[cache->current_texture_count],
                   "..\\engine\\texture.cpp",0x146);
      }
      pvVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\texture.cpp",0x148);
      cache->texture_opacity_ptrs[cache->current_texture_count] = pvVar4;
    }
    _fread(cache->texture_opacity_ptrs[cache->current_texture_count],width,width,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",0x14b);
  }
  cache->texture_dimensions[cache->current_texture_count] = width;
  iVar5 = cache->current_texture_count;
  iVar6 = cache->current_texture_count + 1;
  cache->current_texture_count = iVar6;
  if (cache->max_texture_count <= iVar6) {
    cache->wrap_indicator = 1;
    cache->current_texture_count = 0;
    return iVar5;
  }
  return iVar5;
}
