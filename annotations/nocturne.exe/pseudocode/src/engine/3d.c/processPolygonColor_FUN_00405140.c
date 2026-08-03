// Name: engine_3d.c_processPolygonColor_FUN_00405140
// Address: 00405140
// Address Range: [[00405140, 004051d7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00405140(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00405140(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  DAT_006b0260 = (prim->base).count;
  iVar1 = (prim->base).count;
  if (((int)(iVar1 & -0x80000000) != 0) && ((iVar1 & 0x40000000) == 0)) {
    DAT_006b0260 = -(uint)(byte)(&DAT_01bf7720)
                                [((int)((prim->base).count >> 0x10 & 0xffU) >> 3) +
                                 ((int)((prim->base).count & 0xffU) >> 3) * 0x400 +
                                 ((int)((prim->base).count >> 8 & 0xffU) >> 3) * 0x20];
    return (SMRGLHeaderExtended *)&prim->surface_normal;
  }
  return (SMRGLHeaderExtended *)&prim->surface_normal;
}
