// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80
// Address: 0045df80
// Address Range: [[0045df80, 0045dff5]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5)

{
  char local_1014 [4096];
  byte *local_14;
  
  local_14 = &stack0x00000018;
  _vsprintf(local_1014,param_5,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
            (param_1,local_1014,param_2,param_3,param_4);
  return;
}
