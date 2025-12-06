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
  BADSPACEBASE *in_ESP;
  int iVar1;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffcc);
  if (extraout_EAX == 0) {
    iVar1 = 1;
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffd0);
    if (extraout_EAX_00 != 0) goto LAB_00476acf;
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffd4);
    if (extraout_EAX_01 != 0) {
      iVar1 = 1;
      goto LAB_00476acf;
    }
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffd8);
    if (extraout_EAX_02 == 0) {
      core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffdc);
      if (extraout_EAX_03 != 0) {
        iVar1 = 1;
        goto LAB_00476acf;
      }
      core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffe0);
      iVar1 = 0;
      if (extraout_EAX_04 == 0) goto LAB_00476acf;
    }
  }
  iVar1 = 1;
LAB_00476acf:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return iVar1;
}
