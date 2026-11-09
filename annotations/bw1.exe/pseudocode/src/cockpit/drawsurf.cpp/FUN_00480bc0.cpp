// Name: cockpit_drawsurf.cpp_FUN_00480bc0
// Address: 00480bc0
// Address Range: [[00480bc0, 00480c35]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00480bc0(CDrawSurface *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_00480bc0(CDrawSurface *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  char acStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x00000018;
  _vsprintf(acStack_1014,param_5,&puStack_14);
  puStack_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60
            (param_1,acStack_1014,param_2,param_3,param_4);
  return;
}
