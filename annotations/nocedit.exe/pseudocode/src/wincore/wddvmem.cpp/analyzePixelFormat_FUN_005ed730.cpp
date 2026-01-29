// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
// Address: 005ed730
// Address Range: [[005ed730, 005ed8e4]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730(void)

{
  HRESULT HVar1;
  DDPIXELFORMAT_union2 DVar2;
  uint uVar3;
  DDPIXELFORMAT_union3 DVar4;
  DDPIXELFORMAT_union4 DVar5;
  DDSURFACEDESC local_70;
  
  memset(&local_70,0,0x6c);
  local_70.dwSize = 0x6c;
  HVar1 = (*g_SoftwareRenderSurface->vtable->Lock)
                    (g_SoftwareRenderSurface,(RECT *)0x0,&local_70,1,(void *)0x0);
  if (HVar1 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0x2ae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to lock back buffer!");
  }
  HVar1 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
  if (HVar1 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0x2b0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to unlock back buffer!");
  }
  g_RedBitPosition = 0;
  for (DVar2 = local_70.ddpfPixelFormat.field_16; (DVar2.dwRBitMask & 1) == 0;
      DVar2.dwRBitMask = DVar2.dwRBitMask >> 1) {
    g_RedBitPosition = g_RedBitPosition + 1;
  }
  g_RedScaleFactor =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.field_16.dwRBitMask >> ((byte)g_RedBitPosition & 0x1f)
                    ));
  g_RedBitCount = 0;
  uVar3 = g_RedScaleFactor;
  if (g_RedScaleFactor == 0) {
    g_RedBitCount = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_RedBitCount = g_RedBitCount + 1;
    }
  }
  g_GreenBitPosition = 0;
  for (DVar4 = local_70.ddpfPixelFormat.field_20; (DVar4.dwGBitMask & 1) == 0;
      DVar4.dwGBitMask = DVar4.dwGBitMask >> 1) {
    g_GreenBitPosition = g_GreenBitPosition + 1;
  }
  g_GreenScaleFactor =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.field_20.dwGBitMask >>
                    ((byte)g_GreenBitPosition & 0x1f)));
  g_GreenBitCount = 0;
  uVar3 = g_GreenScaleFactor;
  if (g_GreenScaleFactor == 0) {
    g_GreenBitCount = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_GreenBitCount = g_GreenBitCount + 1;
    }
  }
  g_BlueBitPosition = 0;
  for (DVar5 = local_70.ddpfPixelFormat.field_24; (DVar5.dwBBitMask & 1) == 0;
      DVar5.dwBBitMask = DVar5.dwBBitMask >> 1) {
    g_BlueBitPosition = g_BlueBitPosition + 1;
  }
  g_BlueScaleFactor =
       (int)(0xff / (ulonglong)
                    (local_70.ddpfPixelFormat.field_24.dwBBitMask >>
                    ((byte)g_BlueBitPosition & 0x1f)));
  g_BlueBitCount = 0;
  uVar3 = g_BlueScaleFactor;
  if (g_BlueScaleFactor == 0) {
    g_BlueBitCount = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
    return;
  }
  for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
    g_BlueBitCount = g_BlueBitCount + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  return;
}
