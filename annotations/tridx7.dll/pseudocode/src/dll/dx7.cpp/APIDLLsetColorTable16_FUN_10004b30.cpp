// Name: dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30
// Address: 10004b30
// Address Range: [[10004b30, 10004b82] [10004b86, 10004ba1] [10004ba5, 10004d02]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(void *source_palette,void *color_table)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(void *source_palette,void *color_table)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  ushort *puVar6;
  uint local_7c [22];
  uint local_24;
  uint local_20;
  uint local_1c;
  
                    /* 0x4b30  28  APIDLLsetColorTable16 */
  g_ColorPalette = source_palette;
  DAT_10226868 = color_table;
  puVar5 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_7c[0] = 0x7c;
  iVar2 = dll_dx7_cpp_FUN_10002e20((int *)g_BackBufferSurface,local_7c);
  if (iVar2 != 0) {
    iVar2 = dll_dx7_cpp_unlockSurface_FUN_10002cb0(g_BackBufferSurface);
    if (iVar2 != 0) {
      iVar2 = 0;
      for (uVar1 = local_24; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        iVar2 = iVar2 + 1;
      }
      *g_ExternalRendererBridge.red_bit_position = iVar2;
      *g_ExternalRendererBridge.red_scale_factor =
           (int)(0xff / (ulonglong)(local_24 >> ((byte)iVar2 & 0x1f)));
      iVar2 = dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.red_scale_factor);
      *g_ExternalRendererBridge.red_dither_shift = iVar2;
      iVar2 = 0;
      for (uVar1 = local_20; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        iVar2 = iVar2 + 1;
      }
      *g_ExternalRendererBridge.green_bit_position = iVar2;
      *g_ExternalRendererBridge.green_scale_factor =
           (int)(0xff / (ulonglong)(local_20 >> ((byte)iVar2 & 0x1f)));
      iVar2 = dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.green_scale_factor);
      *g_ExternalRendererBridge.green_dither_shift = iVar2;
      iVar2 = 0;
      for (uVar1 = local_1c; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        iVar2 = iVar2 + 1;
      }
      *g_ExternalRendererBridge.blue_bit_position = iVar2;
      *g_ExternalRendererBridge.blue_scale_factor =
           (int)(0xff / (ulonglong)(local_1c >> ((byte)iVar2 & 0x1f)));
      iVar2 = dll_dx7_cpp_floorLog2_FUN_10004d10(*g_ExternalRendererBridge.blue_scale_factor);
      puVar6 = DAT_10226868;
      pbVar3 = g_ColorPalette + 2;
      iVar4 = 0x100;
      *g_ExternalRendererBridge.blue_dither_shift = iVar2;
      do {
        iVar4 = iVar4 + -1;
        *puVar6 = (short)((uint)pbVar3[-2] / (uint)*g_ExternalRendererBridge.red_scale_factor) <<
                  ((byte)*g_ExternalRendererBridge.red_bit_position & 0x1f) |
                  (short)((uint)pbVar3[-1] / (uint)*g_ExternalRendererBridge.green_scale_factor) <<
                  ((byte)*g_ExternalRendererBridge.green_bit_position & 0x1f) |
                  (short)((uint)*pbVar3 / (uint)*g_ExternalRendererBridge.blue_scale_factor) <<
                  ((byte)*g_ExternalRendererBridge.blue_bit_position & 0x1f);
        pbVar3 = pbVar3 + 3;
        puVar6 = puVar6 + 1;
      } while (iVar4 != 0);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    dll_dx7_cpp_fatalError_FUN_10002340("Could not unlock back buffer");
  }
                    /* WARNING: Subroutine does not return */
  dll_dx7_cpp_fatalError_FUN_10002340("Could not lock back buffer");
}
