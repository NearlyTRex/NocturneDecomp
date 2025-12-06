// Name: engine_3d.c_processTextureCoordinates_FUN_00403a80
// Address: 00403a80
// Address Range: [[00403a80, 00403acb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &(polygon_info->surface_normal).B;
  iVar1 = 0;
  if (0 < (polygon_info->surface_normal).A) {
    do {
      g_RenderVertexBuffer[(polygon_info->base).count + iVar1].u = (float)*piVar2;
      g_RenderVertexBuffer[(polygon_info->base).count + iVar1].v = (float)piVar2[1];
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < (polygon_info->surface_normal).A);
  }
  return (SMRGLHeaderExtended *)
         (&(polygon_info->surface_normal).B + (polygon_info->surface_normal).A * 2);
}
