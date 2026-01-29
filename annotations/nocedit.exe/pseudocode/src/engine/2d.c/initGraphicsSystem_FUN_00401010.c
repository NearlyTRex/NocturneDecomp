// Name: engine_2d.c_initGraphicsSystem_FUN_00401010
// Address: 00401010
// Address Range: [[00401010, 00401122]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)

#include "nocturne.h"

void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)

{
  ulonglong uVar1;
  int iVar2;
  _FILE *file;
  uint uVar3;
  
  iVar2 = wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ecc10();
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10("No room for frame buffer.  Please run SETUP");
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
            (g_ResolutionTable[g_RenderingMode].width,g_ResolutionTable[g_RenderingMode].height,8);
  engine_2d_c_loadPaletteFile_FUN_004015a0("vga.act");
  engine_2d_c_loadOrBuildColorMap_FUN_00402930("vga.map");
  wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
  uVar3 = 1;
  g_ReciprocalLookupTable[0] = 0xffffffff;
  iVar2 = 4;
  do {
    uVar1 = (ulonglong)uVar3;
    uVar3 = uVar3 + 1;
    *(int *)((int)g_ReciprocalLookupTable + iVar2) = (int)(0xffffffff / uVar1);
    iVar2 = iVar2 + 4;
  } while (uVar3 < 0x640);
  file = engine_dosio_c_getFile_FUN_00481a50("art","default.act","rb");
  if (file == (_FILE *)0x0) {
    return;
  }
  _fread(g_DefaultPalette,0x300,1,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\2d.c",199);
  return;
}
