// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_00589430
// Address: 00589430
// Address Range: [[00589430, 00589557]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_00589430(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_00589430(void)

{
  int iVar1;
  HRESULT HVar3;
  int iVar4;
  int iVar2;
  
  if (g_INT_01c37788 != 0) {
    (*(code *)g_PTR_0264bc2c)(g_UCHAR_ARRAY_01c35838,g_USHORT_ARRAY_01c34910);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10();
    return;
  }
  if (g_IUnknown_PTR_02661aec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02661aec->vtable->Release)(g_IUnknown_PTR_02661aec);
    g_IUnknown_PTR_02661aec = (IUnknown *)0x0;
  }
  if (g_INT_006141c0 == 8) {
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      (&g_PALETTEENTRY_ARRAY_02661b00[0].red)[iVar2] = g_UCHAR_ARRAY_01c35838[iVar4];
      (&g_PALETTEENTRY_ARRAY_02661b00[0].green)[iVar2] = g_UCHAR_ARRAY_01c35838[iVar4 + 1];
      (&g_PALETTEENTRY_ARRAY_02661b00[0].blue)[iVar2] = g_UCHAR_ARRAY_01c35838[iVar4 + 2];
      iVar4 = iVar4 + 3;
      (&g_PALETTEENTRY_ARRAY_02661b00[0].flags)[iVar2] = '\x01';
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    HVar3 = (*g_IDirectDraw_PTR_02661ae0->vtable->CreatePalette)
                      (g_IDirectDraw_PTR_02661ae0,4,g_PALETTEENTRY_ARRAY_02661b00,
                       (IDirectDrawPalette **)&g_IUnknown_PTR_02661aec,(IUnknown *)0x0);
    if (HVar3 != 0) {
      g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d046a4 = 0x2d7;
      core_main_c_displayErrorAndQuit_FUN_004e4500("setpal - Unable to create palette object");
    }
    HVar3 = (*g_IDirectDrawSurface_PTR_02661ae4->vtable->SetPalette)
                      (g_IDirectDrawSurface_PTR_02661ae4,g_IUnknown_PTR_02661aec);
    if (HVar3 != 0) {
      g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d046a4 = 0x2dd;
      core_main_c_displayErrorAndQuit_FUN_004e4500("setpal - Unable to set front buffer palette");
    }
  }
  if (g_INT_006141c0 < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_00589270();
  return;
}
