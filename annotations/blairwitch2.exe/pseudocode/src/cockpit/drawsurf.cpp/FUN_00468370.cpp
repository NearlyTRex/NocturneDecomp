// Name: cockpit_drawsurf.cpp_FUN_00468370
// Address: 00468370
// Address Range: [[00468370, 004683db]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00468370(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_00468370(CDrawSurface *param_1,int param_2,int param_3,uint param_4)

{
  char acStack_1010 [4096];
  byte *puStack_10;
  
  puStack_10 = &stack0x00000014;
  _vsprintf(acStack_1010,param_4,&puStack_10);
  puStack_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00468310
            (param_1,acStack_1010,param_2,param_3);
  return;
}
