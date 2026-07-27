// Name: cockpit_drawsurf.cpp_FUN_0045bfb0
// Address: 0045bfb0
// Address Range: [[0045bfb0, 0045c043]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045bfb0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045bfb0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  iVar1 = cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440
                    (param_1,&param_2,&param_3,&param_4,&param_5,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18),
                     *(uint *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0
            (param_1,param_2,param_3,param_4,param_5);
  return;
}
