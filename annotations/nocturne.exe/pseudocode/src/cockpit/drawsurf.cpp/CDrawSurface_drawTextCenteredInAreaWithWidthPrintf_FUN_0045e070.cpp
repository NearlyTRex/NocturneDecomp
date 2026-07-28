// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
// Address: 0045e070
// Address Range: [[0045e070, 0045e0ed]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6)

#include "nocturne.h"

void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6)

{
  char acStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  _vsprintf(acStack_1014,param_6,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
            (param_1,acStack_1014,param_2,param_3,param_4,param_5);
  return;
}
