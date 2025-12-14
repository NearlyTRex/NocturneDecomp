// Name: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
// Address Range: [[00545180, 00545643]]
// Convention: unknown
// Signature: undefined engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180()

#include "nocturne.h"

uint engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  void *pvVar6;
  FILE *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  BADSPACEBASE *in_ESP;
  uint uVar11;
  char *pcVar12;
  uchar *puVar13;
  char *pcVar14;
  uchar *puVar15;
  byte bVar16;
  int unaff_retaddr;
  int in_stack_00000004;
  void *in_stack_0000000c;
  int *in_stack_00000010;
  char *in_stack_00000018;
  int local_10;
  int local_c;
  uint uVar17;
  
  bVar16 = 0;
  pvVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8308,"..\\engine\\palette.cpp",0xb4);
  uVar11 = 0;
  if (pvVar5 == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\palette.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create mapper");
  }
  pvVar6 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (*(SIZE_T *)((int)in_stack_0000000c + 8),4,"..\\engine\\palette.cpp",0xbb);
  uVar10 = 0;
  if (pvVar6 != (void *)0x0) {
    local_10 = 0;
    if (0 < *in_stack_00000010) {
      uVar17 = 0;
      do {
        pcVar14 = &stack0xffffffa0;
        pcVar12 = (char *)(in_stack_00000010[1] + uVar17);
        do {
          cVar1 = *pcVar12;
          *pcVar14 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar14[1] = cVar1;
          pcVar14 = pcVar14 + 2;
        } while (cVar1 != '\0');
        pcVar14 = &stack0xffffffa0;
        do {
          pcVar12 = pcVar14;
          if (*pcVar14 == '.') goto LAB_00545254;
          if (*pcVar14 == '\0') break;
          pcVar12 = pcVar14 + 1;
          if (*pcVar12 == '.') goto LAB_00545254;
          pcVar14 = pcVar14 + 2;
        } while (*pcVar12 != '\0');
        pcVar12 = (char *)0x0;
LAB_00545254:
        if (pcVar12 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xcb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - No extension found");
        }
        pcVar14 = ".ACT";
        do {
          cVar1 = *pcVar14;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
        pcVar14 = &stack0xffffff8c;
        do {
          pcVar12 = pcVar14;
          if (*pcVar14 == '\\') goto LAB_005452ba;
          if (*pcVar14 == '\0') break;
          pcVar12 = pcVar14 + 1;
          if (*pcVar12 == '\\') goto LAB_005452ba;
          pcVar14 = pcVar14 + 2;
        } while (*pcVar12 != '\0');
        pcVar12 = (char *)0x0;
LAB_005452ba:
        if (pcVar12 == (char *)0x0) {
          pcVar12 = "rb";
          pcVar14 = "art";
        }
        else {
          pcVar12 = "rb";
          pcVar14 = &s_EmptyChar_0063e5a6;
        }
        pFVar7 = engine_dosio_c_getFile_FUN_00481a50(pcVar14,&stack0xffffff8c,pcVar12);
        if (pFVar7 == (FILE *)0x0) {
          puVar13 = g_DefaultPalette;
          puVar15 = (uchar *)&DAT_02fd8d20;
          for (iVar8 = 0xc0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(uint *)puVar15 = *(uint *)puVar13;
            puVar13 = puVar13 + ((uint)bVar16 * -2 + 1) * 4;
            puVar15 = puVar15 + ((uint)bVar16 * -2 + 1) * 4;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
            puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
          }
        }
        else {
          crt_stdio_c_fread_FUN_005fd990(&DAT_02fd8d20,0x300,1,pFVar7);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\palette.cpp",0xd9);
        }
        pcVar14 = (char *)(*(int *)(unaff_retaddr + 4) + (int)pvVar5);
        do {
          pcVar12 = pcVar14;
          if (*pcVar14 == '\\') goto LAB_00545332;
          if (*pcVar14 == '\0') break;
          pcVar12 = pcVar14 + 1;
          if (*pcVar12 == '\\') goto LAB_00545332;
          pcVar14 = pcVar14 + 2;
        } while (*pcVar12 != '\0');
        pcVar12 = (char *)0x0;
LAB_00545332:
        if (pcVar12 == (char *)0x0) {
          iVar8 = *(int *)(unaff_retaddr + 4);
          pcVar14 = "art";
        }
        else {
          iVar8 = *(int *)(unaff_retaddr + 4);
          pcVar14 = &s_EmptyChar_0063e5c1;
        }
        iVar8 = engine_dosio_c_getFileSize_FUN_00481880(pcVar14,(char *)(iVar8 + (int)pvVar5));
        pcVar14 = (char *)(*(int *)(in_stack_00000004 + 4) + local_10);
        do {
          pcVar12 = pcVar14;
          if (*pcVar14 == '\\') goto LAB_0054537a;
          if (*pcVar14 == '\0') break;
          pcVar12 = pcVar14 + 1;
          if (*pcVar12 == '\\') goto LAB_0054537a;
          pcVar14 = pcVar14 + 2;
        } while (*pcVar12 != '\0');
        pcVar12 = (char *)0x0;
LAB_0054537a:
        if (pcVar12 == (char *)0x0) {
          iVar3 = *(int *)(in_stack_00000004 + 4);
          pcVar12 = "rb";
          pcVar14 = "art";
        }
        else {
          iVar3 = *(int *)(in_stack_00000004 + 4);
          pcVar12 = "rb";
          pcVar14 = &s_EmptyChar_0063e5cc;
        }
        pFVar7 = engine_dosio_c_getFile_FUN_00481a50(pcVar14,(char *)(iVar3 + local_10),pcVar12);
        if (pFVar7 == (FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xf1;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to open texture");
        }
        pcVar14 = (char *)(uVar11 * 4 + local_c);
        while (0 < iVar8) {
          if ((pFVar7->_cnt < 1) || ((byte)*pFVar7->_ptr - 0xd < 0xfe)) {
            uVar9 = crt_stdio_c_fgetc_FUN_005fe840(pFVar7);
          }
          else {
            pbVar4 = (byte *)pFVar7->_ptr;
            pFVar7->_cnt = pFVar7->_cnt + -1;
            pFVar7->_ptr = (char *)(pbVar4 + 1);
            uVar9 = (uint)*pbVar4;
          }
          if (uVar9 == 0xffffffff) break;
          iVar3 = uVar9 * 3;
          bVar2 = *(byte *)((int)&DAT_02fd8d20 + iVar3 + 1);
          uVar17 = (uint)bVar2;
          cVar1 = *(char *)((int)&DAT_02fd8d20 + iVar3 + 2);
          if (((*(char *)((int)&DAT_02fd8d20 + iVar3) != '\0') || (uVar17 != 0)) || (cVar1 != '\0'))
          {
            *pcVar14 = *(char *)((int)&DAT_02fd8d20 + iVar3);
            pcVar14[1] = bVar2;
            uVar11 = uVar11 + 1;
            pcVar14[2] = cVar1;
            pcVar14 = pcVar14 + 4;
          }
          iVar8 = iVar8 + -1;
          if (*(uint *)((int)in_stack_0000000c + 8) < uVar11) {
            g_CurrentFilename = "..\\engine\\palette.cpp";
            g_CurrentLineNumber = 0x10c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Too many pixels");
          }
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\palette.cpp",0x110);
        uVar17 = uVar17 + 0x40;
        local_10 = local_10 + 1;
      } while (local_10 < *in_stack_00000010);
    }
    pvVar5 = (void *)engine_colquant_c_FUN_004406c0();
    pcVar14 = in_stack_00000018;
    do {
      pcVar12 = pcVar14;
      if (*pcVar14 == '\\') goto LAB_00545459;
      if (*pcVar14 == '\0') break;
      pcVar12 = pcVar14 + 1;
      if (*pcVar12 == '\\') goto LAB_00545459;
      pcVar14 = pcVar14 + 2;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
LAB_00545459:
    if (pcVar12 == (char *)0x0) {
      pcVar12 = "wb";
      pcVar14 = "art";
    }
    else {
      pcVar12 = "wb";
      pcVar14 = &DAT_0063e68c;
    }
    pFVar7 = engine_dosio_c_getFile_FUN_00481a50(pcVar14,in_stack_00000018,pcVar12);
    if (pFVar7 == (FILE *)0x0) {
      g_CurrentFilename = "..\\engine\\palette.cpp";
      g_CurrentLineNumber = 0x122;
      core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create output!");
    }
    crt_stdio_c_fwrite_FUN_005fdc00(pvVar5,0x300,1,pFVar7);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\palette.cpp",0x125);
    shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_0000000c,"..\\engine\\palette.cpp",0x129);
    g_CurrentDebugFilename = "..\\engine\\palette.cpp";
    g_CurrentDebugLine = 0x12a;
    shape_memdbg_cpp_debugFree_FUN_0050f210(in_stack_0000000c);
    uVar10 = 1;
  }
  return uVar10;
}
