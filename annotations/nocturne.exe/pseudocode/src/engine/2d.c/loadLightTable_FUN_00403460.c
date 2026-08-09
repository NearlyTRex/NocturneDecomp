// Name: engine_2d.c_loadLightTable_FUN_00403460
// Address: 00403460
// Address Range: [[00403460, 004034f0]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadLightTable_FUN_00403460(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadLightTable_FUN_00403460(char *filename)

{
  int iVar1;
  _FILE *file;
  int iVar2;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004568c0("fog",filename);
  if (iVar1 == 0x1000) {
    engine_2d_c_buildLightTable_FUN_004031a0(0);
  }
  else {
    file = engine_dosio_cpp_getFile_FUN_00456a60("fog",filename,"rb");
    if (file == (_FILE *)0x0) {
      engine_2d_c_buildLightTable_FUN_004031a0(0);
      engine_2d_c_saveLightTable_FUN_00403500(filename);
    }
    else {
      _fread(g_LightTable + 1,0x100,0x20,file);
      _fclose(file);
    }
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    g_LightTable[0][iVar1] = g_LightTable[1][iVar1];
    g_LightTable[0x21][iVar1] = g_LightTable[0x20][iVar1];
    iVar1 = iVar2;
  } while (iVar2 < 0x100);
  return;
}
