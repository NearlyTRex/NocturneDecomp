// Name: cockpit_drawsurf.cpp_FUN_0045e1f0
// Address: 0045e1f0
// Address Range: [[0045e1f0, 0045e251]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045e1f0(CDrawSurface *param_1,int param_2,char *param_3)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045e1f0(CDrawSurface *param_1,int param_2,char *param_3)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,param_3,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0
            (param_1,local_100c,param_2);
  return;
}
