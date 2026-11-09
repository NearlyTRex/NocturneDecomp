// Name: cockpit_drawsurf.cpp_FUN_004682a0
// Address: 004682a0
// Address Range: [[004682a0, 0046830b]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_004682a0(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_004682a0(CDrawSurface *param_1,int param_2,int param_3,uint param_4)

{
  char acStack_1010 [4096];
  byte *puStack_10;
  
  puStack_10 = &stack0x00000014;
  _vsprintf(acStack_1010,param_4,&puStack_10);
  puStack_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00468240
            (param_1,acStack_1010,param_2,param_3);
  return;
}
