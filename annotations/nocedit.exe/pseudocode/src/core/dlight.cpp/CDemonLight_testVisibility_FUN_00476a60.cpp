// Name: core_dlight.cpp_CDemonLight_testVisibility_FUN_00476a60
// Address: 00476a60
// Address Range: [[00476a60, 00476c13]]
// Convention: __cdecl
// Signature: int __cdecl core_dlight_cpp_CDemonLight_testVisibility_FUN_00476a60(CDemonLight *this_ptr,CVector3i *corners)

#include "nocturne.h"

int __cdecl core_dlight_cpp_CDemonLight_testVisibility_FUN_00476a60(CDemonLight *this_ptr,CVector3i *corners)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive SStack_38;
  
  SStack_38.base.count = 4;
  SStack_38.surface_normal.D = 0;
  SStack_38.surface_normal.C = 0;
  SStack_38.surface_normal.B = 0;
  SStack_38.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
  if (iVar1 == 0) {
    iVar4 = 1;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
    if (iVar2 != 0) goto LAB_00476acf;
    iVar4 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
    if (iVar4 != 0) {
      iVar4 = 1;
      goto LAB_00476acf;
    }
    iVar4 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
    if (iVar4 == 0) {
      iVar4 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
      if (iVar4 != 0) {
        iVar4 = 1;
        goto LAB_00476acf;
      }
      iVar3 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&SStack_38);
      iVar4 = 0;
      if (iVar3 == 0) goto LAB_00476acf;
    }
  }
  iVar4 = 1;
LAB_00476acf:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return iVar4;
}
