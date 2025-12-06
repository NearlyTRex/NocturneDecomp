// Name: engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
// Address: 005490c0
// Address Range: [[005490c0, 00549312]]
// Convention: __cdecl
// Signature: void engine_pcx.c_saveScreenshotGeneral_FUN_005490c0(char * filename)

#include "nocturne.h"

void __cdecl engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(char *filename)

{
  byte bVar1;
  FILE *file;
  BADSPACEBASE *in_ESP;
  int iVar2;
  uint character;
  short sStack_7c;
  short sStack_7a;
  byte uStack_43;
  short local_42;
  ushort local_40;
  short sStack_3e;
  short sStack_3c;
  
  if (g_BitsPerPixel == 0x10) {
    engine_pcx_c_saveScreenRaw16_FUN_00548d20(filename);
    return;
  }
  if (g_BitsPerPixel == 0x20) {
    engine_pcx_c_saveScreenRaw32_FUN_00548f00(filename);
    return;
  }
  crt_memory_c_memset_FUN_005fde40(&stack0xffffff78,0,0x80);
  local_40 = 1;
  sStack_7c = (short)g_WindowWidth + -1;
  uStack_43 = 1;
  sStack_7a = (short)g_WindowHeight + -1;
  local_42 = (short)g_WindowWidth;
  sStack_3e = (short)g_WindowWidth;
  sStack_3c = (short)g_WindowHeight;
  if ((g_WindowWidth == 0x280) && (g_WindowHeight == 0xf0)) {
    sStack_3c = (short)g_WindowHeight * 2;
    sStack_7a = (short)g_WindowHeight * 2 + -1;
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (filename,(char *)0x0,"wb","..\\engine\\pcx.c",0xec);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0xed;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot write .PCX");
  }
  iVar2 = 0;
  crt_stdio_c_fwrite_FUN_005fdc00(&sStack_7c,1,0x80,file);
  if (0 < g_WindowHeight) {
    do {
      engine_pcx_c_writePCXScanline_FUN_00548c50(iVar2,file);
      if ((g_WindowWidth == 0x280) && (g_WindowHeight == 0xf0)) {
        engine_pcx_c_writePCXScanline_FUN_00548c50(iVar2,file);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_WindowHeight);
  }
  if (((file->_flag & 0x400) == 0) && (1 < file->_bufsize - file->_cnt)) {
    *file->_ptr = '\f';
    if (*file->_ptr != '\n') {
      bVar1 = *(byte *)((int)&file->_flag + 1);
      file->_cnt = file->_cnt + 1;
      file->_ptr = file->_ptr + 1;
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
      goto LAB_0054923a;
    }
    iVar2 = 10;
  }
  else {
    iVar2 = 0xc;
  }
  crt_stdio_c_fputc_FUN_006007a0(iVar2,file);
LAB_0054923a:
  iVar2 = 0;
  do {
    if (((file->_flag & 0x400) == 0) && (1 < file->_bufsize - file->_cnt)) {
      *file->_ptr = g_SourcePaletteData[iVar2];
      if (*file->_ptr == '\n') {
        character = 10;
        goto LAB_00549250;
      }
      bVar1 = *(byte *)((int)&file->_flag + 1);
      file->_cnt = file->_cnt + 1;
      file->_ptr = file->_ptr + 1;
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
    }
    else {
      character = (uint)(byte)g_SourcePaletteData[iVar2];
LAB_00549250:
      crt_stdio_c_fputc_FUN_006007a0(character,file);
    }
    iVar2 = iVar2 + 1;
    if (0x2ff < iVar2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0x104);
      return;
    }
  } while( true );
}
