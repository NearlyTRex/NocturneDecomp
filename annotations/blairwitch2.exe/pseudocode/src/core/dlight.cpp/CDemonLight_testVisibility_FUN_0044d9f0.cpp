// Name: core_dlight.cpp_CDemonLight_testVisibility_FUN_0044d9f0
// Address: 0044d9f0
// Address Range: [[0044d9f0, 0044dba3]]
// Convention: __cdecl
// Signature: int __cdecl core_dlight_cpp_CDemonLight_testVisibility_FUN_0044d9f0(CDemonLight *this_ptr,CVector3i *corners)

#include "nocturne.h"

int __cdecl core_dlight_cpp_CDemonLight_testVisibility_FUN_0044d9f0(CDemonLight *this_ptr,CVector3i *corners)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive SStack_38;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  SStack_38.base.count = 4;
  SStack_38.surface_normal.D.i = 0;
  SStack_38.surface_normal.C.i = 0;
  SStack_38.surface_normal.B.i = 0;
  SStack_38.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  uStack_20 = 0;
  uStack_1c = 4;
  uStack_18 = 6;
  uStack_14 = 2;
  iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
  if (iVar1 == 0) {
    iVar1 = 1;
    uStack_1c = 3;
    uStack_20 = 1;
    uStack_18 = 7;
    uStack_14 = 5;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
    if (iVar2 != 0) goto LAB_0044da5f;
    uStack_18 = 5;
    uStack_20 = 0;
    uStack_1c = 1;
    uStack_14 = 4;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
    if (iVar1 != 0) {
      iVar1 = 1;
      goto LAB_0044da5f;
    }
    uStack_14 = 3;
    uStack_20 = 2;
    uStack_1c = 6;
    uStack_18 = 7;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
    if (iVar1 == 0) {
      uStack_20 = 0;
      uStack_1c = 2;
      uStack_18 = 3;
      uStack_14 = 1;
      iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
      if (iVar1 != 0) {
        iVar1 = 1;
        goto LAB_0044da5f;
      }
      uStack_20 = 4;
      uStack_1c = 5;
      uStack_18 = 7;
      uStack_14 = 6;
      iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
      iVar1 = 0;
      if (iVar2 == 0) goto LAB_0044da5f;
    }
  }
  iVar1 = 1;
LAB_0044da5f:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  return iVar1;
}
