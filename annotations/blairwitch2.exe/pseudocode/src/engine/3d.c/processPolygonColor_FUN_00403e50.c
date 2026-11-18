// Name: engine_3d.c_processPolygonColor_FUN_00403e50
// Address: 00403e50
// Address Range: [[00403e50, 00403ed9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00403e50(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00403e50(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  g_CurrentPolygonColor = (prim->base).count;
  iVar1 = (prim->base).count;
  if (((int)(iVar1 & -0x80000000) != 0) && ((iVar1 & 0x40000000) == 0)) {
    uVar4 = (prim->base).count & 0xff;
    uVar2 = (prim->base).count >> 8 & 0xff;
    uVar3 = (prim->base).count >> 0x10 & 0xff;
    if (g_INT_006141c0 != 0x20) {
      g_CurrentPolygonColor = uVar4 << 0x10 | uVar2 << 8 | uVar3;
      return (SMRGLHeaderExtended *)&prim->surface_normal;
    }
    g_CurrentPolygonColor =
         uVar3 << (g_BlueBitPosition.bytes[0] & 0x1f) |
         uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f) | uVar4 << (g_RedBitPosition.bytes[0] & 0x1f)
    ;
  }
  return (SMRGLHeaderExtended *)&prim->surface_normal;
}
