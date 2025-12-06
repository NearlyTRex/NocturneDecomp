// Name: engine_3d.c_calculatePolygonLighting_FUN_00403a00
// Address: 00403a00
// Address Range: [[00403a00, 00403a1f]]
// Convention: __cdecl
// Signature: void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive *polygon_info)

{
  g_CurrentLightingValue =
       engine_light_cpp_calculateLighting_FUN_00505780
                 ((polygon_info->surface_normal).A,(polygon_info->surface_normal).B,
                  (polygon_info->surface_normal).C);
  return;
}
