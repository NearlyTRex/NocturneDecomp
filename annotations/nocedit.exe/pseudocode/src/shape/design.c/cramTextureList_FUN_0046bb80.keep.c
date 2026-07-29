// Name: shape_design.c_cramTextureList_FUN_0046bb80
// Address: 0046bb80
// MANUAL RECONSTRUCTION
// Address Range: [[0046bb80, 0046dfb1] [0060c502, 0060c51b]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_cramTextureList_FUN_0046bb80(SCram *cram)

#include "nocturne.h"

int __cdecl shape_design_c_cramTextureList_FUN_0046bb80(SCram *cram)

{
  SIZE_T SVar3;
  SIZE_T SVar4;
  int iVar4;
  int iVar6;
  uint uVar7;
  int iVar5;
  int iVar8;
  _FILE *p_Var9;
  char *pcVar13;
  char local_b58 [260];
  int local_a48;
  int local_a44;
  int local_a40;
  int local_a3c;
  int local_a38;
  int local_a28;
  char local_a24 [80];
  char local_9d0 [80];
  char local_97c [300];
  _FILE *local_850;
  byte local_84c [4];
  uint auStack_848 [250];
  char local_460 [260];
  char local_35c [260];
  char local_258 [260];
  char local_154 [200];
  char local_8c [12];
  int local_78;
  uint local_74;
  int local_70;
  char *local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uchar *local_2c;
  uchar *local_28;
  uchar *local_24;
  uchar *local_20;
  int local_1c;
  int local_18;
  int local_14;
  bool bVar2;

  local_2c = (uchar *)0x0;
  local_28 = (uchar *)0x0;
  local_24 = (uchar *)0x0;
  local_20 = (uchar *)0x0;
  if (g_TextureProcessedCount < 1) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 10477;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't cramTextureList because empty cram list!");
  }
  for (local_5c = 0; local_5c < g_TextureProcessedCount; local_5c = local_5c + 1) {
    if (g_TextureManagerMode == 0) {
      local_850 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            (g_TextureAtlasEntries[local_5c].tga_filename,(char *)0x0,"rb",
                             "..\\shape\\design.c",10488);
    }
    else {
      local_850 = engine_dosio_cpp_getFile_FUN_00481a50
                            ("art",g_TextureAtlasEntries[local_5c].tga_filename,
                             "rb");
    }
    if (local_850 == (_FILE *)0x0) {
      _sprintf(local_97c,"Can't open %s",g_TextureAtlasEntries[local_5c].tga_filename);
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 10493;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_97c);
    }
    _fseek(local_850,0xc,0);
    local_74 = 0;
    local_60 = 0;
    SVar3 = _fread(&local_74,2,1,local_850);
    if (SVar3 != 1) {
      _sprintf(local_154,"Unable to read file (%s).",g_TextureAtlasEntries[local_5c].tga_filename);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",10501);
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 10502;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    SVar4 = _fread(&local_60,2,1,local_850);
    if (SVar4 != 1) {
      _sprintf(local_154,"Unable to read file (%s).",g_TextureAtlasEntries[local_5c].tga_filename);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",10506);
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 10507;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    SVar4 = _fread(local_84c,1,1,local_850);
    if (SVar4 != 1) {
      _sprintf(local_154,"Unable to read file (%s).",g_TextureAtlasEntries[local_5c].tga_filename);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",10514);
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 10515;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    auStack_848[local_5c] = (uint)local_84c[0];
    if ((local_84c[0] != 0x18) && (local_84c[0] != 0x20)) {
      _sprintf(local_154,"ERROR: Not a 24- or 32-bit targa file: %s.",g_TextureAtlasEntries[local_5c].tga_filename);
      if (cram == (SCram *)0x0) {
        engine_special_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",10527);
        shape_design_c_clearAllTextureNames_FUN_0046e6b0();
        return 0;
      }
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 10521;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",10533);
    g_TextureAtlasEntries[local_5c].original_width = local_74;
    g_TextureAtlasEntries[local_5c].original_height = local_60;
    g_TextureAtlasEntries[local_5c].min_u = g_TextureAtlasEntries[local_5c].min_u & 0xffff0000;
    g_TextureAtlasEntries[local_5c].min_v = g_TextureAtlasEntries[local_5c].min_v & 0xffff0000;
    g_TextureAtlasEntries[local_5c].max_u =
         g_TextureAtlasEntries[local_5c].max_u + 0xffffU & 0xffff0000;
    g_TextureAtlasEntries[local_5c].max_v =
         g_TextureAtlasEntries[local_5c].max_v + 0xffffU & 0xffff0000;
    if (g_TextureAtlasEntries[local_5c].max_u <= g_TextureAtlasEntries[local_5c].min_u) {
      g_TextureAtlasEntries[local_5c].max_u = g_TextureAtlasEntries[local_5c].min_u + 0x10000;
    }
    if (g_TextureAtlasEntries[local_5c].max_v <= g_TextureAtlasEntries[local_5c].min_v) {
      g_TextureAtlasEntries[local_5c].max_v = g_TextureAtlasEntries[local_5c].min_v + 0x10000;
    }
    g_TextureAtlasEntries[local_5c].processed_width =
         (int)ROUND(ROUND((double)(int)g_TextureAtlasEntries[local_5c].original_width *
                          (double)(g_TextureAtlasEntries[local_5c].max_u -
                                  g_TextureAtlasEntries[local_5c].min_u) *
                          5.9604644775390599e-08));
    g_TextureAtlasEntries[local_5c].processed_height =
         (int)ROUND(ROUND((double)(int)g_TextureAtlasEntries[local_5c].original_height *
                          (double)(g_TextureAtlasEntries[local_5c].max_v -
                                  g_TextureAtlasEntries[local_5c].min_v) *
                          5.9604644775390599e-08));
    if (g_TextureAtlasEntries[local_5c].processed_width < 1) {
      g_TextureAtlasEntries[local_5c].processed_width = 1;
    }
    if (g_TextureAtlasEntries[local_5c].processed_height < 1) {
      g_TextureAtlasEntries[local_5c].processed_height = 1;
    }
    g_TextureAtlasEntries[local_5c].quality_level = 0;
    g_TextureAtlasEntries[local_5c].total_pixel_count = local_74 * local_60;
    g_TextureAtlasEntries[local_5c].rotation_flag = 0;
  }
  if (cram == (SCram *)0x0) {
    engine_special_cpp_clearScreen_FUN_005b3e70();
    local_5c = 0;
    do {
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (local_154,0x4f,0,local_5c * 0xb,"Enter number of maps [1] : ");
      local_58 = 1;
      if (strlen(local_154) != 0) {
        local_58 = atoi(local_154);
      }
      if (9 < local_58) {
        engine_2d_c_drawText_FUN_00401fd0
                  ("Naming convention not established!!  Go get Allen...",0,(local_5c + 2) * 0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        shape_design_c_clearAllTextureNames_FUN_0046e6b0();
        return 0;
      }
      if (0 < local_58) goto LAB_0046c2ae;
      engine_2d_c_drawText_FUN_00401fd0("Number of maps must be a positive number.",0,(local_5c + 2) * 0xb);
      engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,(local_5c + 4) * 0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_special_cpp_clearScreen_FUN_005b3e70();
    } while( true );
  }
  g_TextureAtlasDimension = cram->atlas_dimension;
  local_68 = cram->atlas_dimension;
  local_64 = cram->padding_size;
  local_1c = cram->coverage_threshold;
  local_18 = cram->min_atlas_size;
  local_58 = cram->num_maps;
  local_54 = cram->fill_gaps;
  local_50 = cram->enable_visualization;
  local_4c = cram->paint_borders;
  local_48 = cram->max_iterations;
  goto LAB_0046c5b7;
LAB_0046c2ae:
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_154,0x14,0,local_5c * 0xb,"Enter padding size [5] : ");
  local_64 = 5;
  if (strlen(local_154) != 0) {
    local_64 = atoi(local_154);
  }
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_154,0x14,0,local_5c * 0xb,"Fill gaps? [y] : ");
  if ((local_154[0] == '\0') ||
     (iVar6 = toupper((uint)(byte)local_154[0]), iVar6 == 0x59)) {
    local_54 = 1;
  }
  else {
    local_54 = 0;
  }
  do {
    local_5c = local_5c + 2;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (local_154,0x4f,0,local_5c * 0xb,"Enter output texture map width [256] : ");
    g_TextureAtlasDimension = 0x100;
    if (strlen(local_154) != 0) {
      g_TextureAtlasDimension = atoi(local_154);
    }
    if ((((g_TextureAtlasDimension == 0x200) || (g_TextureAtlasDimension == 0x100)) ||
        (g_TextureAtlasDimension == 0x80)) ||
       ((g_TextureAtlasDimension == 0x40 || (g_TextureAtlasDimension == 0x20)))) break;
    engine_2d_c_drawText_FUN_00401fd0("Texture map width must be 512, 256, 128, 64, or 32.",0,(local_5c + 2) * 0xb);
    engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,(local_5c + 4) * 0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_special_cpp_clearScreen_FUN_005b3e70();
  } while( true );
LAB_0046c428:
  _sprintf(local_9d0,"Enter passed texture map width [%d] : ",g_TextureAtlasDimension);
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_154,0x4f,0,local_5c * 0xb,local_9d0);
  local_68 = g_TextureAtlasDimension;
  if (strlen(local_154) != 0) {
    local_68 = atoi(local_154);
  }
  if (((local_68 == 0x200) || (local_68 == 0x100)) ||
     ((local_68 == 0x80 || ((local_68 == 0x40 || (local_68 == 0x20)))))) goto LAB_0046c50b;
  engine_2d_c_drawText_FUN_00401fd0("Passed texture map width must be 512, 256, 128, 64, or 32.",0,(local_5c + 2) * 0xb);
  engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,(local_5c + 4) * 0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_special_cpp_clearScreen_FUN_005b3e70();
  goto LAB_0046c428;
LAB_0046cea5:
  if (strlen(local_258) == 0) {
    strcpy(local_258,g_LoadedModelName);
  }
  goto LAB_0046cede;
LAB_0046c50b:
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_154,0x14,0,local_5c * 0xb,"Enter acceptable coverage [99] : ");
  local_1c = 99;
  if (strlen(local_154) != 0) {
    local_1c = atoi(local_154);
  }
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_154,0x14,0,local_5c * 0xb,"Enter acceptable size [1] : ");
  local_18 = 1;
  if (strlen(local_154) != 0) {
    local_18 = atoi(local_154);
  }
  local_50 = 1;
  local_48 = 0;
LAB_0046c5b7:
  if (local_58 < 10) {
    if (local_58 < 1) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_154,"Number of maps must be a positive number (%d < 0).",local_58);
      engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      shape_design_c_clearAllTextureNames_FUN_0046e6b0();
      local_78 = 0;
    }
    else {
      strcpy(local_8c,"CramTex II");
      engine_special_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_154,"%s in progress...",local_8c);
      engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_3c = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90
                (g_TextureProcessedCount,g_TextureAtlasEntries,local_68,local_64,local_1c,local_18,
                 (int *)&local_74,(int *)&local_60,local_58,local_54,local_50,local_48);
      local_38 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      local_34 = 0;
      while (local_34 < local_58) {
        bVar2 = false;
        for (local_70 = 0; local_70 < g_TextureProcessedCount; local_70 = local_70 + 1) {
          if (local_34 == g_TextureAtlasEntries[local_70].atlas_map_index) {
            bVar2 = true;
            break;
          }
        }
        if (bVar2) {
          local_34 = local_34 + 1;
        }
        else {
          for (local_70 = 0; local_70 < g_TextureProcessedCount; local_70 = local_70 + 1) {
            if (local_34 < g_TextureAtlasEntries[local_70].atlas_map_index) {
              g_TextureAtlasEntries[local_70].atlas_map_index =
                   g_TextureAtlasEntries[local_70].atlas_map_index + -1;
            }
          }
          local_58 = local_58 + -1;
        }
      }
      if ((int)local_74 < g_TextureAtlasDimension) {
        local_74 = g_TextureAtlasDimension;
      }
      if ((int)local_60 < g_TextureAtlasDimension) {
        local_60 = g_TextureAtlasDimension;
      }
      if (cram == (SCram *)0x0) {
        local_70 = 0;
        local_5c = 0;
        while( true ) {
          engine_special_cpp_clearScreen_FUN_005b3e70();
          _sprintf(local_154,"%s done.  (%ld seconds)",local_8c,(long)((local_38 - local_3c) / 0x120000));
          engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
          engine_2d_c_drawText_FUN_00401fd0("Minimum area",0,0x16);
          for (local_34 = 1; local_34 <= local_58; local_34 = local_34 + 1) {
            _sprintf(local_154,"  map %d : %d x %d",local_34,local_74,local_60);
            engine_2d_c_drawText_FUN_00401fd0(local_154,0,(local_34 + 2) * 0xb);
          }
          if (local_70 == 0) {
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (local_a24,0x14,0,(local_34 + 4) * 0xb,"Display texture information? [n] : ");
            local_70 = 1;
          }
          iVar4 = toupper((uint)(byte)local_a24[0]);
          if (iVar4 != 0x59) break;
          engine_2d_c_drawText_FUN_00401fd0("Texture sizes:                                         ",0,(local_34 + 4) * 0xb);
          local_40 = 0;
          while( true ) {
            if (g_TextureProcessedCount <= local_5c) {
              engine_2d_c_drawText_FUN_00401fd0
                        ("Hit a key to continue...",0,(local_34 + local_40 + 7) * 0xb);
              wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
              wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
              goto LAB_0046ca24;
            }
            _sprintf
                      (local_154,"  %02d : %04d x %04d    xp: %04d  yp: %04d  r: %d  map: %d    %s",local_5c,
                       g_TextureAtlasEntries[local_5c].atlas_width,
                       g_TextureAtlasEntries[local_5c].atlas_height,
                       g_TextureAtlasEntries[local_5c].atlas_x,
                       g_TextureAtlasEntries[local_5c].atlas_y,
                       g_TextureAtlasEntries[local_5c].rotation_flag,
                       g_TextureAtlasEntries[local_5c].atlas_map_index + 1,
                       g_TextureAtlasEntries[local_5c].tga_filename);
            engine_2d_c_drawText_FUN_00401fd0(local_154,0,(local_34 + local_40 + 6) * 0xb);
            if ((local_40 + 1) % 0x14 == 0) break;
            local_5c = local_5c + 1;
            local_40 = local_40 + 1;
          }
          engine_2d_c_drawText_FUN_00401fd0
                    ("Hit a key to continue...",0,(local_34 + local_40 + 8) * 0xb);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          local_5c = local_5c + 1;
        }
LAB_0046ca24:
        engine_special_cpp_clearScreen_FUN_005b3e70();
        _sprintf(local_154,"%s done.  (%ld seconds)",local_8c,(long)((local_38 - local_3c) / 0x120000));
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
        local_5c = 2;
        engine_2d_c_drawText_FUN_00401fd0("Minimum area",0,0x16);
        for (local_34 = 1; local_34 <= local_58; local_34 = local_34 + 1) {
          _sprintf(local_154,"  map %d : %d x %d",local_34,local_74,local_60);
          local_5c = local_5c + 1;
          engine_2d_c_drawText_FUN_00401fd0(local_154,0,local_5c * 0xb);
        }
        local_5c = local_5c + 2;
        engine_2d_c_drawText_FUN_00401fd0("Unused area (including padding)",0,local_5c * 0xb);
        for (local_34 = 1; local_34 <= local_58; local_34 = local_34 + 1) {
          local_a28 = 0;
          for (local_70 = 0; local_70 < g_TextureProcessedCount; local_70 = local_70 + 1) {
            if (g_TextureAtlasEntries[local_70].atlas_map_index + 1 == local_34) {
              local_a28 = local_a28 +
                          g_TextureAtlasEntries[local_70].atlas_width *
                          g_TextureAtlasEntries[local_70].atlas_height;
            }
          }
          _sprintf
                    (local_154,"  map %d : %4.1lf%%",local_34,
                     100 -
                     ((double)local_a28 / (double)(int)(local_74 * local_60)) * 100);
          local_5c = local_5c + 1;
          engine_2d_c_drawText_FUN_00401fd0(local_154,0,local_5c * 0xb);
        }
        if (local_58 == 1) {
          strcpy(local_a24,"Is this map acceptable? [y] : ");
        }
        else {
          strcpy(local_a24,"Are these maps acceptable? [y] : ");
        }
        iVar6 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                          (local_154,0x14,0,(local_5c + 3) * 0xb,local_a24);
        if (iVar6 == 0x1b) {
          shape_design_c_clearAllTextureNames_FUN_0046e6b0();
          return 0;
        }
        if ((local_154[0] != '\0') &&
           (iVar6 = toupper((uint)(byte)local_154[0]), iVar6 != 0x59)) {
          _sprintf(local_a24,"Map%s not created.  Hit a key...",local_58 > 1 ? "s" : "");
          engine_2d_c_drawText_FUN_00401fd0(local_a24,0,(local_5c + 5) * 0xb);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          shape_design_c_clearAllTextureNames_FUN_0046e6b0();
          return 0;
        }
        _sprintf(local_a24,"Map%s created.  Hit a key...",local_58 > 1 ? "s" : "");
        engine_2d_c_drawText_FUN_00401fd0(local_a24,0,(local_5c + 5) * 0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      if (cram == (SCram *)0x0) {
        do {
          engine_special_cpp_clearScreen_FUN_005b3e70();
          strcpy(local_258,g_LoadedModelName);
          local_6c = strchr(local_258,'.');
          if (local_6c != (char *)0x0) {
            *local_6c = '\0';
          }
          _sprintf(local_154,"Enter output .RAW name [%s] : ",local_258);
          iVar6 = engine_2d_c_getInputWithPrompt_FUN_004032c0(local_258,0x4f,0,0,local_154);
          if (iVar6 == 0x1b) {
            shape_design_c_clearAllTextureNames_FUN_0046e6b0();
            return 0;
          }
          local_6c = strchr(local_258,'.');
          if (local_6c != (char *)0x0) {
            *local_6c = '\0';
          }
          if (local_58 == 1) goto LAB_0046cea5;
          if (strlen(local_258) < 8) goto LAB_0046cea5;
          engine_2d_c_drawText_FUN_00401fd0("File name must be no more than 7 characters.",0,0x16);
          engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        } while( true );
      }
      strcpy(local_258,cram->filename);
LAB_0046cede:
      strcpy(g_CurrentModelFilename,local_258);
      strupr(g_CurrentModelFilename);
      local_6c = strchr(g_CurrentModelFilename,'.');
      if (local_6c != (char *)0x0) {
        *local_6c = '\0';
      }
      if (cram == (SCram *)0x0) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_154,0x14,0,0x16,"Paint around borders? [y] : ");
        if ((local_154[0] == '\0') ||
           (iVar6 = toupper((uint)(byte)local_154[0]), iVar6 == 0x59)) {
          local_4c = 1;
        }
        else {
          local_4c = 0;
        }
      }
      local_14 = 0;
      memset(g_TextureNameArray,0,0x2d0);
      for (local_30 = 0; local_30 < local_58; local_30 = local_30 + 1) {
        local_14 = local_14 + 1;
        strcpy(local_258,g_CurrentModelFilename);
        uVar7 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_58);
        if (local_58 == 1) {
          if (uVar7 < strlen(g_CurrentModelFilename)) {
            strcpy(local_258 + uVar7,".RAW");
          }
          else {
            strcat(local_258,".RAW");
          }
        }
        else {
          if (uVar7 - 1 < strlen(g_CurrentModelFilename)) {
            if (uVar7 < strlen(g_CurrentModelFilename)) {
              _sprintf(local_258 + uVar7,"%X.RAW",local_14);
            }
            else {
              _sprintf(local_258,"%s%X.RAW",g_CurrentModelFilename,local_14)
              ;
            }
          }
          else {
            _sprintf(local_258,"%s_%X.RAW",g_CurrentModelFilename,local_14);
          }
        }
        strcpy(g_TextureNameArray[local_30],local_258);
        local_2c = (uchar *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                             (g_TextureAtlasDimension * g_TextureAtlasDimension * 3,1,
                              "..\\shape\\design.c",10989);
        local_28 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (g_TextureAtlasDimension * g_TextureAtlasDimension,
                              "..\\shape\\design.c",10990);
        if ((local_2c == (uchar *)0x0) || (local_28 == (uchar *)0x0)) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 10991;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get bitmap!");
        }
        memset
                  (local_28,0xff,g_TextureAtlasDimension * g_TextureAtlasDimension);
        if (cram == (SCram *)0x0) {
          sleep(1000);
        }
        engine_special_cpp_clearScreen_FUN_005b3e70();
        _sprintf(local_154,"Map %d of %d  ",local_14,local_48);
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
        _sprintf(local_154,"Sampling down %s...                  ",local_258);
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x16);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        for (local_5c = 0; local_5c < g_TextureProcessedCount; local_5c = local_5c + 1) {
          if (g_TextureAtlasEntries[local_5c].atlas_map_index == local_30) {
            shape_design_c_loadTextureData_FUN_0046b060
                      (g_TextureAtlasEntries + local_5c,local_2c,local_28,auStack_848[local_5c],
                       local_74,local_60);
          }
        }
        iVar6 = shape_quantize_cpp_quantizeRawPixelData_FUN_00556490
                          (local_2c,&local_24,&local_20,g_TextureAtlasDimension,
                           g_TextureAtlasDimension,0x18,2,1);
        if (iVar6 == 0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 11035;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Bitmap color quantization failed!");
        }
        if ((local_4c != 0) && (0 < local_64)) {
          for (local_5c = 0; local_5c < g_TextureProcessedCount; local_5c = local_5c + 1) {
            if (g_TextureAtlasEntries[local_5c].atlas_map_index == local_30) {
              if (g_TextureAtlasEntries[local_5c].rotation_flag == 0) {
                local_a38 = g_TextureAtlasEntries[local_5c].packed_width;
                local_a3c = g_TextureAtlasEntries[local_5c].packed_height;
              }
              else {
                local_a38 = g_TextureAtlasEntries[local_5c].packed_height;
                local_a3c = g_TextureAtlasEntries[local_5c].packed_width;
              }
              local_a40 = g_TextureAtlasEntries[local_5c].packed_offset_x;
              local_a44 = g_TextureAtlasEntries[local_5c].packed_offset_y;
              for (local_a48 = local_64 / 2; 0 < local_a48; local_a48 = local_a48 + -1) {
                iVar6 = local_a44 + -1;
                for (local_44 = 0; local_44 < local_a38; local_44 = local_44 + 1) {
                  iVar5 = local_a40 + local_44;
                  if ((((-1 < iVar5) && (iVar5 <= g_TextureAtlasDimension + -1)) && (-1 < iVar6)) &&
                     (iVar6 <= g_TextureAtlasDimension + -1)) {
                    local_24[iVar6 * g_TextureAtlasDimension + iVar5] =
                         local_24[local_a44 * g_TextureAtlasDimension + iVar5];
                    local_28[iVar6 * g_TextureAtlasDimension + iVar5] =
                         local_28[local_a44 * g_TextureAtlasDimension + iVar5];
                  }
                }
                iVar6 = local_a44 + local_a3c;
                for (local_44 = 0; local_44 < local_a38; local_44 = local_44 + 1) {
                  iVar8 = local_a40 + local_44;
                  if (((-1 < iVar8) && (iVar8 <= g_TextureAtlasDimension + -1)) &&
                     ((-1 < iVar6 && (iVar6 <= g_TextureAtlasDimension + -1)))) {
                    local_24[iVar6 * g_TextureAtlasDimension + iVar8] =
                         local_24[(iVar6 + -1) * g_TextureAtlasDimension + iVar8];
                    local_28[iVar6 * g_TextureAtlasDimension + iVar8] =
                         local_28[(iVar6 + -1) * g_TextureAtlasDimension + iVar8];
                  }
                }
                iVar6 = local_a40 + -1;
                for (local_40 = 0; local_40 < local_a3c; local_40 = local_40 + 1) {
                  iVar8 = local_a44 + local_40;
                  if (((-1 < iVar6) && (iVar6 <= g_TextureAtlasDimension + -1)) &&
                     ((-1 < iVar8 && (iVar8 <= g_TextureAtlasDimension + -1)))) {
                    local_24[iVar8 * g_TextureAtlasDimension + iVar6] =
                         local_24[iVar8 * g_TextureAtlasDimension + iVar6 + 1];
                    local_28[iVar8 * g_TextureAtlasDimension + iVar6] =
                         local_28[iVar8 * g_TextureAtlasDimension + iVar6 + 1];
                  }
                }
                iVar6 = local_a40 + local_a38;
                for (local_40 = 0; local_40 < local_a3c; local_40 = local_40 + 1) {
                  iVar8 = local_a44 + local_40;
                  if ((((-1 < iVar6) && (iVar6 <= g_TextureAtlasDimension + -1)) && (-1 < iVar8)) &&
                     (iVar8 <= g_TextureAtlasDimension + -1)) {
                    local_24[iVar8 * g_TextureAtlasDimension + iVar6] =
                         local_24[iVar8 * g_TextureAtlasDimension + iVar6 + -1];
                    local_28[iVar8 * g_TextureAtlasDimension + iVar6] =
                         local_28[iVar8 * g_TextureAtlasDimension + iVar6 + -1];
                  }
                }
                iVar6 = local_a40 + -1;
                iVar8 = local_a44 + -1;
                if (((-1 < iVar6) && (iVar6 <= g_TextureAtlasDimension + -1)) &&
                   ((-1 < iVar8 && (iVar8 <= g_TextureAtlasDimension + -1)))) {
                  local_24[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_24[local_a44 * g_TextureAtlasDimension + iVar6 + 1];
                  local_28[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_28[local_a44 * g_TextureAtlasDimension + iVar6 + 1];
                }
                iVar6 = local_a40 + local_a38;
                iVar8 = local_a44 + -1;
                if (((-1 < iVar6) && (iVar6 <= g_TextureAtlasDimension + -1)) &&
                   ((-1 < iVar8 && (iVar8 <= g_TextureAtlasDimension + -1)))) {
                  local_24[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_24[local_a44 * g_TextureAtlasDimension + iVar6 + -1];
                  local_28[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_28[local_a44 * g_TextureAtlasDimension + iVar6 + -1];
                }
                iVar6 = local_a40 + local_a38;
                iVar8 = local_a44 + local_a3c;
                if ((((-1 < iVar6) && (iVar6 <= g_TextureAtlasDimension + -1)) && (-1 < iVar8)) &&
                   (iVar8 <= g_TextureAtlasDimension + -1)) {
                  local_24[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_24[(iVar8 + -1) * g_TextureAtlasDimension + iVar6 + -1];
                  local_28[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_28[(iVar8 + -1) * g_TextureAtlasDimension + iVar6 + -1];
                }
                iVar6 = local_a40 + -1;
                iVar8 = local_a44 + local_a3c;
                if (((-1 < iVar6) && (iVar6 <= g_TextureAtlasDimension + -1)) &&
                   ((-1 < iVar8 && (iVar8 <= g_TextureAtlasDimension + -1)))) {
                  local_24[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_24[(iVar8 + -1) * g_TextureAtlasDimension + iVar6 + 1];
                  local_28[iVar8 * g_TextureAtlasDimension + iVar6] =
                       local_28[(iVar8 + -1) * g_TextureAtlasDimension + iVar6 + 1];
                }
                local_a38 = local_a38 + 2;
                local_a3c = local_a3c + 2;
                local_a40 = local_a40 + -1;
                local_a44 = local_a44 + -1;
              }
            }
          }
        }
        shape_design_c_embedCopyrightWatermark_FUN_0046b9a0
                  (local_24,(char *)local_20,g_TextureAtlasDimension);
        p_Var9 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_258,"wb");
        if (p_Var9 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 11134;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open output for 8-bit .RAW file!");
        }
        _fwrite(local_24,g_TextureAtlasDimension,g_TextureAtlasDimension,p_Var9);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var9,"..\\shape\\design.c",11136);
        _sprintf(local_154,"Saved %s                    ",local_258);
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x4d);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        strcpy(local_460,local_258);
        pcVar13 = strchr(local_460,'.');
        if (pcVar13 != (char *)0x0) {
          strcpy(pcVar13,".ACT");
        }
        local_6c = pcVar13;
        p_Var9 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_460,"wb");
        if (p_Var9 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 11148;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open output for .ACT file!");
        }
        for (local_5c = 0; local_5c < 0x100; local_5c = local_5c + 1) {
          _fputc((uint)local_20[local_5c * 3 + 2],p_Var9);
          _fputc((uint)local_20[local_5c * 3 + 1],p_Var9);
          _fputc((uint)local_20[local_5c * 3],p_Var9);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var9,"..\\shape\\design.c",11154);
        _sprintf(local_154,"Saved %s                    ",local_460);
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x58);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        strcpy(local_35c,local_258);
        pcVar13 = strchr(local_35c,'.');
        if (pcVar13 != (char *)0x0) {
          strcpy(pcVar13,".OPA");
        }
        local_6c = pcVar13;
        iVar6 = shape_design_c_checkNonFFBytes_FUN_0046ac70
                          ((char *)local_28,g_TextureAtlasDimension * g_TextureAtlasDimension);
        if (iVar6 == 0) {
          _sprintf(local_b58,"art\\%s",local_35c);
          remove(local_b58);
          _sprintf(local_154,"All pixels completely opaque, no .OPA file generated.");
        }
        else {
          p_Var9 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_35c,"wb");
          if (p_Var9 == (_FILE *)0x0) {
            g_CurrentFilename = "..\\shape\\design.c";
            g_CurrentLineNumber = 11170;
            core_main_c_displayErrorAndQuit_FUN_00506f10("unable to create .OPA file.");
          }
          _fwrite(local_28,g_TextureAtlasDimension,g_TextureAtlasDimension,p_Var9);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var9,"..\\shape\\design.c",11172);
          _sprintf(local_154,"Saved %s                    ",local_35c);
        }
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,99);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        p_Var9 = engine_dosio_cpp_getFile_FUN_00481a50
                           ("art","tmp24.raw","wb");
        if (p_Var9 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 11193;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open output for 24-bit .RAW file!");
        }
        _fwrite(local_2c,g_TextureAtlasDimension * 3,g_TextureAtlasDimension,p_Var9);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var9,"..\\shape\\design.c",11195);
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_20,"..\\shape\\design.c",11199);
        local_20 = (uchar *)0x0;
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_24,"..\\shape\\design.c",11201);
        local_24 = (uchar *)0x0;
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_2c,"..\\shape\\design.c",11203);
        local_2c = (uchar *)0x0;
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_28,"..\\shape\\design.c",11205);
        local_28 = (uchar *)0x0;
      }
      g_LastTextureProcessIndex = local_14;
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      local_78 = 1;
    }
  }
  else {
    engine_special_cpp_clearScreen_FUN_005b3e70();
    _sprintf(local_154,"Too many maps (%d > %d).",local_58,9);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
    engine_2d_c_drawText_FUN_00401fd0("Naming convention not established!!  Go get Allen...",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    shape_design_c_clearAllTextureNames_FUN_0046e6b0();
    local_78 = 0;
  }
  return local_78;
}
