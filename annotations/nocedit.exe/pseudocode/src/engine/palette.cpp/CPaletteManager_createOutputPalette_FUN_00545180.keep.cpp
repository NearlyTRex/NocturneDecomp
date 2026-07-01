// Name: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
// MANUAL RECONSTRUCTION
// Address Range: [[00545180, 00545643]]
// Convention: __cdecl
// Signature: int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(CPaletteManager *this_ptr,char *output_filename,int num_palette_entries)

#include "nocturne.h"

int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(CPaletteManager *this_ptr,char *output_filename,int num_palette_entries)

{
  SColorQuantMapper *workspace;
  char *color_data;
  _FILE *p_Var6;
  int iVar7;
  _FILE *p_Var3;
  uint uVar8;
  int iVar4;
  uchar *puVar9;
  uint color_count;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_6c [80];
  int local_1c;
  int local_10;
  byte *pbVar4;
  int iVar5;
  uchar uVar3;
  byte bVar2;
  char *pcVar14;
  byte bVar13;
  
  bVar13 = 0;
  workspace = (SColorQuantMapper *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                        (sizeof(SColorQuantMapper),"..\\engine\\palette.cpp",0xb4);
  color_count = 0;
  if (workspace == (SColorQuantMapper *)0x0) {
    g_CurrentFilename = "..\\engine\\palette.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create mapper");
  }
  color_data = (char *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                         (this_ptr->max_pixel_count,4,"..\\engine\\palette.cpp",0xbb);
  iVar4 = 0;
  if (color_data != (char *)0x0) {
    local_1c = 0;
    if (0 < this_ptr->texture_count) {
      local_10 = 0;
      do {
        strcpy(local_6c, this_ptr->texture_names + local_10);
        pcVar5 = strchr(local_6c, '.');
        if (pcVar5 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xcb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - No extension found");
        }
        strcpy(pcVar5, ".ACT");
        pcVar5 = strchr(local_6c, '\\');
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "rb";
          pcVar6 = "art";
        }
        else {
          pcVar5 = "rb";
          pcVar6 = &s_EmptyChar_0063e5a6;
        }
        p_Var6 = engine_dosio_cpp_getFile_FUN_00481a50(pcVar6,local_6c,pcVar5);
        if (p_Var6 == (_FILE *)0x0) {
          memcpy(g_PaletteData,g_DefaultPalette,0x300);
        }
        else {
          _fread(g_PaletteData,0x300,1,p_Var6);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\engine\\palette.cpp",0xd9);
        }
        pcVar5 = strchr(this_ptr->texture_names + local_10, '\\');
        if (pcVar5 == (char *)0x0) {
          pcVar6 = this_ptr->texture_names;
          pcVar5 = "art";
        }
        else {
          pcVar6 = this_ptr->texture_names;
          pcVar5 = &s_EmptyChar_0063e5c1;
        }
        iVar7 = engine_dosio_cpp_getFileSize_FUN_00481880(pcVar5,pcVar6 + local_10);
        pcVar5 = strchr(this_ptr->texture_names + local_10, '\\');
        if (pcVar5 == (char *)0x0) {
          pcVar6 = this_ptr->texture_names;
          pcVar14 = "rb";
          pcVar5 = "art";
        }
        else {
          pcVar6 = this_ptr->texture_names;
          pcVar14 = "rb";
          pcVar5 = &s_EmptyChar_0063e5cc;
        }
        p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50(pcVar5,pcVar6 + local_10,pcVar14);
        if (p_Var3 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xf1;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to open texture");
        }
        puVar9 = (uchar *)(color_data + color_count * 4);
        while (0 < iVar7) {
          if ((p_Var3->_cnt < 1) || ((byte)*p_Var3->_ptr - 0xd < 0xfe)) {
            uVar8 = _fgetc(p_Var3);
          }
          else {
            pbVar4 = (byte *)p_Var3->_ptr;
            p_Var3->_cnt = p_Var3->_cnt + -1;
            p_Var3->_ptr = (char *)(pbVar4 + 1);
            uVar8 = (uint)*pbVar4;
          }
          if (uVar8 == 0xffffffff) break;
          iVar5 = uVar8 * 3;
          bVar2 = g_PaletteData[iVar5 + 1];
          uVar3 = g_PaletteData[iVar5 + 2];
          if (((g_PaletteData[iVar5] != '\0') || (bVar2 != 0)) || (uVar3 != '\0')) {
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
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\palette.cpp",0x110);
        local_10 = local_10 + 0x40;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->texture_count);
    }
    pcVar5 = engine_colquant_c_quantizeColors_FUN_004406c0
                       (workspace,color_data,color_count,num_palette_entries);
    pcVar7 = strchr(output_filename, '\\');
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "wb";
      pcVar6 = "art";
    }
    else {
      pcVar7 = "wb";
      pcVar6 = &s_EmptyChar_0063e68c;
    }
    p_Var3 = engine_dosio_cpp_getFile_FUN_00481a50(pcVar6,output_filename,pcVar7);
    if (p_Var3 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\engine\\palette.cpp";
      g_CurrentLineNumber = 0x122;
      core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create output!");
    }
    _fwrite(pcVar5,0x300,1,p_Var3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\palette.cpp",0x125);
    shape_memdbg_cpp_debugFree_FUN_0050f460(color_data,"..\\engine\\palette.cpp",0x129);
    g_CurrentDebugFilename = "..\\engine\\palette.cpp";
    g_CurrentDebugLine = 0x12a;
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(workspace);
    iVar4 = 1;
  }
  return iVar4;
}
