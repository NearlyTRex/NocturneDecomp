// Name: engine_mini3d.cpp_setRenderSurface_FUN_004f0340
// Address: 004f0340
// Address Range: [[004f0340, 004f03cd]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderSurface_FUN_004f0340(int width,int height,void *pixels,int mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setRenderSurface_FUN_004f0340(int width,int height,void *pixels,int mode)

{
  int iVar1;
  int iVar2;
  
  _DAT_01d7a694 = (mode != 0) + 1;
  engine_mini3d_cpp_setRenderViewport_FUN_004ed020(0.0,0.0,(float)(width + -1),(float)(height + -1))
  ;
  _DAT_01d7f580 = height;
  if (0 < height) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)(iVar2 + 0x1d7f584) = *(uint *)(&DAT_01c5faec + iVar2);
      *(void **)(&DAT_01c5faec + iVar2) = pixels;
      pixels = (void *)((int)pixels + width * 4);
      iVar2 = iVar1;
    } while (iVar1 < height * 4);
  }
  return;
}
