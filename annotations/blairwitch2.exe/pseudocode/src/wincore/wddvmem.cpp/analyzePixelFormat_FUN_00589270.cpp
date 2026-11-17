// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_00589270
// Address: 00589270
// Address Range: [[00589270, 00589424]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_00589270(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_00589270(void)

{
  HRESULT HVar1;
  DDPIXELFORMAT_union2 DVar2;
  uint uVar3;
  DDPIXELFORMAT_union3 DVar4;
  DDPIXELFORMAT_union4 DVar5;
  DDSURFACEDESC local_70;
  
  memset(&local_70,0,0x6c);
  local_70.dwSize = 0x6c;
  HVar1 = (*g_IDirectDrawSurface_PTR_02661ae8->vtable->Lock)
                    (g_IDirectDrawSurface_PTR_02661ae8,(RECT *)0x0,&local_70,1,(void *)0x0);
  if (HVar1 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d046a4 = 0x294;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setColorTable16 - Unable to lock back buffer!");
  }
  HVar1 = (*g_IDirectDrawSurface_PTR_02661ae8->vtable->Unlock)
                    (g_IDirectDrawSurface_PTR_02661ae8,(void *)0x0);
  if (HVar1 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d046a4 = 0x296;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setColorTable16 - Unable to unlock back buffer!");
  }
  g_BIT_INTEGER32_01c35814.dword = 0;
  for (DVar2 = local_70.ddpfPixelFormat.dwRedYMask; (DVar2.dwRBitMask & 1) == 0;
      DVar2.dwRBitMask = DVar2.dwRBitMask >> 1) {
    g_BIT_INTEGER32_01c35814.dword = g_BIT_INTEGER32_01c35814.dword + 1;
  }
  g_INT_01c35818 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwRedYMask.dwRBitMask >>
                    (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c3581c.dword = 0;
  uVar3 = g_INT_01c35818;
  if (g_INT_01c35818 == 0) {
    g_BIT_INTEGER32_01c3581c.dword = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_BIT_INTEGER32_01c3581c.dword = g_BIT_INTEGER32_01c3581c.dword + 1;
    }
  }
  g_BIT_INTEGER32_01c35820.dword = 0;
  for (DVar4 = local_70.ddpfPixelFormat.dwGreenUMask; (DVar4.dwGBitMask & 1) == 0;
      DVar4.dwGBitMask = DVar4.dwGBitMask >> 1) {
    g_BIT_INTEGER32_01c35820.dword = g_BIT_INTEGER32_01c35820.dword + 1;
  }
  g_INT_01c35824 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwGreenUMask.dwGBitMask >>
                    (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c35828.dword = 0;
  uVar3 = g_INT_01c35824;
  if (g_INT_01c35824 == 0) {
    g_BIT_INTEGER32_01c35828.dword = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_BIT_INTEGER32_01c35828.dword = g_BIT_INTEGER32_01c35828.dword + 1;
    }
  }
  g_BIT_INTEGER32_01c3582c.dword = 0;
  for (DVar5 = local_70.ddpfPixelFormat.dwBlueVMask; (DVar5.dwBBitMask & 1) == 0;
      DVar5.dwBBitMask = DVar5.dwBBitMask >> 1) {
    g_BIT_INTEGER32_01c3582c.dword = g_BIT_INTEGER32_01c3582c.dword + 1;
  }
  g_INT_01c35830 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwBlueVMask.dwBBitMask >>
                    (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c35834.dword = 0;
  uVar3 = g_INT_01c35830;
  if (g_INT_01c35830 == 0) {
    g_BIT_INTEGER32_01c35834.dword = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10();
    return;
  }
  for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
    g_BIT_INTEGER32_01c35834.dword = g_BIT_INTEGER32_01c35834.dword + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10();
  return;
}
