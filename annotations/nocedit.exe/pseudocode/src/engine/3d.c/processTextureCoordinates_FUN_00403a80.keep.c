// Name: engine_3d.c_processTextureCoordinates_FUN_00403a80
// Address: 00403a80
// MANUAL RECONSTRUCTION
// Address Range: [[00403a80, 00403acb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  UIntegerFloat *pUVar2;
  
  pUVar2 = &(prim->surface_normal).B;
  iVar1 = 0;
  if (0 < (prim->surface_normal).A.i) {
    do {
      g_RenderVertexBuffer[(prim->base).count + iVar1].u = pUVar2->i;
      g_RenderVertexBuffer[(prim->base).count + iVar1].v = pUVar2[1].i;
      iVar1 = iVar1 + 1;
      pUVar2 = pUVar2 + 2;
    } while (iVar1 < (prim->surface_normal).A.i);
  }
  return (SMRGLHeaderExtended *)(&(prim->surface_normal).B + (prim->surface_normal).A.i * 2);
}
