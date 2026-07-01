// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
// Address: 005ed730
// Address Range: [[005ed730, 005ed8e4]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730(void)

{
  HRESULT HVar1;
  HRESULT HVar2;
  DDPIXELFORMAT_union2 DVar2;
  uint uVar3;
  DDPIXELFORMAT_union3 DVar4;
  uint uVar4;
  DDPIXELFORMAT_union4 DVar5;
  DDSURFACEDESC local_70;
  
  memset(&local_70,0,0x6c);
  local_70.dwSize = 0x6c;
  HVar1 = (*g_SoftwareRenderSurface->vtable->Lock)
                    (g_SoftwareRenderSurface,(RECT *)0x0,&local_70,1,(void *)0x0);
  if (HVar1 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 686;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to lock back buffer!");
  }
  HVar2 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
  if (HVar2 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 688;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to unlock back buffer!");
  }
  g_RedBitPosition.dword = 0;
  for (DVar2 = local_70.ddpfPixelFormat.dwRedYMask; (DVar2.dwRBitMask & 1) == 0;
      DVar2.dwRBitMask = DVar2.dwRBitMask >> 1) {
    g_RedBitPosition.dword = g_RedBitPosition.dword + 1;
  }
  g_RedScaleFactor =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwRedYMask.dwRBitMask >>
                    (g_RedBitPosition.bytes[0] & 0x1f)));
  g_RedBitCount.dword = 0;
  uVar3 = g_RedScaleFactor;
  if (g_RedScaleFactor == 0) {
    g_RedBitCount.dword = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_RedBitCount.dword = g_RedBitCount.dword + 1;
    }
  }
  g_GreenBitPosition.dword = 0;
  for (DVar4 = local_70.ddpfPixelFormat.dwGreenUMask; (DVar4.dwGBitMask & 1) == 0;
      DVar4.dwGBitMask = DVar4.dwGBitMask >> 1) {
    g_GreenBitPosition.dword = g_GreenBitPosition.dword + 1;
  }
  g_GreenScaleFactor =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwGreenUMask.dwGBitMask >>
                    (g_GreenBitPosition.bytes[0] & 0x1f)));
  g_GreenBitCount.dword = 0;
  uVar4 = g_GreenScaleFactor;
  if (g_GreenScaleFactor == 0) {
    g_GreenBitCount.dword = 0x20;
  }
  else {
    for (; 1 < uVar4; uVar4 = uVar4 >> 1) {
      g_GreenBitCount.dword = g_GreenBitCount.dword + 1;
    }
  }
  g_BlueBitPosition.dword = 0;
  for (DVar5 = local_70.ddpfPixelFormat.dwBlueVMask; (DVar5.dwBBitMask & 1) == 0;
      DVar5.dwBBitMask = DVar5.dwBBitMask >> 1) {
    g_BlueBitPosition.dword = g_BlueBitPosition.dword + 1;
  }
  g_BlueScaleFactor =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.dwBlueVMask.dwBBitMask >>
                    (g_BlueBitPosition.bytes[0] & 0x1f)));
  g_BlueBitCount.dword = 0;
  uVar4 = g_BlueScaleFactor;
  if (g_BlueScaleFactor == 0) {
    g_BlueBitCount.dword = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
    return;
  }
  for (; 1 < uVar4; uVar4 = uVar4 >> 1) {
    g_BlueBitCount.dword = g_BlueBitCount.dword + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  return;
}
