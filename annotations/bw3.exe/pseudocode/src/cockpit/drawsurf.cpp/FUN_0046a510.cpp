// Name: cockpit_drawsurf.cpp_FUN_0046a510
// Address: 0046a510
// Address Range: [[0046a510, 0046a571]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0046a510(CDrawSurface *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0046a510(CDrawSurface *param_1,int param_2,uint param_3)

{
  char acStack_100c [4096];
  byte *puStack_c;
  
  puStack_c = &stack0x00000010;
  _vsprintf(acStack_100c,param_3,&puStack_c);
  puStack_c = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0
            (param_1,acStack_100c,param_2);
  return;
}
