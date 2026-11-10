// Name: cockpit_drawsurf.cpp_FUN_004674b0
// Address: 004674b0
// Address Range: [[004674b0, 0046750f]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_004674b0(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_004674b0(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint unaff_retaddr;
  
  uVar1 = _DAT_0060b270;
  _DAT_0060b270 = 1;
  _DAT_0060b274 = 0;
  cockpit_drawsurf_cpp_FUN_00467610(param_1,param_2,param_3,param_4,param_5);
  _DAT_0060b270 = uVar1;
  _DAT_0060b274 = unaff_retaddr;
  return;
}
