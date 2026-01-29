// Name: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
// Address Range: [[00545180, 00545643]]
// Convention: unknown
// Signature: undefined4 engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void)

#include "nocturne.h"

uint engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  _FILE *p_Var5;
  int iVar6;
  uint uVar7;
  void *ptr;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uchar *puVar11;
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
  uVar9 = 0;
  if (local_18 == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\palette.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create mapper");
  }
  local_14 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (in_stack_00000004[2],4,"..\\engine\\palette.cpp",0xbb);
  uVar8 = 0;
  if (local_14 != (void *)0x0) {
    local_1c = 0;
    if (0 < *in_stack_00000004) {
      local_10 = 0;
      do {
        pcVar12 = local_6c;
        pcVar10 = (char *)(in_stack_00000004[1] + local_10);
        do {
          cVar1 = *pcVar10;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
        pcVar12 = local_6c;
        do {
          pcVar10 = pcVar12;
          if (*pcVar12 == '.') goto LAB_00545254;
          if (*pcVar12 == '\0') break;
          pcVar10 = pcVar12 + 1;
          if (*pcVar10 == '.') goto LAB_00545254;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_00545254:
        if (pcVar10 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xcb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - No extension found");
        }
        pcVar12 = ".ACT";
        do {
          cVar1 = *pcVar12;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        pcVar12 = local_6c;
        do {
          pcVar10 = pcVar12;
          if (*pcVar12 == '\\') goto LAB_005452ba;
          if (*pcVar12 == '\0') break;
          pcVar10 = pcVar12 + 1;
          if (*pcVar10 == '\\') goto LAB_005452ba;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_005452ba:
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "rb";
          pcVar12 = "art";
        }
        else {
          pcVar10 = "rb";
          pcVar12 = &s_EmptyChar_0063e5a6;
        }
        p_Var5 = engine_dosio_c_getFile_FUN_00481a50(pcVar12,local_6c,pcVar10);
        if (p_Var5 == (_FILE *)0x0) {
          puVar11 = g_DefaultPalette;
          puVar13 = (uchar *)&DAT_02fd8d20;
          for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(uint *)puVar13 = *(uint *)puVar11;
            puVar11 = puVar11 + ((uint)bVar14 * -2 + 1) * 4;
            puVar13 = puVar13 + ((uint)bVar14 * -2 + 1) * 4;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
            puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
          }
        }
        else {
          _fread(&DAT_02fd8d20,0x300,1,p_Var5);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\engine\\palette.cpp",0xd9);
        }
        pcVar12 = (char *)(in_stack_00000004[1] + local_10);
        do {
          pcVar10 = pcVar12;
          if (*pcVar12 == '\\') goto LAB_00545332;
          if (*pcVar12 == '\0') break;
          pcVar10 = pcVar12 + 1;
          if (*pcVar10 == '\\') goto LAB_00545332;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_00545332:
        if (pcVar10 == (char *)0x0) {
          iVar6 = in_stack_00000004[1];
          pcVar12 = "art";
        }
        else {
          iVar6 = in_stack_00000004[1];
          pcVar12 = &s_EmptyChar_0063e5c1;
        }
        iVar6 = engine_dosio_c_getFileSize_FUN_00481880(pcVar12,(char *)(iVar6 + local_10));
        pcVar12 = (char *)(in_stack_00000004[1] + local_10);
        do {
          pcVar10 = pcVar12;
          if (*pcVar12 == '\\') goto LAB_0054537a;
          if (*pcVar12 == '\0') break;
          pcVar10 = pcVar12 + 1;
          if (*pcVar10 == '\\') goto LAB_0054537a;
          pcVar12 = pcVar12 + 2;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
LAB_0054537a:
        if (pcVar10 == (char *)0x0) {
          iVar3 = in_stack_00000004[1];
          pcVar10 = "rb";
          pcVar12 = "art";
        }
        else {
          iVar3 = in_stack_00000004[1];
          pcVar10 = "rb";
          pcVar12 = &s_EmptyChar_0063e5cc;
        }
        p_Var5 = engine_dosio_c_getFile_FUN_00481a50(pcVar12,(char *)(iVar3 + local_10),pcVar10);
        if (p_Var5 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xf1;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to open texture");
        }
        pcVar12 = (char *)(uVar9 * 4 + (int)local_14);
        while (0 < iVar6) {
          if ((p_Var5->_cnt < 1) || ((byte)*p_Var5->_ptr - 0xd < 0xfe)) {
            uVar7 = _fgetc(p_Var5);
          }
          else {
            pbVar4 = (byte *)p_Var5->_ptr;
            p_Var5->_cnt = p_Var5->_cnt + -1;
            p_Var5->_ptr = (char *)(pbVar4 + 1);
            uVar7 = (uint)*pbVar4;
          }
          if (uVar7 == 0xffffffff) break;
          iVar3 = uVar7 * 3;
          bVar2 = *(byte *)((int)&DAT_02fd8d20 + iVar3 + 1);
          local_c = (uint)bVar2;
          cVar1 = *(char *)((int)&DAT_02fd8d20 + iVar3 + 2);
          if (((*(char *)((int)&DAT_02fd8d20 + iVar3) != '\0') || (local_c != 0)) || (cVar1 != '\0')
             ) {
            *pcVar12 = *(char *)((int)&DAT_02fd8d20 + iVar3);
            pcVar12[1] = bVar2;
            uVar9 = uVar9 + 1;
            pcVar12[2] = cVar1;
            pcVar12 = pcVar12 + 4;
          }
          iVar6 = iVar6 + -1;
          if ((uint)in_stack_00000004[2] < uVar9) {
            g_CurrentFilename = "..\\engine\\palette.cpp";
            g_CurrentLineNumber = 0x10c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Too many pixels");
          }
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\engine\\palette.cpp",0x110);
        local_1c = local_1c + 1;
        local_10 = local_10 + 0x40;
      } while (local_1c < *in_stack_00000004);
    }
    ptr = (void *)engine_colquant_c_FUN_004406c0();
    pcVar12 = in_stack_00000008;
    do {
      pcVar10 = pcVar12;
      if (*pcVar12 == '\\') goto LAB_00545459;
      if (*pcVar12 == '\0') break;
      pcVar10 = pcVar12 + 1;
      if (*pcVar10 == '\\') goto LAB_00545459;
      pcVar12 = pcVar12 + 2;
    } while (*pcVar10 != '\0');
    pcVar10 = (char *)0x0;
LAB_00545459:
    if (pcVar10 == (char *)0x0) {
      pcVar10 = "wb";
      pcVar12 = "art";
    }
    else {
      pcVar10 = "wb";
      pcVar12 = &DAT_0063e68c;
    }
    p_Var5 = engine_dosio_c_getFile_FUN_00481a50(pcVar12,in_stack_00000008,pcVar10);
    if (p_Var5 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\engine\\palette.cpp";
      g_CurrentLineNumber = 0x122;
      core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create output!");
    }
    _fwrite(ptr,0x300,1,p_Var5);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\engine\\palette.cpp",0x125);
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\engine\\palette.cpp",0x129);
    g_CurrentDebugFilename = "..\\engine\\palette.cpp";
    g_CurrentDebugLine = 0x12a;
    shape_memdbg_cpp_debugFree_FUN_0050f210(local_18);
    uVar8 = 1;
  }
  return uVar8;
}
