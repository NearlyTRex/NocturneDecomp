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
  SMRGLPrimitiveQuadIndex SStack_38;
  
  SStack_38.base.base.count = 4;
  SStack_38.base.surface_normal.D.i = 0;
  SStack_38.base.surface_normal.C.i = 0;
  SStack_38.base.surface_normal.B.i = 0;
  SStack_38.base.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  SStack_38.vertices[0] = 0;
  SStack_38.vertices[1] = 4;
  SStack_38.vertices[2] = 6;
  SStack_38.vertices[3] = 2;
  iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&SStack_38.base);
  if (iVar1 == 0) {
    iVar4 = 1;
    SStack_38.vertices[1] = 3;
    SStack_38.vertices[0] = 1;
    SStack_38.vertices[2] = 7;
    SStack_38.vertices[3] = 5;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
                      (g_CDemonSetPtr,&SStack_38.base);
    if (iVar2 != 0) goto LAB_00476acf;
    SStack_38.vertices[2] = 5;
    SStack_38.vertices[0] = 0;
    SStack_38.vertices[1] = 1;
    SStack_38.vertices[3] = 4;
    iVar4 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
                      (g_CDemonSetPtr,&SStack_38.base);
    if (iVar4 != 0) {
      iVar4 = 1;
      goto LAB_00476acf;
    }
    SStack_38.vertices[3] = 3;
    SStack_38.vertices[0] = 2;
    SStack_38.vertices[1] = 6;
    SStack_38.vertices[2] = 7;
    iVar4 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
                      (g_CDemonSetPtr,&SStack_38.base);
    if (iVar4 == 0) {
      SStack_38.vertices[0] = 0;
      SStack_38.vertices[1] = 2;
      SStack_38.vertices[2] = 3;
      SStack_38.vertices[3] = 1;
      iVar4 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
                        (g_CDemonSetPtr,&SStack_38.base);
      if (iVar4 != 0) {
        iVar4 = 1;
        goto LAB_00476acf;
      }
      SStack_38.vertices[0] = 4;
      SStack_38.vertices[1] = 5;
      SStack_38.vertices[2] = 7;
      SStack_38.vertices[3] = 6;
      iVar3 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
                        (g_CDemonSetPtr,&SStack_38.base);
      iVar4 = 0;
      if (iVar3 == 0) goto LAB_00476acf;
    }
  }
  iVar4 = 1;
LAB_00476acf:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return iVar4;
}
