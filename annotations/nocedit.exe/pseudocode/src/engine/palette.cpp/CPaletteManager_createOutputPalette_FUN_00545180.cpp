// Name: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
// Address Range: [[00545180, 00545643]]
// Convention: __cdecl
// Signature: int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void)

#include "nocturne.h"

int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void)

{
  char cVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  byte *pbVar5;
  _FILE *p_Var6;
  int iVar7;
  uint uVar8;
  int *ptr;
  uchar *puVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  uchar *puVar13;
  byte bVar14;
  int *in_stack_00000004;
  char *in_stack_00000008;
  char local_6c [80];
  int local_1c;
  void *local_18;
  void *local_14;
  int local_10;
  uint local_c;
  
  bVar14 = 0;
  local_18 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8308,"..\\engine\\palette.cpp",0xb4);
  uVar10 = 0;
  if (local_18 == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\palette.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create mapper");
  }
  local_14 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (in_stack_00000004[2],4,"..\\engine\\palette.cpp",0xbb);
  iVar7 = 0;
  if (local_14 != (void *)0x0) {
    local_1c = 0;
    if (0 < *in_stack_00000004) {
      local_10 = 0;
      do {
        pcVar12 = local_6c;
        pcVar11 = (char *)(in_stack_00000004[1] + local_10);
        do {
          cVar1 = *pcVar11;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
        pcVar12 = local_6c;
        do {
          pcVar11 = pcVar12;
          if (*pcVar12 == '.') goto LAB_00545254;
          if (*pcVar12 == '\0') break;
          pcVar11 = pcVar12 + 1;
          if (*pcVar11 == '.') goto LAB_00545254;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_00545254:
        if (pcVar11 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xcb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - No extension found");
        }
        pcVar12 = ".ACT";
        do {
          cVar1 = *pcVar12;
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
        } while (cVar1 != '\0');
        pcVar12 = local_6c;
        do {
          pcVar11 = pcVar12;
          if (*pcVar12 == '\\') goto LAB_005452ba;
          if (*pcVar12 == '\0') break;
          pcVar11 = pcVar12 + 1;
          if (*pcVar11 == '\\') goto LAB_005452ba;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_005452ba:
        if (pcVar11 == (char *)0x0) {
          pcVar11 = "rb";
          pcVar12 = "art";
        }
        else {
          pcVar11 = "rb";
          pcVar12 = &s_EmptyChar_0063e5a6;
        }
        p_Var6 = engine_dosio_c_getFile_FUN_00481a50(pcVar12,local_6c,pcVar11);
        if (p_Var6 == (_FILE *)0x0) {
          puVar9 = g_DefaultPalette;
          puVar13 = g_PaletteData;
          for (iVar7 = 0xc0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(uint *)puVar13 = *(uint *)puVar9;
            puVar9 = puVar9 + ((uint)bVar14 * -2 + 1) * 4;
            puVar13 = puVar13 + ((uint)bVar14 * -2 + 1) * 4;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
            puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
          }
        }
        else {
          _fread(g_PaletteData,0x300,1,p_Var6);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\engine\\palette.cpp",0xd9);
        }
        pcVar12 = (char *)(in_stack_00000004[1] + local_10);
        do {
          pcVar11 = pcVar12;
          if (*pcVar12 == '\\') goto LAB_00545332;
          if (*pcVar12 == '\0') break;
          pcVar11 = pcVar12 + 1;
          if (*pcVar11 == '\\') goto LAB_00545332;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_00545332:
        if (pcVar11 == (char *)0x0) {
          iVar7 = in_stack_00000004[1];
          pcVar12 = "art";
        }
        else {
          iVar7 = in_stack_00000004[1];
          pcVar12 = &s_EmptyChar_0063e5c1;
        }
        iVar7 = engine_dosio_c_getFileSize_FUN_00481880(pcVar12,(char *)(iVar7 + local_10));
        pcVar12 = (char *)(in_stack_00000004[1] + local_10);
        do {
          pcVar11 = pcVar12;
          if (*pcVar12 == '\\') goto LAB_0054537a;
          if (*pcVar12 == '\0') break;
          pcVar11 = pcVar12 + 1;
          if (*pcVar11 == '\\') goto LAB_0054537a;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_0054537a:
        if (pcVar11 == (char *)0x0) {
          iVar4 = in_stack_00000004[1];
          pcVar11 = "rb";
          pcVar12 = "art";
        }
        else {
          iVar4 = in_stack_00000004[1];
          pcVar11 = "rb";
          pcVar12 = &s_EmptyChar_0063e5cc;
        }
        p_Var6 = engine_dosio_c_getFile_FUN_00481a50(pcVar12,(char *)(iVar4 + local_10),pcVar11);
        if (p_Var6 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xf1;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to open texture");
        }
        puVar9 = (uchar *)(uVar10 * 4 + (int)local_14);
        while (0 < iVar7) {
          if ((p_Var6->_cnt < 1) || ((byte)*p_Var6->_ptr - 0xd < 0xfe)) {
            uVar8 = _fgetc(p_Var6);
          }
          else {
            pbVar5 = (byte *)p_Var6->_ptr;
            p_Var6->_cnt = p_Var6->_cnt + -1;
            p_Var6->_ptr = (char *)(pbVar5 + 1);
            uVar8 = (uint)*pbVar5;
          }
          if (uVar8 == 0xffffffff) break;
          iVar4 = uVar8 * 3;
          bVar2 = g_PaletteData[iVar4 + 1];
          local_c = (uint)bVar2;
          uVar3 = g_PaletteData[iVar4 + 2];
          if (((g_PaletteData[iVar4] != '\0') || (local_c != 0)) || (uVar3 != '\0')) {
            *puVar9 = g_PaletteData[iVar4];
            puVar9[1] = bVar2;
            uVar10 = uVar10 + 1;
            puVar9[2] = uVar3;
            puVar9 = puVar9 + 4;
          }
          iVar7 = iVar7 + -1;
          if ((uint)in_stack_00000004[2] < uVar10) {
            g_CurrentFilename = "..\\engine\\palette.cpp";
            g_CurrentLineNumber = 0x10c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Too many pixels");
          }
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\engine\\palette.cpp",0x110);
        local_1c = local_1c + 1;
        local_10 = local_10 + 0x40;
      } while (local_1c < *in_stack_00000004);
    }
    ptr = engine_colquant_c_FUN_004406c0();
    pcVar12 = in_stack_00000008;
    do {
      pcVar11 = pcVar12;
      if (*pcVar12 == '\\') goto LAB_00545459;
      if (*pcVar12 == '\0') break;
      pcVar11 = pcVar12 + 1;
      if (*pcVar11 == '\\') goto LAB_00545459;
      pcVar12 = pcVar12 + 2;
    } while (*pcVar11 != '\0');
    pcVar11 = (char *)0x0;
LAB_00545459:
    if (pcVar11 == (char *)0x0) {
      pcVar11 = "wb";
      pcVar12 = "art";
    }
    else {
      pcVar11 = "wb";
      pcVar12 = &DAT_0063e68c;
    }
    p_Var6 = engine_dosio_c_getFile_FUN_00481a50(pcVar12,in_stack_00000008,pcVar11);
    if (p_Var6 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\engine\\palette.cpp";
      g_CurrentLineNumber = 0x122;
      core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create output!");
    }
    _fwrite(ptr,0x300,1,p_Var6);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\engine\\palette.cpp",0x125);
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\engine\\palette.cpp",0x129);
    g_CurrentDebugFilename = "..\\engine\\palette.cpp";
    g_CurrentDebugLine = 0x12a;
    shape_memdbg_cpp_debugFree_FUN_0050f210(local_18);
    iVar7 = 1;
  }
  return iVar7;
}
