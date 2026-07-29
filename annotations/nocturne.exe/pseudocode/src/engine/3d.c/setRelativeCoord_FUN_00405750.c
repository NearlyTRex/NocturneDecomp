// Name: engine_3d.c_setRelativeCoord_FUN_00405750
// Address: 00405750
// Address Range: [[00405750, 00405793]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00405750(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00405750(SMRGLHeaderPrimitive *primitive)

{
  longlong lVar1;
  
  lVar1 = (longlong)(primitive->base).count * (longlong)(int)_DAT_01c039b8;
  _DAT_01c039b8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)(int)_DAT_01c039bc;
  _DAT_01c039bc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)(int)_DAT_01c039c0;
  _DAT_01c039c0 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return (SMRGLHeaderExtended *)&primitive->surface_normal;
}
