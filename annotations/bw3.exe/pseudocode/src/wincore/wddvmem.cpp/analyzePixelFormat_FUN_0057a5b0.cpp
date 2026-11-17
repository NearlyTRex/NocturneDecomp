// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_0057a5b0
// Address: 0057a5b0
// Address Range: [[0057a5b0, 0057a764]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_0057a5b0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_0057a5b0(void)

{
  HRESULT HVar1;
  DDPIXELFORMAT_union2 DVar2;
  uint uVar3;
  DDPIXELFORMAT_union3 DVar4;
  DDPIXELFORMAT_union4 DVar5;
  DDSURFACEDESC local_70;
  
  memset(&local_70,0,0x6c);
  local_70.dwSize = 0x6c;
  HVar1 = (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Lock)
                    (g_IDirectDrawSurface_PTR_02d0bce8,(RECT *)0x0,&local_70,1,(void *)0x0);
  if (HVar1 != 0) {
    g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d71de4 = 0x2be;
    core_main_c_displayErrorAndQuit_FUN_004e4330("setColorTable16 - Unable to lock back buffer!");
  }
  HVar1 = (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Unlock)
                    (g_IDirectDrawSurface_PTR_02d0bce8,(void *)0x0);
  if (HVar1 != 0) {
    g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d71de4 = 0x2c0;
    core_main_c_displayErrorAndQuit_FUN_004e4330("setColorTable16 - Unable to unlock back buffer!");
  }
  g_BIT_INTEGER32_01c6af74.dword = 0;
  for (DVar2 = local_70.ddpfPixelFormat.dwRedYMask; (DVar2.dwRBitMask & 1) == 0;
      DVar2.dwRBitMask = DVar2.dwRBitMask >> 1) {
    g_BIT_INTEGER32_01c6af74.dword = g_BIT_INTEGER32_01c6af74.dword + 1;
  }
  g_INT_01c6af78 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwRedYMask.dwRBitMask >>
                    (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c6af7c.dword = 0;
  uVar3 = g_INT_01c6af78;
  if (g_INT_01c6af78 == 0) {
    g_BIT_INTEGER32_01c6af7c.dword = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_BIT_INTEGER32_01c6af7c.dword = g_BIT_INTEGER32_01c6af7c.dword + 1;
    }
  }
  g_BIT_INTEGER32_01c6af80.dword = 0;
  for (DVar4 = local_70.ddpfPixelFormat.dwGreenUMask; (DVar4.dwGBitMask & 1) == 0;
      DVar4.dwGBitMask = DVar4.dwGBitMask >> 1) {
    g_BIT_INTEGER32_01c6af80.dword = g_BIT_INTEGER32_01c6af80.dword + 1;
  }
  g_INT_01c6af84 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwGreenUMask.dwGBitMask >>
                    (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c6af88.dword = 0;
  uVar3 = g_INT_01c6af84;
  if (g_INT_01c6af84 == 0) {
    g_BIT_INTEGER32_01c6af88.dword = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_BIT_INTEGER32_01c6af88.dword = g_BIT_INTEGER32_01c6af88.dword + 1;
    }
  }
  g_BIT_INTEGER32_01c6af8c.dword = 0;
  for (DVar5 = local_70.ddpfPixelFormat.dwBlueVMask; (DVar5.dwBBitMask & 1) == 0;
      DVar5.dwBBitMask = DVar5.dwBBitMask >> 1) {
    g_BIT_INTEGER32_01c6af8c.dword = g_BIT_INTEGER32_01c6af8c.dword + 1;
  }
  g_INT_01c6af90 =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwBlueVMask.dwBBitMask >>
                    (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)));
  g_BIT_INTEGER32_01c6af94.dword = 0;
  uVar3 = g_INT_01c6af90;
  if (g_INT_01c6af90 == 0) {
    g_BIT_INTEGER32_01c6af94.dword = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
    return;
  }
  for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
    g_BIT_INTEGER32_01c6af94.dword = g_BIT_INTEGER32_01c6af94.dword + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
  return;
}
