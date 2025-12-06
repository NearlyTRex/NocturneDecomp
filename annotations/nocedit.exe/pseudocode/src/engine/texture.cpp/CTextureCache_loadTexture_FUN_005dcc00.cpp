// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
// Address: 005dcc00
// Address Range: [[005dcc00, 005dd172]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache * cache, char * texture_name)

#include "nocturne.h"

void __cdecl
engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  FILE *pFVar4;
  void *pvVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  SIZE_T unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  char (*pacVar9) [64];
  char *pcVar10;
  byte *pbVar11;
  byte bVar12;
  uint in_stack_0000000c;
  char *in_stack_00000014;
  char *in_stack_00000024;
  char *in_stack_00000034;
  
  bVar12 = 0;
  uVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",texture_name);
  if (uVar2 < 0x4000) {
    if (0x3ff < uVar2) {
      if (uVar2 < 0x401) {
        unaff_EBP = 0x20;
        goto LAB_005dcc85;
      }
      if (uVar2 == 0x1000) {
        unaff_EBP = 0x40;
        goto LAB_005dcc85;
      }
    }
  }
  else {
    if (uVar2 < 0x4001) {
      unaff_EBP = 0x80;
      goto LAB_005dcc85;
    }
    if (uVar2 < 0x40000) {
      if (uVar2 == 0x10000) {
        unaff_EBP = 0x100;
        goto LAB_005dcc85;
      }
    }
    else {
      if (uVar2 < 0x40001) {
        unaff_EBP = 0x200;
        goto LAB_005dcc85;
      }
      if (uVar2 == 0x100000) {
        unaff_EBP = 0x400;
        goto LAB_005dcc85;
      }
    }
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffef0,"CTextureCache::load - Bad texture length : %s,%d",in_stack_0000000c,uVar2);
  g_CurrentLineNumber = 0x101;
  g_CurrentFilename = "..\\engine\\texture.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffef4);
LAB_005dcc85:
  if (cache->texture_palette_ptrs[cache->current_texture_count] == (byte *)0x0) {
    pbVar3 = (byte *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                               (0x300,"..\\engine\\texture.cpp",0x107);
    cache->texture_palette_ptrs[cache->current_texture_count] = pbVar3;
    if (cache->texture_palette_ptrs[cache->current_texture_count] == (byte *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 0x109;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
    }
  }
  pcVar8 = &stack0xfffffef8;
  do {
    cVar1 = *in_stack_00000014;
    *pcVar8 = cVar1;
    pcVar10 = &stack0xfffffef8;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000014[1];
    in_stack_00000014 = in_stack_00000014 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar10 = &stack0xfffffef8;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar10;
    if (*pcVar10 == '.') goto LAB_005dcd2c;
    if (*pcVar10 == '\0') break;
    pcVar8 = pcVar10 + 1;
    if (*pcVar8 == '.') goto LAB_005dcd2c;
    pcVar10 = pcVar10 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dcd2c:
  if (pcVar8 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 0x111;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Can't find extension");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,".act");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffefc,"rb");
  if (pFVar4 == (FILE *)0x0) {
    pbVar3 = (byte *)g_SourcePaletteData;
    pbVar11 = cache->texture_palette_ptrs[cache->current_texture_count];
    for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(uint *)pbVar11 = *(uint *)pbVar3;
      pbVar3 = pbVar3 + (uint)bVar12 * -8 + 4;
      pbVar11 = pbVar11 + (uint)bVar12 * -8 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pbVar11 = *pbVar3;
      pbVar3 = pbVar3 + (uint)bVar12 * -2 + 1;
      pbVar11 = pbVar11 + (uint)bVar12 * -2 + 1;
    }
  }
  else {
    crt_stdio_c_fread_FUN_005fd990
              (cache->texture_palette_ptrs[cache->current_texture_count],0x100,3,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\texture.cpp",0x117);
  }
  pacVar9 = cache->texture_names + cache->current_texture_count;
  pcVar8 = in_stack_00000024;
  do {
    cVar1 = *pcVar8;
    (*pacVar9)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    (*pacVar9)[1] = cVar1;
    pacVar9 = (char (*) [64])(*pacVar9 + 2);
  } while (cVar1 != '\0');
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
    pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       ((int)texture_name,"..\\engine\\texture.cpp",0x12a);
    cache->texture_data_ptrs[cache->current_texture_count] = pvVar5;
    if (cache->texture_data_ptrs[cache->current_texture_count] == (void *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 300;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
    }
  }
  pcVar10 = &stack0xffffff08;
  pcVar8 = in_stack_00000024;
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    pcVar7 = &stack0xffffff08;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
    pcVar7 = &stack0xffffff08;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar7;
    if (*pcVar7 == '.') goto LAB_005dceea;
    if (*pcVar7 == '\0') break;
    pcVar8 = pcVar7 + 1;
    if (*pcVar8 == '.') goto LAB_005dceea;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dceea:
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,".raw");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff0c,"rb");
  if (pFVar4 == (FILE *)0x0) {
    crt_memory_c_memset_FUN_005fde40
              (cache->texture_data_ptrs[cache->current_texture_count],0,unaff_EBP * unaff_EBP);
  }
  else {
    crt_stdio_c_fread_FUN_005fd990
              (cache->texture_data_ptrs[cache->current_texture_count],unaff_EBP,unaff_EBP,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\texture.cpp",0x13a);
  }
  pcVar8 = &stack0xffffff18;
  do {
    cVar1 = *in_stack_00000034;
    *pcVar8 = cVar1;
    pcVar10 = &stack0xffffff18;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000034[1];
    in_stack_00000034 = in_stack_00000034 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar10 = &stack0xffffff18;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar10;
    if (*pcVar10 == '.') goto LAB_005dcf75;
    if (*pcVar10 == '\0') break;
    pcVar8 = pcVar10 + 1;
    if (*pcVar8 == '.') goto LAB_005dcf75;
    pcVar10 = pcVar10 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dcf75:
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,".opa");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff1c,"rb");
  if (pFVar4 == (FILE *)0x0) {
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
      pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         ((int)in_stack_00000024,"..\\engine\\texture.cpp",0x148);
      cache->texture_opacity_ptrs[cache->current_texture_count] = pvVar5;
    }
    crt_stdio_c_fread_FUN_005fd990
              (cache->texture_opacity_ptrs[cache->current_texture_count],unaff_EBP,unaff_EBP,pFVar4)
    ;
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\texture.cpp",0x14b);
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
