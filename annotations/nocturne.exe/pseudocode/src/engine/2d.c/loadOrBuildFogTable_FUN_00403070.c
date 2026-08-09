// Name: engine_2d.c_loadOrBuildFogTable_FUN_00403070
// Address: 00403070
// Address Range: [[00403070, 0040312f]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadOrBuildFogTable_FUN_00403070(char *filename,int fog_color_index)

#include "nocturne.h"

void __cdecl engine_2d_c_loadOrBuildFogTable_FUN_00403070(char *filename,int fog_color_index)

{
  uchar uVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("fog",filename,"rb");
  if (file == (_FILE *)0x0) {
    engine_2d_c_buildFogTable_FUN_00402e90(fog_color_index);
    engine_2d_c_saveFogTable_FUN_00403130(filename);
    file = engine_dosio_cpp_getFile_FUN_00456a60("fog",filename,"rb");
  }
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 1692;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to read fog table.");
  }
  else {
    _fread(g_FogTable + 1,0x100,0x10,file);
    _fclose(file);
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    g_FogTable[0x10][iVar3] = (uchar)fog_color_index;
    uVar1 = g_FogTable[1][iVar3];
    g_FogTable[0x11][iVar3] = (uchar)fog_color_index;
    g_FogTable[0][iVar3] = uVar1;
    iVar3 = iVar2;
  } while (iVar2 < 0x100);
  engine_special_cpp_setFogColorFromPalette_FUN_00532a80(fog_color_index);
  return;
}
