// Name: shape_design.c_loadTextureData_FUN_0046b060
// Address: 0046b060
// Address Range: [[0046b060, 0046b6d9]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_loadTextureData_FUN_0046b060(STextureLoadConfig *config_ptr,void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height)

#include "nocturne.h"

void __cdecl shape_design_c_loadTextureData_FUN_0046b060(STextureLoadConfig *config_ptr,void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height)

{
  int iVar1;
  double dVar2;
  int in_stack_00000018;
  byte *blue_out;
  byte *alpha_out;
  byte local_184 [4];
  byte local_180 [4];
  byte local_17c [4];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  int local_158;
  byte local_154 [4];
  int local_150;
  int local_14c;
  char local_148 [260];
  int local_44;
  int local_40;
  int local_3c;
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
                         (config_ptr->unk1,(char *)0x0,"rb","..\\shape\\design.c",
                          0x27a2);
  }
  else {
    local_1c = engine_dosio_c_getFile_FUN_00481a50("art",config_ptr->unk1,"rb");
  }
  if (local_1c == (_FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27a4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to load input");
  }
  _fseek(local_1c,0x11,0);
  local_18 = _fgetc(local_1c);
  local_20 = config_ptr->source_width * config_ptr->source_height * 3;
  local_28 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(local_20,"..\\shape\\design.c",0x27ad);
  local_24 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (config_ptr->source_width * config_ptr->source_height,
                        "..\\shape\\design.c",0x27ae);
  if ((local_28 == (void *)0x0) || (local_24 == (void *)0x0)) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27af;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of mem!");
  }
  local_14 = config_ptr->source_width * 3;
  if ((local_18 & 0x20) == 0) {
    local_3c = config_ptr->source_height;
    while (local_3c = local_3c + -1, -1 < local_3c) {
      shape_design_c_readPixelRowFromFile_FUN_0046abf0
                (local_1c,(byte *)(local_3c * local_14 + (int)local_28),
                 (byte *)(local_3c * config_ptr->source_width + (int)local_24),
                 config_ptr->source_width,atlas_width);
    }
  }
  else {
    for (local_3c = 0; local_3c < config_ptr->source_height; local_3c = local_3c + 1) {
      shape_design_c_readPixelRowFromFile_FUN_0046abf0
                (local_1c,(byte *)(local_3c * local_14 + (int)local_28),
                 (byte *)(local_3c * config_ptr->source_width + (int)local_24),
                 config_ptr->source_width,atlas_width);
    }
  }
  if ((local_1c->_flag & 0x20) != 0) {
    _sprintf(local_148,"Unable to read file (%s).",config_ptr);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x27c2);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27c3;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_148);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x27c5);
  for (local_44 = 0;
      (iVar1 = config_ptr->source_width * config_ptr->source_height,
      iVar1 - local_44 != 0 && local_44 <= iVar1 && (*(char *)((int)local_24 + local_44) == '\0'));
      local_44 = local_44 + 1) {
  }
  iVar1 = config_ptr->source_width * config_ptr->source_height;
  if (iVar1 - local_44 == 0 || iVar1 < local_44) {
    memset
              (local_24,0xff,config_ptr->source_width * config_ptr->source_height);
  }
  dVar2 = round
                    (((double)g_TextureAtlasDimension * (double)config_ptr->src_x2) /
                     (double)atlas_height + 0.5);
  local_38 = (int)ROUND(dVar2);
  dVar2 = round
                    (((double)g_TextureAtlasDimension * (double)config_ptr->src_y2) /
                     (double)in_stack_00000018 + 0.5);
  local_34 = (int)ROUND(dVar2);
  config_ptr->scaled_dest_x = local_38;
  config_ptr->scaled_dest_y = local_34;
  alpha_out = (byte *)0x46b3a9;
  dVar2 = round
                    (((double)g_TextureAtlasDimension * (double)config_ptr->src_x1) /
                     (double)atlas_height + 0.5);
  local_30 = (int)ROUND(dVar2);
  blue_out = (byte *)0x46b3cd;
  dVar2 = round
                    (((double)g_TextureAtlasDimension * (double)config_ptr->src_y1) /
                     (double)in_stack_00000018 + 0.5);
  local_2c = (int)ROUND(dVar2);
  if (g_TextureAtlasDimension + -1 < local_30) {
    local_30 = g_TextureAtlasDimension + -1;
  }
  if (g_TextureAtlasDimension + -1 < local_2c) {
    local_2c = g_TextureAtlasDimension + -1;
  }
  config_ptr->dest_x = local_30;
  config_ptr->dest_y = local_2c;
  for (local_3c = 0; local_3c < local_34; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < local_38; local_40 = local_40 + 1) {
      local_160 = (double)config_ptr->source_width *
                  ((double)config_ptr->atlas_x1 +
                  ((double)local_40 * (double)(config_ptr->atlas_x2 - config_ptr->atlas_x1)) /
                  (double)local_38) * 5.9604644775390599e-08;
      local_168 = (double)config_ptr->source_height *
                  ((double)config_ptr->atlas_y1 +
                  ((double)local_3c * (double)(config_ptr->atlas_y2 - config_ptr->atlas_y1)) /
                  (double)local_34) * 5.9604644775390599e-08;
      local_170 = (double)config_ptr->source_width *
                  ((double)config_ptr->atlas_x1 +
                  ((double)(local_40 + 1) * (double)(config_ptr->atlas_x2 - config_ptr->atlas_x1)) /
                  (double)local_38) * 5.9604644775390599e-08;
      local_158 = local_3c + 1;
      local_178 = (double)config_ptr->source_height *
                  ((double)config_ptr->atlas_y1 +
                  ((double)local_158 * (double)(config_ptr->atlas_y2 - config_ptr->atlas_y1)) /
                  (double)local_34) * 5.9604644775390599e-08;
      shape_design_c_sampleAndFilterPixel_FUN_0046ae20
                (local_28,local_24,config_ptr->source_width,config_ptr->source_height,local_160,
                 local_168,local_170,local_178,(int)local_184,(int)local_180,local_154,local_17c,
                 blue_out,alpha_out);
      if (config_ptr->processing_mode == 0) {
        local_150 = g_TextureAtlasDimension * (local_2c + local_3c) + local_30 + local_40;
      }
      else {
        local_150 = (local_2c + local_40) * g_TextureAtlasDimension +
                    local_30 + ((local_34 + -1) - local_3c);
      }
      local_14c = local_150 * 3;
      *(byte *)((int)rgb_buffer + local_14c) = local_184[0];
      *(byte *)((int)rgb_buffer + local_14c + 1) = local_180[0];
      *(byte *)((int)rgb_buffer + local_14c + 2) = local_154[0];
      *(byte *)((int)alpha_buffer + local_150) = local_17c[0];
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_28,"..\\shape\\design.c",0x2818);
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_24,"..\\shape\\design.c",0x2819);
  return;
}
