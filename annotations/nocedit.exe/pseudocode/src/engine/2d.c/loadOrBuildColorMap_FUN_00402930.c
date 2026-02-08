// Name: engine_2d.c_loadOrBuildColorMap_FUN_00402930
// Address: 00402930
// Address Range: [[00402930, 00402a68]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402930(char *palette_filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402930(char *palette_filename)

{
  char cVar1;
  _FILE *p_Var2;
  char *pcVar3;
  char *pcVar4;
  char local_5c [80];
  
  pcVar4 = local_5c;
  do {
    cVar1 = *palette_filename;
    *pcVar4 = cVar1;
    pcVar3 = local_5c;
    if (cVar1 == '\0') break;
    cVar1 = palette_filename[1];
    palette_filename = palette_filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_5c;
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
  _sprintf(pcVar4,".map");
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50("fog",local_5c,"rb");
  if (p_Var2 != (_FILE *)0x0) {
    _fread(g_ColorCubeLookup,1,0x8000,p_Var2);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\engine\\2d.c",0x77c);
    return;
  }
  engine_2d_c_buildColorLookupTable_FUN_00402870();
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50("fog",local_5c,"wb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x777;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write quick map!");
  }
  _fwrite(g_ColorCubeLookup,1,0x8000,p_Var2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\engine\\2d.c",0x779);
  return;
}
