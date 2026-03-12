// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
// Address: 005dcc00
// Address Range: [[005dcc00, 005dd172]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

{
  char cVar2;
  uint size;
  byte *pbVar2;
  _FILE *p_Var3;
  void *pvVar4;
  _FILE *p_Var4;
  void *pvVar5;
  int iVar5;
  int iVar6;
  SIZE_T unaff_EBP;
  char *pcVar6;
  char *pcVar10;
  char *pcVar11;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar12;
  char *pcVar9;
  char (*pacVar10) [64];
  char *pcVar13;
  byte *pbVar11;
  byte bVar12;
  char local_114 [256];
  uint local_14;
  char cVar1;
  
  bVar12 = 0;
  size = engine_dosio_c_getFileSize_FUN_00481880("art",texture_name);
  if (size < 0x4000) {
    if (0x3ff < size) {
      if (size < 0x401) {
        unaff_EBP = 0x20;
        goto LAB_005dcc85;
      }
      if (size == 0x1000) {
        unaff_EBP = 0x40;
        goto LAB_005dcc85;
      }
    }
  }
  else {
    if (size < 0x4001) {
      unaff_EBP = 0x80;
      goto LAB_005dcc85;
    }
    if (size < 0x40000) {
      if (size == 0x10000) {
        unaff_EBP = 0x100;
        goto LAB_005dcc85;
      }
    }
    else {
      if (size < 0x40001) {
        unaff_EBP = 0x200;
        goto LAB_005dcc85;
      }
      if (size == 0x100000) {
        unaff_EBP = 0x400;
        goto LAB_005dcc85;
      }
    }
  }
  _sprintf(local_114,"CTextureCache::load - Bad texture length : %s,%d",texture_name,size)
  ;
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
  pcVar9 = local_114;
  pcVar13 = local_114;
  pcVar6 = texture_name;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    pcVar11 = local_114;
    if (cVar1 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
    pcVar11 = local_114;
  } while (cVar2 != '\0');
  do {
    pcVar10 = pcVar11;
    if (*pcVar11 == '.') goto LAB_005dcd2c;
    if (*pcVar11 == '\0') break;
    pcVar10 = pcVar11 + 1;
    if (*pcVar10 == '.') goto LAB_005dcd2c;
    pcVar11 = pcVar11 + 2;
  } while (*pcVar10 != '\0');
  pcVar10 = (char *)0x0;
LAB_005dcd2c:
  if (pcVar10 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 0x111;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Can't find extension");
  }
  _sprintf(pcVar10,".act");
  p_Var3 = engine_dosio_c_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    pbVar12 = (byte *)g_SourcePaletteData;
    pbVar11 = cache->texture_palette_ptrs[cache->current_texture_count];
    for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pbVar11 = *(uint *)pbVar12;
      pbVar12 = pbVar12 + (uint)bVar12 * -8 + 4;
      pbVar11 = pbVar11 + (uint)bVar12 * -8 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar11 = pbVar11 + (uint)bVar12 * -2 + 1;
      *pbVar11 = *pbVar12;
      pbVar12 = pbVar12 + (uint)bVar12 * -2 + 1;
      pbVar11 = pbVar11;
    }
  }
  else {
    _fread(cache->texture_palette_ptrs[cache->current_texture_count],0x100,3,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",0x117);
  }
  pacVar10 = cache->texture_names + cache->current_texture_count;
  pcVar11 = texture_name;
  do {
    cVar2 = *pcVar11;
    (*pacVar10)[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    (*pacVar10)[1] = cVar2;
    pacVar10 = (char (*) [64])(*pacVar10 + 2);
  } while (cVar2 != '\0');
  pcVar11 = texture_name;
  pcVar10 = local_114;
  if (unaff_EBP != cache->texture_dimensions[cache->current_texture_count]) {
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
    cVar2 = *pcVar11;
    *pcVar10 = cVar2;
    pcVar7 = local_114;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar10[1] = cVar2;
    pcVar7 = local_114;
    pcVar11 = pcVar11 + 2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  do {
    pcVar11 = pcVar7;
    if (*pcVar7 == '.') goto LAB_005dceea;
    if (*pcVar7 == '\0') break;
    pcVar11 = pcVar7 + 1;
    if (*pcVar11 == '.') goto LAB_005dceea;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar11 != '\0');
  pcVar11 = (char *)0x0;
LAB_005dceea:
  _sprintf(pcVar11,".raw");
  p_Var4 = engine_dosio_c_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    memset
              (cache->texture_data_ptrs[cache->current_texture_count],0,unaff_EBP * unaff_EBP);
    pcVar13 = local_114;
  }
  else {
    _fread(cache->texture_data_ptrs[cache->current_texture_count],unaff_EBP,unaff_EBP,p_Var4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\engine\\texture.cpp",0x13a);
  }
  do {
    cVar2 = *texture_name;
    *pcVar13 = cVar2;
    pcVar11 = local_114;
    if (cVar2 == '\0') break;
    cVar2 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar13[1] = cVar2;
    pcVar11 = local_114;
    pcVar13 = pcVar13 + 2;
  } while (cVar2 != '\0');
  do {
    pcVar8 = pcVar11;
    if (*pcVar11 == '.') goto LAB_005dcf75;
    if (*pcVar11 == '\0') break;
    pcVar8 = pcVar11 + 1;
    if (*pcVar8 == '.') goto LAB_005dcf75;
    pcVar11 = pcVar11 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dcf75:
  _sprintf(pcVar8,".opa");
  p_Var4 = engine_dosio_c_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (cache->texture_opacity_ptrs[cache->current_texture_count],
                 "..\\engine\\texture.cpp",0x14e);
      cache->texture_opacity_ptrs[cache->current_texture_count] = (void *)0x0;
    }
  }
  else {
    if (unaff_EBP != cache->texture_dimensions[cache->current_texture_count]) {
      if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (cache->texture_opacity_ptrs[cache->current_texture_count],
                   "..\\engine\\texture.cpp",0x146);
      }
      pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\texture.cpp",0x148);
      cache->texture_opacity_ptrs[cache->current_texture_count] = pvVar5;
    }
    _fread(cache->texture_opacity_ptrs[cache->current_texture_count],unaff_EBP,unaff_EBP,p_Var4)
    ;
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\engine\\texture.cpp",0x14b);
  }
  cache->texture_dimensions[cache->current_texture_count] = unaff_EBP;
  iVar6 = cache->current_texture_count + 1;
  cache->current_texture_count = iVar6;
  if (cache->max_texture_count <= iVar6) {
    cache->wrap_indicator = 1;
    cache->current_texture_count = 0;
    return;
  }
  return;
}
