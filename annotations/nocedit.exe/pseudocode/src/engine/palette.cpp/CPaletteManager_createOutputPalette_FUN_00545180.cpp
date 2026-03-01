// Name: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
// Address Range: [[00545180, 00545643]]
// Convention: __cdecl
// Signature: int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(CPaletteManager *this_ptr,char *output_filename,int num_palette_entries)

#include "nocturne.h"

int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(CPaletteManager *this_ptr,char *output_filename,int num_palette_entries)

{
  char cVar1;
  byte bVar2;
  uchar uVar3;
  byte *pbVar4;
  int iVar5;
  _FILE *p_Var6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  uint color_count;
  char *pcVar10;
  char *pcVar11;
  uchar *puVar12;
  byte bVar13;
  char *pcVar14;
  char local_6c [80];
  int local_1c;
  SColorQuantMapper *local_18;
  char *local_14;
  int local_10;
  uint local_c;
  
  bVar13 = 0;
  local_18 = (SColorQuantMapper *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8308,"..\\engine\\palette.cpp",0xb4);
  color_count = 0;
  if (local_18 == (SColorQuantMapper *)0x0) {
    g_CurrentFilename = "..\\engine\\palette.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create mapper");
  }
  local_14 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->max_pixel_count,4,"..\\engine\\palette.cpp",0xbb);
  iVar7 = 0;
  if (local_14 != (char *)0x0) {
    local_1c = 0;
    if (0 < this_ptr->texture_count) {
      local_10 = 0;
      do {
        pcVar11 = local_6c;
        pcVar10 = this_ptr->texture_names + local_10;
        do {
          cVar1 = *pcVar10;
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
        } while (cVar1 != '\0');
        pcVar11 = local_6c;
        do {
          pcVar10 = pcVar11;
          if (*pcVar11 == '.') goto LAB_00545254;
          if (*pcVar11 == '\0') break;
          pcVar10 = pcVar11 + 1;
          if (*pcVar10 == '.') goto LAB_00545254;
          pcVar11 = pcVar11 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_00545254:
        if (pcVar10 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xcb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - No extension found");
        }
        pcVar11 = ".ACT";
        do {
          cVar1 = *pcVar11;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        pcVar11 = local_6c;
        do {
          pcVar10 = pcVar11;
          if (*pcVar11 == '\\') goto LAB_005452ba;
          if (*pcVar11 == '\0') break;
          pcVar10 = pcVar11 + 1;
          if (*pcVar10 == '\\') goto LAB_005452ba;
          pcVar11 = pcVar11 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_005452ba:
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "rb";
          pcVar11 = "art";
        }
        else {
          pcVar10 = "rb";
          pcVar11 = &s_EmptyChar_0063e5a6;
        }
        p_Var6 = engine_dosio_c_getFile_FUN_00481a50(pcVar11,local_6c,pcVar10);
        if (p_Var6 == (_FILE *)0x0) {
          puVar9 = g_DefaultPalette;
          puVar12 = g_PaletteData;
          for (iVar7 = 0xc0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(uint *)puVar12 = *(uint *)puVar9;
            puVar9 = puVar9 + ((uint)bVar13 * -2 + 1) * 4;
            puVar12 = puVar12 + ((uint)bVar13 * -2 + 1) * 4;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
          }
        }
        else {
          _fread(g_PaletteData,0x300,1,p_Var6);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\engine\\palette.cpp",0xd9);
        }
        pcVar11 = this_ptr->texture_names + local_10;
        do {
          pcVar10 = pcVar11;
          if (*pcVar11 == '\\') goto LAB_00545332;
          if (*pcVar11 == '\0') break;
          pcVar10 = pcVar11 + 1;
          if (*pcVar10 == '\\') goto LAB_00545332;
          pcVar11 = pcVar11 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_00545332:
        if (pcVar10 == (char *)0x0) {
          pcVar11 = this_ptr->texture_names;
          pcVar10 = "art";
        }
        else {
          pcVar11 = this_ptr->texture_names;
          pcVar10 = &s_EmptyChar_0063e5c1;
        }
        iVar7 = engine_dosio_c_getFileSize_FUN_00481880(pcVar10,pcVar11 + local_10);
        pcVar11 = this_ptr->texture_names + local_10;
        do {
          pcVar10 = pcVar11;
          if (*pcVar11 == '\\') goto LAB_0054537a;
          if (*pcVar11 == '\0') break;
          pcVar10 = pcVar11 + 1;
          if (*pcVar10 == '\\') goto LAB_0054537a;
          pcVar11 = pcVar11 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_0054537a:
        if (pcVar10 == (char *)0x0) {
          pcVar11 = this_ptr->texture_names;
          pcVar14 = "rb";
          pcVar10 = "art";
        }
        else {
          pcVar11 = this_ptr->texture_names;
          pcVar14 = "rb";
          pcVar10 = &s_EmptyChar_0063e5cc;
        }
        p_Var6 = engine_dosio_c_getFile_FUN_00481a50(pcVar10,pcVar11 + local_10,pcVar14);
        if (p_Var6 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xf1;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to open texture");
        }
        puVar9 = (uchar *)(local_14 + color_count * 4);
        while (0 < iVar7) {
          if ((p_Var6->_cnt < 1) || ((byte)*p_Var6->_ptr - 0xd < 0xfe)) {
            uVar8 = _fgetc(p_Var6);
          }
          else {
            pbVar4 = (byte *)p_Var6->_ptr;
            p_Var6->_cnt = p_Var6->_cnt + -1;
            p_Var6->_ptr = (char *)(pbVar4 + 1);
            uVar8 = (uint)*pbVar4;
          }
          if (uVar8 == 0xffffffff) break;
          iVar5 = uVar8 * 3;
          bVar2 = g_PaletteData[iVar5 + 1];
          local_c = (uint)bVar2;
          uVar3 = g_PaletteData[iVar5 + 2];
          if (((g_PaletteData[iVar5] != '\0') || (local_c != 0)) || (uVar3 != '\0')) {
            *puVar9 = g_PaletteData[iVar5];
            puVar9[1] = bVar2;
            color_count = color_count + 1;
            puVar9[2] = uVar3;
            puVar9 = puVar9 + 4;
          }
          iVar7 = iVar7 + -1;
          if ((uint)this_ptr->max_pixel_count < color_count) {
            g_CurrentFilename = "..\\engine\\palette.cpp";
            g_CurrentLineNumber = 0x10c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Too many pixels");
          }
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\engine\\palette.cpp",0x110);
        local_1c = local_1c + 1;
        local_10 = local_10 + 0x40;
      } while (local_1c < this_ptr->texture_count);
    }
    pcVar10 = engine_colquant_c_quantizeColors_FUN_004406c0
                        (local_18,local_14,color_count,num_palette_entries);
    pcVar11 = output_filename;
    do {
      pcVar14 = pcVar11;
      if (*pcVar11 == '\\') goto LAB_00545459;
      if (*pcVar11 == '\0') break;
      pcVar14 = pcVar11 + 1;
      if (*pcVar14 == '\\') goto LAB_00545459;
      pcVar11 = pcVar11 + 2;
    } while (*pcVar14 != '\0');
    pcVar14 = (char *)0x0;
LAB_00545459:
    if (pcVar14 == (char *)0x0) {
      pcVar14 = "wb";
      pcVar11 = "art";
    }
    else {
      pcVar14 = "wb";
      pcVar11 = &s_EmptyChar_0063e68c;
    }
    p_Var6 = engine_dosio_c_getFile_FUN_00481a50(pcVar11,output_filename,pcVar14);
    if (p_Var6 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\engine\\palette.cpp";
      g_CurrentLineNumber = 0x122;
      core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create output!");
    }
    _fwrite(pcVar10,0x300,1,p_Var6);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\engine\\palette.cpp",0x125);
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\engine\\palette.cpp",0x129);
    g_CurrentDebugFilename = "..\\engine\\palette.cpp";
    g_CurrentDebugLine = 0x12a;
    shape_memdbg_cpp_debugFree_FUN_0050f210(local_18);
    iVar7 = 1;
  }
  return iVar7;
}
