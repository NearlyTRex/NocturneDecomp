// Name: core_manpuz.cpp_FUN_00509c60
// Address: 00509c60
// Address Range: [[00509c60, 00509d12] [00509d3a, 00509d4c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509c60()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_00509c60(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_00509c60(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffe4,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)&stack0xffffffdc);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)(in_stack_00000004 + 0x5e4)
            );
  if (DAT_02f0cb1c == 1) {
    shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
  }
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
