// Name: engine_3d.c_processTextureCoordinates_FUN_00404790
// Address: 00404790
// Address Range: [[00404790, 004047db]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00404790(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00404790(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  UIntegerFloat *pUVar2;
  
  pUVar2 = &(prim->surface_normal).B;
  iVar1 = 0;
  if (0 < (prim->surface_normal).A.i) {
    do {
      *(UIntegerFloat *)(&DAT_005c502c + ((prim->base).count + iVar1) * 0xc) = *pUVar2;
      *(UIntegerFloat *)(&DAT_005c5030 + ((prim->base).count + iVar1) * 0x30) = pUVar2[1];
      iVar1 = iVar1 + 1;
      pUVar2 = pUVar2 + 2;
    } while (iVar1 < (prim->surface_normal).A.i);
  }
  return (SMRGLHeaderExtended *)(&(prim->surface_normal).B + (prim->surface_normal).A.i * 2);
}
