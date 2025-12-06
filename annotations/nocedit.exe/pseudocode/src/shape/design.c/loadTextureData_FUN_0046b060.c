// Name: shape_design.c_loadTextureData_FUN_0046b060
// Address: 0046b060
// Address Range: [[0046b060, 0046b6d9]]
// Convention: __cdecl
// Signature: void shape_design.c_loadTextureData_FUN_0046b060(STextureLoadConfig * config_ptr, void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height)

#include "nocturne.h"

void __cdecl
shape_design_c_loadTextureData_FUN_0046b060
          (STextureLoadConfig *config_ptr,void *rgb_buffer,void *alpha_buffer,int atlas_width,
          int atlas_height)

{
  int iVar1;
  STextureLoadConfig *extraout_EDX;
  STextureLoadConfig *pSVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  double dVar4;
  int in_stack_00000018;
  double coord_x1;
  byte *in_stack_fffffeac;
  byte *in_stack_fffffeb0;
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
  FILE *local_1c;
  uint local_18;
  int local_14;
  
  if (g_TextureManagerMode == 0) {
    local_1c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (config_ptr->field0_0x0,(char *)0x0,"rb","..\\shape\\design.c"
                          ,0x27a2);
  }
  else {
    local_1c = engine_dosio_c_getFile_FUN_00481a50
                         ("art",config_ptr->field0_0x0,"rb");
  }
  if (local_1c == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27a4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to load input");
  }
  crt_stdio_c_fseek_FUN_005ffacc(local_1c,0x11,0);
  local_18 = crt_stdio_c_fgetc_FUN_005fe840(local_1c);
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
    crt_stdio_c_sprintf_FUN_005fdbd0(local_148,"Unable to read file (%s).");
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
  pSVar2 = config_ptr;
  if (iVar1 - local_44 == 0 || iVar1 < local_44) {
    crt_memory_c_memset_FUN_005fde40
              (local_24,0xff,config_ptr->source_width * config_ptr->source_height);
    pSVar2 = extraout_EDX;
  }
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_x2) / (float10)atlas_height +
          (float10)0.5;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pSVar2,config_ptr));
  local_38 = (int)ROUND(fVar3);
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_y2) /
          (float10)in_stack_00000018 + (float10)0.5;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),config_ptr));
  local_34 = (int)ROUND(fVar3);
  config_ptr->scaled_dest_x = local_38;
  config_ptr->scaled_dest_y = local_34;
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_x1) / (float10)atlas_height +
          (float10)0.5;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(config_ptr,config_ptr));
  local_30 = (int)ROUND(fVar3);
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_y1) /
          (float10)in_stack_00000018 + (float10)0.5;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),config_ptr));
  local_2c = (int)ROUND(fVar3);
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
      dVar4 = (double)config_ptr->source_height *
              ((double)config_ptr->atlas_y1 +
              ((double)(local_3c + 1) * (double)(config_ptr->atlas_y2 - config_ptr->atlas_y1)) /
              (double)local_34) * 5.9604644775390599e-08;
      coord_x1 = (double)CONCAT44 /* combine 2-byte values */(&stack0xfffffeac,&stack0xfffffe80);
      shape_design_c_sampleAndFilterPixel_FUN_0046ae20
                (local_28,local_24,config_ptr->source_width,config_ptr->source_height,coord_x1,
                 (double)CONCAT44 /* combine 2-byte values */(&stack0xfffffe7c,(int)((ulonglong)dVar4 >> 0x20)),
                 (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar4,0),
                                  SUB84 /* extract 2-byte value */((double)config_ptr->source_width *
                                        ((double)config_ptr->atlas_x1 +
                                        ((double)(local_40 + 1) *
                                        (double)(config_ptr->atlas_x2 - config_ptr->atlas_x1)) /
                                        (double)local_38) * 5.9604644775390599e-08,0)),dVar4,
                 (int)&stack0xfffffe7c,(int)&stack0xfffffe80,&stack0xfffffeac,&stack0xfffffe84,
                 in_stack_fffffeac,in_stack_fffffeb0);
      if (config_ptr->processing_mode == 0) {
        in_stack_fffffeb0 =
             (byte *)(g_TextureAtlasDimension * (local_2c + local_3c) + local_30 + local_40);
      }
      else {
        in_stack_fffffeb0 =
             (byte *)((local_2c + local_40) * g_TextureAtlasDimension +
                     local_30 + ((local_34 + -1) - local_3c));
      }
      iVar1 = (int)in_stack_fffffeb0 * 3;
      *(char *)((int)rgb_buffer + iVar1) = SUB81 /* extract 2-byte value */(coord_x1,0);
      *(char *)((int)rgb_buffer + iVar1 + 1) = (char)((ulonglong)coord_x1 >> 0x20);
      *(byte *)((int)rgb_buffer + iVar1 + 2) = (byte)in_stack_fffffeac;
      *(byte *)((int)alpha_buffer + (int)in_stack_fffffeb0) = (byte)((ulonglong)dVar4 >> 0x20);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_28,"..\\shape\\design.c",0x2818);
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_24,"..\\shape\\design.c",0x2819);
  return;
}
