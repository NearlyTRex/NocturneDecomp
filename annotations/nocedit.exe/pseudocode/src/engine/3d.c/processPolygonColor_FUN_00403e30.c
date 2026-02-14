// Name: engine_3d.c_processPolygonColor_FUN_00403e30
// Address: 00403e30
// Address Range: [[00403e30, 00403eb9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  g_CurrentPolygonColor = (polygon_info->base).count;
  iVar1 = (polygon_info->base).count;
  if (((int)(iVar1 & -0x80000000) != 0) && ((iVar1 & 0x40000000) == 0)) {
    uVar4 = (polygon_info->base).count & 0xff;
    uVar2 = (polygon_info->base).count >> 8 & 0xff;
    uVar3 = (polygon_info->base).count >> 0x10 & 0xff;
    if (g_BitsPerPixel != 0x20) {
      g_CurrentPolygonColor = uVar4 << 0x10 | uVar2 << 8 | uVar3;
      return (SMRGLHeaderExtended *)&polygon_info->surface_normal;
    }
    g_CurrentPolygonColor =
         uVar3 << ((byte)g_BlueBitPosition & 0x1f) |
         uVar2 << ((byte)g_GreenBitPosition & 0x1f) | uVar4 << ((byte)g_RedBitPosition & 0x1f);
  }
  return (SMRGLHeaderExtended *)&polygon_info->surface_normal;
}
