// Name: engine_3d.c_setRelativeCoord_FUN_00404320
// Address: 00404320
// Address Range: [[00404320, 00404363]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404320(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404320(SMRGLHeaderPrimitive *primitive)

{
  longlong lVar1;
  
  lVar1 = (longlong)(primitive->base).count * (longlong)g_INT_01c6e2cc;
  g_INT_01c6e2cc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_INT_01c6e2d0;
  g_INT_01c6e2d0 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_INT_01c6e2d4;
  g_INT_01c6e2d4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return (SMRGLHeaderExtended *)&primitive->surface_normal;
}
