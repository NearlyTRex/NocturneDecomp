// Name: cockpit_drawsurf.cpp_FUN_0045c050
// Address: 0045c050
// Address Range: [[0045c050, 0045c0e3]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045c050(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045c050(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  
  param_2 = param_2 + param_1->x;
  param_3 = param_3 + param_1->y;
  param_4 = param_4 + param_1->x;
  param_5 = param_5 + param_1->y;
  iVar1 = cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440
                    (param_1,(int *)&stack0x00000008,(int *)&stack0x0000000c,(int *)&stack0x00000010
                     ,&param_5,param_1->clip_left,param_1->clip_top,param_1->clip_right,
                     param_1->clip_bottom);
  if (iVar1 == 0) {
    return;
  }
  param_4 = in_stack_00000038;
  param_3 = in_stack_00000034;
  param_2 = in_stack_00000030;
  cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
            (param_1,in_stack_0000002c,in_stack_00000030,in_stack_00000034,in_stack_00000038);
  return;
}
