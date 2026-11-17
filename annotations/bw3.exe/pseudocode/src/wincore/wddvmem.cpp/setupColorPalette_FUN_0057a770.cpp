// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770
// Address: 0057a770
// Address Range: [[0057a770, 0057a897]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_0057a770(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_0057a770(void)

{
  int iVar1;
  HRESULT HVar3;
  int iVar4;
  int iVar2;
  
  if (g_INT_01c6cee8 != 0) {
    (*(code *)g_PTR_02cf6058)(g_UCHAR_ARRAY_01c6af98,g_USHORT_ARRAY_01c6a070);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
    return;
  }
  if (g_IUnknown_PTR_02d0bcec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02d0bcec->vtable->Release)(g_IUnknown_PTR_02d0bcec);
    g_IUnknown_PTR_02d0bcec = (IUnknown *)0x0;
  }
  if (g_INT_005fba20 == 8) {
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      (&g_PALETTEENTRY_ARRAY_02d0bd18[0].red)[iVar2] = g_UCHAR_ARRAY_01c6af98[iVar4];
      (&g_PALETTEENTRY_ARRAY_02d0bd18[0].green)[iVar2] = g_UCHAR_ARRAY_01c6af98[iVar4 + 1];
      (&g_PALETTEENTRY_ARRAY_02d0bd18[0].blue)[iVar2] = g_UCHAR_ARRAY_01c6af98[iVar4 + 2];
      iVar4 = iVar4 + 3;
      (&g_PALETTEENTRY_ARRAY_02d0bd18[0].flags)[iVar2] = '\x01';
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    HVar3 = (*g_IDirectDraw_PTR_02d0bce0->vtable->CreatePalette)
                      (g_IDirectDraw_PTR_02d0bce0,4,g_PALETTEENTRY_ARRAY_02d0bd18,
                       (IDirectDrawPalette **)&g_IUnknown_PTR_02d0bcec,(IUnknown *)0x0);
    if (HVar3 != 0) {
      g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d71de4 = 0x301;
      core_main_c_displayErrorAndQuit_FUN_004e4330("setpal - Unable to create palette object");
    }
    HVar3 = (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->SetPalette)
                      (g_IDirectDrawSurface_PTR_02d0bce4,g_IUnknown_PTR_02d0bcec);
    if (HVar3 != 0) {
      g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d71de4 = 0x307;
      core_main_c_displayErrorAndQuit_FUN_004e4330("setpal - Unable to set front buffer palette");
    }
  }
  if (g_INT_005fba20 < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_0057a5b0();
  return;
}
