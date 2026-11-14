// Name: cockpit_drawsurf.cpp_FUN_00469080
// Address: 00469080
// Address Range: [[00469080, 004690df]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00469080(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_00469080(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint unaff_retaddr;
  
  uVar1 = _DAT_005f2aec;
  _DAT_005f2aec = 1;
  _DAT_005f2af0 = 0;
  cockpit_drawsurf_cpp_FUN_004691e0(param_1,param_2,param_3,param_4,param_5);
  _DAT_005f2aec = uVar1;
  _DAT_005f2af0 = unaff_retaddr;
  return;
}
