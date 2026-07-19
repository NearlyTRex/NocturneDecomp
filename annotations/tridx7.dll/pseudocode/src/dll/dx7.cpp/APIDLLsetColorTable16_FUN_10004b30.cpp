// Name: dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30
// Address: 10004b30
// Address Range: [[10004b30, 10004b82] [10004b86, 10004ba1] [10004ba5, 10004d02]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(uchar *source_palette,ushort *color_table)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(uchar *source_palette,ushort *color_table)

{
  DDPIXELFORMAT_union2 DVar1;
  DDPIXELFORMAT_union3 DVar2;
  DDPIXELFORMAT_union4 DVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  DDSURFACEDESC2 *pDVar7;
  ushort *puVar8;
  DDSURFACEDESC2 local_7c;
  
                    /* 0x4b30  28  APIDLLsetColorTable16 */
  g_ColorPalette = source_palette;
  g_DX7ColorTable16 = color_table;
  pDVar7 = &local_7c;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    pDVar7->dwSize = 0;
    pDVar7 = (DDSURFACEDESC2 *)&pDVar7->dwFlags;
  }
  local_7c.dwSize = 0x7c;
  iVar4 = dll_dx7_cpp_lockSurface_FUN_10002e20(g_BackBufferSurface,&local_7c);
  if (iVar4 != 0) {
    iVar4 = dll_dx7_cpp_unlockSurface_FUN_10002cb0(g_BackBufferSurface);
    if (iVar4 != 0) {
      iVar4 = 0;
      for (DVar1 = local_7c.ddpfPixelFormat.dwRedYMask; (DVar1.dwRBitMask & 1) == 0;
          DVar1.dwRBitMask = DVar1.dwRBitMask >> 1) {
        iVar4 = iVar4 + 1;
      }
      *g_ExternalRendererBridge.red_bit_position = iVar4;
      *g_ExternalRendererBridge.red_scale_factor =
           (int)(0xff / (ulonglong)
                        (local_7c.ddpfPixelFormat.dwRedYMask.dwRBitMask >> ((byte)iVar4 & 0x1f)));
      iVar4 = dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.red_scale_factor);
      *g_ExternalRendererBridge.red_dither_shift = iVar4;
      iVar4 = 0;
      for (DVar2 = local_7c.ddpfPixelFormat.dwGreenUMask; (DVar2.dwGBitMask & 1) == 0;
          DVar2.dwGBitMask = DVar2.dwGBitMask >> 1) {
        iVar4 = iVar4 + 1;
      }
      *g_ExternalRendererBridge.green_bit_position = iVar4;
      *g_ExternalRendererBridge.green_scale_factor =
           (int)(0xff / (ulonglong)
                        (local_7c.ddpfPixelFormat.dwGreenUMask.dwGBitMask >> ((byte)iVar4 & 0x1f)));
      iVar4 = dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.green_scale_factor);
      *g_ExternalRendererBridge.green_dither_shift = iVar4;
      iVar4 = 0;
      for (DVar3 = local_7c.ddpfPixelFormat.dwBlueVMask; (DVar3.dwBBitMask & 1) == 0;
          DVar3.dwBBitMask = DVar3.dwBBitMask >> 1) {
        iVar4 = iVar4 + 1;
      }
      *g_ExternalRendererBridge.blue_bit_position = iVar4;
      *g_ExternalRendererBridge.blue_scale_factor =
           (int)(0xff / (ulonglong)
                        (local_7c.ddpfPixelFormat.dwBlueVMask.dwBBitMask >> ((byte)iVar4 & 0x1f)));
      iVar4 = dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.blue_scale_factor);
      puVar8 = g_DX7ColorTable16;
      pbVar5 = g_ColorPalette + 2;
      iVar6 = 0x100;
      *g_ExternalRendererBridge.blue_dither_shift = iVar4;
      do {
        iVar6 = iVar6 + -1;
        *puVar8 = (short)((uint)pbVar5[-2] / (uint)*g_ExternalRendererBridge.red_scale_factor) <<
                  ((byte)*g_ExternalRendererBridge.red_bit_position & 0x1f) |
                  (short)((uint)pbVar5[-1] / (uint)*g_ExternalRendererBridge.green_scale_factor) <<
                  ((byte)*g_ExternalRendererBridge.green_bit_position & 0x1f) |
                  (short)((uint)*pbVar5 / (uint)*g_ExternalRendererBridge.blue_scale_factor) <<
                  ((byte)*g_ExternalRendererBridge.blue_bit_position & 0x1f);
        pbVar5 = pbVar5 + 3;
        puVar8 = puVar8 + 1;
      } while (iVar6 != 0);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    dll_dx7_cpp_fatalError_FUN_10002340("Could not unlock back buffer");
  }
                    /* WARNING: Subroutine does not return */
  dll_dx7_cpp_fatalError_FUN_10002340("Could not lock back buffer");
}
