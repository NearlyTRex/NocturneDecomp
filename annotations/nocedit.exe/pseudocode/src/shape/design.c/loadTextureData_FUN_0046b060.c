// Name: shape_design.c_loadTextureData_FUN_0046b060
// Address: 0046b060
// Address Range: [[0046b060, 0046b6d9]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_loadTextureData_FUN_0046b060(STextureAtlasEntry *entry,uchar *rgb_buffer,uchar *alpha_buffer,int pixel_depth,int atlas_total_width,int atlas_total_height)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_loadTextureData_FUN_0046b060(STextureAtlasEntry *entry,uchar *rgb_buffer,uchar *alpha_buffer,int pixel_depth,int atlas_total_width,int atlas_total_height)

{
  int iVar2;
  int iVar3;
  uint uVar4;
  void *ptr;
  void *dest;
  int iVar1;
  int iVar5;
  uchar local_184 [4];
  uchar local_180 [4];
  uchar local_17c [4];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  int local_158;
  uchar local_154 [4];
  int local_150;
  int local_14c;
  char local_148 [260];
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  _FILE *local_1c;
  uint local_18;
  int local_14;
  
  if (g_TextureManagerMode == 0) {
    local_1c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (entry->tga_filename,(char *)0x0,"rb","..\\shape\\design.c",
                          0x27a2);
  }
  else {
    local_1c = engine_dosio_c_getFile_FUN_00481a50("art",entry->tga_filename,"rb")
    ;
  }
  if (local_1c == (_FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27a4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to load input");
  }
  _fseek(local_1c,0x11,0);
  uVar4 = _fgetc(local_1c);
  ptr = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                  (entry->original_width * entry->original_height * 3,"..\\shape\\design.c",
                   0x27ad);
  dest = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                   (entry->original_width * entry->original_height,"..\\shape\\design.c",0x27ae)
  ;
  if ((ptr == (void *)0x0) || (dest == (void *)0x0)) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27af;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of mem!");
  }
  iVar5 = entry->original_width * 3;
  if ((uVar4 & 0x20) == 0) {
    local_3c = entry->original_height;
    while (local_3c = local_3c - 1, -1 < (int)local_3c) {
      shape_design_c_readPixelRowFromFile_FUN_0046abf0
                (local_1c,(uchar *)(local_3c * iVar5 + (int)ptr),
                 (uchar *)(local_3c * entry->original_width + (int)dest),entry->original_width,
                 pixel_depth);
    }
  }
  else {
    for (local_3c = 0; (int)local_3c < (int)entry->original_height; local_3c = local_3c + 1) {
      shape_design_c_readPixelRowFromFile_FUN_0046abf0
                (local_1c,(uchar *)(local_3c * iVar5 + (int)ptr),
                 (uchar *)(local_3c * entry->original_width + (int)dest),entry->original_width,
                 pixel_depth);
    }
  }
  if ((local_1c->_flag & 0x20) != 0) {
    _sprintf(local_148,"Unable to read file (%s).",entry);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x27c2);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27c3;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_148);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x27c5);
  for (local_44 = 0;
      (iVar1 = entry->original_width * entry->original_height,
      iVar1 - local_44 != 0 && local_44 <= iVar1 && (*(char *)((int)dest + local_44) == '\0'));
      local_44 = local_44 + 1) {
  }
  iVar5 = entry->original_width * entry->original_height;
  if (iVar5 - local_44 == 0 || iVar5 < local_44) {
    memset(dest,0xff,entry->original_width * entry->original_height);
  }
  iVar5 = (int)ROUND(ROUND(((double)g_TextureAtlasDimension * (double)entry->atlas_width) /
                           (double)atlas_total_width + 0.5));
  iVar2 = (int)ROUND(ROUND(((double)g_TextureAtlasDimension * (double)entry->atlas_height) /
                           (double)atlas_total_height + 0.5));
  entry->packed_width = iVar5;
  entry->packed_height = iVar2;
  local_30 = (int)ROUND(ROUND(((double)g_TextureAtlasDimension * (double)entry->atlas_x) /
                              (double)atlas_total_width + 0.5));
  local_2c = (int)ROUND(ROUND(((double)g_TextureAtlasDimension * (double)entry->atlas_y) /
                              (double)atlas_total_height + 0.5));
  if (g_TextureAtlasDimension + -1 < local_30) {
    local_30 = g_TextureAtlasDimension + -1;
  }
  if (g_TextureAtlasDimension + -1 < local_2c) {
    local_2c = g_TextureAtlasDimension + -1;
  }
  entry->packed_offset_x = local_30;
  entry->packed_offset_y = local_2c;
  for (local_3c = 0; (int)local_3c < iVar2; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < iVar5; local_40 = local_40 + 1) {
      shape_design_c_sampleAndFilterPixel_FUN_0046ae20
                (ptr,dest,entry->original_width,entry->original_height,
                 (double)(int)entry->original_width *
                 ((double)entry->min_u +
                 ((double)local_40 * (double)(entry->max_u - entry->min_u)) / (double)iVar5) *
                 5.9604644775390599e-08,
                 (double)(int)entry->original_height *
                 ((double)entry->min_v +
                 ((double)(int)local_3c * (double)(entry->max_v - entry->min_v)) / (double)iVar2) *
                 5.9604644775390599e-08,
                 (double)(int)entry->original_width *
                 ((double)entry->min_u +
                 ((double)(local_40 + 1) * (double)(entry->max_u - entry->min_u)) / (double)iVar5) *
                 5.9604644775390599e-08,
                 (double)(int)entry->original_height *
                 ((double)entry->min_v +
                 ((double)(int)(local_3c + 1) * (double)(entry->max_v - entry->min_v)) /
                 (double)iVar2) * 5.9604644775390599e-08,local_184,local_180,local_154,
                 local_17c);
      if (entry->rotation_flag == 0) {
        local_150 = g_TextureAtlasDimension * (local_2c + local_3c) + local_30 + local_40;
      }
      else {
        local_150 = (local_2c + local_40) * g_TextureAtlasDimension +
                    local_30 + ((iVar2 + -1) - local_3c);
      }
      iVar3 = local_150 * 3;
      rgb_buffer[iVar3] = local_184[0];
      rgb_buffer[iVar3 + 1] = local_180[0];
      rgb_buffer[iVar3 + 2] = local_154[0];
      alpha_buffer[local_150] = local_17c[0];
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\shape\\design.c",0x2818);
  shape_memdbg_cpp_debugFree_FUN_0050f460(dest,"..\\shape\\design.c",0x2819);
  return;
}
