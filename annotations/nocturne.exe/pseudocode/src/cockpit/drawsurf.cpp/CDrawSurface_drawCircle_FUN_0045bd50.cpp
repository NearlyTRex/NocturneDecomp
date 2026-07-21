// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
// Address: 0045bd50
// Address Range: [[0045bd50, 0045be38]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_4) {
    param_2 = param_2 + *(int *)(param_1 + 8);
    param_3 = param_3 + *(int *)(param_1 + 0xc);
    if (((*(int *)(param_1 + 0x10) <= param_2 + param_4) ||
        (*(int *)(param_1 + 0x14) <= param_3 + param_4)) &&
       ((param_2 - param_4 <= *(int *)(param_1 + 0x18) ||
        (param_3 - param_4 <= *(int *)(param_1 + 0x1c))))) {
      param_2 = param_2 - *(int *)(param_1 + 8);
      param_3 = param_3 - *(int *)(param_1 + 0xc);
      iVar3 = 0;
      iVar4 = 1 - param_4;
      cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
                (param_1,param_2,param_3,0,param_4);
      if (0 < param_4) {
        iVar2 = 1;
        do {
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 2;
          iVar1 = iVar2;
          if (-1 < iVar4) {
            param_4 = param_4 + -1;
            iVar1 = (iVar3 - param_4) * 2 + 1;
          }
          iVar4 = iVar4 + iVar1;
          cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
                    (param_1,param_2,param_3,iVar3,param_4);
        } while (iVar3 < param_4);
      }
    }
  }
  return;
}
