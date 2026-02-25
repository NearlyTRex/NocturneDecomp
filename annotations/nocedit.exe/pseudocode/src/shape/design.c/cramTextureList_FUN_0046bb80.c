// Name: shape_design.c_cramTextureList_FUN_0046bb80
// Address: 0046bb80
// Address Range: [[0046bb80, 0046dfb1]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_cramTextureList_FUN_0046bb80(SCram *cram)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl shape_design_c_cramTextureList_FUN_0046bb80(SCram *cram)

{
  char cVar1;
  bool bVar2;
  SIZE_T SVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  SCram *pSVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char acStackY_146e [1018];
  ushort auStackY_1074 [630];
  char local_b58 [260];
  _FILE *local_a54;
  int local_a50;
  int local_a4c;
  int local_a48;
  int local_a44;
  int local_a40;
  int local_a3c;
  int local_a38;
  uint local_a34;
  uint local_a30;
  uint local_a2c;
  int local_a28;
  char local_a24 [80];
  char local_9d0 [80];
  int local_980;
  char local_97c [300];
  _FILE *local_850;
  byte local_84c [4];
  uint auStack_848 [250];
  char local_460 [260];
  char local_35c [260];
  char local_258 [260];
  char local_154 [200];
  char local_8c [4];
  uint uStack_88;
  char acStack_84 [4];
  uchar **local_80;
  uchar **local_7c;
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
  
  bVar11 = 0;
  local_2c = (uchar *)0x0;
  local_28 = (uchar *)0x0;
  local_24 = (uchar *)0x0;
  local_20 = (uchar *)0x0;
  if (g_TextureProcessedCount < 1) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x28ed;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't cramTextureList because empty cram list!");
  }
  for (local_5c = 0; local_5c < g_TextureProcessedCount; local_5c = local_5c + 1) {
    if (g_TextureManagerMode == 0) {
      local_850 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            (g_TextureAtlasEntries[local_5c].tga_filename,(char *)0x0,"rb",
                             "..\\shape\\design.c",0x28f8);
    }
    else {
      local_850 = engine_dosio_c_getFile_FUN_00481a50
                            ("art",g_TextureAtlasEntries[local_5c].tga_filename,
                             "rb");
    }
    if (local_850 == (_FILE *)0x0) {
      _sprintf(local_97c,"Can't open %s");
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 0x28fd;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_97c);
    }
    _fseek(local_850,0xc,0);
    local_74 = 0;
    local_60 = 0;
    SVar3 = _fread(&local_74,2,1,local_850);
    if (SVar3 != 1) {
      _sprintf(local_154,"Unable to read file (%s).");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",0x2905);
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 0x2906;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    SVar3 = _fread(&local_60,2,1,local_850);
    if (SVar3 != 1) {
      _sprintf(local_154,"Unable to read file (%s).");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",0x290a);
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 0x290b;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    SVar3 = _fread(local_84c,1,1,local_850);
    if (SVar3 != 1) {
      _sprintf(local_154,"Unable to read file (%s).");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",0x2912);
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 0x2913;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    auStack_848[local_5c] = (uint)local_84c[0];
    if ((local_84c[0] != 0x18) && (local_84c[0] != 0x20)) {
      _sprintf(local_154,"ERROR: Not a 24- or 32-bit targa file: %s.");
      if (cram == (SCram *)0x0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",0x291f);
        shape_design_c_clearAllTextureNames_FUN_0046e6b0();
        return 0;
      }
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 0x2919;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_850,"..\\shape\\design.c",0x2925);
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
    local_980 = (int)ROUND(ROUND((double)(int)g_TextureAtlasEntries[local_5c].original_height *
                                 (double)(g_TextureAtlasEntries[local_5c].max_v -
                                         g_TextureAtlasEntries[local_5c].min_v) *
                                 5.9604644775390599e-08));
    g_TextureAtlasEntries[local_5c].processed_height = local_980;
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
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_5c = 0;
    do {
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (local_154,0x4f,0,local_5c * 0xb,"Enter number of maps [1] : ");
      local_58 = 1;
      iVar4 = -1;
      pcVar9 = local_154;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar4 != -2) {
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
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
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
  iVar4 = -1;
  pcVar9 = local_154;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    local_64 = atoi(local_154);
  }
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_154,0x14,0,local_5c * 0xb,"Fill gaps? [y] : ");
  if ((local_154[0] == '\0') ||
     (iVar4 = toupper((uint)(byte)local_154[0]), iVar4 == 0x59)) {
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
    iVar4 = -1;
    pcVar9 = local_154;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      g_TextureAtlasDimension = atoi(local_154);
    }
    if ((((g_TextureAtlasDimension == 0x200) || (g_TextureAtlasDimension == 0x100)) ||
        (g_TextureAtlasDimension == 0x80)) ||
       ((g_TextureAtlasDimension == 0x40 || (g_TextureAtlasDimension == 0x20)))) break;
    engine_2d_c_drawText_FUN_00401fd0("Texture map width must be 512, 256, 128, 64, or 32.",0,(local_5c + 2) * 0xb);
    engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,(local_5c + 4) * 0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
  } while( true );
LAB_0046c428:
  _sprintf(local_9d0,"Enter passed texture map width [%d] : ");
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_154,0x4f,0,local_5c * 0xb,local_9d0);
  local_68 = g_TextureAtlasDimension;
  iVar4 = -1;
  pcVar9 = local_154;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    local_68 = atoi(local_154);
  }
  if (((local_68 == 0x200) || (local_68 == 0x100)) ||
     ((local_68 == 0x80 || ((local_68 == 0x40 || (local_68 == 0x20)))))) goto LAB_0046c50b;
  engine_2d_c_drawText_FUN_00401fd0("Passed texture map width must be 512, 256, 128, 64, or 32.",0,(local_5c + 2) * 0xb);
  engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,(local_5c + 4) * 0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  goto LAB_0046c428;
LAB_0046cea5:
  iVar4 = -1;
  pcVar9 = local_258;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 == -2) {
    pcVar7 = g_LoadedModelName;
    pcVar9 = local_258;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  goto LAB_0046cede;
LAB_0046c50b:
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_154,0x14,0,local_5c * 0xb,"Enter acceptable coverage [99] : ");
  local_1c = 99;
  iVar4 = -1;
  pcVar9 = local_154;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    local_1c = atoi(local_154);
  }
  local_5c = local_5c + 2;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_154,0x14,0,local_5c * 0xb,"Enter acceptable size [1] : ");
  local_18 = 1;
  iVar4 = -1;
  pcVar9 = local_154;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    local_18 = atoi(local_154);
  }
  local_50 = 1;
  local_48 = 0;
LAB_0046c5b7:
  if (local_58 < 10) {
    if (local_58 < 1) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_154,"Number of maps must be a positive number (%d < 0).");
      engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      shape_design_c_clearAllTextureNames_FUN_0046e6b0();
      local_78 = 0;
    }
    else {
      local_8c[0] = "CramTex II"[0];
      local_8c[1] = "CramTex II"[1];
      local_8c[2] = "CramTex II"[2];
      local_8c[3] = "CramTex II"[3];
      (&uStack_88)[(uint)bVar11 * -2] =
           *(uint *)("CramTex II" + (uint)bVar11 * -8 + 4);
      *(ushort *)(acStack_84 + ((uint)bVar11 * -4 + (uint)bVar11 * -4) * 2) =
           *(ushort *)("CramTex II" + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      (acStack_84 + ((uint)bVar11 * -4 + (uint)bVar11 * -4) * 2)[((uint)bVar11 * -2 + 1) * 2] =
           ("CramTex II" + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8)
           [((uint)bVar11 * -2 + 1) * 2];
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_154,"%s in progress...");
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
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          _sprintf(local_154,"%s done.  (%ld seconds)",local_8c);
          engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
          engine_2d_c_drawText_FUN_00401fd0("Minimum area",0,0x16);
          for (local_34 = 1; local_34 <= local_58; local_34 = local_34 + 1) {
            _sprintf(local_154,"  map %d : %d x %d",local_34,local_74);
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
                       g_TextureAtlasEntries[local_5c].atlas_map_index + 1);
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
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        _sprintf(local_154,"%s done.  (%ld seconds)",local_8c);
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
        local_5c = 2;
        engine_2d_c_drawText_FUN_00401fd0("Minimum area",0,0x16);
        for (local_34 = 1; local_34 <= local_58; local_34 = local_34 + 1) {
          _sprintf(local_154,"  map %d : %d x %d",local_34,local_74);
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
          local_980 = local_74 * local_60;
          _sprintf
                    (local_154,"  map %d : %4.1lf%%",local_34,
                     100 - ((double)local_a28 / (double)local_980) * 100);
          local_5c = local_5c + 1;
          engine_2d_c_drawText_FUN_00401fd0(local_154,0,local_5c * 0xb);
        }
        if (local_58 == 1) {
          pcVar7 = "Is this map acceptable? [y] : ";
          pcVar9 = local_a24;
          do {
            cVar1 = *pcVar7;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        else {
          pcVar7 = "Are these maps acceptable? [y] : ";
          pcVar9 = local_a24;
          do {
            cVar1 = *pcVar7;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        iVar4 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                          (local_154,0x14,0,(local_5c + 3) * 0xb,local_a24);
        if (iVar4 == 0x1b) {
          shape_design_c_clearAllTextureNames_FUN_0046e6b0();
          return 0;
        }
        if ((local_154[0] != '\0') &&
           (iVar4 = toupper((uint)(byte)local_154[0]), iVar4 != 0x59)) {
          local_a2c = (uint)(local_58 == 1);
          _sprintf(local_a24,"Map%s not created.  Hit a key...");
          engine_2d_c_drawText_FUN_00401fd0(local_a24,0,(local_5c + 5) * 0xb);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          shape_design_c_clearAllTextureNames_FUN_0046e6b0();
          return 0;
        }
        local_a30 = (uint)(local_58 == 1);
        _sprintf(local_a24,"Map%s created.  Hit a key...");
        engine_2d_c_drawText_FUN_00401fd0(local_a24,0,(local_5c + 5) * 0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      if (cram == (SCram *)0x0) {
        do {
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          pcVar7 = g_LoadedModelName;
          pcVar9 = local_258;
          do {
            cVar1 = *pcVar7;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
          pcVar9 = local_258;
          do {
            local_6c = pcVar9;
            if (*pcVar9 == '.') goto LAB_0046cdc6;
            if (*pcVar9 == '\0') break;
            local_6c = pcVar9 + 1;
            if (*local_6c == '.') goto LAB_0046cdc6;
            pcVar9 = pcVar9 + 2;
          } while (*local_6c != '\0');
          local_6c = (char *)0x0;
LAB_0046cdc6:
          if (local_6c != (char *)0x0) {
            *local_6c = '\0';
          }
          _sprintf(local_154,"Enter output .RAW name [%s] : ");
          iVar4 = engine_2d_c_getInputWithPrompt_FUN_004032c0(local_258,0x4f,0,0,local_154);
          if (iVar4 == 0x1b) {
            shape_design_c_clearAllTextureNames_FUN_0046e6b0();
            return 0;
          }
          pcVar9 = local_258;
          do {
            local_6c = pcVar9;
            if (*pcVar9 == '.') goto LAB_0046ce46;
            if (*pcVar9 == '\0') break;
            local_6c = pcVar9 + 1;
            if (*local_6c == '.') goto LAB_0046ce46;
            pcVar9 = pcVar9 + 2;
          } while (*local_6c != '\0');
          local_6c = (char *)0x0;
LAB_0046ce46:
          if (local_6c != (char *)0x0) {
            *local_6c = '\0';
          }
          if (local_58 == 1) goto LAB_0046cea5;
          uVar6 = 0xffffffff;
          pcVar9 = local_258;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
          } while (cVar1 != '\0');
          if (~uVar6 - 1 < 8) goto LAB_0046cea5;
          engine_2d_c_drawText_FUN_00401fd0("File name must be no more than 7 characters.",0,0x16);
          engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        } while( true );
      }
      pcVar9 = local_258;
      pSVar8 = cram;
      do {
        cVar1 = pSVar8->filename[0];
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pSVar8->filename[1];
        pSVar8 = (SCram *)(pSVar8->filename + 2);
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
LAB_0046cede:
      pcVar9 = local_258;
      pcVar7 = g_CurrentModelFilename;
      do {
        cVar1 = *pcVar9;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      strupr(g_CurrentModelFilename);
      pcVar9 = g_CurrentModelFilename;
      do {
        local_6c = pcVar9;
        if (*pcVar9 == '.') goto LAB_0046cf33;
        if (*pcVar9 == '\0') break;
        local_6c = pcVar9 + 1;
        if (*local_6c == '.') goto LAB_0046cf33;
        pcVar9 = pcVar9 + 2;
      } while (*local_6c != '\0');
      local_6c = (char *)0x0;
LAB_0046cf33:
      if (local_6c != (char *)0x0) {
        *local_6c = '\0';
      }
      if (cram == (SCram *)0x0) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_154,0x14,0,0x16,"Paint around borders? [y] : ");
        if ((local_154[0] == '\0') ||
           (iVar4 = toupper((uint)(byte)local_154[0]), iVar4 == 0x59)) {
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
        pcVar7 = g_CurrentModelFilename;
        pcVar9 = local_258;
        do {
          cVar1 = *pcVar7;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        local_a34 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_58);
        if (local_58 == 1) {
          uVar6 = 0xffffffff;
          pcVar9 = g_CurrentModelFilename;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
          } while (cVar1 != '\0');
          if (local_a34 < ~uVar6 - 1) {
            pcVar9 = ".RAW";
            pcVar7 = local_258 + local_a34;
            do {
              cVar1 = *pcVar9;
              *pcVar7 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar9[1];
              pcVar9 = pcVar9 + 2;
              pcVar7[1] = cVar1;
              pcVar7 = pcVar7 + 2;
            } while (cVar1 != '\0');
          }
          else {
            pcVar7 = ".RAW";
            iVar4 = -1;
            pcVar9 = local_258;
            do {
              pcVar10 = pcVar9;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar1 != '\0');
            pcVar10 = pcVar10 + -1;
            do {
              cVar1 = *pcVar7;
              *pcVar10 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar7[1];
              pcVar7 = pcVar7 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
          }
        }
        else {
          uVar6 = 0xffffffff;
          pcVar9 = g_CurrentModelFilename;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
          } while (cVar1 != '\0');
          if (local_a34 - 1 < ~uVar6 - 1) {
            uVar6 = 0xffffffff;
            pcVar9 = g_CurrentModelFilename;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
            } while (cVar1 != '\0');
            if (local_a34 < ~uVar6 - 1) {
              _sprintf(local_258 + local_a34,"%X.RAW");
            }
            else {
              _sprintf(local_258,"%s%X.RAW",g_CurrentModelFilename)
              ;
            }
          }
          else {
            _sprintf(local_258,"%s_%X.RAW",g_CurrentModelFilename);
          }
        }
        pcVar9 = local_258;
        pcVar7 = g_TextureNameArray[local_30];
        do {
          cVar1 = *pcVar9;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        local_2c = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                             (g_TextureAtlasDimension * g_TextureAtlasDimension * 3,1,
                              "..\\shape\\design.c",0x2aed);
        local_28 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (g_TextureAtlasDimension * g_TextureAtlasDimension,
                              "..\\shape\\design.c",0x2aee);
        if ((local_2c == (uchar *)0x0) || (local_28 == (uchar *)0x0)) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2aef;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get bitmap!");
        }
        memset
                  (local_28,0xff,g_TextureAtlasDimension * g_TextureAtlasDimension);
        if (cram == (SCram *)0x0) {
          sleep(1000);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        _sprintf(local_154,"Map %d of %d  ",local_14);
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
        _sprintf(local_154,"Sampling down %s...                  ");
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x16);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        for (local_5c = 0; local_5c < g_TextureProcessedCount; local_5c = local_5c + 1) {
          if (g_TextureAtlasEntries[local_5c].atlas_map_index == local_30) {
            shape_design_c_loadTextureData_FUN_0046b060
                      (g_TextureAtlasEntries + local_5c,local_2c,local_28,auStack_848[local_5c],
                       local_74);
          }
        }
        local_80 = &local_24;
        local_7c = &local_20;
        iVar4 = shape_quantize_cpp_quantizeRawPixelData_FUN_00556490
                          (local_2c,local_80,local_7c,(short)g_TextureAtlasDimension,
                           (short)g_TextureAtlasDimension,0x18,2,1);
        if (iVar4 == 0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2b1b;
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
                iVar4 = local_a44 + -1;
                for (local_44 = 0; local_44 < local_a38; local_44 = local_44 + 1) {
                  iVar5 = local_a40 + local_44;
                  if ((((-1 < iVar5) && (iVar5 <= g_TextureAtlasDimension + -1)) && (-1 < iVar4)) &&
                     (iVar4 <= g_TextureAtlasDimension + -1)) {
                    local_24[iVar4 * g_TextureAtlasDimension + iVar5] =
                         local_24[local_a44 * g_TextureAtlasDimension + iVar5];
                    local_28[iVar4 * g_TextureAtlasDimension + iVar5] =
                         local_28[local_a44 * g_TextureAtlasDimension + iVar5];
                  }
                }
                iVar4 = local_a44 + local_a3c;
                for (local_44 = 0; local_44 < local_a38; local_44 = local_44 + 1) {
                  iVar5 = local_a40 + local_44;
                  if (((-1 < iVar5) && (iVar5 <= g_TextureAtlasDimension + -1)) &&
                     ((-1 < iVar4 && (iVar4 <= g_TextureAtlasDimension + -1)))) {
                    local_24[iVar4 * g_TextureAtlasDimension + iVar5] =
                         local_24[(iVar4 + -1) * g_TextureAtlasDimension + iVar5];
                    local_28[iVar4 * g_TextureAtlasDimension + iVar5] =
                         local_28[(iVar4 + -1) * g_TextureAtlasDimension + iVar5];
                  }
                }
                iVar4 = local_a40 + -1;
                for (local_40 = 0; local_40 < local_a3c; local_40 = local_40 + 1) {
                  iVar5 = local_a44 + local_40;
                  if (((-1 < iVar4) && (iVar4 <= g_TextureAtlasDimension + -1)) &&
                     ((-1 < iVar5 && (iVar5 <= g_TextureAtlasDimension + -1)))) {
                    local_24[iVar5 * g_TextureAtlasDimension + iVar4] =
                         local_24[iVar5 * g_TextureAtlasDimension + iVar4 + 1];
                    local_28[iVar5 * g_TextureAtlasDimension + iVar4] =
                         local_28[iVar5 * g_TextureAtlasDimension + iVar4 + 1];
                  }
                }
                iVar4 = local_a40 + local_a38;
                for (local_40 = 0; local_40 < local_a3c; local_40 = local_40 + 1) {
                  iVar5 = local_a44 + local_40;
                  if ((((-1 < iVar4) && (iVar4 <= g_TextureAtlasDimension + -1)) && (-1 < iVar5)) &&
                     (iVar5 <= g_TextureAtlasDimension + -1)) {
                    local_24[iVar5 * g_TextureAtlasDimension + iVar4] =
                         local_24[iVar5 * g_TextureAtlasDimension + iVar4 + -1];
                    local_28[iVar5 * g_TextureAtlasDimension + iVar4] =
                         local_28[iVar5 * g_TextureAtlasDimension + iVar4 + -1];
                  }
                }
                iVar4 = local_a40 + -1;
                iVar5 = local_a44 + -1;
                if (((-1 < iVar4) && (iVar4 <= g_TextureAtlasDimension + -1)) &&
                   ((-1 < iVar5 && (iVar5 <= g_TextureAtlasDimension + -1)))) {
                  local_24[iVar5 * g_TextureAtlasDimension + iVar4] =
                       local_24[local_a44 * g_TextureAtlasDimension + iVar4 + 1];
                  local_28[iVar5 * g_TextureAtlasDimension + iVar4] =
                       local_28[local_a44 * g_TextureAtlasDimension + iVar4 + 1];
                }
                iVar4 = local_a40 + local_a38;
                iVar5 = local_a44 + -1;
                if (((-1 < iVar4) && (iVar4 <= g_TextureAtlasDimension + -1)) &&
                   ((-1 < iVar5 && (iVar5 <= g_TextureAtlasDimension + -1)))) {
                  local_24[iVar5 * g_TextureAtlasDimension + iVar4] =
                       local_24[local_a44 * g_TextureAtlasDimension + iVar4 + -1];
                  local_28[iVar5 * g_TextureAtlasDimension + iVar4] =
                       local_28[local_a44 * g_TextureAtlasDimension + iVar4 + -1];
                }
                iVar4 = local_a40 + local_a38;
                iVar5 = local_a44 + local_a3c;
                if ((((-1 < iVar4) && (iVar4 <= g_TextureAtlasDimension + -1)) && (-1 < iVar5)) &&
                   (iVar5 <= g_TextureAtlasDimension + -1)) {
                  local_24[iVar5 * g_TextureAtlasDimension + iVar4] =
                       local_24[(iVar5 + -1) * g_TextureAtlasDimension + iVar4 + -1];
                  local_28[iVar5 * g_TextureAtlasDimension + iVar4] =
                       local_28[(iVar5 + -1) * g_TextureAtlasDimension + iVar4 + -1];
                }
                local_a50 = local_a40 + -1;
                local_a4c = local_a44 + local_a3c;
                if (((-1 < local_a50) && (local_a50 <= g_TextureAtlasDimension + -1)) &&
                   ((-1 < local_a4c && (local_a4c <= g_TextureAtlasDimension + -1)))) {
                  local_24[local_a4c * g_TextureAtlasDimension + local_a50] =
                       local_24[(local_a4c + -1) * g_TextureAtlasDimension + local_a50 + 1];
                  local_28[local_a4c * g_TextureAtlasDimension + local_a50] =
                       local_28[(local_a4c + -1) * g_TextureAtlasDimension + local_a50 + 1];
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
        local_a54 = engine_dosio_c_getFile_FUN_00481a50("art",local_258,"wb");
        if (local_a54 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2b7e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open output for 8-bit .RAW file!");
        }
        _fwrite(local_24,g_TextureAtlasDimension,g_TextureAtlasDimension,local_a54);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_a54,"..\\shape\\design.c",0x2b80);
        _sprintf(local_154,"Saved %s                    ");
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x4d);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        pcVar9 = local_258;
        pcVar7 = local_460;
        do {
          cVar1 = *pcVar9;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        pcVar9 = local_460;
        do {
          pcVar7 = pcVar9;
          if (*pcVar9 == '.') goto LAB_0046dbbf;
          if (*pcVar9 == '\0') break;
          pcVar7 = pcVar9 + 1;
          if (*pcVar7 == '.') goto LAB_0046dbbf;
          pcVar9 = pcVar9 + 2;
        } while (*pcVar7 != '\0');
        pcVar7 = (char *)0x0;
LAB_0046dbbf:
        if (pcVar7 != (char *)0x0) {
          pcVar10 = ".ACT";
          pcVar9 = pcVar7;
          do {
            cVar1 = *pcVar10;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        local_6c = pcVar7;
        local_a54 = engine_dosio_c_getFile_FUN_00481a50("art",local_460,"wb");
        if (local_a54 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2b8c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open output for .ACT file!");
        }
        for (local_5c = 0; local_5c < 0x100; local_5c = local_5c + 1) {
          _fputc((uint)local_20[local_5c * 3 + 2],local_a54);
          _fputc((uint)local_20[local_5c * 3 + 1],local_a54);
          _fputc((uint)local_20[local_5c * 3],local_a54);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_a54,"..\\shape\\design.c",0x2b92);
        _sprintf(local_154,"Saved %s                    ");
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x58);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        pcVar9 = local_258;
        pcVar7 = local_35c;
        do {
          cVar1 = *pcVar9;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        pcVar9 = local_35c;
        do {
          pcVar7 = pcVar9;
          if (*pcVar9 == '.') goto LAB_0046dd49;
          if (*pcVar9 == '\0') break;
          pcVar7 = pcVar9 + 1;
          if (*pcVar7 == '.') goto LAB_0046dd49;
          pcVar9 = pcVar9 + 2;
        } while (*pcVar7 != '\0');
        pcVar7 = (char *)0x0;
LAB_0046dd49:
        if (pcVar7 != (char *)0x0) {
          pcVar10 = ".OPA";
          pcVar9 = pcVar7;
          do {
            cVar1 = *pcVar10;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        local_6c = pcVar7;
        iVar4 = shape_design_c_checkNonFFBytes_FUN_0046ac70
                          ((char *)local_28,g_TextureAtlasDimension * g_TextureAtlasDimension);
        if (iVar4 == 0) {
          _sprintf(local_b58,"art\\%s");
          remove(local_b58);
          _sprintf(local_154,"All pixels completely opaque, no .OPA file generated.");
        }
        else {
          local_a54 = engine_dosio_c_getFile_FUN_00481a50("art",local_35c,"wb");
          if (local_a54 == (_FILE *)0x0) {
            g_CurrentFilename = "..\\shape\\design.c";
            g_CurrentLineNumber = 0x2ba2;
            core_main_c_displayErrorAndQuit_FUN_00506f10("unable to create .OPA file.");
          }
          _fwrite(local_28,g_TextureAtlasDimension,g_TextureAtlasDimension,local_a54);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_a54,"..\\shape\\design.c",0x2ba4);
          _sprintf(local_154,"Saved %s                    ");
        }
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,99);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        local_a54 = engine_dosio_c_getFile_FUN_00481a50
                              ("art","tmp24.raw","wb");
        if (local_a54 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2bb9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open output for 24-bit .RAW file!");
        }
        _fwrite(local_2c,g_TextureAtlasDimension * 3,g_TextureAtlasDimension,local_a54);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_a54,"..\\shape\\design.c",0x2bbb);
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_20,"..\\shape\\design.c",0x2bbf);
        local_20 = (uchar *)0x0;
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_24,"..\\shape\\design.c",0x2bc1);
        local_24 = (uchar *)0x0;
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_2c,"..\\shape\\design.c",0x2bc3);
        local_2c = (uchar *)0x0;
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_28,"..\\shape\\design.c",0x2bc5);
        local_28 = (uchar *)0x0;
      }
      g_LastTextureProcessIndex = local_14;
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      local_78 = 1;
    }
  }
  else {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    _sprintf(local_154,"Too many maps (%d > %d).",local_58);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
    engine_2d_c_drawText_FUN_00401fd0("Naming convention not established!!  Go get Allen...",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    shape_design_c_clearAllTextureNames_FUN_0046e6b0();
    local_78 = 0;
  }
  return local_78;
}
