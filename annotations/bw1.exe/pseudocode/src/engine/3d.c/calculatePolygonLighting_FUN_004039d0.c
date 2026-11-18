// Name: engine_3d.c_calculatePolygonLighting_FUN_004039d0
// Address: 004039d0
// Address Range: [[004039d0, 004039ef]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive *prim)

{
  g_CurrentLightingValue =
       engine_light_cpp_calculateLighting_FUN_004ffd40
                 ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i);
  return;
}
