// Name: engine_3d.c_calculatePolygonLighting_FUN_00403a20
// Address: 00403a20
// Address Range: [[00403a20, 00403a3f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive *prim)

{
  _DAT_01c35e64 =
       engine_light_cpp_calculateLighting_FUN_004e28b0
                 ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i);
  return;
}
