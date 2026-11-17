// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005acd00
// Address: 005acd00
// Address Range: [[005acd00, 005aceb4]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005acd00(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005acd00(void)

{
  HRESULT HVar1;
  DDPIXELFORMAT_union2 DVar2;
  uint uVar3;
  DDPIXELFORMAT_union3 DVar4;
  DDPIXELFORMAT_union4 DVar5;
  DDSURFACEDESC local_70;
  
  memset(&local_70,0,0x6c);
  local_70.dwSize = 0x6c;
  HVar1 = (*g_IDirectDrawSurface_PTR_02c99308->vtable->Lock)
                    (g_IDirectDrawSurface_PTR_02c99308,(RECT *)0x0,&local_70,1,(void *)0x0);
  if (HVar1 != 0) {
    g_CHAR_PTR_01d1d400 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d1d404 = 0x2be;
    core_main_c_displayErrorAndQuit_FUN_005030e0("setColorTable16 - Unable to lock back buffer!");
  }
  HVar1 = (*g_IDirectDrawSurface_PTR_02c99308->vtable->Unlock)
                    (g_IDirectDrawSurface_PTR_02c99308,(void *)0x0);
  if (HVar1 != 0) {
    g_CHAR_PTR_01d1d400 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d1d404 = 0x2c0;
    core_main_c_displayErrorAndQuit_FUN_005030e0("setColorTable16 - Unable to unlock back buffer!");
  }
  g_BIT_INTEGER32_01c4e9d4.dword = 0;
  for (DVar2 = local_70.ddpfPixelFormat.dwRedYMask; (DVar2.dwRBitMask & 1) == 0;
      DVar2.dwRBitMask = DVar2.dwRBitMask >> 1) {
    g_BIT_INTEGER32_01c4e9d4.dword = g_BIT_INTEGER32_01c4e9d4.dword + 1;
  }
  g_INT_01c4e9d8 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwRedYMask.dwRBitMask >>
                    (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c4e9dc.dword = 0;
  uVar3 = g_INT_01c4e9d8;
  if (g_INT_01c4e9d8 == 0) {
    g_BIT_INTEGER32_01c4e9dc.dword = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_BIT_INTEGER32_01c4e9dc.dword = g_BIT_INTEGER32_01c4e9dc.dword + 1;
    }
  }
  g_BIT_INTEGER32_01c4e9e0.dword = 0;
  for (DVar4 = local_70.ddpfPixelFormat.dwGreenUMask; (DVar4.dwGBitMask & 1) == 0;
      DVar4.dwGBitMask = DVar4.dwGBitMask >> 1) {
    g_BIT_INTEGER32_01c4e9e0.dword = g_BIT_INTEGER32_01c4e9e0.dword + 1;
  }
  g_INT_01c4e9e4 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwGreenUMask.dwGBitMask >>
                    (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c4e9e8.dword = 0;
  uVar3 = g_INT_01c4e9e4;
  if (g_INT_01c4e9e4 == 0) {
    g_BIT_INTEGER32_01c4e9e8.dword = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_BIT_INTEGER32_01c4e9e8.dword = g_BIT_INTEGER32_01c4e9e8.dword + 1;
    }
  }
  g_BIT_INTEGER32_01c4e9ec.dword = 0;
  for (DVar5 = local_70.ddpfPixelFormat.dwBlueVMask; (DVar5.dwBBitMask & 1) == 0;
      DVar5.dwBBitMask = DVar5.dwBBitMask >> 1) {
    g_BIT_INTEGER32_01c4e9ec.dword = g_BIT_INTEGER32_01c4e9ec.dword + 1;
  }
  g_INT_01c4e9f0 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwBlueVMask.dwBBitMask >>
                    (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c4e9f4.dword = 0;
  uVar3 = g_INT_01c4e9f0;
  if (g_INT_01c4e9f0 == 0) {
    g_BIT_INTEGER32_01c4e9f4.dword = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
    return;
  }
  for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
    g_BIT_INTEGER32_01c4e9f4.dword = g_BIT_INTEGER32_01c4e9f4.dword + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
  return;
}
