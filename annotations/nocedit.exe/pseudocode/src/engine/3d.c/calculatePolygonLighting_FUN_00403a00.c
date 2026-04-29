// Name: engine_3d.c_calculatePolygonLighting_FUN_00403a00
// Address: 00403a00
// Address Range: [[00403a00, 00403a1f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive *prim)

{
  g_CurrentLightingValue =
       engine_light_cpp_calculateLighting_FUN_00505780
                 ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i);
  return;
}
