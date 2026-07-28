// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00
// Address: 0045dd00
// Address Range: [[0045dd00, 0045dd6b]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00(CDrawSurface *param_1,int param_2,int param_3,char *param_4)

#include "nocturne.h"

void cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00(CDrawSurface *param_1,int param_2,int param_3,char *param_4)

{
  char local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,param_4,(va_list_t)&local_10);
  local_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0
            (param_1,local_1010,param_2,param_3);
  return;
}
