// Name: engine_pcx.c_saveScreenRaw16_FUN_00548d20
// Address: 00548d20
// MANUAL RECONSTRUCTION
// Address Range: [[00548d20, 00548ef1]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw16_FUN_00548d20(char *filename)

#include "nocturne.h"

void __cdecl engine_pcx_c_saveScreenRaw16_FUN_00548d20(char *filename)

{
  _FILE *file;
  uint uVar3;
  int iVar3;
  uint uVar4;
  char *pcVar6;
  ushort *puVar6;
  char local_70 [80];
  int local_14;
  ushort uVar2;

  strcpy(local_70,filename);
  pcVar6 = strchr(local_70,'.');
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw16 - No ext found");
  }
  strcpy(pcVar6,".RAW");
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (local_70,(char *)0x0,"wb","..\\engine\\pcx.c",0x6c);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x6d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw16 - Unable to open output");
  }
  local_14 = 0;
  if (0 < g_WindowHeight) {
    do {
      iVar3 = 0;
      puVar6 = (ushort *)g_ScreenBufferArray[local_14];
      if (0 < g_WindowWidth) {
        do {
          uVar2 = *puVar6;
          uVar3 = (uint)(uVar2 >> (g_GreenBitPosition.bytes[0] & 0x1f)) * g_GreenScaleFactor;
          uVar4 = (uint)(uVar2 >> (g_BlueBitPosition.bytes[0] & 0x1f)) * g_BlueScaleFactor;
          _fputc((uint)(uVar2 >> (g_RedBitPosition.bytes[0] & 0x1f)) * g_RedScaleFactor & 0xff,
                     file);
          _fputc(uVar3 & 0xff,file);
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + 1;
          _fputc(uVar4 & 0xff,file);
        } while (iVar3 < g_WindowWidth);
      }
      local_14 = local_14 + 1;
    } while (local_14 < g_WindowHeight);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0x84);
  return;
}
