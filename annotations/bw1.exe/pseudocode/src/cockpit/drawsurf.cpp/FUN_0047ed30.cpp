// Name: cockpit_drawsurf.cpp_FUN_0047ed30
// Address: 0047ed30
// Address Range: [[0047ed30, 0047edc3]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0047ed30(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0047ed30(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  iVar1 = cockpit_drawsurf_cpp_FUN_0047f1b0
                    (param_1,(int *)&stack0x00000008,(int *)&stack0x0000000c,(int *)&stack0x00000010
                     ,&param_5,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),
                     *(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return;
  }
  param_4 = in_stack_00000038;
  param_3 = in_stack_00000034;
  param_2 = in_stack_00000030;
  cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0047ee70
            (param_1,in_stack_0000002c,in_stack_00000030,in_stack_00000034,in_stack_00000038);
  return;
}
