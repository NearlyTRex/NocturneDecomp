// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0
// Address: 005537e0
// Address Range: [[005537e0, 00553907]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0(void)

{
  int iVar1;
  HRESULT HVar3;
  int iVar4;
  int iVar2;
  
  if (g_UseExternalRenderer != 0) {
    (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0();
    return;
  }
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_BitsPerPixel == 8) {
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uchar *)(iVar2 + 0x2ddf570) = g_SourcePaletteData[iVar4];
      *(uchar *)(iVar2 + 0x2ddf571) = g_SourcePaletteData[iVar4 + 1];
      *(uchar *)(iVar2 + 0x2ddf572) = g_SourcePaletteData[iVar4 + 2];
      iVar4 = iVar4 + 3;
      *(byte *)(iVar2 + 0x2ddf573) = 1;
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    HVar3 = (*g_DirectDrawObject->vtable->CreatePalette)
                      (g_DirectDrawObject,4,(PALETTEENTRY *)0x2ddf570,
                       (IDirectDrawPalette **)&g_DirectDrawUnknown,(IUnknown *)0x0);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 753;
      core_main_c_displayErrorAndQuit_FUN_004c8440("setpal - Unable to create palette object");
    }
    HVar3 = (*g_DirectDrawSurface->vtable->SetPalette)(g_DirectDrawSurface,g_DirectDrawUnknown);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 759;
      core_main_c_displayErrorAndQuit_FUN_004c8440("setpal - Unable to set front buffer palette");
    }
  }
  if (g_BitsPerPixel < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_00553620();
  return;
}
