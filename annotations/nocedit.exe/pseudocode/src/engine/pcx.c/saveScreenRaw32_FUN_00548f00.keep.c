// Name: engine_pcx.c_saveScreenRaw32_FUN_00548f00
// Address: 00548f00
// MANUAL RECONSTRUCTION
// Address Range: [[00548f00, 005490bd]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00548f00(char *filename)

#include "nocturne.h"

void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00548f00(char *filename)

{
  _FILE *file;
  uint uVar4;
  uint *puVar2;
  uint uVar3;
  char *pcVar7;
  int iVar5;
  char local_6c [80];
  int local_14;

  strcpy(local_6c,filename);
  pcVar7 = strchr(local_6c,'.');
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x98;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw32 - No ext found");
  }
  strcpy(pcVar7,".RAW");
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (local_6c,(char *)0x0,"wb","..\\engine\\pcx.c",0x9d);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x9e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < g_WindowHeight) {
    do {
      iVar5 = 0;
      puVar2 = (uint *)g_ScreenBufferArray[local_14];
      if (0 < g_WindowWidth) {
        do {
          uVar3 = (*puVar2 >> (g_GreenBitPosition.bytes[0] & 0x1f)) * g_GreenScaleFactor;
          uVar4 = (*puVar2 >> (g_BlueBitPosition.bytes[0] & 0x1f)) * g_BlueScaleFactor;
          _fputc(g_RedScaleFactor * (*puVar2 >> (g_RedBitPosition.bytes[0] & 0x1f)) & 0xff,file)
          ;
          _fputc(uVar3 & 0xff,file);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          _fputc(uVar4 & 0xff,file);
        } while (iVar5 < g_WindowWidth);
      }
      local_14 = local_14 + 1;
    } while (local_14 < g_WindowHeight);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0xb5);
  return;
}
