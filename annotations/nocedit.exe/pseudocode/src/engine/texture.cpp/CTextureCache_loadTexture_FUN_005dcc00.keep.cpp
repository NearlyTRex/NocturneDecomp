// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
// Address: 005dcc00
// MANUAL RECONSTRUCTION
// Address Range: [[005dcc00, 005dd172]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

{
  uint size;
  byte *pbVar2;
  _FILE *p_Var3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  SIZE_T width;
  char *pcVar7;
  char local_114 [256];

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
  strcpy(local_114,texture_name);
  pcVar7 = strchr(local_114,'.');
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 0x111;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Can't find extension");
  }
  _sprintf(pcVar7,".act");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    memcpy(cache->texture_palette_ptrs[cache->current_texture_count],g_SourcePaletteData,0x300);
  }
  else {
    _fread(cache->texture_palette_ptrs[cache->current_texture_count],0x100,3,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",0x117);
  }
  strcpy(cache->texture_names[cache->current_texture_count],texture_name);
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
    if (cache->texture_data_ptrs[cache->current_texture_count] == (void *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 300;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
    }
  }
  strcpy(local_114,texture_name);
  pcVar7 = strchr(local_114,'.');
  _sprintf(pcVar7,".raw");
  p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_114,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    memset
              (cache->texture_data_ptrs[cache->current_texture_count],0,width * width);
  }
  else {
    _fread(cache->texture_data_ptrs[cache->current_texture_count],width,width,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\texture.cpp",0x13a);
  }
  strcpy(local_114,texture_name);
  pcVar7 = strchr(local_114,'.');
  _sprintf(pcVar7,".opa");
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
