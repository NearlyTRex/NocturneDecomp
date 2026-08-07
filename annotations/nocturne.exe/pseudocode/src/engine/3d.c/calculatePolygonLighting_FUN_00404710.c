// Name: engine_3d.c_calculatePolygonLighting_FUN_00404710
// Address: 00404710
// Address Range: [[00404710, 0040472f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive *prim)

{
  g_CurrentLightingValue =
       engine_light_cpp_calculateLighting_FUN_004c6cc0
                 ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i);
  return;
}
