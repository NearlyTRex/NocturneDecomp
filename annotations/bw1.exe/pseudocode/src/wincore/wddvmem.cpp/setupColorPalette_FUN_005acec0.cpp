// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_005acec0
// Address: 005acec0
// Address Range: [[005acec0, 005acfe7]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005acec0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005acec0(void)

{
  int iVar1;
  HRESULT HVar3;
  int iVar4;
  int iVar2;
  
  if (g_INT_01c50948 != 0) {
    (*(code *)g_APIDLL_setColorTable16)(g_UCHAR_ARRAY_01c4e9f8,g_ColorTable16);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
    return;
  }
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_INT_0061b4a0 == 8) {
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      (&g_DDPaletteBuffer[0].red)[iVar2] = g_UCHAR_ARRAY_01c4e9f8[iVar4];
      (&g_DDPaletteBuffer[0].green)[iVar2] = g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1];
      (&g_DDPaletteBuffer[0].blue)[iVar2] = g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2];
      iVar4 = iVar4 + 3;
      (&g_DDPaletteBuffer[0].flags)[iVar2] = '\x01';
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    HVar3 = (*g_DirectDrawObject->vtable->CreatePalette)
                      (g_DirectDrawObject,4,g_DDPaletteBuffer,
                       (IDirectDrawPalette **)&g_DirectDrawUnknown,(IUnknown *)0x0);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 769;
      core_main_c_displayErrorAndQuit_FUN_005030e0("setpal - Unable to create palette object");
    }
    HVar3 = (*g_DirectDrawSurface->vtable->SetPalette)(g_DirectDrawSurface,g_DirectDrawUnknown);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 775;
      core_main_c_displayErrorAndQuit_FUN_005030e0("setpal - Unable to set front buffer palette");
    }
  }
  if (g_INT_0061b4a0 < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_005acd00();
  return;
}
