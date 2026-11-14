// Name: engine_mini3d.cpp_setRenderSurface_FUN_00514b70
// Address: 00514b70
// Address Range: [[00514b70, 00514bfd]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderSurface_FUN_00514b70(int width,int height,void *pixels,int mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setRenderSurface_FUN_00514b70(int width,int height,void *pixels,int mode)

{
  int iVar1;
  int iVar2;
  
  _DAT_01d25f14 = (mode != 0) + 1;
  engine_mini3d_cpp_setRenderViewport_FUN_00511850(0.0,0.0,(float)(width + -1),(float)(height + -1))
  ;
  _DAT_01d2ae00 = height;
  if (0 < height) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)(iVar2 + 0x1d2ae04) = *(uint *)(&DAT_01c4354c + iVar2);
      *(void **)(&DAT_01c4354c + iVar2) = pixels;
      pixels = (void *)((int)pixels + width * 4);
      iVar2 = iVar1;
    } while (iVar1 < height * 4);
  }
  return;
}
