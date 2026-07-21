// Name: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0
// Address: 0045c0f0
// Address Range: [[0045c0f0, 0045c1de]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_20 = 1;
  param_2 = param_2 - *(int *)(param_1 + 8);
  param_3 = param_3 - *(int *)(param_1 + 0xc);
  param_5 = param_5 - *(int *)(param_1 + 0xc);
  param_4 = param_4 - *(int *)(param_1 + 8);
  iVar1 = param_3;
  iVar2 = param_4;
  if (param_5 < param_3) {
    iVar1 = param_5;
    iVar2 = param_2;
    param_5 = param_3;
    param_2 = param_4;
  }
  param_5 = param_5 - iVar1;
  iVar2 = iVar2 - param_2;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iStack_20 = -1;
  }
  if (param_5 < iVar2) {
    iStack_1c = 0;
    iVar3 = param_5 * 2 - iVar2;
    if (-1 < iVar2) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(param_1,param_2,iVar1);
        if (0 < iVar3) {
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 - iVar2;
        }
        iStack_1c = iStack_1c + 1;
        param_2 = param_2 + iStack_20;
        iVar3 = iVar3 + param_5;
      } while (iStack_1c <= iVar2);
    }
  }
  else {
    iStack_18 = 0;
    iVar3 = iVar2 * 2 - param_5;
    if (-1 < param_5) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(param_1,param_2,iVar1);
        if (0 < iVar3) {
          iVar3 = iVar3 - param_5;
          param_2 = param_2 + iStack_20;
        }
        iVar1 = iVar1 + 1;
        iStack_18 = iStack_18 + 1;
        iVar3 = iVar3 + iVar2;
      } while (iStack_18 <= param_5);
    }
  }
  return;
}
