// Name: cockpit_drawsurf.cpp_FUN_0045cb90
// Address: 0045cb90
// Address Range: [[0045cb90, 0045cc01]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045cb90(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045cb90(uint param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_4 / 2 + param_2;
  if ((param_4 & 1) == 0) {
    iVar1 = iVar1 + -1;
  }
  iVar2 = (int)param_5 / 2 + param_3;
  if ((param_5 & 1) == 0) {
    iVar2 = iVar2 + -1;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
            (param_1,param_2 - (int)param_4 / 2,param_3 - (int)param_5 / 2,iVar1,iVar2);
  return;
}
