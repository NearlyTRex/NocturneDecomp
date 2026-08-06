// Name: engine_2d.c_initGraphicsSystem_FUN_00401010
// Address: 00401010
// Address Range: [[00401010, 0040129a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)

#include "nocturne.h"

void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  _FILE *p_Var4;
  ulong size;
  int iVar5;
  uint uVar6;
  
  iVar3 = wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_00552b40(g_WindowWidth,g_WindowHeight);
  if (iVar3 == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 132;
    core_main_c_displayErrorAndQuit_FUN_004c8440("No room for frame buffer.  Please run SETUP");
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
            (g_ResolutionTable[g_RenderingMode].width,g_ResolutionTable[g_RenderingMode].height,8);
  engine_2d_c_loadPaletteFile_FUN_00401bd0("vga.act");
  engine_2d_c_loadLightTable_FUN_00403460("vga.lte");
  engine_2d_c_loadOrBuildColorMap_FUN_00403630("vga.map");
  engine_2d_c_buildBlendTables_FUN_00401990("vga.act");
  wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0();
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("startup","font.ndx","rb");
  if (p_Var4 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 161;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to open font.ndx");
  }
  iVar3 = 0x6afabc;
  do {
    iVar5 = iVar3 + 4;
    _fscanf(p_Var4,"%d\n",iVar3);
    iVar3 = iVar5;
  } while (iVar5 != 0x6afc3c);
  _fclose(p_Var4);
  size = engine_dosio_cpp_getFileSize_FUN_004568c0("startup","font.bin");
  g_FontBitmapData = malloc(size);
  if (g_FontBitmapData == (uchar *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 170;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to malloc font memory");
  }
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("startup","font.bin","rb");
  if (p_Var4 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 172;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to open font.bin");
  }
  _fread(g_FontBitmapData,size,1,p_Var4);
  _fclose(p_Var4);
  iVar3 = 0x80;
  iVar5 = 0;
  do {
    piVar1 = (int *)((int)g_FontCharWidths + iVar3);
    *(uchar **)((int)g_FontGlyphPtrs + iVar3) = g_FontBitmapData + iVar5;
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + *piVar1 * 0x17;
  } while (iVar3 != 0x200);
  uVar6 = 1;
  g_ReciprocalLookupTable[0] = 0xffffffff;
  iVar3 = 4;
  do {
    uVar2 = (ulonglong)uVar6;
    uVar6 = uVar6 + 1;
    *(int *)((int)g_ReciprocalLookupTable + iVar3) = (int)(0xffffffff / uVar2);
    iVar3 = iVar3 + 4;
  } while (uVar6 < 0x640);
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("art","default.act","rb");
  if (p_Var4 == (_FILE *)0x0) {
    return;
  }
  _fread(g_DefaultPalette,0x300,1,p_Var4);
  _fclose(p_Var4);
  return;
}
