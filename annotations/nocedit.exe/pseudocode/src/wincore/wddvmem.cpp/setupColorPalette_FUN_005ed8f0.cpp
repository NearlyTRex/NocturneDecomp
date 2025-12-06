// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
// Address: 005ed8f0
// Address Range: [[005ed8f0, 005eda17]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0(void)

{
  int iVar1;
  HRESULT HVar2;
  int iVar3;
  int iVar4;
  
  if (g_UseExternalRenderer != 0) {
    (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
    return;
  }
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_BitsPerPixel == 8) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      (&g_DDPaletteBuffer[0].red)[iVar3] = g_SourcePaletteData[iVar4];
      (&g_DDPaletteBuffer[0].green)[iVar3] = g_SourcePaletteData[iVar4 + 1];
      (&g_DDPaletteBuffer[0].blue)[iVar3] = g_SourcePaletteData[iVar4 + 2];
      iVar4 = iVar4 + 3;
      (&g_DDPaletteBuffer[0].flags)[iVar3] = '\x01';
      iVar3 = iVar1;
    } while (iVar1 != 0x400);
    HVar2 = (*g_DirectDrawObject->vtable->CreatePalette)
                      (g_DirectDrawObject,4,g_DDPaletteBuffer,
                       (IDirectDrawPalette **)&g_DirectDrawUnknown,(IUnknown *)0x0);
    if (HVar2 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("setpal - Unable to create palette object");
    }
    iVar3 = (*(code *)g_DirectDrawSurface->vtable->SetPalette)();
    if (iVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x2f7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("setpal - Unable to set front buffer palette");
    }
  }
  if (g_BitsPerPixel < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730();
  return;
}
