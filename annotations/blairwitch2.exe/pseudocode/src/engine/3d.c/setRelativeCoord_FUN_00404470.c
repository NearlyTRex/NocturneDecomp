// Name: engine_3d.c_setRelativeCoord_FUN_00404470
// Address: 00404470
// Address Range: [[00404470, 004044b3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404470(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404470(SMRGLHeaderPrimitive *primitive)

{
  longlong lVar1;
  
  lVar1 = (longlong)(primitive->base).count * (longlong)g_INT_01c38b6c;
  g_INT_01c38b6c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_INT_01c38b70;
  g_INT_01c38b70 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_INT_01c38b74;
  g_INT_01c38b74 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return (SMRGLHeaderExtended *)&primitive->surface_normal;
}
