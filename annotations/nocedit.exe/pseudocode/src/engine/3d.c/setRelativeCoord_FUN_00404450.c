// Name: engine_3d.c_setRelativeCoord_FUN_00404450
// Address: 00404450
// Address Range: [[00404450, 00404493]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_setRelativeCoord_FUN_00404450(SMRGLHeaderPrimitive * primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_setRelativeCoord_FUN_00404450(SMRGLHeaderPrimitive *primitive)

{
  longlong lVar1;
  
  lVar1 = (longlong)(primitive->base).count * (longlong)g_RelativeX;
  g_RelativeX = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_RelativeY;
  g_RelativeY = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_RelativeZ;
  g_RelativeZ = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return (SMRGLHeaderExtended *)&primitive->surface_normal;
}
