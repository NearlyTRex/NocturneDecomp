// Name: cockpit_drawsurf.cpp_FUN_0047f9c0
// Address: 0047f9c0
// Address Range: [[0047f9c0, 0047fa1f]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0047f9c0(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_0047f9c0(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint unaff_retaddr;
  
  uVar1 = _DAT_00612550;
  _DAT_00612550 = 1;
  _DAT_00612554 = 0;
  cockpit_drawsurf_cpp_FUN_0047fb20(param_1,param_2,param_3,param_4,param_5);
  _DAT_00612550 = uVar1;
  _DAT_00612554 = unaff_retaddr;
  return;
}
