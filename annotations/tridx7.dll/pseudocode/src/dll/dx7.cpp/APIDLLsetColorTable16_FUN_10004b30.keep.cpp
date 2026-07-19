// Name: dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30
// Address: 10004b30
// MANUAL RECONSTRUCTION
// Address Range: [[10004b30, 10004b82] [10004b86, 10004ba1] [10004ba5, 10004d02]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(uchar *source_palette,ushort *color_table)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(uchar *source_palette,ushort *color_table)

{
  int shift;
  int entry;
  uint mask;
  uchar *palette;
  ushort *dest;
  DDSURFACEDESC2 desc;

                    /* 0x4b30  28  APIDLLsetColorTable16 */
  g_ColorPalette = source_palette;
  g_DX7ColorTable16 = color_table;
  memset(&desc,0,sizeof(desc));
  desc.dwSize = sizeof(desc);
  if (dll_dx7_cpp_lockSurface_FUN_10002e20(g_BackBufferSurface,&desc) == 0) {
    dll_dx7_cpp_fatalError_FUN_10002340("Could not lock back buffer");
  }
  if (dll_dx7_cpp_unlockSurface_FUN_10002cb0(g_BackBufferSurface) == 0) {
    dll_dx7_cpp_fatalError_FUN_10002340("Could not unlock back buffer");
  }
  shift = 0;
  for (mask = desc.ddpfPixelFormat.dwRedYMask.dwRBitMask; (mask & 1) == 0; mask = mask >> 1) {
    shift = shift + 1;
  }
  *g_ExternalRendererBridge.red_bit_position = shift;
  *g_ExternalRendererBridge.red_scale_factor =
       0xff / (desc.ddpfPixelFormat.dwRedYMask.dwRBitMask >> ((byte)shift & 0x1f));
  *g_ExternalRendererBridge.red_dither_shift =
       dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.red_scale_factor);
  shift = 0;
  for (mask = desc.ddpfPixelFormat.dwGreenUMask.dwGBitMask; (mask & 1) == 0; mask = mask >> 1) {
    shift = shift + 1;
  }
  *g_ExternalRendererBridge.green_bit_position = shift;
  *g_ExternalRendererBridge.green_scale_factor =
       0xff / (desc.ddpfPixelFormat.dwGreenUMask.dwGBitMask >> ((byte)shift & 0x1f));
  *g_ExternalRendererBridge.green_dither_shift =
       dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.green_scale_factor);
  shift = 0;
  for (mask = desc.ddpfPixelFormat.dwBlueVMask.dwBBitMask; (mask & 1) == 0; mask = mask >> 1) {
    shift = shift + 1;
  }
  *g_ExternalRendererBridge.blue_bit_position = shift;
  *g_ExternalRendererBridge.blue_scale_factor =
       0xff / (desc.ddpfPixelFormat.dwBlueVMask.dwBBitMask >> ((byte)shift & 0x1f));
  *g_ExternalRendererBridge.blue_dither_shift =
       dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.blue_scale_factor);
  palette = g_ColorPalette;
  dest = g_DX7ColorTable16;
  for (entry = 0; entry < 0x100; entry = entry + 1) {
    *dest = (ushort)
            ((uint)palette[0] / (uint)*g_ExternalRendererBridge.red_scale_factor <<
             ((byte)*g_ExternalRendererBridge.red_bit_position & 0x1f) |
             (uint)palette[1] / (uint)*g_ExternalRendererBridge.green_scale_factor <<
             ((byte)*g_ExternalRendererBridge.green_bit_position & 0x1f) |
             (uint)palette[2] / (uint)*g_ExternalRendererBridge.blue_scale_factor <<
             ((byte)*g_ExternalRendererBridge.blue_bit_position & 0x1f));
    palette = palette + 3;
    dest = dest + 1;
  }
  return 1;
}
