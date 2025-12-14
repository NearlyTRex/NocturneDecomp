// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
// Address: 005ed730
// Address Range: [[005ed730, 005ed8e4]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730(void)

{
  HRESULT HVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  DWORD DStack_6c;
  DDSURFACEDESC_union1 DStack_5c;
  
  crt_memory_c_memset_FUN_005fde40(&stack0xffffff90,0,0x6c);
  DStack_6c = 0x6c;
  HVar1 = (*g_SoftwareRenderSurface->vtable->Lock)
                    (g_SoftwareRenderSurface,(RECT *)0x0,(DDSURFACEDESC *)&DStack_6c,1,(void *)0x0);
  if (HVar1 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0x2ae;
    DStack_5c.lPitch = 0x5ed810;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to lock back buffer!");
  }
  DStack_5c.lPitch = 0x5ed77c;
  HVar1 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
  if (HVar1 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0x2b0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to unlock back buffer!");
  }
  g_RedBitPosition = 0;
  for (uVar2 = in_stack_00000018; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    g_RedBitPosition = g_RedBitPosition + 1;
  }
  g_RedScaleFactor = (int)(0xff / (ulonglong)(in_stack_00000018 >> ((byte)g_RedBitPosition & 0x1f)))
  ;
  g_RedBitCount = 0;
  uVar2 = g_RedScaleFactor;
  if (g_RedScaleFactor == 0) {
    g_RedBitCount = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      g_RedBitCount = g_RedBitCount + 1;
    }
  }
  g_GreenBitPosition = 0;
  for (uVar2 = in_stack_0000001c; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    g_GreenBitPosition = g_GreenBitPosition + 1;
  }
  g_GreenScaleFactor =
       (int)(0xff / (ulonglong)(in_stack_0000001c >> ((byte)g_GreenBitPosition & 0x1f)));
  g_GreenBitCount = 0;
  uVar2 = g_GreenScaleFactor;
  if (g_GreenScaleFactor == 0) {
    g_GreenBitCount = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      g_GreenBitCount = g_GreenBitCount + 1;
    }
  }
  g_BlueBitPosition = 0;
  for (uVar2 = in_stack_00000020; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    g_BlueBitPosition = g_BlueBitPosition + 1;
  }
  g_BlueScaleFactor =
       (int)(0xff / (ulonglong)(in_stack_00000020 >> ((byte)g_BlueBitPosition & 0x1f)));
  g_BlueBitCount = 0;
  uVar2 = g_BlueScaleFactor;
  if (g_BlueScaleFactor == 0) {
    g_BlueBitCount = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
    return;
  }
  for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
    g_BlueBitCount = g_BlueBitCount + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  return;
}
