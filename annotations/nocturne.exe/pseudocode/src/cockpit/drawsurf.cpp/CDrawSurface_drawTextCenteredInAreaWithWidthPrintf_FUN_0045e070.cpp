// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
// Address: 0045e070
// Address Range: [[0045e070, 0045e0ed]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte auStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  _vsprintf(auStack_1014,param_6,&puStack_14);
  puStack_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
            (param_1,auStack_1014,param_2,param_3,param_4,param_5);
  return;
}
