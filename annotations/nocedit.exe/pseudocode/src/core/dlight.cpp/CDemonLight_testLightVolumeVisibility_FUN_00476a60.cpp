// Name: core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60
// Address: 00476a60
// Address Range: [[00476a60, 00476c13]]
// Convention: __cdecl
// Signature: int core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60(CDemonLight * this_ptr)

#include "nocturne.h"

int __cdecl
core_dlight_cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60(CDemonLight *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  int iVar1;
  SMRGLHeaderPrimitive SStack_38;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  SStack_38.base.count = 4;
  SStack_38.surface_normal.D = 0;
  SStack_38.surface_normal.C = 0;
  SStack_38.surface_normal.B = 0;
  SStack_38.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_20 = 0;
  local_1c = 4;
  local_18 = 6;
  local_14 = 2;
  core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
  if (extraout_EAX == 0) {
    iVar1 = 1;
    local_1c = 3;
    local_20 = 1;
    local_18 = 7;
    local_14 = 5;
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
    if (extraout_EAX_00 != 0) goto LAB_00476acf;
    local_18 = 5;
    local_20 = 0;
    local_1c = 1;
    local_14 = 4;
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
    if (extraout_EAX_01 != 0) {
      iVar1 = 1;
      goto LAB_00476acf;
    }
    local_14 = 3;
    local_20 = 2;
    local_1c = 6;
    local_18 = 7;
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
    if (extraout_EAX_02 == 0) {
      local_20 = 0;
      local_1c = 2;
      local_18 = 3;
      local_14 = 1;
      core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
      if (extraout_EAX_03 != 0) {
        iVar1 = 1;
        goto LAB_00476acf;
      }
      local_20 = 4;
      local_1c = 5;
      local_18 = 7;
      local_14 = 6;
      core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
      iVar1 = 0;
      if (extraout_EAX_04 == 0) goto LAB_00476acf;
    }
  }
  iVar1 = 1;
LAB_00476acf:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return iVar1;
}
