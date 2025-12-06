// Name: engine_2d.c_loadOrBuildColorMap_FUN_00402930
// Address: 00402930
// Address Range: [[00402930, 00402a68]]
// Convention: __cdecl
// Signature: void engine_2d.c_loadOrBuildColorMap_FUN_00402930(char * palette_filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402930(char *palette_filename)

{
  char cVar1;
  FILE *pFVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = &stack0xffffffa4;
  do {
    cVar1 = *palette_filename;
    *pcVar4 = cVar1;
    pcVar3 = &stack0xffffffa4;
    if (cVar1 == '\0') break;
    cVar1 = palette_filename[1];
    palette_filename = palette_filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = &stack0xffffffa4;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00402972;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_00402972;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00402972:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x770;
    core_main_c_displayErrorAndQuit_FUN_00506f10("hose!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".map");
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("fog",&stack0xffffffac,"rb");
  if (pFVar2 != (FILE *)0x0) {
    crt_stdio_c_fread_FUN_005fd990(g_ColorCubeLookup,1,0x8000,pFVar2);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\engine\\2d.c",0x77c);
    return;
  }
  engine_2d_c_buildColorLookupTable_FUN_00402870();
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("fog",&stack0xffffffb4,"wb");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x777;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write quick map!");
  }
  crt_stdio_c_fwrite_FUN_005fdc00(g_ColorCubeLookup,1,0x8000,pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\engine\\2d.c",0x779);
  return;
}
