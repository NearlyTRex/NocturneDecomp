// Name: engine_mini3d.cpp_fillSurfaceSpan_FUN_004f80c0
// Address: 004f80c0
// Address Range: [[004f80c0, 004f8101]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillSurfaceSpan_FUN_004f80c0(int row,int x0,int x1)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_fillSurfaceSpan_FUN_004f80c0(int row,int x0,int x1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = x0;
  if (x1 < x0) {
    iVar1 = x1;
    x1 = x0;
  }
  iVar1 = iVar1 >> 0x10;
  puVar2 = (uint *)(*(int *)(&DAT_01c2a38c + row * 4) + iVar1 * 4);
  for (; iVar1 < x1 >> 0x10; iVar1 = iVar1 + 1) {
    *puVar2 = 0x80000000;
    puVar2 = puVar2 + 1;
  }
  return;
}
