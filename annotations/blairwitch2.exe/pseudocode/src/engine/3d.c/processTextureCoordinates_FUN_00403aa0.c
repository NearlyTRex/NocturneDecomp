// Name: engine_3d.c_processTextureCoordinates_FUN_00403aa0
// Address: 00403aa0
// Address Range: [[00403aa0, 00403aeb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00403aa0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00403aa0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  UIntegerFloat *pUVar2;
  
  pUVar2 = &(prim->surface_normal).B;
  iVar1 = 0;
  if (0 < (prim->surface_normal).A.i) {
    do {
      g_SRenderVertex_ARRAY_00622014[(prim->base).count + iVar1].u = (int)*pUVar2;
      g_SRenderVertex_ARRAY_00622014[(prim->base).count + iVar1].v = (int)pUVar2[1];
      iVar1 = iVar1 + 1;
      pUVar2 = pUVar2 + 2;
    } while (iVar1 < (prim->surface_normal).A.i);
  }
  return (SMRGLHeaderExtended *)(&(prim->surface_normal).B + (prim->surface_normal).A.i * 2);
}
